// ghidra.h — the vocabulary Ghidra's decompiler writes in, defined so its output compiles.
//
// Everything in src/ and lib/ is Ghidra 12.1.4 pseudocode for a 32-bit Borland C++ program. It uses
// Ghidra's own type names (undefined4, byte, code, ...), pseudo-operations for things C cannot say
// directly (CONCAT31, SUB41, CARRY4, ...), and Windows SDK types for API calls. This header supplies
// those. It makes the pseudocode *compile*; it does not make it *correct* — see README.md.
//
// Build: 32-bit GCC (MinGW-w64), C++17, with -fpermissive. 32-bit matters: the code keeps pointers in int.
#pragma once

#ifndef NOMINMAX
#define NOMINMAX
#endif
// COM interfaces as C structs with an explicit lpVtbl member: that is how the pseudocode calls them.
#ifndef CINTERFACE
#define CINTERFACE
#endif
#include <windows.h>
#include <commctrl.h>
#include <commdlg.h>
#include <shellapi.h>
#include <shlobj.h>
#include <richedit.h>
#include <winspool.h>
#include <dde.h>
#include <ddeml.h>
#include <stddef.h>
#include <stdint.h>
#include <type_traits>

// The decompiled program lives in its own namespace so that the names recovered for its statically
// linked runtime (strlen, malloc, std::string::append, ...) cannot collide with the real ones.
namespace tea {

// ---- Ghidra scalar types ------------------------------------------------------------------------
typedef unsigned char      undefined;    // one byte of unknown type
typedef unsigned char      undefined1;
typedef unsigned short     undefined2;
typedef unsigned int       undefined3;   // 3-byte quantities are widened to 4
typedef unsigned int       undefined4;
typedef unsigned long long undefined5;
typedef unsigned long long undefined6;
typedef unsigned long long undefined7;
typedef unsigned long long undefined8;
typedef unsigned char      byte;
typedef signed char        sbyte;
typedef unsigned char      uchar;
typedef unsigned short     ushort;
typedef unsigned int       uint;
typedef unsigned long      ulong;
typedef long long          longlong;
typedef unsigned long long ulonglong;
typedef unsigned short     word;
typedef unsigned int       dword;
typedef unsigned long long qword;
typedef int                int3;
typedef unsigned int       uint3;
typedef long long          int5;
typedef long long          int6;
typedef long long          int7;
typedef unsigned long long uint5;
typedef unsigned long long uint6;
typedef unsigned long long uint7;
typedef long double        float10;      // x87 extended precision
typedef long double        longdouble;
typedef unsigned short     wchar16;
typedef void              *pointer;
typedef unsigned int       pointer32;
typedef unsigned short     ImageBaseOffset16;
typedef unsigned int       ImageBaseOffset32;
// "unknown" integers of a given byte width
typedef unsigned char      unkbyte1,  unkuint1;   typedef signed char unkint1;
typedef unsigned short     unkbyte2,  unkuint2;   typedef short       unkint2;
typedef unsigned int       unkbyte3,  unkuint3,  unkbyte4, unkuint4;   typedef int unkint3, unkint4;
typedef unsigned long long unkbyte5,  unkuint5,  unkbyte6, unkuint6, unkbyte7, unkuint7, unkbyte8, unkuint8;
typedef long long          unkint5,   unkint6,   unkint7,  unkint8;
typedef unsigned long long unkbyte9,  unkuint9,  unkbyte10, unkuint10, unkbyte12, unkuint12, unkbyte16, unkuint16;   // wider than 8 bytes: truncated
typedef long long          unkint9,   unkint10,  unkint12,  unkint16;
typedef unsigned long long undefined10, undefined12, undefined16;

// `code` is Ghidra's type for "some function". Calls through it carry whatever arguments the
// decompiler saw at that call site, so it is variadic here.
typedef int code(...);

// ---- instructions the decompiler could not express ---------------------------------------------------
// Declared, never defined: they mark places where the pseudocode is not a faithful translation.
void halt_baddata(...);
void halt_unimplemented(...);
int  swi(...);
int  software_interrupt(...);
int  in(...);
void out(...);
void LOCK(...);
void UNLOCK(...);
int  segment(...);
unsigned long long rdtsc(...);
int  cpuid_basic_info(...);
int  cpuid_Version_info(...);
int  cpuid(...);
long double fscale(...);
long double fpatan(...);
long double f2xm1(...);
long double fyl2x(...);
long double fyl2xp1(...);
long double fsin(...);
long double fcos(...);
long double fptan(...);
long double fprem(...);
long double fprem1(...);
long double frndint(...);
long double log2(...);
long double exp2(...);

} // namespace tea

