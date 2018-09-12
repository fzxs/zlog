

#ifndef __GTLOG_H_
#define __GTLOG_H_

#include "zlog.h"

#define LOGNAME "asrlog.conf"
#define LOGMODEL "asr_level"

extern zlog_category_t *zc;

//≥ı ºªØzlog
int zlogInit(const char *pcConfigPath, const char *pcModelName);

// Õ∑≈zlog
void zlogDestory();

#define FATAL_LOG(fmt,...) \
	zlog_fatal(zc,fmt,__VA_ARGS__);

#define ERROR_LOG(fmt,...) \
	zlog_error(zc,fmt,__VA_ARGS__);

#define WARN_LOG(fmt,...) \
	zlog_warn(zc,fmt,__VA_ARGS__);

#define NOTICE_LOG(fmt,...) \
	zlog_notice(zc,fmt,__VA_ARGS__);

#define INFO_LOG(fmt,...) \
	zlog_info(zc,fmt,__VA_ARGS__);

#define DEBUG_LOG(fmt,...) \
	zlog_debug(zc,fmt,__VA_ARGS__);

#endif

