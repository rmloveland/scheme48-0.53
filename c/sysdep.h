/* c/sysdep.h.  Generated from sysdep.h.in by configure.  */
/* c/sysdep.h.in.  Generated automatically from configure.in by autoheader.  */

/* Define to empty if the keyword does not work.  */
/* #undef const */

/* Define if you need to in order for stat and other things to work.  */
/* #undef _POSIX_SOURCE */

/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE void

/*
 * HAVE_SIGACTION is defined iff sigaction() is available.
 */
#define HAVE_SIGACTION 1

/*
 * HAVE_STRERROR is defined iff the standard libraries provide strerror().
 */
#define HAVE_STRERROR 1

/*
 * NLIST_HAS_N_NAME is defined iff a struct nlist has an n_name member.
 * If it doesn't then we assume it has an n_un member which, in turn,
 * has an n_name member.
 */
#define NLIST_HAS_N_NAME 1

/*
 * USCORE is defined iff C externals are prepended with an underscore.
 */
/* #undef USCORE */

/* Define if you have the chroot function.  */
#define HAVE_CHROOT 1

/* Define if you have the dlopen function.  */
#define HAVE_DLOPEN 1

/* Define if you have the ftime function.  */
#define HAVE_FTIME 1

/* Define if you have the gettimeofday function.  */
#define HAVE_GETTIMEOFDAY 1

/* Define if you have the nlist function.  */
#define HAVE_NLIST 1

/* Define if you have the select function.  */
#define HAVE_SELECT 1

/* Define if you have the setitimer function.  */
#define HAVE_SETITIMER 1

/* Define if you have the sigaction function.  */
#define HAVE_SIGACTION 1

/* Define if you have the socket function.  */
#define HAVE_SOCKET 1

/* Define if you have the <libgen.h> header file.  */
#define HAVE_LIBGEN_H 1

/* Define if you have the <posix/time.h> header file.  */
/* #undef HAVE_POSIX_TIME_H */

/* Define if you have the <sys/select.h> header file.  */
#define HAVE_SYS_SELECT_H 1

/* Define if you have the <sys/timeb.h> header file.  */
#define HAVE_SYS_TIMEB_H 1

/* Define if you have the dl library (-ldl).  */
#define HAVE_LIBDL 1

/* Define if you have the elf library (-lelf).  */
#define HAVE_LIBELF 1

/* Define if you have the gen library (-lgen).  */
/* #undef HAVE_LIBGEN */

/* Define if you have the m library (-lm).  */
#define HAVE_LIBM 1

/* Define if you have the mld library (-lmld).  */
/* #undef HAVE_LIBMLD */

/* Define if you have the nsl library (-lnsl).  */
#define HAVE_LIBNSL 1

/* Define if you have the socket library (-lsocket).  */
/* #undef HAVE_LIBSOCKET */

/* Define if you have the sun library (-lsun).  */
/* #undef HAVE_LIBSUN */

#include "fake/sigact.h"
#include "fake/strerror.h"
#include "fake/sys-select.h"