// A stack location the decompiler referred to by offset because it could not give it a name.
#define GHIDRA_STACK(off) (*((tea::undefined *)__builtin_frame_address(0) + (int)(off)))

// Ghidra writes x._N_M_ for "the M bytes at offset N inside variable x"; the generator turns that into this.
#define GH_PIECE(lv, off, T) (*(tea::T *)((char *)&(lv) + (off)))

// Ghidra assigns whole values to array-typed locals (an 8-byte blob declared undefined1[8]); C++ cannot.
#define GH_SET(dst, val) do { auto &&gh_v = (val); __builtin_memcpy(&(dst), &gh_v, sizeof(dst) < sizeof(gh_v) ? sizeof(dst) : sizeof(gh_v)); } while (0)

// Ghidra writes through pointers the SDK declares const (an LPCSTR buffer the program fills in).
#define GH_WRITABLE(lv) (const_cast<typename ::std::remove_const<typename ::std::remove_reference<decltype((lv))>::type>::type &>(lv))

// Calling convention Ghidra prints for the program entry point.
#define processEntry

// ---- pseudo-operations ----------------------------------------------------------------------------------
// CONCATxy(a,b): a (x bytes) placed above b (y bytes).
#define GH_U32(v) ((unsigned int)(v))
#define GH_U64(v) ((unsigned long long)(v))
#define CONCAT11(a,b) ((unsigned short)((GH_U32((unsigned char)(a)) << 8) | (unsigned char)(b)))
#define CONCAT12(a,b) ((GH_U32((unsigned char)(a)) << 16) | (unsigned short)(b))
#define CONCAT13(a,b) ((GH_U32((unsigned char)(a)) << 24) | (GH_U32(b) & 0xffffffu))
#define CONCAT21(a,b) ((GH_U32((unsigned short)(a)) << 8) | (unsigned char)(b))
#define CONCAT22(a,b) ((GH_U32((unsigned short)(a)) << 16) | (unsigned short)(b))
#define CONCAT31(a,b) ((GH_U32(a) << 8) | (unsigned char)(b))
#define CONCAT14(a,b) ((GH_U64((unsigned char)(a)) << 32) | GH_U32(b))
#define CONCAT15(a,b) ((GH_U64((unsigned char)(a)) << 40) | (GH_U64(b) & 0xffffffffffull))
#define CONCAT16(a,b) ((GH_U64((unsigned char)(a)) << 48) | (GH_U64(b) & 0xffffffffffffull))
#define CONCAT17(a,b) ((GH_U64((unsigned char)(a)) << 56) | (GH_U64(b) & 0xffffffffffffffull))
#define CONCAT23(a,b) ((GH_U64((unsigned short)(a)) << 24) | (GH_U64(b) & 0xffffffull))
#define CONCAT24(a,b) ((GH_U64((unsigned short)(a)) << 32) | GH_U32(b))
#define CONCAT25(a,b) ((GH_U64((unsigned short)(a)) << 40) | (GH_U64(b) & 0xffffffffffull))
#define CONCAT26(a,b) ((GH_U64((unsigned short)(a)) << 48) | (GH_U64(b) & 0xffffffffffffull))
#define CONCAT32(a,b) ((GH_U64(a) << 16) | (unsigned short)(b))
#define CONCAT33(a,b) ((GH_U64(a) << 24) | (GH_U64(b) & 0xffffffull))
#define CONCAT34(a,b) ((GH_U64(a) << 32) | GH_U32(b))
#define CONCAT35(a,b) ((GH_U64(a) << 40) | (GH_U64(b) & 0xffffffffffull))
#define CONCAT41(a,b) ((GH_U64(GH_U32(a)) << 8) | (unsigned char)(b))
#define CONCAT42(a,b) ((GH_U64(GH_U32(a)) << 16) | (unsigned short)(b))
#define CONCAT43(a,b) ((GH_U64(GH_U32(a)) << 24) | (GH_U64(b) & 0xffffffull))
#define CONCAT44(a,b) ((GH_U64(GH_U32(a)) << 32) | GH_U32(b))
#define CONCAT51(a,b) ((GH_U64(a) << 8) | (unsigned char)(b))
#define CONCAT52(a,b) ((GH_U64(a) << 16) | (unsigned short)(b))
#define CONCAT53(a,b) ((GH_U64(a) << 24) | (GH_U64(b) & 0xffffffull))
#define CONCAT61(a,b) ((GH_U64(a) << 8) | (unsigned char)(b))
#define CONCAT62(a,b) ((GH_U64(a) << 16) | (unsigned short)(b))
#define CONCAT71(a,b) ((GH_U64(a) << 8) | (unsigned char)(b))
// results wider than 8 bytes (x87 80-bit values assembled from pieces) keep only the low part
#define CONCAT64(a,b) (GH_U64(b))
#define CONCAT88(a,b) (GH_U64(b))
#define CONCAT82(a,b) (GH_U64(b))
#define CONCAT84(a,b) (GH_U64(b))
#define CONCAT28(a,b) (GH_U64(b))
#define CONCAT48(a,b) (GH_U64(b))

