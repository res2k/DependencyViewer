#pragma once


#define CINTERFACE
#define WIN32_LEAN_AND_MEAN
#ifndef NOMINMAX
#define NOMINMAX
#endif
#ifdef ISOLATION_AWARE_ENABLED
#undef ISOLATION_AWARE_ENABLED
#endif


#if !defined(RC_INVOKED)
#include <phnt_windows.h>
#endif
#include <windows.h>


typedef GUID* PGUID;
typedef DWORD DEVICE_TYPE;
