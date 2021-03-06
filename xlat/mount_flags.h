/* Generated by ./xlat/gen.sh from ./xlat/mount_flags.in; do not edit. */

static const struct xlat mount_flags[] = {
#if defined(MS_MGC_VAL) || (defined(HAVE_DECL_MS_MGC_VAL) && HAVE_DECL_MS_MGC_VAL)
	XLAT(MS_MGC_VAL),
#endif
#if defined(MS_RDONLY) || (defined(HAVE_DECL_MS_RDONLY) && HAVE_DECL_MS_RDONLY)
	XLAT(MS_RDONLY),
#endif
#if defined(MS_NOSUID) || (defined(HAVE_DECL_MS_NOSUID) && HAVE_DECL_MS_NOSUID)
	XLAT(MS_NOSUID),
#endif
#if defined(MS_NODEV) || (defined(HAVE_DECL_MS_NODEV) && HAVE_DECL_MS_NODEV)
	XLAT(MS_NODEV),
#endif
#if defined(MS_NOEXEC) || (defined(HAVE_DECL_MS_NOEXEC) && HAVE_DECL_MS_NOEXEC)
	XLAT(MS_NOEXEC),
#endif
#if defined(MS_SYNCHRONOUS) || (defined(HAVE_DECL_MS_SYNCHRONOUS) && HAVE_DECL_MS_SYNCHRONOUS)
	XLAT(MS_SYNCHRONOUS),
#endif
#if defined(MS_REMOUNT) || (defined(HAVE_DECL_MS_REMOUNT) && HAVE_DECL_MS_REMOUNT)
	XLAT(MS_REMOUNT),
#endif
#if defined(MS_RELATIME) || (defined(HAVE_DECL_MS_RELATIME) && HAVE_DECL_MS_RELATIME)
	XLAT(MS_RELATIME),
#endif
#if defined(MS_KERNMOUNT) || (defined(HAVE_DECL_MS_KERNMOUNT) && HAVE_DECL_MS_KERNMOUNT)
	XLAT(MS_KERNMOUNT),
#endif
#if defined(MS_I_VERSION) || (defined(HAVE_DECL_MS_I_VERSION) && HAVE_DECL_MS_I_VERSION)
	XLAT(MS_I_VERSION),
#endif
#if defined(MS_STRICTATIME) || (defined(HAVE_DECL_MS_STRICTATIME) && HAVE_DECL_MS_STRICTATIME)
	XLAT(MS_STRICTATIME),
#endif
#if defined(MS_NOSEC) || (defined(HAVE_DECL_MS_NOSEC) && HAVE_DECL_MS_NOSEC)
	XLAT(MS_NOSEC),
#endif
#if defined(MS_BORN) || (defined(HAVE_DECL_MS_BORN) && HAVE_DECL_MS_BORN)
	XLAT(MS_BORN),
#endif
#if defined(MS_MANDLOCK) || (defined(HAVE_DECL_MS_MANDLOCK) && HAVE_DECL_MS_MANDLOCK)
	XLAT(MS_MANDLOCK),
#endif
#if defined(MS_NOATIME) || (defined(HAVE_DECL_MS_NOATIME) && HAVE_DECL_MS_NOATIME)
	XLAT(MS_NOATIME),
#endif
#if defined(MS_NODIRATIME) || (defined(HAVE_DECL_MS_NODIRATIME) && HAVE_DECL_MS_NODIRATIME)
	XLAT(MS_NODIRATIME),
#endif
#if defined(MS_BIND) || (defined(HAVE_DECL_MS_BIND) && HAVE_DECL_MS_BIND)
	XLAT(MS_BIND),
#endif
#if defined(MS_MOVE) || (defined(HAVE_DECL_MS_MOVE) && HAVE_DECL_MS_MOVE)
	XLAT(MS_MOVE),
#endif
#if defined(MS_REC) || (defined(HAVE_DECL_MS_REC) && HAVE_DECL_MS_REC)
	XLAT(MS_REC),
#endif
#if defined(MS_SILENT) || (defined(HAVE_DECL_MS_SILENT) && HAVE_DECL_MS_SILENT)
	XLAT(MS_SILENT),
#endif
#if defined(MS_POSIXACL) || (defined(HAVE_DECL_MS_POSIXACL) && HAVE_DECL_MS_POSIXACL)
	XLAT(MS_POSIXACL),
#endif
#if defined(MS_UNBINDABLE) || (defined(HAVE_DECL_MS_UNBINDABLE) && HAVE_DECL_MS_UNBINDABLE)
	XLAT(MS_UNBINDABLE),
#endif
#if defined(MS_PRIVATE) || (defined(HAVE_DECL_MS_PRIVATE) && HAVE_DECL_MS_PRIVATE)
	XLAT(MS_PRIVATE),
#endif
#if defined(MS_SLAVE) || (defined(HAVE_DECL_MS_SLAVE) && HAVE_DECL_MS_SLAVE)
	XLAT(MS_SLAVE),
#endif
#if defined(MS_SHARED) || (defined(HAVE_DECL_MS_SHARED) && HAVE_DECL_MS_SHARED)
	XLAT(MS_SHARED),
#endif
#if defined(MS_ACTIVE) || (defined(HAVE_DECL_MS_ACTIVE) && HAVE_DECL_MS_ACTIVE)
	XLAT(MS_ACTIVE),
#endif
#if defined(MS_NOUSER) || (defined(HAVE_DECL_MS_NOUSER) && HAVE_DECL_MS_NOUSER)
	XLAT(MS_NOUSER),
#endif
	XLAT_END
};