// SUBxy(v, n): y bytes of the x-byte value v, starting n bytes up from the least significant.
#define GH_SUB(v, n) (GH_U64(v) >> ((n) * 8))
#define SUB21(v,n) ((unsigned char)GH_SUB(v,n))
#define SUB31(v,n) ((unsigned char)GH_SUB(v,n))
#define SUB32(v,n) ((unsigned short)GH_SUB(v,n))
#define SUB41(v,n) ((unsigned char)GH_SUB(v,n))
#define SUB42(v,n) ((unsigned short)GH_SUB(v,n))
#define SUB43(v,n) ((unsigned int)(GH_SUB(v,n) & 0xffffffu))
#define SUB51(v,n) ((unsigned char)GH_SUB(v,n))
#define SUB52(v,n) ((unsigned short)GH_SUB(v,n))
#define SUB54(v,n) ((unsigned int)GH_SUB(v,n))
#define SUB61(v,n) ((unsigned char)GH_SUB(v,n))
#define SUB62(v,n) ((unsigned short)GH_SUB(v,n))
#define SUB64(v,n) ((unsigned int)GH_SUB(v,n))
#define SUB71(v,n) ((unsigned char)GH_SUB(v,n))
#define SUB72(v,n) ((unsigned short)GH_SUB(v,n))
#define SUB74(v,n) ((unsigned int)GH_SUB(v,n))
#define SUB81(v,n) ((unsigned char)GH_SUB(v,n))
#define SUB82(v,n) ((unsigned short)GH_SUB(v,n))
#define SUB84(v,n) ((unsigned int)GH_SUB(v,n))
#define SUB85(v,n) (GH_SUB(v,n) & 0xffffffffffull)
#define SUB86(v,n) (GH_SUB(v,n) & 0xffffffffffffull)
#define SUB87(v,n) (GH_SUB(v,n) & 0xffffffffffffffull)
#define SUB101(v,n) ((unsigned char)(v))
#define SUB102(v,n) ((unsigned short)(v))
#define SUB104(v,n) ((unsigned int)(v))
#define SUB108(v,n) ((unsigned long long)(v))
#define SUB161(v,n) ((unsigned char)(v))
#define SUB162(v,n) ((unsigned short)(v))
#define SUB164(v,n) ((unsigned int)(v))
#define SUB168(v,n) ((unsigned long long)(v))

