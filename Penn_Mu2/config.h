/* config.h.  Generated from config.h.in by configure.  */
/* PennMUSH config.h. Autogenerated by ./configure */

#ifndef __CONFIG_H
#define __CONFIG_H

/* Headers */

#define HAVE_ARPA_INET_H 1

#define HAVE_LIBINTL_H 1

#define HAVE_NETDB_H 1

#define HAVE_NETINET_IN_H 1

#define HAVE_NETINET_TCP_H 1

#define HAVE_SYS_SOCKET_H 1

#define HAVE_SYS_STAT_H 1

#define HAVE_SYS_TIME_H 1

#define TIME_WITH_SYS_TIME 1

#define HAVE_SYS_TYPES_H 1

#define HAVE_UNISTD_H 1

#define HAVE_SYS_WAIT_H 1

#define HAVE_SYS_UN_H 1

#define HAVE_SYS_RESOURCE_H 1

/* #undef HAVE_SYS_EVENT_H */

#define HAVE_SYS_UIO_H 1

#define HAVE_POLL_H 1

#define HAVE_SYS_SELECT_H 1

#define HAVE_SYS_INOTIFY_H 1

#define HAVE_ZLIB_H 1

#define HAVE_BYTESWAP_H 1

#define HAVE_LIBZ 1

/* C99ish headers. The first two are really really nice to have. */

#define HAVE_STDINT_H 1

#define HAVE_INTTYPES_H 1

#define HAVE_STDBOOL_H 1

#define HAVE_FENV_H 1

#define HAVE_SYS_PARAM_H 1

/* #undef HAVE_SYS_UCRED_H */

/* Libraries */

/* #undef HAVE_MYSQL */

/* #undef HAVE_POSTGRESQL */

#define HAVE_SQLITE3 /**/

#define HAVE_SSL 1

#define HAVE_PCRE_H 1

#define HAVE_PCRE 1

#define HAVE_EVENT2_EVENT_H 1

#define HAVE_EVENT2_DNS_H 1

#if defined(HAVE_EVENT2_EVENT_H) && defined(HAVE_EVENT2_DNS_H)

/* Only define if it looks like libevent2 is installed. (Debian and
 * derived distros only have 1.X) */

#define HAVE_LIBEVENT_CORE 1

#endif

/* Types */

#define HAVE__BOOL 1

/* #undef ssize_t */

/* Should be in <sys/socket.h> */
/* #undef socklen_t */

/* #undef pid_t */

/* All of these are in <stdint.h> if present. Otherwise autoconf
 guesses. */

/* #undef int8_t */

/* #undef uint8_t */

/* #undef int16_t */

/* #undef uint16_t */

/* #undef int32_t */

/* #undef uint32_t */

/* #undef int64_t */

/* #undef uint64_t */

/* Type of the largest int type */
/* #undef intmax_t */

/* #undef uintmax_t */

/* Taken from autoconf manual */
#if HAVE_STDBOOL_H
# include <stdbool.h>
#else
# if ! HAVE__BOOL
#  ifdef __cplusplus
typedef bool _Bool;
#  else
#   define _Bool signed char
#  endif
# endif
# define bool _Bool
# define false 0
# define true 1
# define __bool_true_false_are_defined 1
#endif

/* #undef WORDS_BIGENDIAN */

/* Functions */
#define HAVE_BINDTEXTDOMAIN 1

#define HAVE_CBRT 1

#define HAVE_LOG2 1

#define HAVE_LRINT 1

#define HAVE_CRYPT 1

/* #undef HAVE_FPSETMASK */

/* #undef HAVE_FPSETROUND */

#define HAVE_ISNORMAL 1

#define HAVE_GAI_STRERROR 1

#define HAVE_GETADDRINFO 1

#define HAVE_GETDATE 1

#define HAVE_GETNAMEINFO 1

#define HAVE_GETHOSTBYNAME2 1

#define HAVE_GETPAGESIZE 1

#define HAVE_GETRLIMIT 1

#define HAVE_GETRUSAGE 1

#define HAVE_GETTEXT 1

#define HAVE_INET_PTON 1

#define HAVE_SETITIMER 1

#define HAVE_FORK 1

#define HAVE_SETPGRP 1

#define HAVE_SETSID 1

#define HAVE_SETPGID 1

#define SETPGRP_VOID 1

