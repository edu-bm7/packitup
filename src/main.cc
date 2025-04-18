/*
 * PackItUP! Never run out of beer again.
 * Copyright (C) 2025  edu-bm7
 *
 * This file is part of PackItUP!.
 *
 * PackItUP! is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * PackItUP! is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with PackItUP!. If not, see <https://www.gnu.org/licenses/>.
 * */

#include "packitup.h"
#include <glibmm/i18n.h>

int
main (int argc, char *argv[])
{
  // Localized text
  setlocale (LC_ALL, "");
  bindtextdomain (GETTEXT_PACKAGE, LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);

  auto application = Packitup::create ();

  return application->run (argc, argv);
}
// vim: sts=2 sw=2 et
