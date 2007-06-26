# This file is part of Mail Notification.
#
# Copyright (C) 2004 Jean-Yves Lefort.
#
# As a special exception to the Mail Notification licensing terms,
# Jean-Yves Lefort gives unlimited permission to copy, distribute and
# modify this file.

dnl AM_PATH_OPENSSL([MINIMUM-VERSION], [ACTION-IF-FOUND], [ACTION-IF-NOT-FOUND])
dnl
AC_DEFUN([AM_PATH_OPENSSL],
[OPENSSL_CFLAGS=""
OPENSSL_LIBS="-lssl -lcrypto"

ac_save_CFLAGS="$CFLAGS"
ac_save_LIBS="$LIBS"
CFLAGS="$CFLAGS $OPENSSL_CFLAGS"
LIBS="$LIBS $OPENSSL_LIBS"

# the OPENSSL_VERSION_NUMBER format we use appeared in 0.9.5b
openssl_min_version=ifelse([$1],, 0.9.5b, [$1])

AC_MSG_CHECKING([for OpenSSL - version >= $openssl_min_version])
AC_RUN_IFELSE([
#include <openssl/opensslv.h>

int main() {
  int n;
  char cpatch = 0;
  int major, minor, fix, patch = 0;
  int openssl_major, openssl_minor, openssl_fix, openssl_patch;

  n = sscanf("$openssl_min_version", "%d.%d.%d%c", &major, &minor, &fix, &cpatch);
  if (n < 3)
    exit(1); /* bad version string */
  if (cpatch)
    patch = cpatch - 96; /* letter -> number */

  if (OPENSSL_VERSION_NUMBER <
      (major << 28) + (minor << 20) + (fix << 12) + (patch << 4))
    exit(2); /* version too old */

  exit(0);
}
], [found=yes], [found=no], [found=yes])
AC_MSG_RESULT($found)

CFLAGS="$ac_save_CFLAGS"
LIBS="$ac_save_LIBS"

if test $found = yes; then
	ifelse([$2],, :, [$2])
else
	OPENSSL_CFLAGS=""
	OPENSSL_LIBS=""
	ifelse([$3],, :, [$3])
fi

AC_SUBST(OPENSSL_CFLAGS)
AC_SUBST(OPENSSL_LIBS)])

# can only be called after AM_PATH_OPENSSL succeeded
dnl AC_OPENSSL_MT([ACTION-IF-YES], [ACTION-IF-NO])
dnl
AC_DEFUN([AC_OPENSSL_MT],
[ac_save_CFLAGS="$CFLAGS"
ac_save_LIBS="$LIBS"
CFLAGS="$CFLAGS $OPENSSL_CFLAGS"
LIBS="$LIBS $OPENSSL_LIBS"

AC_MSG_CHECKING([whether OpenSSL supports multi-threading])
AC_RUN_IFELSE([
#define OPENSSL_THREAD_DEFINES
#include <openssl/opensslconf.h>

int main() {
#ifdef OPENSSL_THREADS
  exit(0);	/* ok */
#else
  exit(1);	/* no thread support */
#endif
}
], [openssl_mt=yes], [openssl_mt=no], [openssl_mt=yes])
AC_MSG_RESULT($openssl_mt)

CFLAGS="$ac_save_CFLAGS"
LIBS="$ac_save_LIBS"

if test $openssl_mt = yes; then
	ifelse([$1],, :, [$1])
else
	ifelse([$2],, :, [$2])
fi

AC_SUBST(OPENSSL_CFLAGS)
AC_SUBST(OPENSSL_LIBS)])