#define HAVE_GETUID 1

#define HAVE_GETEUID 1

#define HAVE_SETEUID 1

#define HAVE_GETPRIORITY 1

#define HAVE_SETPRIORITY 1

#define HAVE_SIGACTION 1

#define HAVE_SIGPROCMASK 1

#define HAVE_SNPRINTF 1

#define HAVE_SOCKETPAIR 1

#define HAVE_STRCASECMP 1

#define HAVE_STRNCASECMP 1

/* Various Windows (And maybe others?) string functions  start with _str */

/* #undef HAVE__STRICMP */

/* #undef HAVE__STRNICMP */

/* #undef HAVE__STRICOLL */

/* #undef HAVE__STRNCOLL */

/* #undef HAVE__STRNICOLL */

/* #undef HAVE__SNPRINTF */

/* #undef HAVE__VSNPRINTF */

/* #undef HAVE__VSNPRINTF_S */

#define HAVE_VASPRINTF 1

#define HAVE_STRCHRNUL 1

#define HAVE_STRDUP 1

#define HAVE_STRCOLL 1

#define HAVE_STRXFRM 1

#define HAVE_SYSCONF 1

#define HAVE_TEXTDOMAIN 1

#define HAVE_VSNPRINTF 1

#define HAVE_WAITPID 1

/* #undef HAVE_WAIT3 */

/* #undef HAVE_WAIT */

/* #undef UNION_WAIT */

#define HAVE_IMAXDIV_T 1

#define HAVE_IMAXDIV 1

#define HAVE_GETPID 1

#define HAVE_GETPPID 1

#define HAVE_POLL 1

/* #undef HAVE_KQUEUE */

#define HAVE_POSIX_MEMALIGN 1

#define HAVE_WRITEV 1

#define HAVE_FCNTL 1

#define HAVE_INOTIFY_INIT 1

#define HAVE_INOTIFY_INIT1 1

#ifdef HAVE_INOTIFY_INIT
#define HAVE_INOTIFY
#endif

#define HAVE_PREAD 1

#define HAVE_PWRITE 1

#define HAVE_POSIX_FADVISE 1

#define HAVE_POSIX_FALLOCATE 1

#define HAVE_FECLEAREXCEPT 1

#define HAVE_FETESTEXCEPT 1

/* Variables and defines */

#define HAVE_H_ERRNO 1

#define HAVE_SIGCHLD 1

/* Files */

#define HAVE_DEV_URANDOM 1

/* Path to tzinfo database */
#define HAVE_ZONEINFO 1
#define TZDIR "/usr/share/zoneinfo"

/* Misc. */

/* #undef HAVE_STRUCT_SOCKADDR_SA_LEN */

#define HAVE_STRUCT_SOCKADDR_IN6 1

/* #undef HAVE_STRUCT_XUCRED */

/* #undef FORCE_IPV4 */

/* #undef DONT_TRANSLATE */

#define INFO_SLAVE 1

#define SSL_SLAVE 1

#define HAVE_UPTIME 1

/* Path to uptime */
#define UPTIME "/usr/bin/uptime"

/* #undef HAVE_SENDMAIL */

/* Path to sendmail */
/* #undef SENDMAIL */

/* #undef HAVE_ED */
/* #undef ED_PATH */

#define HAVE_SAFE_TOUPPER 1

/* Optional language features */
#define restrict __restrict
/* #undef inline */

#define inline __inline

#ifdef _MSC_VER
#define WIN32_CDECL __cdecl
#else
#define WIN32_CDECL
#endif

#define HAVE___ATTRIBUTE__ 1

#ifndef HAVE___ATTRIBUTE__
#define __attribute__(x)
#endif

#define GCC_MALLOC_CALL __attribute__((__malloc__))


/* Turn on SSE2 stuff automatically if supported (IE, x86-64 or x86 with the right -march switch) */
/* #undef HAVE_SSE2 */
#ifdef __SSE2__
#define HAVE_SSE2
#endif

/* #undef HAVE_SSE3 */
#ifdef __SSE3__
#define HAVE_SSE3
#endif

/* #undef HAVE_SSSE3 */
#ifdef __SSSE3__
#define HAVE_SSSE3
#endif

/* #undef HAVE_ALTIVEC */

/* TODO: Change in source */
#define RESTRICT restrict

#endif /* __CONFIG_H */ 