// ZEXTxy / SEXTxy: zero- or sign-extension from x to y bytes.
#define ZEXT12(v) ((unsigned short)(unsigned char)(v))
#define ZEXT13(v) ((unsigned int)(unsigned char)(v))
#define ZEXT14(v) ((unsigned int)(unsigned char)(v))
#define ZEXT18(v) ((unsigned long long)(unsigned char)(v))
#define ZEXT23(v) ((unsigned int)(unsigned short)(v))
#define ZEXT24(v) ((unsigned int)(unsigned short)(v))
#define ZEXT28(v) ((unsigned long long)(unsigned short)(v))
#define ZEXT34(v) ((unsigned int)(v) & 0xffffffu)
#define ZEXT38(v) ((unsigned long long)(v) & 0xffffffull)
#define ZEXT45(v) ((unsigned long long)(unsigned int)(v))
#define ZEXT46(v) ((unsigned long long)(unsigned int)(v))
#define ZEXT47(v) ((unsigned long long)(unsigned int)(v))
#define ZEXT48(v) ((unsigned long long)(unsigned int)(v))
#define ZEXT58(v) ((unsigned long long)(v))
#define ZEXT68(v) ((unsigned long long)(v))
#define ZEXT78(v) ((unsigned long long)(v))
#define ZEXT416(v) ((unsigned long long)(unsigned int)(v))
#define ZEXT816(v) ((unsigned long long)(v))
#define ZEXT410(v) ((long double)(unsigned int)(v))
#define ZEXT810(v) ((long double)(unsigned long long)(v))
#define SEXT12(v) ((short)(signed char)(v))
#define SEXT14(v) ((int)(signed char)(v))
#define SEXT18(v) ((long long)(signed char)(v))
#define SEXT24(v) ((int)(short)(v))
#define SEXT28(v) ((long long)(short)(v))
#define SEXT48(v) ((long long)(int)(v))
#define SEXT416(v) ((long long)(int)(v))
#define SEXT816(v) ((long long)(v))

// Flag computations.
#define CARRY1(a,b)   ((unsigned char)(a) > (unsigned char)(0xffu - (unsigned char)(b)))
#define CARRY2(a,b)   ((unsigned short)(a) > (unsigned short)(0xffffu - (unsigned short)(b)))
#define CARRY4(a,b)   ((unsigned int)(a) > 0xffffffffu - (unsigned int)(b))
#define CARRY8(a,b)   ((unsigned long long)(a) > 0xffffffffffffffffull - (unsigned long long)(b))
#define SCARRY1(a,b)  __builtin_add_overflow_p((signed char)(a), (signed char)(b), (signed char)0)
#define SCARRY2(a,b)  __builtin_add_overflow_p((short)(a), (short)(b), (short)0)
#define SCARRY4(a,b)  __builtin_add_overflow_p((int)(a), (int)(b), (int)0)
#define SCARRY8(a,b)  __builtin_add_overflow_p((long long)(a), (long long)(b), (long long)0)
#define SBORROW1(a,b) __builtin_sub_overflow_p((signed char)(a), (signed char)(b), (signed char)0)
#define SBORROW2(a,b) __builtin_sub_overflow_p((short)(a), (short)(b), (short)0)
#define SBORROW4(a,b) __builtin_sub_overflow_p((int)(a), (int)(b), (int)0)
#define SBORROW8(a,b) __builtin_sub_overflow_p((long long)(a), (long long)(b), (long long)0)
#define POPCOUNT(v)   __builtin_popcountll((unsigned long long)(v))
#define LZCOUNT(v)    __builtin_clzll((unsigned long long)(v))

// Floating-point pseudo-operations.
#ifdef NAN
#undef NAN
#endif
#define NAN(v)   __builtin_isnan((long double)(v))
#define ABS(v)   __builtin_fabsl((long double)(v))
#define SQRT(v)  __builtin_sqrtl((long double)(v))
#define ROUND(v) __builtin_roundl((long double)(v))
#define TRUNC(v) __builtin_truncl((long double)(v))
#define FLOOR(v) __builtin_floorl((long double)(v))
#define CEIL(v)  __builtin_ceill((long double)(v))
#define FLOAT_UNKNOWN(v) ((long double)(v))
