# Copyright (C) 2011 Giovanni [dacav] Simoni
#                    <dacav@roundhousecode.com>
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either
# version 3 of the License, or (at your option) any later
# version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
#

AC_PREREQ([2.67])
AC_INIT([not sucking plotting system], [0.0.1], [simgidacav@gmail.com])

AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([-Wall])
AC_CONFIG_SRCDIR([src/euclid/canvas.cpp])
AC_CONFIG_HEADERS([src/config.h])

LT_INIT

# Checks for programs.
AC_PROG_CXX

# Checks for libraries.
AX_BOOST_BASE([1.40])
AX_BOOST_THREAD([1.40])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL

# Checks for library functions.

AC_CONFIG_FILES([Makefile
                 src/Makefile])
AC_OUTPUT


