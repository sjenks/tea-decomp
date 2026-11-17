// TSMerge.exe — declarations for the decompiled program. Generated; do not edit.
// One prototype per function (as Ghidra has it after its signatures were committed) and one
// declaration per global the pseudocode names. Class names appear as namespaces: the binary has no
// type information from which real class definitions could be rebuilt.
#pragma once
#include "../ghidra.h"

namespace tea {

// ---- functions (2696) ----
void __stdcall entry(void);
void __stdcall FUN_00401012(void);
void __cdecl __GetExceptDLLinfo(undefined4 *param_1);
undefined4 __stdcall FUN_00401140(void);
void __stdcall FUN_00401150(void);
void __stdcall FUN_004011a8(void);
int * __cdecl FUN_0040124c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4);
namespace DMProgressBar { void __cdecl _dtor(int *param_1,uint param_2); }
void __cdecl FUN_00401490(int *param_1,int param_2);
namespace DMProgressBar { void __cdecl vf5(int param_1,int param_2); }
namespace DMDialog { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_004016c0(int *param_1,int param_2,undefined4 param_3,uint *param_4);
namespace DMDialog { bool __cdecl vf15(int param_1); }
namespace DMDialog { uint __cdecl vf16(int *param_1,int param_2); }
namespace DMDialog { void __cdecl vf17(int param_1,undefined4 param_2); }
namespace DMDialog { void __cdecl vf11(int *param_1); }
char * __cdecl FUN_00403134(char *param_1,char param_2,int param_3);
namespace DMDialog { void __cdecl EvClose(int *param_1); }
bool __cdecl FUN_004031f4(int *param_1,int param_2);
void __cdecl FUN_00403258(int param_1,byte *param_2);
namespace DMDialog { void Cmd101(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4); }
namespace DMDialog { void __cdecl Cmd106(int *param_1); }
namespace DMDialog { void __cdecl Cmd122(undefined4 *param_1); }
namespace DMDialog { void __cdecl CmShared_403784(int param_1); }
void __cdecl FUN_00403920(int param_1);
void __cdecl FUN_00403a18(int *param_1,int *param_2,int param_3);
namespace DMDialog { void __cdecl Cmd112(int *param_1); }
namespace DMDialog { void __cdecl Cmd104(int *param_1); }
namespace DMDialog { void __cdecl Cmd120(undefined4 *param_1); }
void __cdecl FUN_0040402c(int param_1);
namespace DMApplication { void __cdecl vf17(int param_1); }
undefined4 __stdcall FUN_00404270(void);
namespace DMApplication { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TFileSaveDialog { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TFileOpenDialog { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TApplication { void __stdcall vf9(void); }
namespace OWL::TApplication { undefined4 __cdecl vf13(int param_1); }
namespace std::logic_error { undefined4 __cdecl vf1(int param_1); }
namespace std::exception { undefined * __stdcall vf1(void); }
namespace DMDialog { void __cdecl _dtor(int *param_1,byte param_2); }
namespace OWL::TWindow { undefined4 __cdecl vf1(int param_1); }
namespace OWL::TWindow { bool __cdecl vf24(int param_1,byte param_2); }
namespace OWL::TWindow { void __cdecl vf26(int param_1,byte param_2); }
namespace OWL::TWindow { void __cdecl vf27(int param_1,RECT *param_2,byte param_3); }
namespace std::string { void __cdecl _dtor(int param_1,byte param_2); }
namespace OWL::TOpenSaveDialog { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TStatic { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TRadioButton { void __cdecl _dtor(int *param_1,uint param_2); }
int __cdecl FUN_00405984(int param_1,int param_2);
int __cdecl FUN_00405a5c(undefined4 *param_1,LPCSTR param_2,int param_3,char *param_4);
undefined4 __cdecl FUN_00405e78(int param_1,int param_2,undefined4 param_3);
undefined4 __cdecl FUN_00405f48(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,LPCSTR param_6);
void __cdecl FUN_004064c4(int param_1,int param_2,int param_3);
int __cdecl FUN_004068fc(int param_1,int param_2,int param_3);
int __cdecl FUN_0040692c(int param_1,int param_2,int param_3);
void __cdecl FUN_00406a78(int param_1,int param_2);
void __cdecl FUN_00406a90(undefined4 param_1,int param_2,int param_3);
int * FUN_00406b48(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5 );
int __cdecl FUN_004088f4(int *param_1,LPCSTR param_2,LPCSTR param_3,int param_4,int param_5,LPCSTR param_6);
undefined4 * __cdecl FUN_004092d4(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5, int param_6);
void __cdecl FUN_00409424(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 *param_6);
void __cdecl FUN_00409508(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5, undefined4 *param_6);
void __cdecl FUN_004095a0(int param_1,int param_2,int param_3,undefined4 *param_4);
void __cdecl FUN_004095fc(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5);
int __cdecl FUN_004096a0(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6);
undefined4 * __cdecl FUN_00409794(undefined4 *param_1);
int __cdecl FUN_00409868(int param_1,int param_2,int param_3);
void __cdecl FUN_0040989c(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,int param_7, undefined4 param_8,undefined4 *param_9);
void __cdecl FUN_00409a8c(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6);
void __cdecl FUN_00409bd4(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_00409be4(int param_1,int param_2,int param_3,undefined4 *param_4);
int __cdecl FUN_00409cb8(int param_1,int param_2,int param_3,undefined4 *param_4);
int __cdecl FUN_00409d8c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
void __cdecl FUN_00409e44(int param_1,int param_2,int param_3);
int __cdecl FUN_00409eb0(int param_1,int param_2);
void __cdecl FUN_00409ed4(int param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_0040a094(int param_1,int param_2,undefined4 *param_3);
void __cdecl FUN_0040a390(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5, undefined4 *param_6);
undefined4 __cdecl FUN_0040a4c0(int param_1,int param_2,int param_3,uint param_4,uint param_5,undefined4 *param_6);
void __cdecl FUN_0040a884(int param_1,int param_2,undefined4 *param_3);
namespace Abandon_exception { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace Abandon_exception { char * __stdcall vf1(void); }
namespace std::bad_alloc { undefined * __stdcall vf1(void); }
namespace std::vector_std_string { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::basic_ostream_char::sentry { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::locale { void __cdecl _dtor(int *param_1,byte param_2); }
int __cdecl FUN_0040b8c4(int param_1,int param_2,int param_3);
void __stdcall FUN_0040bd6c(void);
void __stdcall FUN_0040bdac(void);
int __cdecl FUN_0040be50(int param_1);
namespace TSMergeProfile { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_0040c154(int param_1);
void __cdecl FUN_0040c638(int param_1);
int __cdecl FUN_0040ca90(int param_1,int param_2);
int __cdecl FUN_0040d844(int param_1,int param_2,int param_3);
int __cdecl FUN_0040dac4(int param_1,int param_2);
bool __cdecl FUN_0040de48(int param_1);
int __cdecl GetProgramDirectory(int param_1);
int __cdecl FUN_0040e050(int param_1);
int __cdecl FUN_0040e368(int param_1,int param_2);
undefined4 __cdecl FUN_0040e7b8(LPCSTR param_1);
int * __cdecl FUN_0040e920(int *param_1,int param_2,int param_3,int param_4);
namespace Persist { void __cdecl _dtor(int param_1,byte param_2); }
namespace Persist { undefined4 __cdecl QueryValueSized(int param_1,int param_2,int param_3); }
namespace Persist { undefined4 __cdecl QueryValue(int param_1,int param_2,undefined4 *param_3); }
void __cdecl FUN_0040eaf8(int param_1,int param_2,int param_3);
void __cdecl FUN_0040eb28(int param_1,int param_2);
void __stdcall FUN_0040eb4c(void);
undefined4 __cdecl FUN_0040eb8c(HWND param_1);
undefined4 * __cdecl FUN_0040ec5c(undefined4 *param_1);
namespace Help { void __cdecl _dtor(int *param_1,byte param_2); }
undefined4 __stdcall FUN_0040edc8(void);
void __stdcall FUN_0040ee47(void);
void __stdcall FUN_0040ee9d(void);
undefined4 __stdcall FUN_0040eef0(void);
undefined * __stdcall FUN_0040eef8(void);
namespace OWL::TRichEdit { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace OWL::TRichEdit { void __cdecl Cmd24322(int *param_1); }
namespace OWL::TRichEdit { void __cdecl Cmd24323(int *param_1); }
namespace OWL::TRichEdit { void __cdecl Cmd24324(int param_1); }
namespace OWL::TRichEdit { void __cdecl Cmd24325(int *param_1); }
namespace OWL::TRichEdit { void __cdecl Cmd24326(int param_1); }
namespace OWL::TRichEdit { void __cdecl Cmd24321(int *param_1); }
void __cdecl FUN_0040f010(int param_1,byte param_2);
namespace OWL::TRichEdit { void __cdecl vf13(int *param_1,undefined4 *param_2,undefined4 *param_3); }
void __cdecl FUN_0040f0e0(int *param_1,LPARAM param_2);
namespace OWL::TRichEdit { bool __cdecl vf15(int *param_1,undefined4 param_2,undefined4 param_3); }
undefined4 __cdecl FUN_0040f12c(int *param_1,LPARAM param_2);
void __cdecl FUN_0040f148(int *param_1,LPARAM param_2);
namespace OWL::TRichEdit { void __cdecl vf12(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4); }
undefined4 __cdecl FUN_0040f194(int *param_1,WPARAM param_2,LPARAM param_3);
namespace OWL::TRichEdit { int __cdecl vf16(int *param_1,int param_2,uint *param_3,char param_4,char param_5,char param_6); }
namespace OWL::TRichEdit { void __cdecl vf17(int *param_1); }
void __cdecl FUN_0040f28c(int *param_1,WPARAM param_2,LPARAM param_3);
void __cdecl FUN_0040f2ac(int *param_1,WPARAM param_2,LPARAM param_3);
namespace OWL::TRichEdit { void __cdecl EvGetDlgCode(int *param_1); }
namespace OWL::TRichEdit { void __cdecl EvChar(int *param_1); }
namespace OWL::TRichEdit { void __cdecl EvKeyDown(int *param_1); }
namespace OWL::TRichEdit { void __cdecl EvKillFocus(int *param_1); }
namespace OWL::TRichEdit { void __cdecl EvSetFocus(int *param_1); }
namespace OWL::TRichEdit { void __cdecl CeShared_40f328(int param_1,undefined4 *param_2); }
namespace OWL::TRichEdit { void __cdecl CeCmd24324(int *param_1,undefined4 *param_2); }
namespace OWL::TRichEdit { void __cdecl CeCmd24326(int *param_1,undefined4 *param_2); }
namespace OWL::TRichEdit { void __cdecl CeCmd24321(int *param_1,undefined4 *param_2); }
namespace OWL::TRichEdit { char * __stdcall vf11(void); }
namespace OWL::TRichEdit { void __cdecl vf20(int *param_1); }
undefined4 __stdcall FUN_0040f5d4(int *param_1,undefined1 *param_2,int param_3,undefined4 *param_4);
undefined4 __stdcall FUN_0040f618(int *param_1,int param_2,int param_3,int *param_4);
namespace OWL::TRichEdit { undefined4 __stdcall vf10(void); }
bool __cdecl FUN_0040f6b0(int *param_1,undefined4 param_2,WPARAM param_3);
bool __cdecl FUN_0040f6ec(int *param_1,undefined4 param_2,WPARAM param_3);
namespace OWL::TRichEdit { undefined4 __cdecl vf25(int *param_1,LPCSTR param_2); }
namespace OWL::TRichEdit { undefined4 __cdecl vf29(int *param_1,LPCSTR param_2); }
undefined4 * __cdecl FUN_0040f9dc(undefined4 *param_1,int *param_2);
int * __cdecl FUN_0040fa44(int *param_1,int param_2);
namespace OWL::TRichEdit::Streamer { undefined4 __cdecl vf1(int param_1,int *param_2); }
void __cdecl FUN_0040fb7c(int param_1,int *param_2);
namespace OWL::TRichEdit::Streamer { void __cdecl vf2(int param_1,int *param_2); }
void __cdecl FUN_0040fbec(int param_1,int *param_2);
undefined4 __cdecl FUN_0040fc8c(char param_1);
undefined4 * __cdecl FUN_0040fcbc(int *param_1);
namespace OWL::TErrorMode { void __cdecl _dtor(UINT *param_1,byte param_2); }
namespace OWL::TRichEdit { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TRichEditModule { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TNewStreamer { void __cdecl vf0(int param_1); }
namespace OWL::TRichEdit::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TEdit { void __cdecl vf13(int *param_1,WPARAM param_2,LPARAM param_3); }
namespace OWL::TEdit { undefined4 __cdecl vf14(int param_1); }
namespace OWL::TEdit { bool __cdecl vf15(int *param_1,WPARAM param_2,LPARAM param_3); }
namespace OWL::TEdit { void __cdecl vf17(int *param_1); }
namespace OWL::TEdit { void __cdecl vf18(int *param_1,undefined2 param_2,undefined2 param_3); }
namespace OWL::TEdit { void __cdecl vf19(int *param_1,WPARAM param_2); }
namespace OWL::TRichEdit { void __cdecl vf18(int *param_1,short param_2,short param_3); }
namespace OWL::TRichEdit { undefined4 __cdecl vf19(int *param_1,WPARAM param_2); }
void __stdcall FUN_00410510(void);
undefined4 * __cdecl FUN_00410554(undefined4 *param_1);
void __cdecl FUN_0041060c(int param_1);
bool __cdecl FUN_0041063c(int param_1,int param_2);
undefined * __stdcall FUN_004106a4(void);
undefined * __stdcall FUN_0041074c(void);
bool __stdcall FUN_00410754(void);
namespace OWL::TCommCtrlDll { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TPopupMenu { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined * __stdcall FUN_00410934(void);
undefined1 __stdcall FUN_00410960(void);
undefined1 __stdcall FUN_00410990(void);
bool __stdcall FUN_004109c0(void);
void __stdcall FUN_004109d8(void);
undefined * __stdcall FUN_00410b08(void);
PHKEY __cdecl FUN_00410bac(PHKEY param_1,HKEY param_2,uint *param_3,REGSAM param_4,int param_5);
undefined4 * __cdecl FUN_00410c84(undefined4 *param_1,undefined4 param_2,undefined1 param_3,uint *param_4);
namespace OWL::TRegKey { void __cdecl _dtor(int *param_1,byte param_2); }
LSTATUS __cdecl FUN_00410d7c(undefined4 *param_1,LPSTR param_2,LPDWORD param_3,LPDWORD param_4,LPDWORD param_5, DWORD *param_6,DWORD *param_7,LPDWORD param_8,LPDWORD param_9,LPDWORD param_10, PFILETIME param_11);
undefined4 * __cdecl FUN_00410e2c(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
namespace OWL::TRegValue { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_004111e0(undefined4 *param_1);
namespace OWL::TAPointer_char { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::locale::facet { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace __rwstd::facet_imp { void __stdcall vf1(void); }
namespace __rwstd::facet_imp { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_004113e0(int *param_1);
void __stdcall FUN_0041143c(void);
undefined * __stdcall FUN_0041147c(void);
undefined4 * __cdecl FUN_00411518(undefined4 *param_1);
namespace OWL::TAppDictionary { void __cdecl _dtor(int *param_1,byte param_2); }
undefined4 __cdecl FUN_004116c4(undefined4 *param_1,int param_2);
void __cdecl FUN_004116f4(undefined4 *param_1,undefined4 param_2,int param_3);
void __cdecl FUN_0041171c(undefined4 *param_1);
bool __cdecl FUN_00411768(undefined4 *param_1);
undefined4 * __cdecl FUN_00411794(undefined4 *param_1);
namespace OWL::TAppDictPidImp { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TAppDictPidImp { void __cdecl vf1(int param_1,int param_2,int param_3); }
namespace OWL::TAppDictPidImp { void __cdecl vf2(int *param_1); }
namespace OWL::TAppDictPidImp { int * __cdecl vf3(int param_1,int param_2); }
namespace OWL::TAppDictPidImp { uint __cdecl vf4(int param_1,int param_2); }
namespace OWL::TAppDictPidImp { void vf5(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,undefined *param_5); }
namespace OWL::TAppDictPidImp { int __cdecl vf6(int param_1); }
undefined4 * __cdecl FUN_00411970(int param_1);
void __stdcall FUN_0041199c(void);
int __cdecl FUN_004119ac(int param_1);
int * __cdecl FUN_004119f4(int param_1);
namespace OWL::TAppDictImp { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TAppDictInstImp { void __cdecl _dtor(int param_1,byte param_2); }
namespace OWL::TAppDictInstImp { void __cdecl vf1(int param_1,undefined4 param_2,undefined4 param_3); }
namespace OWL::TAppDictInstImp { void __cdecl vf2(int param_1); }
namespace OWL::TAppDictInstImp { int __cdecl vf3(int param_1); }
namespace OWL::TAppDictInstImp { int __cdecl vf4(int param_1); }
namespace OWL::TAppDictInstImp { void __cdecl vf5(undefined4 param_1,undefined *param_2); }
namespace OWL::TAppDictInstImp { bool __cdecl vf6(int param_1); }
uint * __cdecl FUN_00411c78(uint *param_1,undefined4 param_2,int param_3);
uint * __cdecl FUN_00411ce8(uint *param_1,int param_2,int param_3,byte param_4,byte param_5,void *param_6);
uint * __cdecl FUN_00411d5c(uint *param_1,undefined4 *param_2,int param_3,int param_4,char param_5);
uint * __cdecl FUN_00411de8(uint *param_1,uint *param_2);
uint * __cdecl FUN_00411ee0(uint *param_1,int param_2,uint *param_3);
namespace OWL::TBitmap { void __cdecl _dtor(uint *param_1,byte param_2); }
undefined4 __cdecl FUN_00412014(undefined4 *param_1);
undefined4 __cdecl FUN_0041203c(undefined4 *param_1);
undefined4 * __cdecl FUN_00412064(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_0041209c(uint *param_1,int param_2,uint *param_3);
void __cdecl FUN_00412140(uint *param_1,uint *param_2);
namespace OWL::TPalette { void __cdecl _dtor(uint *param_1,byte param_2); }
namespace OWL::TScreenDC { void __cdecl _dtor(int *param_1,byte param_2); }
namespace OWL::TButtonGadget { int vf28(...); }   // not decompiled
namespace OWL::TXOutOfMemory { void vf5(char *param_1,byte *param_2,int *param_3); }
namespace OWL::TFont { void __cdecl _dtor(uint *param_1,byte param_2); }
void __stdcall FUN_004128bc(void);
void __stdcall FUN_004128fc(void);
namespace OWL::TButtonGadgetEnabler { void __cdecl vf0(int param_1); }
namespace OWL::TButtonGadgetEnabler { void __stdcall vf1(void); }
namespace OWL::TButtonGadgetEnabler { void __cdecl vf2(int param_1,int param_2); }
int * __cdecl FUN_00412978(int *param_1,uint *param_2,undefined4 param_3,char param_4,undefined4 param_5, byte param_6,char param_7);
namespace OWL::TButtonGadget { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_00412b98(int param_1,byte param_2);
namespace OWL::TButtonGadget { void __cdecl vf5(int param_1); }
namespace OWL::TButtonGadget { void __cdecl vf6(int *param_1); }
void __cdecl FUN_00412cb8(int *param_1);
void __cdecl FUN_00412e08(int *param_1,int param_2);
namespace OWL::TButtonGadget { void __cdecl vf3(int *param_1,int *param_2); }
namespace OWL::TButtonGadget { void __cdecl vf2(int *param_1,int *param_2); }
namespace OWL::TButtonGadget { int * __cdecl vf22(int param_1); }
namespace OWL::TDib { void vf3(char *param_1,int param_2,char param_3); }
namespace OWL::TButtonGadget { void __cdecl vf23(undefined4 param_1,int param_2); }
namespace OWL::TButtonGadget { void __cdecl vf24(int *param_1); }
void __cdecl FUN_004132ac(int param_1,undefined4 param_2);
namespace OWL::TButtonGadget { void __cdecl vf12(int *param_1); }
namespace OWL::TButtonGadget { void __cdecl vf13(int param_1,undefined4 *param_2); }
undefined * __stdcall FUN_00413498(void);
namespace OWL::TButtonGadget { void __cdecl vf21(int param_1,int *param_2,int *param_3); }
namespace OWL::TButtonGadget { void __cdecl vf25(int param_1); }
namespace OWL::TButtonGadget { void __cdecl vf26(int param_1,undefined4 param_2,undefined1 param_3); }
namespace OWL::TButtonGadget { void __cdecl vf27(int *param_1); }
namespace OWL::TButtonGadget { void __cdecl vf17(int *param_1); }
namespace OWL::TButtonGadget { void __cdecl vf14(int param_1); }
namespace OWL::TButtonGadget { void __cdecl vf15(int *param_1); }
namespace OWL::TButtonGadget { void __cdecl vf16(int param_1); }
namespace OWL::TButtonGadget { void __cdecl vf19(int *param_1); }
namespace OWL::TStreamableBase { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 * __cdecl FUN_00413998(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 * __cdecl FUN_00413b14(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4, undefined4 param_5,int param_6);
namespace OWL::TCelArray { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
int * __cdecl FUN_00413c68(int *param_1,int param_2,int param_3,int param_4);
int * __cdecl FUN_00413ca4(int *param_1,int param_2,int param_3,int param_4);
undefined4 __cdecl FUN_00413d20(int param_1,uint *param_2);
undefined4 __cdecl FUN_00413db8(int param_1,int param_2,int param_3);
undefined4 __cdecl FUN_00413e58(int param_1,int param_2);
undefined4 __cdecl FUN_00413f68(int param_1,int param_2,uint *param_3);
uint __cdecl FUN_00413fd8(uint *param_1,uint *param_2,int *param_3,int *param_4,int param_5,int param_6);
undefined4 __cdecl FUN_004140e8(int param_1,int param_2);
undefined4 __cdecl FUN_00414128(int param_1,int param_2);
void __stdcall FUN_00414338(void);
HMODULE __stdcall FUN_0041434d(HANDLE param_1,LPCVOID param_2);
undefined4 __cdecl FUN_004143f4(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void __stdcall FUN_004145af(void);
void __stdcall FUN_004145ed(void);
undefined4 * __cdecl FUN_00414644(undefined4 *param_1,undefined4 param_2,byte param_3,char param_4);
namespace OWL::TDiagGroupDef { undefined4 __stdcall vf0(void); }
undefined4 * __cdecl FUN_004146c0(undefined4 *param_1,undefined4 param_2,byte param_3,char param_4);
namespace OWL::TDiagBase { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_00414788(undefined4 param_1);
void __cdecl FUN_004147b4(int param_1);
undefined * __stdcall FUN_004147e4(void);
void __stdcall FUN_0041483c(void);
undefined4 __stdcall FUN_0041487c(void);
void __stdcall FUN_004148c0(void);
undefined4 __stdcall FUN_00414924(void);
undefined4 __stdcall FUN_00414974(void);
undefined4 __stdcall FUN_004149c4(void);
namespace OWL::TDiagGroupDef { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __stdcall FUN_00414af4(void);
void __stdcall FUN_00414b04(void);
namespace OWL::TTmpBuffer_char { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
char * __cdecl FUN_00414cb8(char *param_1,HWND param_2,char param_3);
namespace OWL::TClipboard { void __cdecl _dtor(char *param_1,byte param_2); }
void __cdecl FUN_00414e34(undefined4 param_1,HWND param_2);
undefined4 * __cdecl FUN_00414e50(undefined4 *param_1,uint param_2);
namespace OWL::TXClipboard { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXClipboard { void __cdecl vf3(int *param_1); }
namespace OWL::TXClipboard { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 __stdcall FUN_00414ff0(void);
void __stdcall FUN_0041502c(void);
int __cdecl FUN_004152b4(short param_1);
undefined4 __cdecl FUN_004152f4(int param_1);
uint __cdecl FUN_00415340(uint *param_1);
uint __cdecl FUN_00415374(uint *param_1);
int __cdecl FUN_00415388(uint *param_1);
uint __cdecl FUN_004153a0(uint *param_1);
void __stdcall FUN_004153b4(void);
undefined * __stdcall FUN_004153f8(void);
undefined4 __stdcall FUN_00415450(void);
undefined4 __stdcall FUN_00415480(void);
undefined4 __stdcall FUN_004154b8(void);
undefined4 __stdcall FUN_00415500(void);
undefined4 __stdcall FUN_00415538(void);
undefined4 __stdcall FUN_00415570(void);
namespace OWL::TCommonDialog { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace OWL::TCommonDialog { void __cdecl EvClose(int *param_1); }
namespace OWL::TCommonDialog { void __cdecl CmRange1to2(int *param_1); }
int * __cdecl FUN_00415610(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5);
namespace OWL::TCommonDialog { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TCommonDialog { void __cdecl vf11(int *param_1); }
namespace OWL::TCommonDialog { void __stdcall vf4(void); }
namespace OWL::TCommonDialog { undefined4 __stdcall vf6(void); }
void __cdecl FUN_004159ac(int param_1,uint param_2);
int __cdecl FUN_004159f8(int param_1,uint param_2);
undefined4 __stdcall FUN_00415a44(int param_1);
undefined4 __stdcall FUN_00415a4a(void);
namespace OWL::TFile { undefined4 __cdecl vf1(int param_1); }
namespace OWL::TFile { void __cdecl vf4(int param_1); }
namespace OWL::TFile { void __cdecl vf5(int param_1); }
namespace OWL::TFile { void __cdecl vf6(int param_1); }
namespace OWL::TFile { void __cdecl vf7(int param_1); }
namespace OWL::TFile { void __cdecl vf8(int param_1); }
namespace OWL::TFile { void __cdecl vf9(int param_1); }
namespace OWL::TFile { void __cdecl vf10(int param_1); }
namespace OWL::TFile { void __cdecl vf11(int param_1); }
namespace OWL::TFile { void __cdecl vf12(int param_1); }
namespace OWL::TFile { void __cdecl vf13(int param_1); }
namespace OWL::TFile { void __cdecl vf17(int param_1); }
namespace OWL::TFile { void __cdecl vf18(int param_1); }
namespace OWL::TFile { undefined4 __cdecl vf25(int *param_1,undefined4 param_2); }
namespace OWL::TFile { void __cdecl vf32(int *param_1,uint *param_2); }
void __stdcall FUN_00415d34(void);
namespace OWL::TMBlockList_TStandardAllocator { void __cdecl _dtor(int param_1,byte param_2); }
namespace OWL::TMMemBlocks_TStandardAllocator { void __cdecl _dtor(int param_1,byte param_2); }
namespace OWL::TMMemStack_TStandardAllocator { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_00415f38(int param_1,byte param_2);
int * __cdecl FUN_00415f60(int *param_1,int param_2,undefined4 param_3,undefined1 param_4,uint *param_5, int param_6);
namespace OWL::TControl::Streamer { int vf4(...); }   // not decompiled
namespace OWL::TControlBar { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TGadgetWindow { undefined4 __cdecl vf3(int param_1); }
void __cdecl FUN_00416594(int param_1,byte param_2);
undefined4 * __cdecl FUN_00416614(undefined4 *param_1);
namespace OWL::TCreatedDC { void __cdecl _dtor(int *param_1,byte param_2); }
int * __cdecl FUN_004166f4(int *param_1,int param_2,int param_3);
int * __cdecl FUN_00416744(int *param_1,uint param_2,uint param_3,uint param_4);
int * __cdecl FUN_0041677c(int *param_1,ushort *param_2);
bool __cdecl FUN_004167c0(uint param_1,uint param_2,uint param_3);
int __cdecl FUN_00416814(uint param_1,uint param_2,uint param_3);
undefined4 __cdecl FUN_00416898(uint param_1);
void __cdecl FUN_004168d0(int *param_1,uint *param_2,uint *param_3,uint *param_4);
uint __cdecl FUN_00416980(int *param_1);
int * __cdecl FUN_004169a8(int *param_1,int *param_2,int param_3);
int __cdecl FUN_004169e4(int *param_1,uint param_2);
uint __cdecl FUN_00416a34(int *param_1);
void __cdecl FUN_00416a5c(int *param_1,int *param_2,int param_3);
void __cdecl FUN_00416a70(int param_1);
undefined4 * __cdecl FUN_00416a98(undefined4 *param_1,undefined4 param_2);
undefined4 * __cdecl FUN_00416afc(undefined4 *param_1);
namespace OWL::TDC { void __cdecl _dtor(int *param_1,byte param_2); }
namespace OWL::TDC { undefined4 __cdecl vf23(undefined4 *param_1); }
void __cdecl FUN_00416b78(undefined4 *param_1,uint *param_2);
namespace OWL::TDC { void __cdecl vf5(undefined4 *param_1,uint *param_2); }
void __cdecl FUN_00416c00(undefined4 *param_1,uint *param_2,byte param_3);
namespace OWL::TDC { void __cdecl vf6(undefined4 *param_1,int param_2); }
void __cdecl FUN_00416c78(undefined4 *param_1);
void __cdecl FUN_00416ca4(undefined4 *param_1);
namespace OWL::TDC { void __cdecl vf7(undefined4 *param_1); }
void __cdecl FUN_00416cfc(undefined4 *param_1);
void __cdecl FUN_00416d28(undefined4 *param_1);
void __cdecl FUN_00416d54(undefined4 *param_1);
void __cdecl FUN_00416d80(int *param_1);
void __cdecl FUN_00416dbc(undefined4 *param_1,uint *param_2,int *param_3,int param_4,int param_5,DWORD param_6);
namespace OWL::TDC { void __cdecl vf1(undefined4 *param_1); }
namespace OWL::TDC { bool __cdecl vf2(undefined4 *param_1,int param_2); }
namespace OWL::TDC { void __cdecl vf3(int param_1,int param_2); }
namespace OWL::TDC { bool __cdecl vf4(undefined4 *param_1,DEVMODEA *param_2); }
namespace OWL::TDC { COLORREF * __cdecl vf8(COLORREF *param_1,int *param_2,uint *param_3); }
namespace OWL::TDC { COLORREF * __cdecl vf9(COLORREF *param_1,int *param_2,uint *param_3); }
namespace OWL::TDC { void __cdecl vf10(int *param_1,int param_2); }
namespace OWL::TDC { bool __cdecl vf11(int *param_1,int *param_2,LPPOINT param_3); }
namespace OWL::TDC { bool __cdecl vf12(int *param_1,int *param_2,LPPOINT param_3); }
namespace OWL::TDC { bool __cdecl vf13(int *param_1,int *param_2,LPSIZE param_3); }
namespace OWL::TDC { bool __cdecl vf14(int *param_1,int param_2,int param_3,int param_4,int param_5,LPSIZE param_6); }
namespace OWL::TDC { bool __cdecl vf15(int *param_1,int *param_2,LPSIZE param_3); }
namespace OWL::TDC { bool __cdecl vf16(int *param_1,int param_2,int param_3,int param_4,int param_5,LPSIZE param_6); }
namespace OWL::TDC { bool __cdecl vf17(undefined4 *param_1,int param_2,int param_3,uint *param_4,char *param_5); }
namespace OWL::TDC { bool __cdecl vf18(undefined4 *param_1,int param_2,int param_3,ushort param_4,RECT *param_5,uint *param_6, char *param_7,INT *param_8); }
namespace OWL::TDC { undefined4 __cdecl vf19(undefined4 *param_1,int *param_2,uint *param_3,char *param_4,int param_5,INT *param_6, int param_7,uint *param_8); }
namespace OWL::TDC { void __cdecl vf20(undefined4 *param_1,LPCSTR param_2,int param_3,LPRECT param_4,ushort param_5); }
namespace OWL::TDC { void __cdecl vf21(undefined4 *param_1,LPSTR param_2,int param_3,LPRECT param_4,UINT param_5, LPDRAWTEXTPARAMS param_6); }
namespace OWL::TDC { bool __cdecl vf22(undefined4 *param_1,undefined4 *param_2,GRAYSTRINGPROC param_3,LPARAM param_4, int param_5,int *param_6); }
namespace OWL::TMemoryDC { void __cdecl vf5(undefined4 *param_1,uint *param_2); }
void __cdecl FUN_0041737c(undefined4 param_1,undefined *param_2);
undefined1 __cdecl FUN_004173a4(undefined4 param_1,undefined *param_2);
undefined1 __cdecl FUN_004173d4(undefined4 param_1,undefined *param_2);
void __cdecl FUN_0041740c(undefined4 param_1,undefined *param_2);
void __cdecl FUN_00417438(undefined4 param_1,undefined *param_2);
void __cdecl FUN_0041745c(undefined4 param_1,undefined *param_2);
undefined1 __cdecl FUN_00417480(undefined4 param_1,undefined *param_2);
bool __cdecl FUN_004174a8(undefined4 param_1,undefined *param_2);
void __cdecl FUN_004174d8(undefined4 param_1,undefined *param_2);
void __cdecl FUN_00417500(undefined4 param_1,undefined *param_2);
undefined1 __cdecl FUN_00417540(undefined4 param_1,undefined *param_2);
void __cdecl FUN_0041759c(undefined4 param_1,undefined *param_2);
undefined1 __cdecl FUN_004175d8(undefined4 param_1,undefined *param_2);
void __cdecl FUN_00417618(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0041764c(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_00417670(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_00417698(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_004176d8(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_00417700(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_00417744(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_00417770(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_004177a4(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_004177d8(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_00417810(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_00417848(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_00417888(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_004178b0(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_004178ec(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_00417918(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_00417950(undefined4 param_1,undefined *param_2,undefined4 param_3,int param_4,ushort param_5);
namespace OWL::TEventHandler { undefined4 __stdcall vf0(void); }
undefined4 __cdecl FUN_004179cc(undefined4 param_1,int param_2);
undefined4 __cdecl FUN_004179f4(undefined4 param_1,int *param_2,int *param_3,undefined *param_4);
undefined4 * __cdecl FUN_00417a4c(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_00417b88(undefined4 *param_1,int *param_2);
namespace OWL::TXBase { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TXBase { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXBase { void __cdecl vf3(int *param_1); }
namespace OWL::TXBase { undefined4 __cdecl vf1(int param_1); }
undefined4 __stdcall FUN_00417dd0(void);
undefined4 __stdcall FUN_00417e24(undefined4 param_1,undefined1 *param_2);
undefined4 __cdecl FUN_00417e34(int *param_1,LPCSTR param_2,char *param_3);
undefined4 * __cdecl FUN_00417f14(undefined4 *param_1,int param_2,undefined4 param_3);
undefined4 * __cdecl FUN_00417f7c(undefined4 *param_1,uint param_2,int param_3);
namespace OWL::TXOwl { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TXOwl { void __cdecl vf4(undefined4 param_1,int *param_2); }
namespace OWL::TXOwl { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXOwl { void __cdecl vf3(int *param_1); }
undefined4 * __cdecl FUN_004181c8(undefined4 *param_1,int *param_2);
void __cdecl FUN_00418210(int param_1,undefined4 param_2);
int __cdecl FUN_00418264(int param_1,char *param_2,uint param_3,int param_4);
int __cdecl FUN_00418444(int param_1,uint param_2,undefined4 param_3,int param_4);
int __cdecl FUN_00418548(int param_1,uint param_2,undefined4 param_3,int param_4);
undefined4 * __cdecl FUN_0041864c(undefined4 *param_1);
namespace OWL::TXOutOfMemory { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXOutOfMemory { void __cdecl vf3(int *param_1); }
void __stdcall FUN_00418860(void);
namespace OWL::TXOutOfMemory { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
uint * __cdecl FUN_004188f4(uint *param_1,undefined4 param_2,int param_3);
uint * __cdecl FUN_00418948(uint *param_1,LPCSTR param_2,int param_3,int param_4,int param_5,int param_6, int param_7,byte param_8,byte param_9,byte param_10,byte param_11,byte param_12, byte param_13,byte param_14,byte param_15);
uint * __cdecl FUN_004189e8(uint *param_1,LOGFONTA *param_2);
void __cdecl FUN_00418a48(undefined4 param_1,LPTEXTMETRICA param_2,int param_3);
void __cdecl FUN_00418a84(undefined4 param_1,LPTEXTMETRICA param_2);
LONG * __cdecl FUN_00418ae8(LONG *param_1,undefined4 param_2);
LONG * __cdecl FUN_00418b6c(LONG *param_1,undefined4 param_2,uint *param_3);
LONG * __cdecl FUN_00418bd8(LONG *param_1,undefined4 param_2,int param_3,uint *param_4);
int __cdecl FUN_00418c54(int param_1,undefined4 *param_2);
undefined1 __cdecl FUN_00418cb0(undefined4 *param_1);
uint * __cdecl FUN_00418cd8(uint *param_1);
namespace OWL::TDefaultGUIFont { void __cdecl _dtor(uint *param_1,byte param_2); }
int __cdecl FUN_00418df8(int param_1,int param_2);
undefined4 __cdecl FUN_00418e10(int param_1);
void __cdecl FUN_00418e38(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6);
undefined4 * __stdcall FUN_00418f5c(undefined4 *param_1,undefined4 param_2);
int __stdcall FUN_00418f62(void);
namespace OWL::TGadget { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TGadget { undefined4 __cdecl vf4(int *param_1,int param_2); }
namespace OWL::TGadget { void __stdcall vf5(void); }
namespace OWL::TGadget { void __stdcall vf6(void); }
namespace OWL::TGadget { void __cdecl vf1(int param_1,char param_2); }
namespace OWL::TGadget { void __cdecl vf3(int *param_1,int *param_2); }
void __cdecl FUN_0041919c(int param_1,undefined4 *param_2);
void __cdecl FUN_004191cc(int param_1,undefined4 param_2);
namespace OWL::TGadget { undefined4 __cdecl vf11(int param_1,int *param_2); }
namespace OWL::TGadget { void __cdecl vf7(int param_1); }
namespace OWL::TGadget { void __stdcall vf8(void); }
namespace OWL::TGadget { void __cdecl vf10(int param_1); }
namespace OWL::TGadget { void __cdecl vf9(int param_1); }
void __cdecl FUN_004195a8(int param_1);
void __cdecl FUN_00419608(int param_1);
void __cdecl FUN_00419654(int param_1);
namespace OWL::TGadget { void __cdecl vf13(int param_1,undefined4 *param_2); }
namespace OWL::TGadget { void __cdecl vf12(int *param_1); }
namespace OWL::TGadget { void __cdecl vf2(int param_1,int *param_2); }
void __cdecl FUN_00419838(int param_1,int *param_2,int *param_3,int *param_4,int *param_5);
void __cdecl FUN_004198f0(int param_1,int *param_2);
namespace OWL::TGadget { void __cdecl vf14(int param_1); }
namespace OWL::TGadget { void __stdcall vf15(void); }
namespace OWL::TGadget { void __cdecl vf16(int param_1); }
namespace OWL::TGadget { void __cdecl vf17(int param_1); }
namespace OWL::TGadget { void __cdecl vf19(int param_1); }
namespace OWL::TGadget { void __stdcall vf18(void); }
namespace OWL::TGadget { void __stdcall vf20(void); }
int * __cdecl FUN_00419a98(int *param_1,int param_2,undefined4 param_3,undefined1 param_4);
namespace OWL::TSeparatorGadget { void __cdecl vf8(int param_1); }
namespace OWL::TSeparatorGadget { void __cdecl vf12(int *param_1,undefined4 *param_2); }
namespace OWL::TSeparatorGadget { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 * __cdecl FUN_00419dc8(undefined4 *param_1);
namespace OWL::TGadgetList { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
int * __cdecl FUN_00419ec8(int param_1);
namespace OWL::TGadgetList { void __cdecl vf1(int *param_1,int param_2,int param_3,int param_4); }
namespace OWL::TGadgetList { void vf2(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5, int param_6,int param_7); }
namespace OWL::TGadgetList { int __cdecl vf3(int *param_1,int param_2); }
namespace OWL::TGadgetList { void __stdcall vf4(void); }
namespace OWL::TGadgetList { void __stdcall vf5(void); }
namespace OWL::TGadgetWindow { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
uint * __cdecl FUN_0041a0b0(uint *param_1,int param_2,char param_3,byte param_4);
int * __cdecl FUN_0041a280(int *param_1,int param_2,undefined4 param_3,undefined1 param_4,uint *param_5, int param_6);
namespace OWL::TGadgetWindow { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TGadgetWindow { void EvSysColorChange(undefined4 param_1,undefined4 param_2,int *param_3,int param_4); }
namespace OWL::TGadgetWindow { void __cdecl vf12(int *param_1,int param_2); }
uint __cdecl FUN_0041a798(int *param_1);
undefined4 __cdecl FUN_0041a7dc(int *param_1,int param_2);
void __cdecl FUN_0041a800(int param_1,int param_2);
void __cdecl FUN_0041a81c(int *param_1,int param_2);
namespace OWL::TGadgetWindow { void __cdecl vf13(int *param_1); }
namespace OWL::TGadgetWindow { void __cdecl vf14(int *param_1,undefined4 *param_2); }
undefined4 * __cdecl FUN_0041a9e0(undefined4 *param_1);
int __cdecl FUN_0041aa7c(int *param_1);
namespace OWL::TGadgetWindow { void __cdecl vf1(int *param_1); }
namespace OWL::TGadgetWindow { void __cdecl vf2(int *param_1,int param_2); }
namespace OWL::TGadgetWindow { void __cdecl vf16(int *param_1,int *param_2); }
namespace OWL::TGadgetWindow { void __cdecl vf20(int param_1,int param_2,int param_3,int *param_4); }
namespace OWL::TGadgetWindow { int * __cdecl vf18(int *param_1,int param_2); }
void __cdecl FUN_0041ae00(int param_1,int *param_2);
void __cdecl FUN_0041b0d0(int param_1,int *param_2);
void __cdecl FUN_0041b2e8(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6, int *param_7);
void __cdecl FUN_0041b3b8(int param_1,int *param_2);
namespace OWL::TGadgetWindow { void __cdecl vf17(int param_1,int param_2,int *param_3); }
void __cdecl FUN_0041b748(int param_1);
namespace OWL::TGadgetWindow { void __cdecl vf5(int *param_1,int param_2,int param_3,int param_4); }
namespace OWL::TGadgetWindow { void vf6(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5 ,int param_6,int param_7); }
namespace OWL::TGadgetWindow { void __cdecl vf8(int *param_1,int *param_2); }
namespace OWL::TGadgetWindow { int __cdecl vf7(int param_1,int param_2); }
namespace OWL::TGadgetWindow { void __cdecl vf9(int param_1,int *param_2); }
namespace OWL::TGadgetWindow { void __cdecl vf10(int param_1,undefined4 param_2); }
namespace OWL::TGadgetWindow { undefined4 __cdecl vf11(int param_1,int param_2,int param_3); }
namespace OWL::TGadgetWindow { bool __cdecl vf21(int *param_1); }
namespace OWL::TGadgetWindow { void __cdecl vf22(int *param_1); }
namespace OWL::TGadgetWindow { void __cdecl vf23(int *param_1,LPMSG param_2); }
namespace OWL::TGadgetWindow { void __cdecl EvMsg_7ef2(int param_1); }
namespace OWL::TGadgetWindow { void __cdecl EvWindowPosChanging(int *param_1,int param_2); }
namespace OWL::TGadgetWindow { void __cdecl vf15(int param_1,undefined4 *param_2,undefined4 param_3,int *param_4); }
namespace OWL::TGadgetWindow { void __cdecl vf19(int param_1,int param_2); }
namespace OWL::TGadgetWindow { void __cdecl EvLButtonDown(int *param_1); }
namespace OWL::TGadgetWindow { void __cdecl EvLButtonUp(int *param_1); }
namespace OWL::TGadgetWindow { void __cdecl EvLButtonDblClk(int *param_1); }
namespace OWL::TGadgetWindow { void __cdecl EvRButtonDown(int *param_1); }
namespace OWL::TGadgetWindow { void __cdecl EvRButtonUp(int *param_1); }
namespace OWL::TGadgetWindow { void __cdecl EvMouseMove(int *param_1); }
namespace OWL::TGadgetList { void __stdcall vf6(int *param_1); }
void __stdcall FUN_0041c0ec(int *param_1);
void __stdcall FUN_0041c0f8(int *param_1);
namespace OWL::TGadgetWindow { void __cdecl vf4(int *param_1,byte param_2); }
void __cdecl FUN_0041c1d4(int *param_1,undefined4 param_2);
namespace OWL::TGadgetWindow { undefined4 __cdecl vf24(int *param_1,int param_2,HWND param_3,undefined4 param_4); }
namespace OWL::TGadgetWindow { void __cdecl vf25(int *param_1,int param_2); }
namespace OWL::TGadgetWindow::TLayoutInfo { void __cdecl _dtor(int param_1,byte param_2); }
namespace OWL::TGadgetWindowFont { void __cdecl _dtor(uint *param_1,byte param_2); }
void __cdecl FUN_0041c768(undefined4 *param_1);
namespace OWL::TAPointer_OWL_TRect { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 * __cdecl FUN_0041c798(undefined4 *param_1);
undefined4 * __cdecl FUN_0041c7c8(undefined4 *param_1,undefined4 param_2,int param_3);
void __cdecl FUN_0041c800(int *param_1,uint param_2);
void __cdecl FUN_0041c818(int param_1,uint param_2);
undefined4 * __cdecl FUN_0041c830(undefined4 *param_1,uint param_2,undefined4 param_3);
namespace OWL::TXGdi { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXGdi { void __cdecl vf3(int *param_1); }
void __cdecl FUN_0041cad0(uint param_1,undefined4 param_2);
namespace OWL::TXGdi { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 __stdcall FUN_0041cb6c(void);
LONG __stdcall FUN_0041cc5e(void);
void __cdecl FUN_0041cd64(int param_1);
undefined4 __cdecl FUN_0041cdb0(uint param_1);
uint __cdecl FUN_0041ce7c(int param_1,uint *param_2);
void __cdecl FUN_0041cf04(uint param_1,undefined1 param_2);
int __stdcall FUN_0041cf90(int param_1,uint *param_2);
int __stdcall FUN_0041cf96(void);
void __cdecl FUN_0041d0bc(int param_1,int param_2);
void __cdecl FUN_0041d158(uint param_1);
uint __cdecl FUN_0041d184(uint param_1);
undefined4 * __cdecl FUN_0041d2ac(undefined4 *param_1);
undefined4 * __cdecl FUN_0041d2fc(undefined4 *param_1,undefined4 param_2,int param_3);
namespace OWL::TGdiObject { void __cdecl _dtor(uint *param_1,byte param_2); }
namespace OWL::TObjInfo { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_0041d474(int param_1,byte param_2);
void __cdecl FUN_0041d590(int param_1,byte param_2);
void __cdecl FUN_0041d660(int param_1,byte param_2);
void __cdecl FUN_0041d724(int *param_1,int param_2,int param_3);
int * __cdecl FUN_0041d740(int *param_1,int param_2,int param_3);
void __cdecl FUN_0041d75c(int *param_1,int *param_2);
void __cdecl FUN_0041d810(int *param_1,int *param_2);
undefined4 __cdecl FUN_0041d8bc(int param_1);
int __cdecl FUN_0041d8d6(int param_1,int param_2);
void __cdecl FUN_0041d8f1(int param_1,int param_2,int param_3);
void __stdcall FUN_0041dae4(void);
void __stdcall FUN_0041db3a(void);
undefined4 * __cdecl FUN_0041db6a(undefined4 *param_1);
undefined4 * __cdecl FUN_0041db94(undefined4 *param_1,int param_2);
bool __cdecl FUN_0041dbf4(int *param_1,HWND param_2,HWND param_3,int param_4,int param_5,int param_6,int param_7, UINT param_8);
undefined4 __cdecl FUN_0041dc28(undefined4 *param_1);
namespace OWL::TDeferWinPos { void __cdecl _dtor(int *param_1,byte param_2); }
namespace OWL::TLayoutWindow { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
undefined4 * __cdecl FUN_0041dcb8(undefined4 *param_1);
namespace OWL::TLayoutWindow { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TLayoutWindow { void __cdecl vf1(int *param_1); }
void __cdecl FUN_0041e018(int param_1,int param_2,undefined4 *param_3);
undefined4 __cdecl FUN_0041e0e8(int param_1,int param_2,undefined4 *param_3);
undefined4 __cdecl FUN_0041e11c(int param_1,int param_2);
namespace OWL::TLayoutWindow { void __cdecl EvSize(int *param_1,int param_2,int *param_3); }
namespace OWL::TLayoutWindow { void __cdecl vf2(int *param_1,int param_2); }
int __cdecl FUN_0041e348(int param_1,int param_2);
void __cdecl FUN_0041e368(int param_1);
void __cdecl FUN_0041e38c(int param_1);
void __cdecl FUN_0041e3c4(int *param_1);
void __cdecl FUN_0041e4b8(int *param_1,int param_2,int *param_3,int param_4);
void __cdecl FUN_0041e954(int param_1,undefined1 *param_2);
void __cdecl FUN_0041e9c8(int *param_1,char *param_2);
int __cdecl FUN_0041ebb4(int param_1,int param_2);
void __cdecl FUN_0041ebd4(int *param_1);
undefined4 * __cdecl FUN_0041ec68(undefined4 *param_1,int *param_2);
int * __cdecl FUN_0041ecd0(int *param_1,int param_2);
namespace OWL::TLayoutWindow::Streamer { undefined4 __cdecl vf1(int param_1); }
namespace OWL::TLayoutWindow::Streamer { void __stdcall vf2(void); }
undefined1 * __cdecl FUN_0041edf0(undefined1 *param_1,undefined4 param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_0041eeb0(undefined4 *param_1);
undefined4 __cdecl FUN_0041ef18(int *param_1);
int __cdecl FUN_0041ef54(int *param_1);
int __cdecl FUN_0041efc8(int param_1);
undefined4 * __cdecl FUN_0041efe0(undefined4 *param_1);
undefined4 * __cdecl FUN_0041f0d8(int *param_1);
namespace OWL::TLayoutWindow::Streamer { undefined4 __stdcall vf3(void); }
undefined * __stdcall FUN_0041f2cc(void);
void __stdcall FUN_0041f363(void);
undefined4 * __cdecl FUN_0041f3f8(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
int __stdcall FUN_0041f43c(void);
undefined4 * __cdecl FUN_0041f450(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
uint * __cdecl FUN_0041f4d0(undefined4 *param_1,char *param_2);
int __cdecl FUN_0041f724(int param_1,ushort param_2);
namespace OWL::_TLocaleCacheList { void __cdecl _dtor(int *param_1,byte param_2); }
void __cdecl FUN_0041f908(int *param_1,int param_2);
int __cdecl FUN_0041f91c(int *param_1,ushort param_2);
undefined4 __cdecl FUN_0041fa00(ushort param_1);
namespace OWL::_TLocaleCache { void __cdecl _dtor(int param_1,byte param_2); }
int __cdecl FUN_0041faf8(char *param_1,char *param_2);
undefined * __stdcall FUN_0041fb78(void);
void __stdcall FUN_0041fbc3(void);
char * __cdecl FUN_0041fd2c(uint *param_1);
undefined4 * __cdecl FUN_0041fd74(undefined4 *param_1);
int * __cdecl FUN_0042027c(int *param_1,int param_2);
namespace OWL::TTmpBufferBase { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::__TFixedAlloc { void __cdecl _dtor(int param_1,byte param_2); }
undefined * __stdcall FUN_00420530(void);
void __stdcall FUN_00420579(void);
int __cdecl FUN_0042060c(int param_1);
namespace OWL::TMemDCCache { void __cdecl _dtor(int param_1,byte param_2); }
undefined4 __cdecl FUN_004206b0(int param_1);
void __cdecl FUN_00420708(int param_1,int param_2);
int * __cdecl FUN_0042073c(int *param_1);
int * __cdecl FUN_004207a4(int *param_1,undefined4 *param_2);
int * __cdecl FUN_0042080c(int *param_1,uint *param_2);
void __cdecl FUN_00420864(int *param_1);
void __cdecl FUN_004208a4(undefined4 *param_1,uint *param_2);
void __cdecl FUN_004208e8(undefined4 *param_1);
namespace OWL::TMemoryDC { int * __cdecl _dtor(int *param_1,byte param_2); }
undefined4 * __cdecl FUN_004209a8(undefined4 *param_1,int param_2);
namespace OWL::TMemoryDC { undefined4 vf24(byte *param_1,undefined **param_2,byte *param_3); }
undefined4 * __cdecl FUN_00420a20(undefined4 *param_1,int *param_2,int param_3);
undefined4 * __cdecl FUN_00420a90(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * __cdecl FUN_00420adc(undefined4 *param_1,HWND param_2,int param_3);
namespace OWL::TMenu { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
UINT __cdecl FUN_00420b74(int param_1,int param_2);
void __cdecl FUN_00420c24(int param_1,uint param_2);
namespace OWL::TMenu { void __stdcall vf2(void); }
namespace OWL::TMenu { void __stdcall vf3(void); }
int * __cdecl FUN_00420c4c(int param_1,int *param_2,int param_3,int param_4);
undefined4 * __cdecl FUN_00420de8(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_00420e50(undefined4 *param_1,uint param_2);
namespace OWL::TXMenu { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXMenu { void __cdecl vf3(int *param_1); }
void __cdecl FUN_00421050(uint param_1);
namespace OWL::TXMenu { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TMenu { undefined4 __cdecl vf1(int param_1); }
namespace OWL::TMenu { int vf4(...); }   // not decompiled
namespace OWL::TMessageBar { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TMessageBar { void vf15(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4, undefined4 *param_5,undefined1 param_6,int *param_7); }
namespace OWL::TMessageBar { void __cdecl vf16(int *param_1,int *param_2); }
namespace OWL::TMessageBar { void __cdecl vf14(int *param_1,undefined4 *param_2); }
namespace OWL::TMessageBar { void __cdecl vf27(int *param_1,uint *param_2); }
namespace OWL::TSystemMessage { void __cdecl _dtor(int param_1,byte param_2); }
undefined4 * __cdecl FUN_004216ec(undefined4 *param_1);
namespace OWL::TMsgThread { undefined4 __cdecl vf0(int *param_1); }
namespace OWL::TMsgThread { undefined4 __stdcall vf1(void); }
namespace OWL::TMsgThread { undefined4 __cdecl vf2(undefined4 param_1,MSG *param_2); }
undefined4 __cdecl FUN_004217e8(int *param_1);
void __stdcall FUN_00421844(void);
namespace OWL::TMsgThread { void __cdecl vf3(int *param_1); }
namespace OWL::TMsgThread { undefined4 __stdcall vf4(void); }
namespace OWL::TMsgThread { undefined4 __cdecl vf5(undefined4 param_1,undefined4 param_2); }
void __cdecl FUN_00421928(undefined4 param_1,int param_2);
void __cdecl FUN_00421944(undefined4 param_1,int param_2);
undefined4 __cdecl FUN_00421960(undefined4 param_1,uint *param_2);
void __stdcall FUN_0042197c(void);
void __stdcall FUN_004219f8(void);
int __cdecl FUN_00421a30(int param_1,int param_2);
void __cdecl FUN_00421ae0(int param_1,int param_2);
uint __cdecl FUN_00421b7c(int param_1,int param_2);
undefined4 * __cdecl FUN_00421cd4(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int param_5);
namespace OWL::TStreamableClass { void __cdecl _dtor(int param_1,byte param_2); }
int * __cdecl FUN_00421d9c(int *param_1);
namespace OWL::TStreamableTypes { void __cdecl _dtor(int *param_1,byte param_2); }
void __cdecl FUN_00421ed4(int param_1,char param_2);
void __cdecl FUN_00421f20(int *param_1,undefined4 param_2,int param_3);
void __cdecl FUN_00421f38(int *param_1,undefined4 param_2,int param_3);
undefined4 __cdecl FUN_00421fa4(int *param_1,undefined4 param_2,uint *param_3);
void __cdecl FUN_00422424(int *param_1,undefined4 param_2);
void __cdecl FUN_00422458(int param_1,int param_2);
undefined4 __cdecl FUN_004224f4(int *param_1,uint param_2);
void __cdecl FUN_00422514(int param_1,int param_2);
void __cdecl FUN_004225b0(int *param_1,int param_2);
int __stdcall FUN_004225dc(int param_1,uint *param_2);
int __stdcall FUN_004225e2(void);
undefined4 __cdecl FUN_004226e4(int param_1,int param_2);
uint __cdecl FUN_00422728(int param_1,uint *param_2);
void __stdcall FUN_004227b0(void);
uint __cdecl FUN_004227b8(int *param_1);
void __cdecl FUN_0042280c(int *param_1,undefined4 param_2,int param_3);
void __cdecl FUN_00422858(int *param_1,undefined4 *param_2,uint param_3);
uint __cdecl FUN_00422908(int *param_1);
uint __cdecl FUN_0042292c(int *param_1);
undefined4 __cdecl FUN_00422970(int *param_1);
uint __cdecl FUN_004229b4(int *param_1);
int __cdecl FUN_004229e8(int *param_1,int param_2,int param_3);
undefined4 * __cdecl FUN_00422a30(int *param_1);
int __cdecl FUN_00422a7c(int *param_1,undefined4 param_2);
void __cdecl FUN_00422b00(int *param_1,undefined4 *param_2,int *param_3);
void __cdecl FUN_00422bec(int *param_1);
int __cdecl FUN_00422c1c(int *param_1,int *param_2,undefined4 param_3);
void __cdecl FUN_00422ca4(int *param_1,byte param_2);
void __cdecl FUN_00422d00(int *param_1,undefined4 param_2,int param_3);
void __cdecl FUN_00422d4c(int *param_1);
void __cdecl FUN_00422d88(int *param_1);
void __cdecl FUN_00422dc4(int *param_1,undefined4 *param_2,uint param_3);
void __cdecl FUN_00422e30(int *param_1,uint *param_2);
void __cdecl FUN_00422e78(int *param_1,uint *param_2);
void __cdecl FUN_00422ec0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_00422efc(int *param_1,int *param_2,undefined4 param_3);
void __cdecl FUN_00422f74(int *param_1,int *param_2);
void __cdecl FUN_00422fc0(int *param_1,int *param_2,undefined4 param_3);
void __cdecl FUN_004231c4(undefined4 *param_1);
namespace OWL::TPointer_OWL_TStreamer { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_004231f4(int param_1,byte param_2);
void __cdecl FUN_00423348(int param_1,byte param_2);
void __cdecl FUN_00423498(int param_1,byte param_2);
void __cdecl FUN_00423594(int param_1,byte param_2);
void __cdecl FUN_00423654(int param_1,byte param_2);
FARPROC __stdcall FUN_00423684(void);
void __stdcall FUN_0042369a(void);
undefined4 __stdcall FUN_004236d8(void);
undefined * __stdcall FUN_004236e0(void);
void __cdecl FUN_004236e8(undefined4 param_1);
void __stdcall FUN_004236f8(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
undefined1 * __cdecl FUN_00423760(undefined4 param_1);
undefined4 * __stdcall FUN_00423828(void);
void __stdcall FUN_004238e0(void);
void __cdecl FUN_004238e8(int param_1);
void FUN_00423910(int param_1);
namespace TThunkAllocator { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_004239d4(LPVOID param_1);
int * __cdecl FUN_004239f8(int *param_1,HWND param_2);
namespace OWL::TPaintDC { void __cdecl _dtor(int *param_1,byte param_2); }
uint * __cdecl FUN_00423b58(uint *param_1,undefined4 param_2,int param_3);
namespace OWL::TPaintDC { int vf24(...); }   // not decompiled
uint * __cdecl FUN_00423bc8(uint *param_1,int param_2,BYTE param_3);
void __cdecl FUN_00423c10(uint *param_1,int param_2,BYTE param_3);
namespace OWL::TFileName { void __cdecl _dtor(int param_1,byte param_2); }
int * __cdecl FUN_00424178(int *param_1,int param_2,undefined4 param_3,uint param_4);
undefined4 __cdecl FUN_004242cc(int param_1,LPCSTR param_2);
namespace OWL::TPickListPopup { undefined4 __cdecl vf7(int param_1); }
namespace OWL::TPickListPopup { undefined4 __cdecl vf18(int param_1,undefined4 param_2); }
namespace OWL::TPickListPopup { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TView { undefined4 __cdecl vf1(int param_1); }
namespace OWL::TView { undefined4 __cdecl vf2(int param_1); }
namespace OWL::TView { undefined4 __stdcall vf6(void); }
namespace OWL::TView { undefined4 __stdcall vf11(void); }
namespace OWL::TToolbarRes { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TResource_OWL_TOOLBARTEMPLATE_241 { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 __cdecl FUN_00424668(int param_1);
undefined4 __cdecl FUN_00424678(int param_1);
undefined4 __cdecl FUN_00424684(int param_1);
undefined2 __cdecl FUN_00424690(int param_1);
int __cdecl FUN_004246a8(int param_1);
undefined2 __cdecl FUN_004246bc(int param_1);
undefined2 __cdecl FUN_004246d4(int param_1);
undefined * __cdecl FUN_004247b0(undefined4 *param_1,char *param_2,ushort param_3);
int * __cdecl FUN_00424804(int *param_1);
namespace OWL::TRegion { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TRegLink { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __stdcall FUN_00424938(void);
void __stdcall FUN_0042498e(void);
undefined4 * __cdecl FUN_004249c0(undefined4 *param_1,int *param_2);
int * __cdecl FUN_00424a28(int *param_1,int param_2);
int * __cdecl FUN_00424ae8(int *param_1,undefined4 *param_2);
int * __cdecl FUN_00424b38(int *param_1,int param_2);
namespace OWL::TWindow::Streamer { int __cdecl vf1(int param_1,int *param_2,int param_3); }
namespace OWL::TWindow::Streamer { void __cdecl vf2(int param_1,int *param_2); }
undefined4 * __cdecl FUN_00425150(int *param_1);
namespace OWL::TWindow::Streamer { undefined4 __stdcall vf3(void); }
void __cdecl FUN_004252b8(int *param_1,int *param_2,int param_3);
int * __cdecl FUN_004252e4(int *param_1,uint param_2);
int * __cdecl FUN_004253d4(int *param_1,uint param_2);
uint * __cdecl FUN_0042541c(uint *param_1,int *param_2,int param_3,int param_4,int param_5);
uint * __cdecl FUN_004254bc(uint *param_1,FILETIME *param_2);
undefined4 __cdecl FUN_00425520(uint *param_1);
undefined4 * __cdecl FUN_00425594(undefined4 *param_1,char param_2);
undefined4 * __cdecl FUN_00425634(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4, uint *param_5);
void __cdecl FUN_004256b8(int param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_004256d0(int param_1,uint *param_2,char param_3);
void __cdecl FUN_00425724(int param_1,uint *param_2);
undefined4 * __cdecl FUN_00425740(undefined4 *param_1,int param_2,undefined4 param_3);
namespace OWL::TTooltipEnabler { void __cdecl vf1(int param_1,uint *param_2); }
namespace OWL::TTooltipEnabler { void __stdcall vf2(void); }
int * __cdecl FUN_004257c4(int *param_1,int param_2,undefined4 param_3,char param_4,int param_5);
namespace OWL::TTooltip { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TTooltip { char * __stdcall vf9(void); }
namespace OWL::TFrameWindow { undefined4 __stdcall vf4(void); }
namespace OWL::TFrameWindow { undefined4 __stdcall vf5(void); }
undefined4 * __cdecl FUN_00425b18(undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4);
undefined4 * __cdecl FUN_00425b78(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_00425bc8(LPRECT param_1,undefined4 *param_2);
undefined4 __cdecl FUN_00425be4(undefined4 *param_1,LPRECT param_2,uint param_3,uint param_4);
void __cdecl FUN_00426038(undefined4 *param_1,int *param_2,uint param_3,uint *param_4,uint *param_5);
undefined * __stdcall FUN_00426204(void);
void __stdcall FUN_00426289(void);
uint * __cdecl FUN_0042635c(uint *param_1);
undefined4 __cdecl FUN_004263a0(int param_1,int *param_2);
uint * __stdcall FUN_0042645c(void);
undefined4 __cdecl FUN_0042646c(int *param_1);
void __cdecl FUN_00426484(undefined4 *param_1,int *param_2,int *param_3,undefined4 *param_4,int *param_5, int *param_6);
void __cdecl FUN_00426554(undefined4 *param_1,undefined4 *param_2,int *param_3,uint *param_4);
void __cdecl FUN_00426604(undefined4 *param_1,undefined4 *param_2,int *param_3);
undefined4 __cdecl FUN_00426620(int *param_1);
void __cdecl FUN_00426720(uint *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5,int param_6, char param_7,char param_8,int *param_9,uint *param_10);
void __cdecl FUN_00426d38(undefined4 *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5, int param_6,char param_7,char param_8,int *param_9,uint *param_10);
void __cdecl FUN_00426dec(undefined4 param_1,int *param_2,int *param_3,int *param_4,int param_5,char param_6, char param_7,COLORREF *param_8,ushort param_9);
void __cdecl FUN_004272e4(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int param_5,char param_6, char param_7);
namespace OWL::TUIFaceData { void __cdecl _dtor(uint *param_1,byte param_2); }
namespace OWL::THatch8x8Brush { void __cdecl _dtor(uint *param_1,byte param_2); }
void __cdecl FUN_0042756c(undefined4 *param_1);
namespace OWL::TPointer_OWL_TBitmap { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __stdcall FUN_004275d0(void);
void __stdcall FUN_00427e78(void);
void __stdcall FUN_00427ece(void);
namespace OWL::TUrlLink { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace OWL::TUrlLink { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TUrlLink { char * __stdcall vf11(void); }
namespace OWL::TUrlLink { void __cdecl vf15(int *param_1); }
namespace OWL::TUrlLink { void __cdecl vf13(int *param_1,byte param_2); }
void __cdecl FUN_004284cc(int *param_1,int param_2);
namespace OWL::TUrlLink { void __cdecl vf14(int *param_1,LPMSG param_2); }
LRESULT __stdcall FUN_004286b0(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
namespace OWL::TUrlLink { void __cdecl vf16(int *param_1,LPWNDCLASSA param_2); }
namespace OWL::TUrlLink { void __cdecl vf17(int *param_1,int param_2); }
namespace OWL::TUrlLink { void __cdecl EvPaint(int *param_1); }
namespace OWL::TUrlLink { uint __cdecl EvMsg_19(int *param_1,HDC param_2,undefined4 param_3,int param_4); }
namespace OWL::TUrlLink { void __cdecl EvLButtonDown(int *param_1); }
namespace OWL::TUrlLink { void __cdecl EvMouseMove(int *param_1,undefined4 param_2,int *param_3); }
namespace OWL::TUrlLink { undefined4 __cdecl EvGetfont(int param_1); }
namespace OWL::TUrlLink { void __cdecl EvSetfont(int *param_1,undefined4 param_2,char param_3); }
namespace OWL::TUrlLink { undefined4 __stdcall EvGetDlgCode(void); }
namespace OWL::TUrlLink { void __cdecl vf18(int *param_1); }
void __cdecl FUN_00428e48(int *param_1,undefined1 param_2);
void __cdecl FUN_00428e6c(int *param_1);
namespace OWL::TUrlLink { uint __cdecl vf19(undefined4 param_1,uint *param_2,UINT param_3); }
namespace OWL::TUrlLink { void __cdecl vf20(int *param_1,undefined4 param_2); }
undefined4 * __cdecl FUN_00429de0(undefined4 *param_1,int *param_2);
int * __cdecl FUN_00429e48(int *param_1,int param_2);
namespace OWL::TUrlLink::Streamer { undefined4 __cdecl vf1(int param_1,int *param_2); }
void __cdecl FUN_0042a07c(int param_1,int *param_2);
namespace OWL::TUrlLink::Streamer { void __cdecl vf2(int param_1,int *param_2); }
void __cdecl FUN_0042a190(int param_1,int *param_2);
undefined4 * __cdecl FUN_0042a1e4(int *param_1);
namespace OWL::TUrlLink::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TUrlLink { undefined4 __cdecl vf12(int param_1); }
void __cdecl FUN_0042a42c(undefined4 *param_1);
namespace OWL::TPointer_OWL_TFont { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_0042a49c(int param_1);
undefined4 __cdecl FUN_0042a4f6(int *param_1,int *param_2);
undefined * __stdcall FUN_0042a51f(void);
uint __stdcall FUN_0042a584(void);
void __cdecl FUN_0042a714(int param_1,int *param_2);
undefined4 __cdecl FUN_0042a744(int param_1);
undefined4 __cdecl FUN_0042a769(int param_1);
bool __cdecl FUN_0042a7f2(int param_1,int param_2);
bool __cdecl FUN_0042a809(int param_1,int *param_2);
undefined * __cdecl FUN_0042a81f(int param_1);
void __stdcall FUN_0042a954(void);
void __stdcall FUN_0042a9c7(void);
namespace OWL::TWindow { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
undefined4 * __cdecl FUN_0042aa1c(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
namespace OWL::TCommandEnabler { void __cdecl vf0(int param_1); }
void __cdecl FUN_0042aa68(int param_1);
int * __cdecl FUN_0042aa94(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5);
int * __cdecl FUN_0042ab84(int *param_1,int param_2);
void __cdecl FUN_0042ac60(int param_1,undefined4 param_2,uint *param_3,int param_4);
void __cdecl FUN_0042acb4(int param_1,undefined4 param_2,int param_3);
namespace OWL::TWindow { void __cdecl _dtor(undefined4 *param_1,uint param_2); }
namespace OWL::TWindow { bool __cdecl vf10(int param_1,LPMSG param_2); }
namespace OWL::TWindow { undefined4 __cdecl vf11(int param_1,int param_2); }
namespace OWL::TWindow { void __cdecl EvSysColorChange(int param_1); }
namespace OWL::TWindow { void __cdecl vf32(int param_1,int param_2); }
namespace OWL::TWindow { void __cdecl vf13(int param_1,int param_2); }
namespace OWL::TWindow { undefined4 __cdecl vf14(int param_1); }
void __cdecl FUN_0042b218(int param_1,undefined4 param_2);
undefined4 __cdecl FUN_0042b294(int param_1);
namespace OWL::TWindow { undefined4 __cdecl vf18(undefined4 *param_1,int param_2,HWND param_3,undefined4 param_4); }
namespace OWL::TWindow { undefined4 __cdecl vf19(undefined4 *param_1,int param_2,undefined4 *param_3); }
namespace OWL::TWindow { void __cdecl vf20(undefined4 *param_1,int param_2); }
void __cdecl FUN_0042b67c(undefined4 *param_1,HWND param_2,undefined4 *param_3);
namespace OWL::TWindow { void __cdecl vf17(int param_1,UINT param_2,WPARAM param_3,LPARAM param_4); }
undefined4 * __cdecl FUN_0042b80c(undefined4 *param_1);
void __cdecl FUN_0042b894(int param_1,int param_2);
void __cdecl FUN_0042b8c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, undefined4 param_6);
undefined4 __cdecl FUN_0042b8f0(int param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_0042b930(int param_1);
void __cdecl FUN_0042b948(int param_1);
namespace OWL::TWindow { undefined4 __cdecl vf16(undefined4 *param_1,uint param_2,undefined4 param_3); }
undefined4 __cdecl FUN_0042bbb4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int __cdecl FUN_0042bc1c(int param_1,int param_2,undefined4 param_3,int param_4);
LRESULT __cdecl FUN_0042bc6c(HWND param_1,LPARAM param_2);
namespace OWL::TWindow { void __cdecl EvCreate(int param_1); }
namespace OWL::TWindow { undefined4 __stdcall vf12(void); }
namespace OWL::TWindow { void __cdecl EvKillFocus(int param_1); }
namespace OWL::TWindow { void __cdecl EvSize(int param_1,int param_2); }
namespace OWL::TWindow { void __cdecl EvMove(int param_1); }
namespace OWL::TWindow { void __cdecl EvCompareitem(int param_1,undefined4 param_2,int param_3); }
namespace OWL::TWindow { void __cdecl EvDeleteitem(int param_1,undefined4 param_2,int param_3); }
namespace OWL::TWindow { void __cdecl EvDrawItem(int param_1,undefined4 param_2,int *param_3); }
namespace OWL::TWindow { void __cdecl EvMeasureItem(undefined4 *param_1,WPARAM param_2,int *param_3); }
namespace OWL::TWindow { void __cdecl EvShared_42c038(int param_1); }
void __cdecl FUN_0042c0dc(int param_1,int param_2,undefined4 param_3,HWND param_4);
namespace OWL::TWindow { LRESULT __cdecl EvRegisteredMsg_42c154(int param_1,int param_2,LPARAM param_3); }
namespace OWL::TWindow { bool __cdecl EvMouseWheel(int param_1,byte param_2,int param_3); }
namespace OWL::TWindow { void __cdecl EvHScroll(int param_1,int param_2,undefined4 param_3,HWND param_4); }
namespace OWL::TWindow { void __cdecl EvVScroll(int param_1,int param_2,undefined4 param_3,HWND param_4); }
namespace OWL::TWindow { bool __cdecl EvEraseBkgnd(int param_1,undefined4 param_2); }
namespace OWL::TWindow { uint __cdecl EvMsg_19(int param_1,HDC param_2,undefined4 param_3,int param_4); }
namespace OWL::TWindow { void __cdecl EvPaint(int param_1); }
namespace OWL::TWindow { void __stdcall vf21(void); }
namespace OWL::TWindow { bool __cdecl EvSetCursor(int param_1,int param_2,int param_3); }
namespace OWL::TWindow { void __cdecl EvLButtonDown(int param_1); }
void __cdecl FUN_0042c6ec(int param_1);
namespace OWL::TWindow { void __cdecl vf6(int param_1,undefined4 param_2); }
namespace OWL::TWindow { void __cdecl vf28(int param_1,undefined4 *param_2); }
namespace OWL::TWindow { char * __cdecl vf29(int param_1); }
void __cdecl FUN_0042c89c(int param_1);
namespace OWL::TWindow { void __cdecl vf5(int param_1,HMENU param_2); }
namespace OWL::TWindow { undefined4 __cdecl vf4(int param_1); }
namespace OWL::TWindow { void __cdecl vf7(int param_1); }
namespace OWL::TWindow { undefined4 __cdecl vf8(int param_1); }
namespace OWL::TWindow { void __cdecl vf30(int param_1); }
namespace OWL::TWindow { void __stdcall vf31(void); }
namespace OWL::TWindow { undefined4 __cdecl vf22(int param_1,int param_2); }
namespace OWL::TWindow { void __cdecl vf23(int param_1); }
void __cdecl FUN_0042cbe0(int param_1);
namespace OWL::TWindow { bool __cdecl vf3(int param_1); }
namespace OWL::TWindow { bool __cdecl vf15(int param_1); }
namespace OWL::TWindow { void __cdecl vf9(int param_1,undefined4 param_2); }
namespace OWL::TWindow { void __cdecl EvClose(int param_1); }
namespace OWL::TWindow { void __cdecl EvDestroy(int param_1); }
namespace OWL::TWindow { void __cdecl EvNCDestroy(int param_1); }
namespace OWL::TWindow { uint __cdecl EvQueryEndSession(int param_1); }
namespace OWL::TWindow { void __cdecl EvEndSession(int param_1,char param_2); }
namespace OWL::TWindow { void __cdecl EvChildinvalid(undefined4 param_1,HWND param_2); }
int __cdecl FUN_0042cf38(int param_1);
void __cdecl FUN_0042cf50(int param_1);
bool __cdecl FUN_0042cfb8(undefined4 param_1,int param_2,uint *param_3);
undefined4 __cdecl FUN_0042cfd0(int param_1);
void __cdecl FUN_0042d05c(int param_1,int param_2);
int __cdecl FUN_0042d08c(int param_1,undefined *param_2);
void __cdecl FUN_0042d0cc(int param_1,undefined *param_2);
int __cdecl FUN_0042d100(int param_1,undefined *param_2);
undefined4 __cdecl FUN_0042d154(int param_1);
int __cdecl FUN_0042d188(int param_1);
LRESULT __cdecl FUN_0042d1a4(int param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
LRESULT __cdecl FUN_0042d1c0(int param_1,HWND param_2,char param_3);
undefined4 __cdecl FUN_0042d204(int param_1,char param_2);
void __cdecl FUN_0042d23c(int param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
void __cdecl FUN_0042d27c(int param_1,uint *param_2);
void __cdecl FUN_0042d2c4(int param_1);
LONG __cdecl FUN_0042d338(int param_1,char param_2);
LONG __cdecl FUN_0042d3ec(int param_1);
LONG __cdecl FUN_0042d40c(int param_1,LONG param_2);
LONG __cdecl FUN_0042d438(int param_1);
LONG __cdecl FUN_0042d458(int param_1,LONG param_2);
undefined4 __cdecl FUN_0042d484(int param_1,uint param_2,uint param_3,uint param_4);
undefined4 __cdecl FUN_0042d4dc(int param_1,uint param_2,uint param_3,uint param_4);
void __cdecl FUN_0042d52c(int param_1,LPRECT param_2);
void __cdecl FUN_0042d568(int param_1,LPRECT param_2);
bool __cdecl FUN_0042d59c(int param_1,HWND param_2,int param_3,int param_4,int param_5,int param_6,uint param_7);
namespace OWL::TWindow { bool __cdecl vf25(int param_1,int param_2); }
undefined4 __cdecl FUN_0042d6f8(int param_1,int param_2,int param_3);
namespace OWL::TWindow { void __cdecl EvInitMenuPopup(int param_1,HMENU param_2,undefined4 param_3,char param_4); }
namespace OWL::TWindow { void __cdecl EvContextMenu(int param_1,undefined4 param_2,int param_3,int param_4); }
namespace OWL::TWindow { void __cdecl EvEnteridle(int param_1,int param_2,HWND param_3); }
int __cdecl FUN_0042da3c(int param_1,int param_2);
int __cdecl FUN_0042da7c(int param_1,int param_2,int param_3,byte param_4);
void __cdecl FUN_0042dad8(int param_1,int param_2,int *param_3,int *param_4);
void __cdecl FUN_0042db28(int param_1,int param_2,int param_3,int param_4,byte param_5);
void __cdecl FUN_0042db78(int param_1,int param_2,UINT param_3,byte param_4);
UINT __cdecl FUN_0042dbc0(int param_1,int param_2);
namespace OWL::TWindow { void __cdecl vf2(int param_1,byte param_2); }
void __cdecl FUN_0042dc98(int param_1,undefined4 param_2);
void __cdecl FUN_0042dd40(int param_1,int param_2,LPCSCROLLINFO param_3,byte param_4);
void __cdecl FUN_0042dd5c(int param_1,int param_2,LPSCROLLINFO param_3);
undefined4 * __cdecl FUN_0042dd74(undefined4 *param_1);
undefined4 * __cdecl FUN_0042ddc0(undefined4 *param_1,int param_2,uint param_3);
undefined4 * __cdecl FUN_0042ded4(undefined4 *param_1,int *param_2);
namespace OWL::TXWindow { void __cdecl vf4(int param_1,int *param_2); }
namespace OWL::TXWindow { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXWindow { void __cdecl vf3(int *param_1); }
void __cdecl FUN_0042e05c(int param_1,uint param_2);
namespace OWL::TXWindow { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TCacheEntryStr { void __cdecl _dtor(int param_1,byte param_2); }
namespace OWL::TCommandEnabler { undefined4 vf3(char *param_1,byte *param_2,int param_3); }
int * __cdecl FUN_0042e1ac(int *param_1,undefined4 param_2);
namespace OWL::TWindowDC { int * __cdecl _dtor(int *param_1,byte param_2); }
int * __cdecl FUN_0042e298(int *param_1);
int * __cdecl FUN_0042e2fc(int *param_1,undefined4 *param_2);
int * __cdecl FUN_0042e360(int *param_1,undefined4 *param_2);
void __cdecl FUN_0042e3c8(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4);
void __stdcall FUN_0042e3fb(void);
undefined4 * __cdecl FUN_0042e450(undefined4 *param_1);
namespace OWL::TApplicatData { void __cdecl _dtor(int param_1,byte param_2); }
undefined * __stdcall FUN_0042e4c0(void);
undefined * __stdcall FUN_0042e55c(void);
namespace OWL::TEnumInfoStr { void __cdecl _dtor(int param_1,byte param_2); }
void __stdcall FUN_0042e620(void);
undefined * __stdcall FUN_0042e6d8(void);
int * __cdecl FUN_0042e748(int *param_1,int param_2,uint *param_3,undefined4 *param_4,undefined *param_5);
namespace OWL::TApplication { void __cdecl _dtor(undefined4 *param_1,uint param_2); }
namespace OWL::TBwccDll { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TCtl3dDll { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TDocument::TList { void __cdecl _dtor(int *param_1,byte param_2); }
namespace OWL::TApplication { undefined4 __cdecl vf12(int param_1); }
namespace OWL::TApplication { void __stdcall vf15(void); }
namespace OWL::TApplication { void __cdecl vf16(int param_1); }
namespace OWL::TApplication { void __cdecl vf17(int param_1); }
namespace OWL::TApplication { void __cdecl vf18(int param_1,undefined4 param_2); }
undefined4 __cdecl FUN_0042f090(int param_1,undefined4 param_2);
int __cdecl FUN_0042f180(int param_1,undefined4 param_2,uint *param_3);
namespace OWL::TApplication { void __cdecl vf2(int param_1); }
namespace OWL::TApplication { undefined4 __cdecl vf3(int param_1); }
namespace OWL::TApplication { undefined4 __cdecl vf4(int param_1); }
namespace OWL::TApplication { undefined4 __cdecl vf5(int param_1); }
namespace OWL::TApplication { undefined4 __cdecl vf6(undefined4 *param_1,MSG *param_2); }
namespace OWL::TApplication { undefined4 __cdecl vf7(int param_1,int *param_2); }
namespace OWL::TApplication { void __cdecl vf8(int param_1,int param_2,char param_3); }
namespace OWL::TApplication { void __cdecl vf14(int param_1,byte param_2); }
void __cdecl FUN_004306a4(int param_1,undefined4 param_2);
namespace OWL::TApplication { void __cdecl EvActivateApp(int param_1,char param_2); }
namespace OWL::TApplication { void __cdecl Cmd24310(int param_1); }
namespace OWL::TApplication { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace OWL::TApplication { undefined4 __cdecl vf1(int param_1); }
namespace OWL::TApplication { void __cdecl vf10(int param_1); }
void __cdecl FUN_00430928(int param_1,int param_2);
void __cdecl FUN_00430968(int param_1,int param_2);
void __cdecl FUN_004309ac(int param_1);
undefined4 * __cdecl FUN_00430a14(undefined4 *param_1);
namespace OWL::TXInvalidMainWindow { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXInvalidMainWindow { void __cdecl vf3(int *param_1); }
void __stdcall FUN_00430c34(void);
namespace OWL::TXInvalidMainWindow { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 __stdcall FUN_00430cc8(HWND param_1,int *param_2);
void __cdecl FUN_00430d15(int *param_1);
undefined4 __cdecl FUN_00430d6c(int param_1,int param_2,uint param_3);
void __cdecl FUN_00430ebc(int param_1,undefined4 param_2);
void __cdecl FUN_00430ee0(int param_1,char param_2);
void __stdcall FUN_00430f34(void);
undefined * __stdcall FUN_00430f74(void);
undefined4 * __cdecl FUN_00431010(undefined4 *param_1);
namespace OWL::TBrushCache { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_004310d8(undefined4 *param_1,int param_2);
undefined1 __cdecl FUN_00431128(uint *param_1,uint param_2,uint param_3);
void __cdecl FUN_004311e4(int param_1,int param_2);
undefined4 __cdecl FUN_0043121c(int param_1,int param_2);
undefined4 __cdecl FUN_00431258(undefined4 *param_1,int param_2);
uint * __cdecl FUN_0043129c(uint *param_1,undefined4 param_2,int param_3);
uint * __cdecl FUN_00431320(uint *param_1,uint *param_2,char param_3);
namespace OWL::TBrush { undefined4 __cdecl _dtor(uint *param_1,byte param_2); }
uint * __cdecl FUN_00431494(uint *param_1,int param_2,uint *param_3,uint *param_4);
void __cdecl FUN_00431504(uint *param_1,int param_2,uint *param_3,uint *param_4);
HBRUSH __cdecl FUN_00431540(int param_1,uint *param_2,uint *param_3);
namespace OWL::TButton { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_004316d8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
namespace OWL::TButton { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TButton { char * __cdecl vf9(int *param_1); }
namespace OWL::TButton { void __cdecl vf10(int *param_1); }
namespace OWL::TButton { undefined4 __cdecl EvGetDlgCode(int *param_1); }
namespace OWL::TButton { undefined4 __cdecl EvMsg_f4(int *param_1,int param_2); }
void __stdcall FUN_004319f8(void);
void __stdcall FUN_00431a4e(void);
undefined4 * __cdecl FUN_00431a80(undefined4 *param_1,int *param_2);
int * __cdecl FUN_00431ae8(int *param_1,int param_2);
undefined4 __cdecl EvRegisteredMsg_431c04_431c04(int param_1,int *param_2);
void __cdecl FUN_00431c3c(int param_1,int *param_2);
namespace OWL::TButton::Streamer { void __cdecl vf2(int param_1,int *param_2); }
void __cdecl FUN_00431cc8(int param_1,int *param_2);
undefined4 * __cdecl FUN_00431d1c(int *param_1);
namespace OWL::TButton::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TCheckBox { undefined4 __cdecl vf8(undefined4 *param_1,int *param_2,undefined *param_3); }
void __cdecl EvGetDlgCode_431e7c(int *param_1);
int * __cdecl FUN_00431f2c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, int param_6);
namespace OWL::TCheckBox { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TCheckBox { char * __cdecl vf9(int *param_1); }
namespace OWL::TCheckBox { undefined4 __cdecl vf11(int *param_1,ushort *param_2,int param_3); }
void __cdecl FUN_004321c4(int *param_1,WPARAM param_2);
void __cdecl BNClicked_4321fc(int *param_1);
namespace OWL::TControl { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_00432270(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10 );
int * __cdecl FUN_00432414(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
namespace OWL::TControl { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TControl { void __cdecl EvPaint(int *param_1); }
namespace OWL::TControl { void __cdecl EvCompareitem(int param_1); }
namespace OWL::TControl { undefined4 __cdecl vf1(int *param_1,int param_2); }
namespace OWL::TControl { void __cdecl EvDeleteitem(int param_1); }
namespace OWL::TControl { void __stdcall vf2(void); }
namespace OWL::TControl { void __cdecl EvMeasureItem(int param_1); }
namespace OWL::TControl { void __cdecl vf3(undefined4 param_1,int param_2); }
namespace OWL::TControl { void __cdecl EvDrawItem(int param_1); }
namespace OWL::TControl { void __cdecl vf4(int param_1,int param_2); }
namespace OWL::TControl { void __cdecl vf5(undefined4 param_1,int param_2); }
namespace OWL::TControl { void __cdecl vf6(undefined4 param_1,int param_2); }
namespace OWL::TControl { void __cdecl vf7(undefined4 param_1,int param_2); }
void __stdcall FUN_004327f4(void);
void __stdcall FUN_0043284a(void);
undefined4 * __cdecl FUN_0043287c(undefined4 *param_1,int *param_2);
int * __cdecl FUN_004328e4(int *param_1,int param_2);
namespace OWL::TControl::Streamer { int * __cdecl vf1(int param_1,int *param_2,uint param_3); }
void __cdecl FUN_00432a18(int param_1,int *param_2);
namespace OWL::TControl::Streamer { void __cdecl vf2(int param_1,int *param_2); }
void __cdecl FUN_00432aa8(int param_1,int *param_2);
undefined4 * __cdecl FUN_00432afc(int *param_1);
namespace OWL::TControl::Streamer { undefined4 __stdcall vf3(void); }
int * __cdecl FUN_00432c14(undefined4 param_1);
undefined4 __cdecl FUN_00432ca1(int param_1,int *param_2);
undefined4 __cdecl FUN_00432cf7(int param_1,int *param_2);
undefined4 __cdecl FUN_00432d20(int param_1);
namespace OWL::TDecoratedFrame { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace OWL::TDecoratedFrame { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TDecoratedFrame { void __cdecl vf9(int *param_1); }
namespace OWL::TDecoratedFrame { void __cdecl vf10(int *param_1); }
namespace OWL::TDecoratedFrame { int __cdecl vf4(int *param_1,int *param_2); }
namespace OWL::TDecoratedFrame { void __cdecl vf11(int *param_1,int param_2); }
namespace OWL::TDecoratedFrame { undefined4 __cdecl vf3(int *param_1,LPMSG param_2); }
namespace OWL::TDecoratedFrame { char * __cdecl vf2(int *param_1,uint param_2,uint *param_3,char *param_4,int param_5); }
namespace OWL::TDecoratedFrame { void __cdecl EvMenuSelect(int param_1,int param_2,uint param_3,int param_4); }
namespace OWL::TDecoratedFrame { void __cdecl EvSize(undefined4 *param_1,WPARAM param_2,int *param_3); }
namespace OWL::TDecoratedFrame { void __cdecl EvEnteridle(undefined4 *param_1,int param_2,HWND param_3); }
namespace OWL::TDecoratedFrame { undefined4 __cdecl vf12(int *param_1,int param_2,HWND param_3,undefined4 param_4); }
namespace OWL::TDecoratedFrame { void __cdecl vf13(undefined4 *param_1,int *param_2); }
void __cdecl FUN_0043381c(int param_1,int param_2,int param_3);
void __cdecl FUN_004339a0(int *param_1,int param_2,int param_3);
void __cdecl FUN_00433b64(int *param_1,int param_2,int param_3);
void __cdecl FUN_00433da0(int *param_1,int param_2,int param_3);
namespace OWL::TDecoratedFrame { void __cdecl vf1(int *param_1,int param_2,int param_3); }
namespace OWL::TDecoratedFrame { undefined4 * __cdecl vf5(int param_1); }
namespace OWL::TDecoratedFrame { undefined4 __cdecl vf8(int *param_1); }
namespace OWL::TDecoratedFrame { undefined4 __cdecl vf6(int *param_1); }
namespace OWL::TDecoratedFrame { undefined4 __cdecl vf7(int *param_1); }
void __cdecl Child4407951_Notify4407972_434265(int param_1);
void __cdecl FUN_0043427a(int param_1);
void __cdecl FUN_004342b9(int param_1,LPMSG param_2);
void __cdecl Child4469472_Notify4464720_4342f8(int param_1);
void __cdecl FUN_0043430d(int param_1);
namespace OWL::TDialog { undefined4 __cdecl vf14(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_00434494(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5);
bool __cdecl FUN_004346e8(int param_1);
void __cdecl FUN_00434704(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
namespace OWL::TDialog { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TDialog { bool __cdecl vf7(int *param_1,LPMSG param_2); }
namespace OWL::TDialog { char * __cdecl vf12(int *param_1); }
namespace OWL::TDialog { void __cdecl vf13(int *param_1,int param_2); }
void __cdecl EvSetfont_434a30(int *param_1);
void __cdecl EvPaint_434a54(int *param_1);
void __cdecl EvMsg_19_434a64(int *param_1,HDC param_2,undefined4 param_3,int param_4);
void __cdecl EvMsg_400_434ac4(int *param_1);
bool __cdecl EvMsg_401_434ad8(int *param_1);
void __cdecl EvMsg_402_434af4(int *param_1);
namespace OWL::TDialog { bool __cdecl vf1(int *param_1,int param_2,undefined4 param_3); }
undefined1 __stdcall FUN_00434bec(HWND param_1,int param_2);
void __cdecl FUN_00434ca8(int *param_1);
namespace OWL::TDialog { undefined4 __cdecl vf3(int *param_1); }
namespace OWL::TDialog { void __cdecl vf4(int *param_1,LPCDLGTEMPLATEA param_2); }
namespace OWL::TDialog { int __cdecl vf5(int *param_1); }
namespace OWL::TDialog { void __cdecl vf6(int *param_1); }
char __cdecl FUN_00434ec0(int *param_1);
namespace OWL::TDialog { undefined4 __cdecl vf2(int *param_1); }
namespace OWL::TDialog { void __cdecl vf11(int *param_1); }
namespace OWL::TDialog { void __cdecl vf8(int *param_1,undefined4 param_2); }
namespace OWL::TDialog { void __cdecl vf9(int *param_1,INT_PTR param_2); }
void __cdecl FUN_00435124(int *param_1,uint *param_2);
void __cdecl Cmd1_43514c(int *param_1);
void __cdecl Cmd2_4351a0(int *param_1);
void __cdecl EvClose_4351b0(int *param_1);
undefined4 * __cdecl FUN_00435204(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
namespace OWL::TControlEnabler { void __cdecl vf0(int param_1,byte param_2); }
namespace OWL::TControlEnabler { void __cdecl vf1(int param_1,char *param_2); }
namespace OWL::TControlEnabler { void __cdecl vf2(int param_1,WPARAM param_2); }
namespace OWL::TDialog { undefined4 __cdecl vf10(int *param_1,int param_2); }
void __cdecl FUN_004353fc(int *param_1,undefined4 *param_2);
void __cdecl FUN_00435464(undefined4 *param_1);
void __cdecl FUN_0043551c(undefined4 *param_1);
namespace OWL::TDib { void __cdecl _dtor(int *param_1,byte param_2); }
void __cdecl FUN_004355bc(int param_1,int param_2,uint *param_3);
int __cdecl FUN_00435610(int param_1,uint *param_2,uint *param_3,char param_4);
void __cdecl FUN_004356bc(int param_1,uint param_2,uint *param_3);
namespace OWL::TDib { undefined4 __cdecl vf1(int *param_1,int *param_2,char param_3); }
int * __cdecl FUN_004359e4(int *param_1,HMODULE param_2,LPCSTR param_3);
bool __cdecl FUN_00435a78(int *param_1,HMODULE param_2,LPCSTR param_3);
namespace OWL::TDib { bool __cdecl vf2(undefined4 *param_1,undefined4 *param_2,char param_3); }
int * __cdecl FUN_00435b3c(int *param_1,int param_2,int param_3,uint param_4,undefined2 param_5);
namespace OWL::TFloatingSlip { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TFloatingFrame { void __cdecl _dtor(int *param_1,uint param_2); }
void __cdecl FUN_004360a8(int *param_1,int *param_2,int param_3);
undefined4 __cdecl FUN_004360e6(uint *param_1,uint *param_2);
uint * __cdecl FUN_00436168(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6, uint param_7,uint param_8);
undefined4 * __cdecl FUN_004361e8(undefined4 *param_1,undefined4 param_2);
int * __cdecl FUN_00436214(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5);
namespace OWL::TDvFileOpenDialog { void __cdecl vf1(int *param_1,int param_2,undefined4 param_3); }
int * __cdecl FUN_004363ec(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5);
namespace OWL::TDvFileSaveDialog { void __cdecl vf1(int *param_1,int param_2,undefined4 param_3); }
namespace OWL::TDocManager { void __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace OWL::TDocManager { void __cdecl Cmd24331(int param_1); }
namespace OWL::TDocManager { void __cdecl Cmd24332(int param_1); }
namespace OWL::TDocManager { void __cdecl Cmd24333(int param_1); }
namespace OWL::TDocManager { void __cdecl Cmd24334(int param_1); }
namespace OWL::TDocManager { void __cdecl Cmd24335(int param_1); }
namespace OWL::TDocManager { void __cdecl Cmd24339(int param_1); }
namespace OWL::TDocManager { void __cdecl Cmd24341(int param_1); }
namespace OWL::TDocManager { void __cdecl _dtor(undefined4 *param_1,uint param_2); }
int __cdecl FUN_0043680c(int param_1,int param_2,int param_3);
namespace OWL::TDocManager { int __cdecl vf1(int param_1,int param_2,undefined4 param_3,char param_4); }
namespace OWL::TDocManager { int __cdecl vf2(int param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5); }
namespace OWL::TDocManager { int __cdecl vf3(int param_1,int param_2,undefined4 param_3,int param_4); }
namespace OWL::TDocManager { char * __cdecl vf4(undefined4 param_1,int param_2,int param_3,uint *param_4); }
namespace OWL::TDocManager { undefined4 __cdecl vf5(int param_1,char *param_2,uint param_3); }
namespace OWL::TDocManager { int * __cdecl vf6(int param_1,int *param_2,int param_3,int param_4,uint param_5); }
int * __cdecl FUN_00436e60(int param_1,int *param_2,int param_3,uint param_4);
namespace OWL::TDocManager { undefined4 __cdecl vf7(int param_1,int param_2); }
int __cdecl FUN_004371f8(undefined4 param_1,int param_2,int *param_3);
namespace OWL::TDocManager { undefined4 __cdecl vf8(int param_1,int *param_2); }
namespace OWL::TDocManager { undefined4 __cdecl vf9(int param_1,int *param_2); }
namespace OWL::TDocManager { int __cdecl vf10(int param_1,uint *param_2); }
undefined4 __cdecl FUN_004374fc(uint *param_1,uint *param_2);
namespace OWL::TDocManager { int * __cdecl vf11(int param_1); }
int __cdecl FUN_00438064(int param_1,char *param_2);
namespace OWL::TDocManager { void __cdecl vf19(int param_1,int param_2,uint param_3,uint param_4); }
namespace OWL::TDocManager { void __cdecl vf20(int param_1,WPARAM param_2,LPARAM param_3); }
namespace OWL::TDocManager { void __cdecl vf21(int param_1,WPARAM param_2,LPARAM param_3); }
namespace OWL::TDocManager { int __cdecl vf23(int param_1,int *param_2,int param_3); }
namespace OWL::TDocManager { undefined4 __cdecl vf24(int param_1,uint param_2,uint param_3,uint *param_4,char *param_5,uint param_6, char param_7,int param_8); }
namespace OWL::TDocManager { int __cdecl vf25(int param_1,undefined4 *param_2,int param_3); }
namespace OWL::TDocManager { undefined4 __cdecl vf26(int param_1); }
namespace OWL::TDocManager { void __cdecl vf22(int param_1,int param_2); }
namespace OWL::TDocManager { undefined4 __cdecl EvOwlcanclose(int param_1); }
namespace OWL::TDocManager { void __cdecl EvOwlpreprocmenu(int param_1,undefined4 param_2); }
namespace OWL::TDocManager { void __cdecl EvMsg_7ef6(int param_1); }
namespace OWL::TDocManager { void __cdecl CeCmd24331(undefined4 param_1,undefined4 *param_2); }
namespace OWL::TDocManager { void __cdecl vf13(int param_1); }
namespace OWL::TDocManager { void __cdecl CeCmd24332(undefined4 param_1,undefined4 *param_2); }
namespace OWL::TDocManager { void __cdecl vf12(int param_1); }
namespace OWL::TDocManager { void __cdecl CeCmd24339(int param_1,undefined4 *param_2); }
namespace OWL::TDocManager { void __cdecl vf14(int param_1); }
namespace OWL::TDocManager { void __cdecl CeCmd24334(int param_1,undefined4 *param_2); }
namespace OWL::TDocManager { void __cdecl vf16(int param_1); }
namespace OWL::TDocManager { void __cdecl CeCmd24333(int param_1,undefined4 *param_2); }
namespace OWL::TDocManager { void __cdecl vf15(int param_1); }
namespace OWL::TDocManager { void __cdecl CeCmd24335(int param_1,undefined4 *param_2); }
namespace OWL::TDocManager { void __cdecl vf17(int param_1); }
namespace OWL::TDocManager { void __cdecl CeCmd24341(int param_1,undefined4 *param_2); }
namespace OWL::TDocManager { void __cdecl vf18(int param_1); }
namespace OWL::TDvFileOpenDialog { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TDvFileSaveDialog { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TDvOpenSaveData { void __cdecl _dtor(int param_1,byte param_2); }
namespace OWL::TDocument { undefined4 __stdcall vf1(void); }
namespace OWL::TDocument { undefined4 __stdcall vf2(void); }
namespace OWL::TDocument { undefined1 __stdcall vf3(void); }
namespace OWL::TDocument { bool __cdecl vf11(int param_1); }
namespace OWL::TDocument { undefined4 __stdcall vf16(void); }
namespace OWL::TDocument { undefined1 __stdcall vf22(void); }
void __cdecl FUN_004395b8(undefined4 *param_1);
namespace OWL::TAPointer_OWL_TDocTemplate_ptr { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_00439650(int param_1,uint param_2);
void __cdecl FUN_00439660(int param_1,uint param_2);
undefined * __cdecl FUN_00439670(int param_1);
namespace OWL::TDocTemplate { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined * __cdecl FUN_00439734(int param_1);
undefined * __cdecl FUN_00439754(int param_1);
undefined * __cdecl FUN_00439774(int param_1);
namespace OWL::TDocument { void __cdecl _dtor(int *param_1,byte param_2); }
namespace OWL::TDocument { undefined * __cdecl vf19(undefined4 param_1,int param_2); }
namespace OWL::TDocument { undefined * __cdecl vf18(undefined4 param_1,int param_2); }
namespace OWL::TDocument { int __cdecl vf17(undefined4 param_1,char *param_2); }
namespace OWL::TDocument { char * __cdecl vf20(int *param_1,undefined4 param_2,int *param_3,char *param_4); }
namespace OWL::TDocument { undefined4 __cdecl vf21(int *param_1,int param_2); }
namespace OWL::TDocument { void __cdecl vf7(int param_1); }
namespace OWL::TDocument { undefined4 __cdecl vf8(int *param_1,uint *param_2); }
namespace OWL::TDocument { void __cdecl vf9(int param_1,uint *param_2); }
undefined4 __cdecl FUN_00439c14(int param_1,int param_2);
void __cdecl FUN_00439c84(int param_1);
namespace OWL::TDocument { void __cdecl vf23(int param_1,int param_2); }
namespace OWL::TDocument { void __cdecl vf24(int param_1,int param_2); }
undefined4 __cdecl FUN_00439d54(int param_1,int param_2);
int __cdecl FUN_00439d70(int param_1,int param_2);
undefined4 __cdecl FUN_00439e4c(int *param_1,int param_2);
namespace OWL::TDocument { char __cdecl vf5(int param_1,uint param_2); }
namespace OWL::TDocument { char __cdecl vf6(int param_1,uint param_2); }
char __cdecl FUN_00439f90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
undefined4 * __cdecl FUN_0043a048(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
namespace OWL::TDocument { bool __cdecl vf10(int param_1); }
namespace OWL::TDocument { bool __cdecl vf13(int *param_1); }
namespace OWL::TDocument { int * __cdecl vf14(int *param_1,undefined4 param_2); }
namespace OWL::TDocument { undefined4 __cdecl vf12(int param_1); }
namespace OWL::TDocument { undefined4 __cdecl vf4(int param_1); }
namespace OWL::TDocument { void __cdecl vf15(int param_1); }
undefined4 __cdecl FUN_0043a240(undefined4 *param_1,int param_2);
undefined4 __cdecl FUN_0043a258(int *param_1,int param_2);
void __cdecl FUN_0043a280(int *param_1);
uint * __cdecl FUN_0043a2f4(uint *param_1,uint *param_2,char param_3);
char * __cdecl FUN_0043a382(char *param_1,int param_2,uint *param_3,char param_4);
namespace OWL::TEdit { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace OWL::TEdit { void __cdecl Cmd24322(int *param_1); }
namespace OWL::TEdit { void __cdecl Cmd24323(int *param_1); }
namespace OWL::TEdit { void __cdecl Cmd24324(int param_1); }
namespace OWL::TEdit { void __cdecl Cmd24325(int *param_1); }
namespace OWL::TEdit { void __cdecl Cmd24326(int param_1); }
namespace OWL::TEdit { void __cdecl Cmd24321(int *param_1); }
int * __cdecl FUN_0043a4ec(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6);
namespace OWL::TEdit { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TEdit { void __cdecl NotifyAtChild_1280(int *param_1); }
namespace OWL::TEdit { uint __cdecl EvGetDlgCode(int *param_1); }
namespace OWL::TEdit { void __cdecl EvChar(int *param_1,int param_2); }
namespace OWL::TEdit { void __cdecl EvKeyDown(int *param_1,int param_2); }
namespace OWL::TEdit { void __cdecl EvKillFocus(int *param_1,HWND param_2); }
namespace OWL::TEdit { void __cdecl EvSetFocus(int *param_1); }
namespace OWL::TEdit { undefined4 __cdecl NotifyAtChild_m722(int *param_1); }
namespace OWL::TEdit { void __cdecl EvChildinvalid(int *param_1); }
void __cdecl FUN_0043ac88(int *param_1);
namespace OWL::TEdit { void __cdecl vf9(int *param_1); }
namespace OWL::TEdit { bool __cdecl vf21(int *param_1); }
namespace OWL::TEdit { void __cdecl CeShared_43ad2c(int param_1,undefined4 *param_2); }
namespace OWL::TEdit { void __cdecl CeCmd24324(int *param_1,undefined4 *param_2); }
namespace OWL::TEdit { void __cdecl CeCmd24326(int *param_1,undefined4 *param_2); }
namespace OWL::TEdit { void __cdecl CeCmd24321(int *param_1,undefined4 *param_2); }
undefined4 __cdecl FUN_0043ae50(int *param_1,WPARAM param_2);
bool __cdecl FUN_0043ae94(int *param_1,undefined2 *param_2,uint param_3,WPARAM param_4);
LPSTR __cdecl FUN_0043af08(int *param_1,SIZE_T param_2);
void __cdecl FUN_0043afc4(int *param_1,LPCSTR param_2,char param_3);
namespace OWL::TEdit { int __cdecl vf16(int *param_1,int param_2,uint *param_3,char param_4,char param_5,char param_6); }
bool __cdecl FUN_0043b1b8(int *param_1);
bool __cdecl FUN_0043b1fc(int *param_1);
namespace OWL::TEdit { void __cdecl vf12(int *param_1,int param_2,uint param_3,uint param_4); }
namespace OWL::TEdit { undefined * __stdcall vf11(void); }
namespace OWL::TEdit { void __cdecl vf20(int *param_1); }
undefined1 __cdecl FUN_0043b3c8(int *param_1,char param_2);
void __cdecl FUN_0043b448(int param_1,undefined4 param_2);
namespace OWL::TEdit { int __cdecl vf10(int *param_1,LPSTR param_2,int param_3); }
void __stdcall FUN_0043b638(void);
void __stdcall FUN_0043b68e(void);
undefined4 * __cdecl FUN_0043b6c0(undefined4 *param_1,int *param_2);
int * __cdecl FUN_0043b728(int *param_1,int param_2);
undefined4 __cdecl EvRegisteredMsg_43b844_43b844(int param_1,int *param_2);
namespace OWL::TEdit::Streamer { void __cdecl vf2(int param_1,int *param_2); }
undefined4 * __cdecl FUN_0043b8a4(int *param_1);
namespace OWL::TEdit::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TEditFile { undefined4 __cdecl vf8(undefined4 *param_1,int *param_2,undefined *param_3); }
void __cdecl Cmd24333_43ba00(int param_1);
void __cdecl Cmd24334_43ba10(int param_1);
namespace OWL::TEditFile { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TEditFile { void __cdecl vf20(int *param_1); }
int __cdecl FUN_0043be90(int *param_1,uint *param_2);
namespace OWL::TEditFile { void __cdecl vf23(int *param_1); }
namespace OWL::TEditFile { void __cdecl vf26(int *param_1,uint *param_2); }
namespace OWL::TEditFile { void __cdecl vf24(undefined4 *param_1); }
namespace OWL::TEditFile { uint __cdecl vf25(int *param_1,int param_2); }
namespace OWL::TEditFile { undefined4 __cdecl vf27(int *param_1); }
namespace OWL::TEditFile { undefined4 __cdecl vf28(int *param_1); }
void __cdecl CeCmd24333_43cc38(int *param_1,undefined4 *param_2);
namespace OWL::TEditFile { undefined4 __cdecl vf29(int *param_1,int param_2); }
namespace OWL::TEditFile { uint __cdecl vf22(int *param_1); }
namespace OWL::TEditFile { void __cdecl vf21(int param_1); }
void __stdcall FUN_0043d284(void);
void __stdcall FUN_0043d2da(void);
undefined4 * __cdecl FUN_0043d30c(undefined4 *param_1,int *param_2);
int * __cdecl FUN_0043d374(int *param_1,int param_2);
namespace OWL::TEditFile::Streamer { int __cdecl vf1(int param_1,int *param_2); }
void __cdecl FUN_0043d4f0(int param_1,int *param_2);
namespace OWL::TEditFile::Streamer { void __cdecl vf2(int param_1,int *param_2); }
void __cdecl FUN_0043d580(int param_1,int *param_2);
undefined4 * __cdecl FUN_0043d5d4(int *param_1);
namespace OWL::TEditFile::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TEditSearch { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace OWL::TEditSearch { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TEditSearch { void __cdecl vf20(int *param_1); }
void __cdecl FUN_0043d920(int *param_1);
namespace OWL::TEditSearch { void __cdecl Cmd24351(undefined4 *param_1); }
namespace OWL::TEditSearch { void __cdecl Cmd24352(undefined4 *param_1); }
namespace OWL::TEditSearch { void __cdecl CeRange24351to24352(undefined4 param_1,undefined4 *param_2); }
namespace OWL::TEditSearch { void __cdecl Cmd24353(int *param_1); }
namespace OWL::TEditSearch { void __cdecl CeCmd24353(int param_1,undefined4 *param_2); }
namespace OWL::TEditSearch { undefined4 __cdecl EvRegisteredMsg_43de28(int *param_1,undefined4 param_2,int param_3); }
namespace OWL::TFindDialog { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TReplaceDialog { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TFindReplaceDialog { void __cdecl _dtor(int *param_1,uint param_2); }
void __stdcall FUN_0043e1f8(void);
void __stdcall FUN_0043e24e(void);
undefined4 * __cdecl FUN_0043e280(undefined4 *param_1,int *param_2);
int * __cdecl FUN_0043e2e8(int *param_1,int param_2);
namespace OWL::TEditSearch::Streamer { undefined4 __cdecl vf1(int param_1,int *param_2); }
void __cdecl FUN_0043e460(int param_1,int *param_2);
namespace OWL::TEditSearch::Streamer { void __cdecl vf2(int param_1,int *param_2); }
void __cdecl FUN_0043e4f8(int param_1,int *param_2);
undefined4 * __cdecl FUN_0043e54c(int *param_1);
namespace OWL::TEditSearch::Streamer { undefined4 __stdcall vf3(void); }
undefined4 * __cdecl FUN_0043e714(undefined4 *param_1);
int vshared_43e760(...);   // not decompiled
void __stdcall FUN_0043e780(void);
namespace OWL::TXBadFormat { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TXBadFormat { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXBadFormat { void __cdecl vf3(int *param_1); }
undefined4 * __cdecl FUN_0043e964(undefined4 *param_1,int *param_2);
void __cdecl FUN_0043e9b8(uint *param_1,uint *param_2,uint *param_3,uint param_4);
undefined4 * __cdecl FUN_0043ea14(undefined4 *param_1,uint *param_2,undefined4 param_3);
namespace OWL::TDiskFileHandle { void __cdecl _dtor(int param_1,byte param_2); }
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf1(int param_1); }
namespace OWL::TDiskFileHandle { int __cdecl vf2(int param_1,int param_2); }
namespace OWL::TDiskFileHandle { bool __cdecl vf4(int param_1); }
namespace OWL::TFileHandle { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 * __cdecl FUN_0043eda4(undefined4 *param_1,undefined4 param_2,uint *param_3,undefined4 param_4);
namespace OWL::TDiskFileHandle { undefined4 * __cdecl vf5(int param_1); }
namespace OWL::TDiskFileHandle { void __stdcall vf3(void); }
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf6(int param_1); }
namespace OWL::TDiskFileHandle { DWORD __cdecl vf7(int param_1,LPVOID param_2,DWORD param_3); }
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf8(int param_1,LPCVOID param_2,DWORD param_3); }
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf9(int *param_1); }
namespace OWL::TDiskFileHandle { DWORD __cdecl vf10(int param_1); }
namespace OWL::TDiskFileHandle { DWORD __cdecl vf11(int param_1); }
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf12(int *param_1); }
namespace OWL::TDiskFileHandle { DWORD __cdecl vf13(int param_1); }
namespace OWL::TDiskFileHandle { DWORD __cdecl vf14(int param_1); }
namespace OWL::TDiskFileHandle { DWORD __cdecl vf15(int param_1,LONG param_2,LONG param_3,DWORD param_4); }
namespace OWL::TDiskFileHandle { DWORD __cdecl vf16(int param_1,LONG param_2,DWORD param_3); }
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf17(int param_1); }
namespace OWL::TDiskFileHandle { bool __cdecl vf18(int param_1,DWORD param_2,DWORD param_3); }
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf19(int param_1,DWORD param_2,DWORD param_3); }
namespace OWL::TDiskFileHandle { bool __cdecl vf20(int param_1,DWORD param_2,DWORD param_3,DWORD param_4,DWORD param_5); }
namespace OWL::TDiskFileHandle { bool __cdecl vf21(int param_1,DWORD param_2,DWORD param_3,DWORD param_4,DWORD param_5); }
uint __cdecl FUN_0043f160(uint param_1);
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf22(int *param_1,uint *param_2); }
namespace OWL::TFile { void __cdecl _dtor(int *param_1,byte param_2); }
namespace OWL::TFile { bool __cdecl vf2(int param_1,uint *param_2,undefined4 param_3); }
namespace OWL::TFile { undefined4 __cdecl vf3(int param_1); }
namespace OWL::TFile { void __cdecl vf14(int param_1); }
namespace OWL::TFile { void __cdecl vf15(int param_1); }
namespace OWL::TFile { void __cdecl vf16(int param_1); }
int __cdecl FUN_0043f4f0(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_0043f532(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_0043f59d(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
undefined4 __stdcall FUN_0043f608(void);
int __cdecl FUN_0043f60f(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_0043f6c3(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_0043f705(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_0043f770(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
undefined4 __stdcall FUN_0043f7db(void);
int __cdecl FUN_0043f7e2(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_0043f898(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_0043f8c0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_0043f8e8(int param_1);
int __cdecl FUN_0043f908(int *param_1,undefined4 param_2,int *param_3,int param_4);
undefined1 __cdecl FUN_0043fa40(int *param_1,undefined4 param_2,int *param_3,int param_4);
void __cdecl FUN_0043fb84(int *param_1,undefined4 param_2,int param_3,int param_4);
void __cdecl FUN_0043fba8(int *param_1,undefined4 param_2,int param_3,int param_4);
namespace OWL::TFile { uint __cdecl vf19(int *param_1); }
namespace OWL::TFile { undefined2 __cdecl vf20(int *param_1); }
namespace OWL::TFile { undefined4 __cdecl vf21(int *param_1); }
namespace OWL::TFile { undefined4 __cdecl vf22(int *param_1); }
namespace OWL::TFile { void __cdecl vf23(int *param_1); }
namespace OWL::TFile { void __cdecl vf24(int *param_1); }
namespace OWL::TFile { void __cdecl vf26(int *param_1); }
namespace OWL::TFile { void __cdecl vf27(int *param_1); }
namespace OWL::TFile { void __cdecl vf28(int *param_1); }
namespace OWL::TFile { void __cdecl vf29(int *param_1); }
namespace OWL::TFile { void __cdecl vf30(int *param_1); }
namespace OWL::TFile { void __cdecl vf31(int *param_1); }
char * __cdecl FUN_0043fd34(char *param_1);
char * __cdecl FUN_0043fd44(char *param_1,char *param_2,int param_3);
char * __cdecl FUN_0043fd62(char *param_1,char *param_2,uint *param_3);
char * __cdecl FUN_0043fd9a(char *param_1,char *param_2,int param_3);
char * __cdecl FUN_0043fdb8(char *param_1,char *param_2,uint *param_3);
char * __cdecl FUN_0043fdf0(char *param_1,char *param_2,char *param_3);
undefined4 __cdecl FUN_0043fe14(int param_1,uint *param_2,char param_3);
int __cdecl FUN_004409f4(int param_1,uint *param_2,char param_3);
void __cdecl FUN_00440b04(int param_1);
int __cdecl FUN_00440b74(int param_1,uint param_2);
bool __cdecl FUN_00440ce8(int param_1,uint param_2);
undefined4 * __cdecl FUN_00440d58(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
namespace OWL::TFindReplaceDialog::TData { void __cdecl _dtor(int param_1,byte param_2); }
namespace OWL::TFindReplaceDialog { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
void __cdecl FUN_00440e78(int *param_1,int param_2);
int * __cdecl FUN_00440f14(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7);
namespace OWL::TFindReplaceDialog { void __stdcall vf4(void); }
namespace OWL::TFindReplaceDialog { void __cdecl vf1(int *param_1,int param_2,undefined4 param_3); }
namespace OWL::TFindReplaceDialog { void __cdecl EvNCDestroy(int *param_1); }
void __cdecl FUN_00441090(int param_1,int param_2);
int * __cdecl FUN_004410b4(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7);
namespace OWL::TFindDialog { void __cdecl vf4(int *param_1); }
int * __cdecl FUN_004411f8(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7);
namespace OWL::TReplaceDialog { void __cdecl vf4(int *param_1); }
void __cdecl FUN_00441678(int param_1,int *param_2);
void __cdecl FUN_004416f8(undefined4 *param_1,int *param_2);
uint __cdecl FUN_00441750(HMENU param_1,int param_2);
HICON __stdcall FUN_00441794(void);
int __cdecl FUN_00441837(int param_1);
bool __cdecl FUN_004418a0(int param_1);
namespace OWL::TFrameWindow { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace OWL::TMenuItemEnabler { void __cdecl vf0(int param_1,char param_2); }
namespace OWL::TMenuItemEnabler { void __cdecl vf1(int param_1,LPCSTR param_2); }
namespace OWL::TMenuItemEnabler { void __cdecl vf2(int param_1,int param_2); }
int * __cdecl FUN_004419a0(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,char param_6, int param_7);
void __cdecl FUN_00441adc(int *param_1,int param_2,char param_3);
void __cdecl FUN_00441b2c(int *param_1,undefined4 param_2);
namespace OWL::TFrameWindow { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TFrameWindow { void __cdecl EvInitMenuPopup(int *param_1,HMENU param_2,undefined4 param_3,char param_4); }
void __cdecl Child4464308_Notify4408014_441e38(int *param_1,int param_2);
namespace OWL::TFrameWindow { HWND __cdecl vf9(int *param_1); }
namespace OWL::TFrameWindow { undefined4 __cdecl vf14(int *param_1,int param_2,HWND param_3,undefined4 param_4); }
namespace OWL::TFrameWindow { void __cdecl vf15(undefined4 *param_1,undefined4 *param_2); }
namespace OWL::TFrameWindow { undefined4 __cdecl vf10(int *param_1,LPMSG param_2); }
namespace OWL::TFrameWindow { bool __cdecl vf2(int *param_1,HMENU param_2); }
namespace OWL::TFrameWindow { undefined4 __cdecl vf1(int *param_1,uint *param_2); }
undefined4 __cdecl FUN_0044215c(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 __cdecl FUN_004421e8(int *param_1,undefined4 param_2,HANDLE param_3);
namespace OWL::TFrameWindow { undefined4 __cdecl vf6(int param_1); }
namespace OWL::TFrameWindow { int __cdecl vf7(int *param_1,undefined4 param_2); }
namespace OWL::TFrameWindow { void __cdecl vf8(int *param_1,int param_2); }
namespace OWL::TFrameWindow { undefined4 __cdecl vf13(int *param_1,uint *param_2,uint param_3); }
namespace OWL::TFrameWindow { void __cdecl EvPaint(int *param_1); }
namespace OWL::TFrameWindow { bool __cdecl EvEraseBkgnd(int *param_1,undefined4 param_2); }
namespace OWL::TFrameWindow { HICON __cdecl EvQuerydragicon(int *param_1); }
int __cdecl FUN_00442748(int *param_1);
namespace OWL::TFrameWindow { bool __cdecl vf12(int *param_1,HWND param_2,HWND param_3); }
namespace OWL::TFrameWindow { void __cdecl EvSetFocus(int *param_1); }
namespace OWL::TFrameWindow { void __cdecl EvParentNotify(int *param_1,int param_2,HWND param_3); }
namespace OWL::TFrameWindow { bool __cdecl EvQuerynewpalette(int *param_1); }
namespace OWL::TFrameWindow { void __cdecl EvPalettechanged(int *param_1); }
undefined4 __cdecl FUN_00442958(int *param_1,char param_2);
namespace OWL::TFrameWindow { void __cdecl vf16(int *param_1); }
namespace OWL::TFrameWindow { void __cdecl vf17(int *param_1); }
void __cdecl FUN_00443094(int *param_1,WPARAM param_2,LPARAM param_3);
namespace OWL::TFrameWindow { void __stdcall EvSize(int param_1,int param_2,int *param_3); }
void __stdcall FUN_004430c6(void);
namespace OWL::TFrameWindow { undefined4 __cdecl vf3(int *param_1,int *param_2); }
namespace OWL::TMenuDescr { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 __cdecl FUN_0044349c(int *param_1,int *param_2,int param_3);
namespace OWL::TMenuDescr { undefined4 __cdecl vf1(int param_1); }
void __stdcall FUN_00443524(void);
DWORD * __cdecl FUN_004435d0(DWORD *param_1);
void __cdecl FUN_00443664(DWORD *param_1,ushort param_2);
undefined4 __cdecl FUN_004436dc(int param_1);
void __cdecl FUN_004437a8(int param_1,undefined4 param_2,uint param_3);
void __cdecl FUN_00443848(int param_1,int param_2);
uint __cdecl FUN_004438e4(int param_1);
undefined4 __cdecl FUN_0044398c(int param_1,int param_2);
int __cdecl FUN_004439d4(int param_1,int param_2);
undefined4 __cdecl FUN_004439f8(int param_1);
undefined4 __cdecl FUN_00443a30(LPCSTR param_1,LPCSTR param_2);
undefined4 * __cdecl FUN_00443b28(undefined4 *param_1,uint *param_2,char param_3,char param_4,char param_5);
undefined4 * __cdecl FUN_00443bf8(undefined4 *param_1,uint *param_2,undefined4 param_3,char param_4);
undefined4 * __cdecl FUN_00443c6c(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4,char param_5);
namespace OWL::TModule { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 __cdecl FUN_00443d84(LPCSTR param_1,LPCSTR param_2);
void __cdecl FUN_00443da0(int param_1,uint *param_2);
void __cdecl FUN_00443e3c(int param_1,undefined4 param_2);
namespace OWL::TModule { void __cdecl vf1(int param_1,int *param_2,uint param_3,uint param_4); }
void __cdecl FUN_00443f10(int param_1,undefined4 param_2);
int __cdecl FUN_00443f20(int param_1,uint param_2,LPSTR param_3,int param_4);
int __cdecl FUN_00444058(int param_1,int param_2,uint param_3);
HACCEL __cdecl FUN_00444ce8(int param_1,LPCSTR param_2);
HMENU __cdecl FUN_00444d34(int param_1,LPCSTR param_2);
HCURSOR __cdecl FUN_00444d80(int param_1,LPCSTR param_2);
int * __cdecl FUN_00444dcc(int *param_1,int param_2,LPCSTR param_3);
undefined * __stdcall FUN_0044507c(void);
undefined4 __stdcall FUN_004450dc(void);
void __stdcall FUN_0044511c(void);
undefined4 __stdcall FUN_00445154(void);
undefined4 __stdcall FUN_00445198(void);
undefined4 * __cdecl FUN_004451f4(undefined4 *param_1,undefined4 param_2);
namespace OWL::TXInvalidModule { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXInvalidModule { void __cdecl vf3(int *param_1); }
void __cdecl FUN_004454a8(undefined4 param_1);
namespace OWL::TXInvalidModule { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_00445640(int param_1,byte param_2);
void __cdecl FUN_00445690(int param_1,byte param_2);
void __stdcall FUN_004456c0(void);
void __stdcall FUN_00445716(void);
undefined4 * __cdecl FUN_00445748(undefined4 *param_1,int *param_2);
undefined4 * __cdecl FUN_004457b0(undefined4 *param_1);
int * __cdecl FUN_004457f0(int *param_1,undefined4 *param_2);
int * __cdecl FUN_00445840(int *param_1,int *param_2);
namespace OWL::TModule::Streamer { int __cdecl vf1(int param_1,int *param_2); }
namespace OWL::TModule::Streamer { void __cdecl vf2(int param_1,int *param_2); }
undefined4 * __cdecl FUN_004458e0(int *param_1);
namespace OWL::TModule::Streamer { undefined4 __stdcall vf3(void); }
uint * __cdecl FUN_004459e8(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6, uint param_7,uint param_8,uint param_9);
namespace OWL::TOpenSaveDialog::TData { void __cdecl _dtor(int param_1,byte param_2); }
char * FUN_00445b04(char *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint *param_5);
namespace OWL::TOpenSaveDialog { undefined4 __cdecl vf14(undefined4 *param_1,int *param_2,undefined *param_3); }
void __cdecl FUN_00445c00(int *param_1,int param_2);
int * __cdecl FUN_00445d00(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7);
namespace OWL::TOpenSaveDialog { bool __cdecl vf1(int *param_1,int param_2,undefined4 param_3); }
namespace OWL::TOpenSaveDialog { undefined4 __stdcall vf15(void); }
int * __cdecl FUN_00445ea8(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7);
namespace OWL::TFileOpenDialog { undefined4 __cdecl vf6(int param_1); }
int * __cdecl FUN_00446060(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7);
namespace OWL::TFileSaveDialog { undefined4 __cdecl vf6(int param_1); }
namespace OWL::TRadioButton { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_004465fc(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, int param_6);
namespace OWL::TRadioButton { char * __cdecl vf9(int *param_1); }
namespace OWL::TRadioButton { void __cdecl BNClicked(int *param_1); }
namespace OWL::TScroller { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TScroller { void __cdecl vf3(int *param_1); }
namespace OWL::TScroller { void __cdecl vf5(int *param_1,int param_2,int param_3); }
namespace OWL::TScroller { void __cdecl vf6(int *param_1,int param_2,int param_3); }
namespace OWL::TScroller { void __cdecl vf2(int *param_1,int param_2,int param_3); }
namespace OWL::TScroller { void __cdecl vf4(int *param_1); }
namespace OWL::TScroller { void __cdecl vf7(int param_1,int param_2,int *param_3); }
namespace OWL::TScroller { void vf8(undefined4 param_1,int param_2,int param_3,int *param_4); }
namespace OWL::TScroller { void __cdecl vf9(int *param_1,undefined4 param_2,int param_3); }
namespace OWL::TScroller { void __cdecl vf10(int *param_1,undefined4 param_2,int param_3); }
namespace OWL::TScroller { void __cdecl vf11(int param_1,int param_2,int param_3); }
namespace OWL::TScroller { undefined1 __cdecl vf14(int param_1); }
namespace OWL::TScroller { void __cdecl vf15(int *param_1); }
namespace OWL::TScroller { void __cdecl vf1(int param_1,undefined4 param_2); }
namespace OWL::TScroller { bool __cdecl vf12(int param_1,UINT param_2,UINT param_3); }
namespace OWL::TScroller { void __cdecl vf13(int param_1,int param_2,byte param_3); }
namespace OWL::TScroller { void __cdecl vf16(int param_1,int param_2,UINT param_3,byte param_4); }
namespace OWL::TScroller { void __cdecl vf17(int param_1,int param_2); }
namespace OWL::TScroller { void __cdecl vf18(int param_1,int param_2,int *param_3,int *param_4); }
namespace OWL::TScroller { void __cdecl vf19(int param_1,int param_2,int param_3,int param_4,byte param_5); }
namespace OWL::TScroller { void __cdecl vf20(int param_1,int param_2); }
namespace OWL::TScroller { void __cdecl vf21(int param_1,int param_2,int param_3,byte param_4); }
void __stdcall FUN_0044730c(void);
void __stdcall FUN_00447362(void);
undefined4 * __cdecl FUN_00447394(undefined4 *param_1,int *param_2);
undefined4 * __cdecl FUN_004473fc(undefined4 *param_1);
int * __cdecl FUN_0044743c(int *param_1,undefined4 *param_2);
int * __cdecl FUN_0044748c(int *param_1,int *param_2);
namespace OWL::TScroller::Streamer { int __stdcall vf1(int param_1,int *param_2); }
int __stdcall FUN_004474ae(void);
namespace OWL::TScroller::Streamer { void __cdecl vf2(int param_1,int *param_2); }
undefined4 * __cdecl FUN_00447738(int *param_1);
namespace OWL::TScroller::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TStatic { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_0044788c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6);
namespace OWL::TStatic { void __cdecl EvSize(int *param_1,int param_2); }
namespace OWL::TStatic { char * __cdecl vf11(int *param_1); }
namespace OWL::TStatic { int __cdecl vf10(int *param_1,LPSTR param_2,int param_3); }
namespace OWL::TStatic { void __cdecl vf9(int *param_1); }
void __stdcall FUN_00447ac4(void);
void __stdcall FUN_00447b1a(void);
undefined4 * __cdecl FUN_00447b4c(undefined4 *param_1,int *param_2);
int * __cdecl FUN_00447bb4(int *param_1,int param_2);
undefined4 __cdecl EvRegisteredMsg_447cd0_447cd0(int param_1,int *param_2);
namespace OWL::TStatic::Streamer { void __cdecl vf2(int param_1,int *param_2); }
undefined4 * __cdecl FUN_00447d30(int *param_1);
namespace OWL::TStatic::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TTinyCaption { void __cdecl vf2(int param_1,int *param_2,undefined *param_3); }
namespace OWL::TTinyCaption { void __cdecl _dtor(int *param_1,uint param_2); }
undefined4 __cdecl EvNCHitTest_447f84(int *param_1,int *param_2);
undefined4 __cdecl FUN_00447fb8(int *param_1,int *param_2,undefined4 *param_3);
void __cdecl EvNCPaint_4481a8(int *param_1);
undefined4 __cdecl FUN_004481c4(int *param_1);
undefined4 __cdecl EvNccalcsize_44823c(int *param_1,undefined1 param_2,int param_3);
undefined4 __cdecl FUN_0044826c(int *param_1,undefined4 param_2,int param_3);
void __cdecl EvNclbuttondown_4482bc(int *param_1,int param_2,ushort *param_3);
int __cdecl FUN_004482e4(int *param_1,int param_2,ushort *param_3);
void __cdecl EvMouseMove_448608(int *param_1,undefined4 param_2,LONG *param_3);
undefined4 __cdecl FUN_00448630(int *param_1,undefined4 param_2,LONG *param_3);
void __cdecl EvLButtonUp_448828(int *param_1,undefined4 param_2,LONG *param_3);
undefined4 __cdecl FUN_00448850(int *param_1,undefined4 param_2,LONG *param_3);
undefined1 EvNcactivate_448960(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined1 param_5);
undefined4 __cdecl FUN_00448998(int *param_1,undefined4 param_2,undefined1 *param_3);
namespace OWL::TTinyCaption { undefined4 __cdecl vf1(int *param_1,uint param_2,HWND param_3,undefined4 param_4); }
undefined4 __cdecl FUN_00448a1c(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5);
void __cdecl EvSysCommand_448a68(int *param_1,uint param_2);
undefined4 __cdecl FUN_00448a90(int *param_1,uint param_2);
void __cdecl FUN_00448adc(undefined4 param_1,undefined4 *param_2,RECT *param_3,char param_4);
uint __cdecl FUN_00448e44(undefined4 param_1,undefined4 *param_2,RECT *param_3,char param_4);
void __cdecl FUN_00448fdc(undefined4 param_1,undefined4 *param_2,RECT *param_3);
void __cdecl FUN_00449224(undefined4 param_1,undefined4 *param_2,RECT *param_3,char param_4);
void __stdcall FUN_004492f4(int *param_1,undefined4 *param_2,int *param_3,char param_4);
void __stdcall FUN_004492fa(void);
void __cdecl FUN_0044949c(int *param_1);
int * __cdecl FUN_00449888(int *param_1,int *param_2);
int * __cdecl FUN_0044993c(int *param_1,int *param_2);
int * __cdecl FUN_0044998c(int *param_1,int *param_2);
int * __cdecl FUN_004499f8(int *param_1,int *param_2);
void __cdecl FUN_00449a48(int *param_1);
namespace OWL::TValidator { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TValidator { void __stdcall vf1(void); }
namespace OWL::TValidator { undefined1 __stdcall vf2(void); }
namespace OWL::TValidator { undefined1 __stdcall vf3(void); }
namespace OWL::TValidator { undefined4 __stdcall vf4(void); }
namespace OWL::TValidator { undefined4 __stdcall vf5(void); }
void __stdcall FUN_00449ca8(void);
void __stdcall FUN_00449cfe(void);
undefined4 * __cdecl FUN_00449d30(undefined4 *param_1,int *param_2);
undefined4 * __cdecl FUN_00449d98(undefined4 *param_1);
int * __cdecl FUN_00449dd8(int *param_1,undefined4 *param_2);
int * __cdecl FUN_00449e28(int *param_1,int *param_2);
namespace OWL::TValidator::Streamer { undefined4 __cdecl vf1(int param_1,int *param_2); }
namespace OWL::TValidator::Streamer { void __cdecl vf2(undefined4 param_1,int *param_2); }
undefined4 * __cdecl FUN_00449e88(int *param_1);
namespace OWL::TValidator::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TView { void __cdecl _dtor(undefined4 *param_1,uint param_2); }
namespace OWL::TView { undefined * __cdecl vf9(undefined4 param_1,int param_2); }
namespace OWL::TView { undefined * __cdecl vf8(undefined4 param_1,int param_2); }
namespace OWL::TView { int __cdecl vf7(undefined4 param_1,char *param_2); }
namespace OWL::TView { char * __cdecl vf10(int param_1,int param_2,undefined4 *param_3,char *param_4); }
void __stdcall FUN_0044a1bc(void);
namespace OWL::TView { undefined4 __stdcall vf4(void); }
namespace OWL::TView { undefined4 __stdcall vf5(void); }
int * __cdecl FUN_0044a1f8(uint *param_1,int param_2,undefined1 *param_3);
void __cdecl FUN_0044a2aa(int param_1,int param_2,int param_3);
namespace OWL::__TBarDescrGdNode { void __cdecl _dtor(int *param_1,byte param_2); }
void __cdecl FUN_0044a424(int param_1,int param_2);
namespace OWL::TBarDescr { void __stdcall _dtor(undefined4 *param_1,byte param_2); }
void __stdcall FUN_0044a4c6(void);
void __cdecl FUN_0044a5ac(int param_1,char param_2);
undefined4 __cdecl FUN_0044a5f8(int *param_1);
namespace OWL::TBarDescr { undefined4 __cdecl vf1(int param_1,int param_2); }
namespace OWL::TBarDescr { undefined4 __cdecl vf2(int param_1,int param_2,int *param_3); }
namespace OWL::TBarDescr { undefined4 __cdecl vf3(int param_1,int *param_2); }
undefined4 __cdecl FUN_0044aae4(undefined4 param_1,int param_2);
void __cdecl FUN_0044abd4(int param_1,byte param_2);
void __cdecl FUN_0044ad1c(int param_1,byte param_2);
void __cdecl FUN_0044ae6c(int param_1,byte param_2);
void __cdecl FUN_0044aebc(int param_1,byte param_2);
undefined4 * __stdcall FUN_0044aeec(undefined4 *param_1,int param_2);
undefined4 * __stdcall FUN_0044aef2(void);
void __stdcall FUN_0044afd4(void);
undefined * __stdcall FUN_0044b018(void);
undefined4 __stdcall FUN_0044b070(void);
undefined * __stdcall GetDocTemplateHead(uint param_1);
undefined4 * __stdcall GetModulePtr(uint param_1);
void __stdcall FUN_0044b138(void);
void __stdcall FUN_0044b17c(HMODULE param_1,undefined4 param_2,uint *param_3,undefined4 param_4);
undefined4 * __cdecl calloc(int param_1,int param_2);
undefined4 __stdcall operator_delete(void);
void __stdcall operator_delete_array(void);
undefined4 __cdecl set_new_handler(undefined4 param_1);
int __stdcall operator_new(void);
int __stdcall operator_new_array(void);
void __stdcall FUN_0044b3a0(void);
void __stdcall FUN_0044b400(void);
void __stdcall FUN_0044b440(void);
void __cdecl _vector_delete_ldtc_(int param_1,int param_2,int param_3,uint param_4,undefined *param_5);
int __cdecl FUN_0044b498(int param_1,int param_2,int param_3,uint param_4,undefined *param_5);
int * __cdecl _vector_new_ldtc_(int *param_1,int param_2,int param_3,uint param_4,undefined *param_5);
bool FUN_0044b790(int param_1,undefined4 *param_2,uint *param_3);
bool FUN_0044b7fc(undefined4 *param_1,SIZE_T param_2);
undefined4 FUN_0044b824(LPVOID param_1,int param_2);
undefined4 FUN_0044b870(LPVOID param_1,SIZE_T param_2);
undefined4 FUN_0044b888(LPVOID param_1);
undefined4 __cdecl FUN_0044b8c4(int *param_1,int *param_2,int *param_3);
undefined4 __stdcall FUN_0044b940(void);
undefined4 __stdcall malloc(void);
void __stdcall free(void);
undefined4 __stdcall FUN_0044b964(void);
void __cdecl FUN_0044b97c(undefined4 param_1);
void __cdecl FUN_0044b9c4(undefined4 param_1);
void __cdecl FUN_0044b9dc(undefined4 param_1);
void __cdecl FUN_0044b9f4(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_0044ba34(void);
void __stdcall FUN_0044ba38(void);
undefined4 __cdecl FUN_0044ba78(uint *param_1,uint param_2,uint param_3);
undefined4 __cdecl FUN_0044bb78(uint *param_1,uint param_2);
undefined4 __cdecl FUN_0044bc64(int param_1);
undefined4 __cdecl FUN_0044bf28(uint *param_1);
void __cdecl FUN_0044c01c(int param_1);
void __cdecl FUN_0044c048(int param_1);
int * __cdecl FUN_0044c150(int param_1);
uint * __cdecl FUN_0044c18c(uint param_1);
uint * __cdecl FUN_0044c1b4(uint param_1);
SIZE_T __stdcall FUN_0044c38c(void);
void __stdcall FUN_0044c3a4(void);
int __cdecl FUN_0044c404(int param_1,uint param_2);
uint * __cdecl FUN_0044c52c(uint *param_1,uint param_2);
uint * __cdecl FUN_0044c5e4(uint *param_1,uint param_2);
uint __cdecl FUN_0044c67c(int param_1);
void __stdcall FUN_0044c698(void);
void __stdcall FUN_0044c69c(void);
void __cdecl FUN_0044c960(int param_1);
void __cdecl FUN_0044c998(int param_1);
void __cdecl FUN_0044c9d0(int param_1);
undefined4 __cdecl FUN_0044ca68(int param_1);
int __cdecl FUN_0044ca74(int param_1);
int __cdecl FUN_0044ca88(int *param_1);
int __cdecl FUN_0044ca94(int *param_1);
undefined4 * __stdcall FUN_0044cab8(void);
undefined4 * __cdecl FUN_0044cac0(undefined4 *param_1);
undefined4 * __cdecl FUN_0044caf4(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_0044cb28(int *param_1);
undefined4 __cdecl FUN_0044cb48(undefined4 param_1);
void __stdcall FUN_0044cb70(void);
void __stdcall FUN_0044cb80(void);
undefined4 __cdecl FUN_0044cb88(undefined4 param_1);
undefined4 __cdecl FUN_0044cbb0(int param_1);
void __stdcall FUN_0044cbc4(void);
int __cdecl FUN_0044cbd4(int param_1,int param_2,undefined4 *param_3);
int __cdecl FUN_0044cbf8(int param_1,int param_2);
undefined4 __cdecl FUN_0044cc2c(undefined4 param_1);
int * __cdecl FUN_0044cc54(int *param_1);
undefined4 __cdecl FUN_0044cc90(undefined4 *param_1);
undefined4 __cdecl FUN_0044cc9c(int *param_1,uint param_2);
undefined4 * __cdecl FUN_0044ccb4(undefined4 *param_1);
undefined4 * __cdecl FUN_0044cce0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
int * __cdecl FUN_0044cd28(int *param_1,int param_2);
undefined4 __cdecl FUN_0044cda8(int param_1);
int __cdecl FUN_0044cdb4(int *param_1,int param_2);
int * __cdecl FUN_0044cdc8(int *param_1,int param_2,undefined4 *param_3);
namespace __rwstd::locale_vector_rwstd_facet_imp_ptr { void __cdecl _dtor(int *param_1,byte param_2); }
int __cdecl FUN_0044ce78(int param_1,int param_2);
void __cdecl FUN_0044cee8(int *param_1);
undefined4 __cdecl FUN_0044cf00(int param_1);
int __cdecl FUN_0044cf10(int param_1,uint *param_2);
undefined4 __cdecl FUN_0044d088(undefined4 param_1);
undefined4 * __cdecl FUN_0044d090(undefined4 *param_1,int param_2);
bool __cdecl FUN_0044d0e4(char *param_1,char *param_2);
void __cdecl FUN_0044d0fc(undefined1 *param_1,undefined1 *param_2);
char * __cdecl FUN_0044d10c(uint *param_1);
namespace std::string { int __cdecl string_from_cstr(int param_1,uint *param_2); }
undefined4 * __cdecl FUN_0044d24c(undefined4 *param_1,undefined4 *param_2,uint param_3);
int __cdecl FUN_0044d26c(int param_1,undefined4 param_2);
namespace std::string { int * __cdecl __getRep(undefined4 param_1,uint param_2,uint param_3); }
int __stdcall FUN_0044d364(void);
undefined4 * __cdecl FUN_0044d3d0(undefined4 *param_1);
undefined4 * __cdecl FUN_0044d410(undefined4 *param_1,int param_2);
void __cdecl FUN_0044d444(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void __cdecl FUN_0044d45c(undefined4 param_1,undefined4 *param_2);
undefined4 __cdecl FUN_0044d4ac(undefined4 param_1,undefined4 param_2);
undefined4 * __cdecl FUN_0044d50c(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_0044d540(undefined4 param_1,undefined4 param_2,undefined1 *param_3);
void __cdecl FUN_0044d558(undefined4 param_1,undefined1 *param_2);
void __cdecl FUN_0044d574(int *param_1,int param_2);
undefined4 __stdcall FUN_0044d590(void);
int __cdecl FUN_0044d594(int param_1);
int __cdecl FUN_0044d5a0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5);
int __cdecl FUN_0044d5c8(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6, uint param_7);
undefined4 * __cdecl FUN_0044d9c0(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_0044da08(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_0044da50(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 __cdecl FUN_0044da70(int param_1);
undefined4 __cdecl FUN_0044da88(int param_1);
undefined4 __cdecl FUN_0044da94(int param_1);
namespace __rwstd::locale_vector_std_string { void __cdecl _dtor(int *param_1,byte param_2); }
namespace std::wstring { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_0044dbb4(int param_1);
undefined4 __cdecl FUN_0044dc4c(int param_1);
int __cdecl FUN_0044dc58(int param_1);
int __cdecl FUN_0044dc6c(int *param_1);
int __cdecl FUN_0044dc78(int *param_1);
undefined * __stdcall FUN_0044dc9c(void);
undefined4 * __cdecl FUN_0044dca4(undefined4 *param_1);
undefined4 * __cdecl FUN_0044dcdc(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_0044dd10(int *param_1);
undefined4 __cdecl FUN_0044dd30(undefined4 param_1);
void __stdcall FUN_0044dd58(void);
void __stdcall FUN_0044dd68(void);
undefined4 __cdecl FUN_0044dd70(undefined4 param_1);
void __stdcall FUN_0044dd98(void);
int __cdecl FUN_0044dda8(int param_1,int param_2,undefined4 *param_3);
int __cdecl FUN_0044ddcc(int param_1,int param_2);
undefined4 __cdecl FUN_0044de00(undefined4 param_1);
undefined4 __cdecl FUN_0044de28(int param_1);
int __cdecl FUN_0044de3c(int param_1);
int __cdecl FUN_0044deac(int param_1,undefined4 *param_2);
int __cdecl FUN_0044dee8(int param_1);
int __cdecl FUN_0044df74(int param_1,undefined4 *param_2);
int __cdecl FUN_0044dfb0(int param_1);
void __cdecl FUN_0044dfbc(int *param_1);
undefined4 * __cdecl FUN_0044dfd4(undefined4 *param_1);
undefined4 * __cdecl FUN_0044e0c4(undefined4 *param_1,undefined4 param_2);
undefined4 * __cdecl FUN_0044e12c(undefined4 *param_1);
int * __cdecl FUN_0044e17c(int *param_1);
void __cdecl FUN_0044e1e4(int param_1,char param_2);
undefined4 __stdcall FUN_0044e218(void);
undefined4 * __cdecl FUN_0044e220(undefined4 *param_1,int param_2);
namespace std::basic_filebuf_char { void __cdecl _dtor(int *param_1,byte param_2); }
int * __cdecl FUN_0044e3b8(int *param_1);
undefined4 __stdcall FUN_0044e520(void);
bool __cdecl FUN_0044e524(undefined4 param_1,int param_2);
undefined4 __cdecl FUN_0044e534(undefined4 param_1,uint param_2);
namespace std::basic_streambuf_char { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 * __cdecl FUN_0044e5a4(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_0044e60c(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_0044e66c(undefined4 *param_1);
void __cdecl FUN_0044e6d4(int param_1,undefined4 param_2);
undefined4 __cdecl FUN_0044e724(int param_1);
undefined4 __cdecl FUN_0044e788(int *param_1);
void __cdecl FUN_0044e7a0(int param_1,uint param_2);
void __cdecl FUN_0044e7b8(int param_1,uint param_2);
undefined4 __cdecl FUN_0044ea38(int param_1);
undefined4 __cdecl FUN_0044ea44(int param_1);
int * __cdecl FUN_0044ea50(int *param_1,LPCSTR param_2,uint param_3,uint param_4);
DWORD __cdecl FUN_0044eb5c(undefined4 param_1,uint param_2,LONG param_3,int param_4);
void __cdecl FUN_0044eb78(int param_1,uint param_2);
namespace std::basic_ostream_char { void __cdecl _dtor(undefined4 *param_1,uint param_2); }
namespace std::basic_istream_char { void __cdecl _dtor(undefined4 *param_1,uint param_2); }
namespace std::basic_ios_char { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
int * __cdecl FUN_0044ecfc(int *param_1,int param_2,LPCSTR param_3,uint param_4,uint param_5);
void __cdecl FUN_0044edac(int *param_1,LPCSTR param_2,uint param_3,uint param_4);
namespace std::basic_ifstream_char { void __cdecl _dtor(undefined4 *param_1,uint param_2); }
int * __cdecl FUN_0044ee94(int *param_1,int param_2,int param_3);
undefined4 __cdecl FUN_0044ef44(int param_1);
int * __cdecl FUN_0044ef50(int *param_1,int param_2,int param_3);
undefined4 * __cdecl FUN_0044eff8(undefined4 *param_1,int *param_2,char param_3);
undefined4 __cdecl FUN_0044f17c(int param_1);
bool __cdecl FUN_0044f188(int *param_1,int *param_2);
bool __cdecl FUN_0044f1a0(int param_1,uint param_2,byte param_3);
bool __cdecl FUN_0044f1e0(int param_1);
undefined4 __cdecl FUN_0044f1f4(int param_1);
int * __cdecl FUN_0044f200(int *param_1);
undefined4 __cdecl FUN_0044f23c(int *param_1);
undefined4 __cdecl FUN_0044f24c(int param_1);
undefined4 __cdecl FUN_0044f258(int *param_1);
undefined1 __cdecl FUN_0044f290(undefined1 *param_1);
undefined4 __cdecl FUN_0044f29c(int param_1);
undefined4 __cdecl FUN_0044f2a8(int param_1);
void __cdecl FUN_0044f2b4(int *param_1);
undefined4 __cdecl FUN_0044f2f8(int *param_1);
void __cdecl FUN_0044f344(int param_1,int param_2);
namespace std::basic_istream_char::sentry { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_0044f370(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_0044f38c(int param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_0044f3a4(int param_1,int param_2);
int * __cdecl FUN_0044f3d0(int *param_1,int param_2,LPCSTR param_3,uint param_4,uint param_5);
void __cdecl FUN_0044f480(int *param_1,LPCSTR param_2,uint param_3,uint param_4);
namespace std::basic_ofstream_char { void __cdecl _dtor(undefined4 *param_1,uint param_2); }
undefined4 * __cdecl FUN_0044f568(undefined4 *param_1,int *param_2);
undefined1 __stdcall FUN_0044f650(void);
bool __cdecl FUN_0044f65c(undefined *param_1);
bool __cdecl FUN_0044f670(undefined4 *param_1);
undefined4 __cdecl FUN_0044f6a8(undefined4 param_1,int *param_2);
int __cdecl FUN_0044f6d0(int param_1,undefined4 *param_2,uint param_3);
int __cdecl FUN_0044f8a4(int param_1,int param_2,uint param_3,uint param_4);
undefined4 * __cdecl FUN_0044fa1c(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_0044fa64(int param_1,int param_2);
int __cdecl FUN_0044fb48(int *param_1,uint param_2,undefined4 param_3);
void __cdecl FUN_0044fbcc(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __stdcall FUN_0044fc04(void);
void __stdcall FUN_0044fc8c(void);
undefined4 * __cdecl FUN_0044fca4(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined1 __cdecl FUN_0044fcf8(undefined1 *param_1);
bool __cdecl FUN_0044fd04(int param_1);
undefined4 __cdecl FUN_0044fd18(int param_1);
namespace std::basic_filebuf_char { void __cdecl vf9(int *param_1); }
undefined4 __cdecl FUN_004501bc(int *param_1);
undefined4 * __cdecl FUN_004501cc(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_004501e0(int *param_1);
int __cdecl FUN_00450210(int *param_1);
undefined4 __cdecl FUN_00450228(int param_1);
undefined4 __cdecl FUN_00450234(int param_1);
undefined4 __cdecl FUN_00450240(int param_1);
undefined4 __cdecl FUN_0045024c(int param_1);
undefined4 __cdecl FUN_00450258(int *param_1,undefined1 param_2);
int * __cdecl FUN_004502a4(int *param_1,int param_2);
int * __cdecl FUN_004502e8(int *param_1,int *param_2);
int * __cdecl FUN_0045033c(int *param_1);
bool __cdecl FUN_00450378(undefined4 param_1,uint param_2,char *param_3,int param_4,int param_5);
namespace std::basic_filebuf_char { int __cdecl vf10(int param_1,int param_2); }
namespace std::basic_filebuf_char { undefined4 __cdecl vf12(int *param_1); }
int * __cdecl FUN_0045075c(int *param_1,int param_2);
undefined4 * __cdecl FUN_004507b0(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_004507dc(undefined4 *param_1);
bool __cdecl FUN_004507e8(int *param_1,int *param_2);
undefined4 * __cdecl FUN_00450800(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_00450850(int *param_1,int *param_2);
bool __cdecl FUN_0045089c(int *param_1,int *param_2);
namespace std::basic_filebuf_char { void __cdecl vf7(int *param_1); }
undefined4 __cdecl FUN_00450cf8(int *param_1);
void __cdecl FUN_00450d28(undefined4 *param_1,undefined4 param_2);
char * __cdecl FUN_00450d38(undefined4 param_1,uint param_2,char *param_3,int param_4,int param_5);
int __cdecl FUN_00450d60(int param_1,char *param_2,char *param_3);
namespace std::basic_streambuf_char { void __stdcall vf9(void); }
namespace std::basic_streambuf_char { void __stdcall vf10(void); }
namespace std::basic_streambuf_char { undefined4 __stdcall vf12(void); }
namespace std::basic_streambuf_char { void __cdecl vf8(int *param_1); }
namespace std::basic_streambuf_char { void __stdcall vf7(void); }
int __cdecl FUN_00450e6c(byte *param_1,byte *param_2,int param_3);
namespace std::basic_filebuf_char { int __cdecl vf5(int param_1); }
namespace std::basic_filebuf_char { int __cdecl vf11(int *param_1,undefined1 *param_2,int param_3); }
undefined4 __cdecl FUN_00451050(int param_1);
int __cdecl FUN_0045105c(int *param_1);
int * __cdecl FUN_00451098(int *param_1,undefined1 *param_2,int param_3);
undefined1 __cdecl FUN_004512a4(int param_1);
namespace std::basic_streambuf_char { int __cdecl vf5(int param_1); }
namespace std::basic_streambuf_char { uint __cdecl vf6(int *param_1,undefined4 *param_2,uint param_3); }
namespace std::basic_streambuf_char { int __cdecl vf11(int *param_1,undefined1 *param_2,int param_3); }
void __cdecl FUN_0045143c(int param_1);
int * __cdecl FUN_004514ac(int *param_1,undefined1 *param_2,int param_3,char param_4);
bool __cdecl FUN_00451698(int param_1);
undefined1 __cdecl FUN_004516ac(int param_1);
undefined4 __cdecl FUN_004516b8(undefined4 param_1,undefined *param_2);
int * __cdecl FUN_004516c8(int *param_1,undefined1 param_2);
int * __cdecl FUN_004517ec(int *param_1,int param_2,int param_3);
undefined4 __cdecl FUN_00451908(int *param_1);
undefined4 __cdecl FUN_00451924(int param_1,undefined4 param_2);
namespace std::basic_filebuf_char { int * __cdecl vf2(int *param_1,int param_2,int param_3); }
namespace std::basic_streambuf_char { undefined4 __cdecl vf2(undefined4 param_1); }
namespace std::string { int __cdecl append(int param_1,int param_2); }
int __cdecl FUN_00451b48(int param_1,uint param_2,uint param_3,int param_4);
void __cdecl FUN_00451b84(int param_1,uint param_2,int param_3);
namespace std::string { int __cdecl replace_fill(int param_1,uint param_2,uint param_3,uint param_4,undefined1 param_5); }
undefined4 * __cdecl FUN_004520bc(undefined4 *param_1,uint param_2,undefined1 param_3);
int __cdecl FUN_004520dc(int *param_1,uint param_2);
void __cdecl FUN_00452210(int param_1,uint param_2);
namespace std::basic_filebuf_char { int * __cdecl vf3(int *param_1,int *param_2,int param_3,int param_4); }
undefined4 __cdecl FUN_00452954(int *param_1);
undefined4 * __cdecl FUN_00452964(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_00452994(int *param_1,int param_2);
void __cdecl FUN_004529a4(int *param_1,int param_2);
namespace std::basic_filebuf_char { int * __cdecl vf4(int *param_1,int *param_2); }
undefined4 * __cdecl FUN_00452b9c(undefined4 *param_1,int param_2);
int * __cdecl FUN_00452bbc(int *param_1,int *param_2);
namespace std::basic_streambuf_char { int * __cdecl vf3(int *param_1); }
namespace std::basic_streambuf_char { int * __cdecl vf4(int *param_1); }
void __cdecl FUN_00452c68(int param_1,uint param_2);
int __cdecl FUN_00452cd8(int param_1,byte *param_2,int param_3,int param_4);
void __cdecl FUN_00452de4(int *param_1);
namespace std::basic_streambuf_char { void __cdecl vf1(int param_1,int *param_2); }
undefined4 __cdecl FUN_00452e94(int param_1,uint param_2);
undefined4 * __cdecl FUN_00452ec4(undefined4 *param_1);
undefined4 * __cdecl FUN_00452ef0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __cdecl FUN_00452f44(undefined4 *param_1);
void __cdecl FUN_00452fd4(int param_1);
undefined4 * __cdecl FUN_00452fe0(undefined4 *param_1,undefined4 param_2);
namespace __rwstd::facet_imp { undefined4 vf2(int *param_1,undefined **param_2,byte *param_3,byte *param_4,undefined4 param_5, char *param_6,undefined **param_7,byte *param_8,byte *param_9,byte *param_10, undefined4 *param_11,undefined4 *param_12,byte *param_13,undefined4 param_14, char *param_15,undefined **param_16,byte *param_17,byte *param_18,byte *param_19, byte *param_20,byte *param_21,undefined4 param_22,char *param_23,undefined **param_24, byte *param_25,uint *param_26,byte *param_27,byte *param_28,byte *param_29, undefined4 param_30,char *param_31,undefined **param_32,byte *param_33,byte *param_34); }
undefined4 * __cdecl FUN_0045336c(undefined4 *param_1,int param_2);
namespace std::ios_base::failure { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::ios_base::failure { undefined4 __cdecl vf1(int param_1); }
undefined4 __cdecl FUN_00453564(undefined4 param_1);
namespace std::ios_base::Init { void __cdecl _dtor(int param_1,byte param_2); }
undefined4 * __cdecl FUN_00453658(undefined4 *param_1);
namespace std::ios_base { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __stdcall FUN_0045381c(void);
void __stdcall FUN_004538e8(void);
undefined4 * __cdecl FUN_004539b8(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4);
void __cdecl FUN_00453bf0(int param_1,int *param_2);
void __cdecl FUN_00453dcc(undefined4 *param_1,byte param_2);
uint __cdecl FUN_00453e60(int param_1,uint param_2);
void __cdecl FUN_00453e94(int param_1,byte *param_2,byte *param_3);
uint __cdecl FUN_00453ed0(int param_1,uint param_2);
void __cdecl FUN_00453f04(int param_1,byte *param_2,byte *param_3);
undefined1 __cdecl FUN_00453f40(undefined4 param_1,undefined1 param_2);
int __cdecl FUN_00453f48(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
undefined1 __cdecl FUN_00453f6c(undefined4 param_1,undefined1 param_2);
int __cdecl FUN_00453f74(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4, undefined4 *param_5);
undefined4 __cdecl FUN_00453f98(char *param_1);
undefined4 * __cdecl FUN_00453ff8(undefined4 *param_1,uint *param_2,undefined4 param_3);
void __cdecl FUN_004541b8(undefined4 *param_1,byte param_2);
uint * __cdecl FUN_00454218(uint *param_1);
void __stdcall FUN_0045439c(void);
int __cdecl FUN_0045440c(int param_1);
namespace __rwstd::ref_counted { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
int * __cdecl FUN_00454484(int *param_1);
undefined4 * __cdecl FUN_004544a4(undefined4 *param_1,int param_2,undefined4 param_3);
namespace __rwstd::locale_imp { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined * __cdecl FUN_0045474c(int param_1,uint param_2);
int * __cdecl FUN_00454780(int *param_1,uint *param_2,int param_3);
namespace __rwstd::use_Clib_locale { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __stdcall FUN_00454940(void);
int * __cdecl FUN_00454d5c(int *param_1,int *param_2);
int __cdecl FUN_00454dd0(int param_1,int *param_2);
int * __cdecl FUN_00455140(int *param_1,uint *param_2,char param_3,uint param_4,undefined *param_5);
void __cdecl FUN_004552e0(int *param_1,int *param_2,uint *param_3);
void __cdecl FUN_004553a0(undefined4 *param_1,byte param_2);
undefined4 __cdecl FUN_00455404(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8);
undefined4 __cdecl FUN_00455420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8);
undefined4 __stdcall FUN_0045543c(void);
undefined1 __stdcall FUN_00455448(void);
undefined4 __stdcall FUN_00455450(void);
uint __cdecl FUN_0045545c(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5);
undefined4 __stdcall FUN_00455470(void);
namespace std::runtime_error { undefined4 __cdecl vf1(int param_1); }
undefined4 __cdecl FUN_004554fc(int param_1,int *param_2);
undefined1 * __cdecl FUN_00455640(undefined1 *param_1,byte *param_2);
namespace std::exception { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::bad_alloc { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::logic_error { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::length_error { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::out_of_range { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::runtime_error { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
char * __cdecl memchr(char *param_1,char param_2,int param_3);
short * __cdecl FUN_004559b0(short *param_1,short param_2,int param_3);
undefined4 * __cdecl memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 * __cdecl FUN_004559f4(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 * __cdecl memset(undefined4 *param_1,undefined1 param_2,uint param_3);
undefined2 * __cdecl FUN_00455acc(undefined2 *param_1,undefined2 param_2,int param_3);
char * __cdecl FUN_00455ae4(char *param_1,char *param_2);
char * __cdecl FUN_00455b20(char *param_1,char param_2);
int __cdecl FUN_00455b74(char *param_1,char *param_2);
char * __cdecl FUN_00455bc0(char *param_1,char *param_2);
char * __cdecl strlen(uint *param_1);
char * __cdecl FUN_00455c4c(char *param_1,char *param_2,uint param_3);
char * __cdecl thunk_memchr(char *param_1,char param_2,int param_3);
char * __cdecl thunk_FUN_00455b20(char *param_1,char param_2);
char * __cdecl thunk_FUN_00455b20_455cd5(char *param_1,char param_2);
uint * __cdecl thunk_strrchr(uint *param_1,char param_2);
char * __cdecl thunk_FUN_00455e58(char *param_1,char *param_2);
int __cdecl FUN_00455cf4(byte *param_1,byte *param_2,int param_3);
undefined4 * __cdecl FUN_00455d60(uint *param_1);
int __cdecl FUN_00455d94(char *param_1,char *param_2);
undefined4 * __cdecl FUN_00455ddc(undefined4 *param_1,uint *param_2,char *param_3);
uint * __cdecl strrchr(uint *param_1,char param_2);
char * __cdecl FUN_00455e58(char *param_1,char *param_2);
int __cdecl FUN_00455eac(short *param_1);
short * __cdecl FUN_00455ec4(short *param_1,short *param_2);
undefined4 __InitExceptBlockLDTC(int param_1);
undefined4 __cdecl FUN_00455f74(int param_1,int *param_2,undefined4 param_3,int param_4);
void __stdcall FUN_004560cb(void);
undefined4 * __cdecl FUN_0045611e(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5,int *param_6, uint *param_7,int param_8);
undefined4 __cdecl FUN_00456385(undefined4 *param_1,int param_2,int *param_3,int *param_4);
char * __cdecl FUN_00456428(int param_1);
undefined4 __cdecl FUN_00456460(int *param_1,int *param_2);
undefined4 __cdecl FUN_0045653c(int *param_1,int *param_2,int param_3,undefined4 param_4);
namespace std::type_info { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 * __cdecl FUN_0045666c(int param_1,int param_2,int param_3);
char * __cdecl FUN_0045677c(int param_1);
undefined4 * __cdecl FUN_004567e4(int param_1,int param_2,int *param_3,int *param_4,int param_5);
int __cdecl FUN_004568cc(int param_1,int param_2,int *param_3);
namespace type_info_hash { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __stdcall FUN_00456a14(void);
void __stdcall FUN_00456a3c(void);
void __stdcall FUN_00456ae0(void);
void __stdcall FUN_00456b54(void);
void __cdecl FUN_00456b8c(undefined4 *param_1);
void __cdecl FUN_00456bd8(undefined4 *param_1);
undefined4 __stdcall FUN_00456c00(void);
LONG __cdecl FUN_00456c0c(PEXCEPTION_RECORD param_1,PVOID param_2,PCONTEXT param_3);
void __cdecl FUN_00456cfc(undefined4 *param_1);
void __cdecl FUN_00456d18(undefined4 *param_1);
undefined4 __cdecl FUN_00456d28(undefined4 param_1);
void __stdcall FUN_00456d74(void);
void __cdecl FUN_00456d88(undefined4 *param_1);
void __cdecl FUN_00456d9d(undefined4 *param_1);
void FUN_00456dd6(PVOID param_1,PEXCEPTION_RECORD param_2);
undefined4 __stdcall FUN_00456deb(void);
undefined4 __cdecl FUN_00456df4(LPCSTR param_1,byte param_2);
undefined4 __cdecl FUN_00456e30(uint param_1);
bool __cdecl FUN_00456e90(uint param_1);
bool __cdecl FUN_00456ec0(HANDLE param_1);
DWORD __cdecl FUN_00456ed8(uint param_1,LONG param_2,int param_3);
int __cdecl FUN_00456f50(LPCSTR param_1,uint param_2,uint param_3);
char * __cdecl FUN_0045714c(char *param_1,int param_2);
char * __cdecl FUN_004571b8(uint param_1,char *param_2,char *param_3);
int __cdecl FUN_004572e8(LPCWSTR param_1,uint param_2,uint param_3);
int __cdecl FUN_004574e4(uint param_1,char *param_2,uint param_3);
undefined4 __cdecl FUN_00457600(undefined1 *param_1);
int __stdcall FUN_00457614(void);
undefined4 __cdecl FUN_0045764c(uint param_1,LPVOID param_2,DWORD param_3);
void __cdecl FUN_00457694(uint param_1,char *param_2,char *param_3);
void __cdecl FUN_004576b0(LPCWSTR param_1,uint param_2);
void __cdecl FUN_004576d0(LPCWSTR param_1,uint param_2);
undefined4 __cdecl FUN_004576e8(uint param_1,LPCVOID param_2,DWORD param_3);
void __cdecl FUN_00457730(uint param_1,char *param_2,uint param_3);
undefined4 __cdecl thunk_FUN_00456df4(LPCSTR param_1,byte param_2);
undefined4 __cdecl FUN_00457754(int *param_1,int param_2,int param_3,int param_4);
undefined4 __cdecl thunk_FUN_00456e30(uint param_1);
undefined4 __cdecl FUN_004577dc(int *param_1);
int __stdcall FUN_0045785c(void);
void __cdecl FUN_004578b8(undefined *param_1);
void __cdecl FUN_004578c8(undefined4 *param_1);
char * __cdecl FUN_004578dc(char *param_1,LPCSTR param_2,uint param_3);
int __cdecl FUN_004579b0(undefined4 param_1,undefined4 param_2);
uint __cdecl FUN_004579f0(uint param_1,uint param_2,undefined4 param_3);
void __cdecl FUN_00457a58(uint param_1);
int __cdecl FUN_00457a74(int *param_1);
void __stdcall FUN_00457b10(void);
undefined4 __cdecl FUN_00457c6c(int param_1);
undefined4 __stdcall FUN_00457cd0(void);
DWORD __cdecl thunk_FUN_00456ed8(uint param_1,LONG param_2,int param_3);
int __cdecl thunk_FUN_00456f50(LPCSTR param_1,uint param_2,uint param_3);
char * __cdecl thunk_FUN_004571b8(uint param_1,char *param_2,char *param_3);
uint __cdecl FUN_00457d04(undefined *param_1,undefined *param_2,undefined4 param_3,uint param_4,int param_5, int *param_6,int *param_7);
uint __cdecl FUN_00457ecc(undefined4 *param_1,uint param_2,int *param_3);
void __cdecl FUN_00457ef4(undefined1 *param_1,byte *param_2);
void __cdecl FUN_00457f1c(undefined1 *param_1,byte *param_2,uint *param_3);
void __cdecl FUN_0045805c(int param_1);
void __cdecl FUN_004580a4(undefined1 param_1,int param_2);
void __cdecl FUN_004580d8(uint param_1,int param_2);
uint __cdecl FUN_0045810c(undefined4 param_1,undefined4 param_2,byte *param_3,int param_4,undefined4 param_5, uint *param_6);
int __cdecl thunk_FUN_004574e4(uint param_1,char *param_2,uint param_3);
char * __cdecl FUN_00458a78(char *param_1,char *param_2,uint param_3);
undefined4 __cdecl FUN_00458d3c(int param_1);
undefined4 __cdecl FUN_00458d90(uint param_1);
bool __cdecl FUN_00458da8(uint param_1);
undefined4 __cdecl FUN_00458dbc(uint param_1);
undefined4 __cdecl FUN_00458dd4(uint param_1);
undefined4 __cdecl FUN_00458de8(uint param_1);
undefined4 __cdecl FUN_00458dfc(uint param_1);
undefined4 __cdecl FUN_00458e14(uint param_1);
undefined4 __cdecl FUN_00458e28(uint param_1);
undefined4 __cdecl FUN_00458e40(uint param_1);
undefined4 __cdecl FUN_00458e54(uint param_1);
undefined4 __cdecl FUN_00458e68(uint param_1);
undefined4 __cdecl FUN_00458e7c(uint param_1);
void __cdecl FUN_00458e94(ushort param_1);
bool __cdecl FUN_00458eac(ushort param_1);
void __cdecl FUN_00458ec0(ushort param_1);
void __cdecl FUN_00458ed8(ushort param_1);
void __cdecl FUN_00458eec(ushort param_1);
void __cdecl FUN_00458f00(ushort param_1);
void __cdecl FUN_00458f18(ushort param_1);
void __cdecl FUN_00458f2c(ushort param_1);
void __cdecl FUN_00458f44(ushort param_1);
uint __cdecl FUN_00458f58(ushort param_1);
void __cdecl FUN_00458f6c(ushort param_1);
void __cdecl FUN_00458f80(ushort param_1);
ushort __cdecl FUN_00458f98(uint param_1,ushort param_2);
uint __cdecl FUN_00458fdc(WCHAR param_1,uint param_2);
undefined4 __cdecl FUN_00459034(ushort param_1,LPCWSTR param_2);
undefined4 __cdecl FUN_004590e4(ushort param_1,uint *param_2);
uint __cdecl FUN_00459634(int *param_1,byte *param_2);
int __cdecl FUN_0045988c(uint *param_1,ushort param_2);
void __cdecl FUN_00459a48(int param_1);
undefined4 __cdecl FUN_00459df4(int *param_1,char *param_2);
undefined4 __cdecl FUN_0045a014(uint *param_1,uint *param_2);
undefined4 __cdecl FUN_0045a1b4(LCID param_1,LCTYPE param_2,undefined4 *param_3);
undefined4 __cdecl FUN_0045a210(LCID param_1,LCTYPE param_2,undefined2 *param_3,int param_4);
undefined4 __cdecl FUN_0045a26c(LCID param_1,UINT param_2,undefined4 *param_3);
bool __cdecl FUN_0045a354(LCID param_1,undefined2 *param_2);
bool __cdecl FUN_0045a4d4(LCID param_1,undefined4 *param_2);
bool __cdecl FUN_0045a930(LCID param_1,undefined4 *param_2);
undefined4 __stdcall FUN_0045a9b8(void);
undefined ** __stdcall FUN_0045a9c4(void);
byte * __cdecl FUN_0045aa5c(byte *param_1);
uint __cdecl FUN_0045aa80(uint param_1);
uint __cdecl FUN_0045aad4(uint param_1);
undefined4 __cdecl FUN_0045ab28(byte *param_1,int param_2);
undefined4 __cdecl FUN_0045aba4(LPWSTR param_1,byte *param_2,int param_3);
int __cdecl FUN_0045ac78(LPSTR param_1,ushort param_2);
char * __cdecl FUN_0045acec(LPWSTR param_1,uint *param_2,char *param_3);
int __cdecl FUN_0045ae18(short *param_1,int param_2);
uint __cdecl FUN_0045ae54(LPSTR param_1,LPCWSTR param_2,uint param_3);
undefined4 __cdecl FUN_0045aff8(ushort param_1,uint *param_2);
int FUN_0045b0ab(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5);
uint FUN_0045b16e(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5);
void __cdecl thunk_FUN_0045b7f8(uint param_1,char *param_2,uint param_3);
void __stdcall FUN_0045b218(void);
int __cdecl FUN_0045b3a0(char *param_1);
void __cdecl FUN_0045b408(char *param_1);
undefined2 __stdcall FUN_0045b418(void);
uint __cdecl FUN_0045b42c(uint param_1,int param_2);
undefined4 __stdcall thunk_FUN_0045b474(void);
undefined4 __stdcall thunk_FUN_0045b474_45b462(void);
undefined4 __stdcall FUN_0045b474(void);
void __stdcall FUN_0045b4a4(void);
undefined4 __stdcall FUN_0045b4bc(void);
void __cdecl FUN_0045b4e4(int param_1);
void __cdecl FUN_0045b514(longlong *param_1,longdouble *param_2);
ushort __cdecl FUN_0045b538(longdouble *param_1);
char * __cdecl FUN_0045b54c(int param_1,uint param_2,char *param_3,uint param_4,char param_5,char param_6);
void __cdecl FUN_0045b600(int param_1,undefined4 param_2,undefined4 param_3,ushort param_4);
char * __cdecl FUN_0045b718(uint param_1,char *param_2,uint param_3,char param_4,char param_5);
void __cdecl FUN_0045b78c(uint param_1,char *param_2);
void __cdecl FUN_0045b7a8(uint param_1,char *param_2,uint param_3);
void __cdecl FUN_0045b7d8(uint param_1,char *param_2,uint param_3);
void __cdecl FUN_0045b7f8(uint param_1,char *param_2,uint param_3);
undefined4 __cdecl FUN_0045b820(int *param_1);
undefined4 __cdecl FUN_0045b84c(int *param_1);
void __cdecl FUN_0045b87c(undefined *param_1,undefined *param_2);
undefined4 __cdecl FUN_0045b894(undefined4 *param_1);
undefined4 __cdecl FUN_0045b8bc(uint *param_1,uint param_2);
uint __cdecl FUN_0045b8ec(char param_1,uint param_2,uint param_3);
byte * __cdecl FUN_0045b930(longdouble *param_1,uint param_2,byte *param_3,byte param_4,char param_5,int param_6);
int __cdecl FUN_0045bbb8(int param_1,int param_2);
uint __cdecl FUN_0045bbe8(short param_1,uint param_2,uint param_3);
void __cdecl FUN_0045bc34(longdouble *param_1,int param_2,ushort *param_3,ushort param_4,short param_5, int param_6);
int __cdecl FUN_0045beec(int param_1,int param_2);
void __cdecl FUN_0045bf1c(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5, int *param_6,undefined4 *param_7);
void __cdecl FUN_0045c368(float *param_1,double *param_2,uint param_3);
void __cdecl FUN_0045c400(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5, int *param_6,undefined4 *param_7);
void __cdecl FUN_0045c848(float *param_1,double *param_2,uint param_3);
int __cdecl FUN_0045c8e0(int *param_1);
void __cdecl FUN_0045c8fc(undefined4 param_1,int *param_2);
uint __cdecl FUN_0045c908(char *param_1,int *param_2,uint param_3);
int __cdecl FUN_0045c994(longdouble *param_1,uint param_2,uint *param_3,undefined4 *param_4,int param_5);
int __cdecl FUN_0045cc68(longdouble *param_1,int param_2,uint *param_3,undefined2 *param_4,int param_5);
undefined4 __cdecl FUN_0045cf5c(UINT param_1);
undefined4 __cdecl FUN_0045d098(uint param_1);
undefined4 __cdecl FUN_0045d0d8(uint param_1);
undefined4 __cdecl FUN_0045d0f4(uint param_1);
byte * __cdecl FUN_0045d110(byte *param_1,byte *param_2,uint param_3);
undefined4 __cdecl FUN_0045d164(byte *param_1,byte *param_2,int param_3);
byte * __cdecl FUN_0045d224(byte *param_1,uint param_2);
void __cdecl FUN_0045d27c(uint *param_1,int param_2);
void __cdecl FUN_0045d2c4(undefined4 param_1,undefined4 param_2,uint param_3);
undefined * __stdcall FUN_0045d324(void);
void __cdecl FUN_0045d374(LPCSTR param_1,uint *param_2);
undefined4 __stdcall FUN_0045d3dc(undefined4 param_1,undefined4 *param_2);
undefined4 __stdcall FUN_0045d3f0(void);
void __cdecl FUN_0045d434(uint *param_1);
void __cdecl FUN_0045d550(uint *param_1);
void __cdecl FUN_0045d560(uint *param_1);
void __stdcall vshared_45d604(void);
void __stdcall FUN_0045d614(void);
void __stdcall FUN_0045d628(void);
void __stdcall FUN_0045d638(void);
void __cdecl FUN_0045d63c(int param_1,int param_2,UINT param_3);
void __cdecl FUN_0045d690(UINT param_1);
void __cdecl FUN_0045d6a8(UINT param_1);
char * __cdecl FUN_0045d6e0(uint *param_1);
void __cdecl FUN_0045d738(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_0045d754(undefined4 param_1,undefined *param_2);
void __cdecl FUN_0045d768(undefined4 param_1,undefined *param_2);
void __cdecl FUN_0045d77c(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4);
void __cdecl FUN_0045d860(uint *param_1,int param_2);
undefined4 __cdecl FUN_0045d910(undefined4 param_1,uint *param_2,undefined *param_3);
void __cdecl FUN_0045da84(int *param_1,int *param_2);
undefined4 __cdecl FUN_0045daf8(undefined4 param_1,short *param_2,undefined *param_3);
void __cdecl FUN_0045dca8(int *param_1,int *param_2);
undefined4 __stdcall FUN_0045dd9c(void);
int __cdecl FUN_0045df08(int param_1);
undefined4 __cdecl FUN_0045df28(int *param_1,undefined4 param_2,int param_3);
undefined4 __stdcall FUN_0045e108(int param_1);
undefined4 __cdecl FUN_0045e130(int param_1,undefined4 param_2);
undefined4 __cdecl FUN_0045e190(int param_1);
void __stdcall FUN_0045e200(UINT param_1);
undefined4 __stdcall FUN_0045e210(void);
undefined4 __stdcall FUN_0045e214(void);
void __cdecl FUN_0045e218(int *param_1,int param_2);
void __stdcall FUN_0045e2ec(void);
void __cdecl FUN_0045e358(int param_1);
WORD __stdcall FUN_0045e4dc(void);
void __stdcall FUN_0045e504(DWORD param_1);
void __stdcall FUN_0045e514(DWORD param_1);
void __stdcall FUN_0045e524(DWORD param_1,LPVOID param_2);
void __stdcall FUN_0045e538(void);
void __stdcall FUN_0045e540(void);
char * __stdcall FUN_0045e554(void);
void FUN_0045e74f(undefined *UNRECOVERED_JUMPTABLE);
int __cdecl FUN_0045e756(uint param_1);
void __cdecl FUN_0045e7a0(int param_1);
undefined4 __cdecl FUN_0045e7cd(int *param_1,undefined4 param_2,int *param_3,byte param_4);
void __cdecl FUN_0045e893(undefined4 param_1,undefined4 param_2,undefined *param_3,uint param_4);
int __cdecl FUN_0045e9a1(char *param_1);
void __cdecl FUN_0045e9b9(undefined4 param_1,int param_2);
void __cdecl FUN_0045e9d6(undefined4 param_1,int param_2,byte param_3,undefined *param_4,uint param_5,int param_6 );
void __cdecl FUN_0045eaa6(undefined4 param_1,undefined *param_2,uint param_3);
void __cdecl FUN_0045eb24(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4,uint param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9);
void __cdecl FUN_0045ed74(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4,uint param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8);
void __cdecl FUN_0045eda9(undefined4 param_1,undefined4 param_2);
void __cdecl FUN_0045ee14(PVOID param_1,PEXCEPTION_RECORD param_2);
void __cdecl FUN_0045ee53(undefined4 param_1,int param_2,undefined *param_3,uint param_4);
void __cdecl FUN_0045eec8(int param_1);
void __stdcall FUN_0045ef50(void);
void __cdecl FUN_0045f041(int param_1,int param_2,int param_3,int *param_4,int param_5);
void __cdecl FUN_0045f315(int param_1);
void __cdecl FUN_0045f480(int param_1);
void __cdecl FUN_0045f493(undefined4 *param_1);
int * __cdecl FUN_0045f4af(int param_1,int param_2);
undefined4 __cdecl FUN_0045f4f4(int *param_1,undefined4 *param_2);
void __cdecl FUN_0045f851(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5);
void __cdecl FUN_0045f948(int param_1,uint param_2,int *param_3,int *param_4);
void __cdecl FUN_0045f993(int param_1,int param_2,uint param_3,uint param_4,int param_5,undefined4 param_6, int param_7);
void __cdecl FUN_0045fc43(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5);
int __cdecl FUN_0045fd67(int param_1,int *param_2,int param_3);
undefined4 __cdecl FUN_0045fdee(int *param_1,int param_2,int param_3,int param_4);
uint __cdecl FUN_00460272(int param_1);
BOOL __stdcall import_IsTextUnicode(void *lpv,int iSize,LPINT lpiResult);
LSTATUS __stdcall import_RegCloseKey(HKEY hKey);
LSTATUS __stdcall import_RegCreateKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD Reserved,LPSTR lpClass,DWORD dwOptions, REGSAM samDesired,LPSECURITY_ATTRIBUTES lpSecurityAttributes,PHKEY phkResult, LPDWORD lpdwDisposition);
LSTATUS __stdcall import_RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult);
LSTATUS __stdcall import_RegQueryInfoKeyA(HKEY hKey,LPSTR lpClass,LPDWORD lpcchClass,LPDWORD lpReserved,LPDWORD lpcSubKeys, LPDWORD lpcbMaxSubKeyLen,LPDWORD lpcbMaxClassLen,LPDWORD lpcValues, LPDWORD lpcbMaxValueNameLen,LPDWORD lpcbMaxValueLen,LPDWORD lpcbSecurityDescriptor, PFILETIME lpftLastWriteTime);
LSTATUS __stdcall import_RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData, LPDWORD lpcbData);
LSTATUS __stdcall import_RegSetValueExA(HKEY hKey,LPCSTR lpValueName,DWORD Reserved,DWORD dwType,BYTE *lpData,DWORD cbData);
BOOL __stdcall import_CloseHandle(HANDLE hObject);
HANDLE __stdcall import_CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes,HANDLE hTemplateFile);
HANDLE __stdcall import_CreateFileW(LPCWSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes,HANDLE hTemplateFile);
BOOL __stdcall import_DuplicateHandle(HANDLE hSourceProcessHandle,HANDLE hSourceHandle,HANDLE hTargetProcessHandle, LPHANDLE lpTargetHandle,DWORD dwDesiredAccess,BOOL bInheritHandle,DWORD dwOptions);
void __stdcall import_ExitProcess(UINT uExitCode);
DWORD __stdcall import_ExpandEnvironmentStringsA(LPCSTR lpSrc,LPSTR lpDst,DWORD nSize);
BOOL __stdcall import_FileTimeToSystemTime(FILETIME *lpFileTime,LPSYSTEMTIME lpSystemTime);
BOOL __stdcall import_FindClose(HANDLE hFindFile);
HANDLE __stdcall import_FindFirstFileA(LPCSTR lpFileName,LPWIN32_FIND_DATAA lpFindFileData);
HRSRC __stdcall import_FindResourceA(HMODULE hModule,LPCSTR lpName,LPCSTR lpType);
HRSRC __stdcall import_FindResourceExA(HMODULE hModule,LPCSTR lpType,LPCSTR lpName,WORD wLanguage);
BOOL __stdcall import_FlushFileBuffers(HANDLE hFile);
DWORD __stdcall import_FormatMessageA(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,LPSTR lpBuffer, DWORD nSize,va_list *Arguments);
BOOL __stdcall import_FreeLibrary(HMODULE hLibModule);
BOOL __stdcall import_FreeResource(HGLOBAL hResData);
UINT __stdcall import_GetACP(void);
BOOL __stdcall import_GetCPInfo(UINT CodePage,LPCPINFO lpCPInfo);
LPSTR __stdcall import_GetCommandLineA(void);
HANDLE __stdcall import_GetCurrentProcess(void);
DWORD __stdcall import_GetCurrentProcessId(void);
DWORD __stdcall import_GetCurrentThreadId(void);
UINT __stdcall import_GetDriveTypeA(LPCSTR lpRootPathName);
LPCH __stdcall import_GetEnvironmentStrings(void);
DWORD __stdcall import_GetFileAttributesA(LPCSTR lpFileName);
DWORD __stdcall import_GetFileAttributesW(LPCWSTR lpFileName);
DWORD __stdcall import_GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh);
BOOL __stdcall import_GetFileTime(HANDLE hFile,LPFILETIME lpCreationTime,LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime);
DWORD __stdcall import_GetFileType(HANDLE hFile);
DWORD __stdcall import_GetFullPathNameA(LPCSTR lpFileName,DWORD nBufferLength,LPSTR lpBuffer,LPSTR *lpFilePart);
DWORD __stdcall import_GetLastError(void);
void __stdcall import_GetLocalTime(LPSYSTEMTIME lpSystemTime);
int __stdcall import_GetLocaleInfoA(LCID Locale,LCTYPE LCType,LPSTR lpLCData,int cchData);
DWORD __stdcall import_GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize);
HMODULE __stdcall import_GetModuleHandleA(LPCSTR lpModuleName);
UINT __stdcall import_GetOEMCP(void);
FARPROC __stdcall import_GetProcAddress(HMODULE hModule,LPCSTR lpProcName);
void __stdcall import_GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo);
HANDLE __stdcall import_GetStdHandle(DWORD nStdHandle);
BOOL __stdcall import_GetStringTypeA(LCID Locale,DWORD dwInfoType,LPCSTR lpSrcStr,int cchSrc,LPWORD lpCharType);
BOOL __stdcall import_GetStringTypeW(DWORD dwInfoType,LPCWSTR lpSrcStr,int cchSrc,LPWORD lpCharType);
LANGID __stdcall import_GetSystemDefaultLangID(void);
DWORD __stdcall import_GetTickCount(void);
DWORD __stdcall import_GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation);
LCID __stdcall import_GetUserDefaultLCID(void);
DWORD __stdcall import_GetVersion(void);
BOOL __stdcall import_GetVersionExA(LPOSVERSIONINFOA lpVersionInformation);
UINT __stdcall import_GetWindowsDirectoryA(LPSTR lpBuffer,UINT uSize);
HGLOBAL __stdcall import_GlobalAlloc(UINT uFlags,SIZE_T dwBytes);
HGLOBAL __stdcall import_GlobalFree(HGLOBAL hMem);
HGLOBAL __stdcall import_GlobalHandle(LPCVOID pMem);
LPVOID __stdcall import_GlobalLock(HGLOBAL hMem);
void __stdcall import_GlobalMemoryStatus(LPMEMORYSTATUS lpBuffer);
SIZE_T __stdcall import_GlobalSize(HGLOBAL hMem);
BOOL __stdcall import_GlobalUnlock(HGLOBAL hMem);
LPVOID __stdcall import_HeapAlloc(HANDLE hHeap,DWORD dwFlags,SIZE_T dwBytes);
HANDLE __stdcall import_HeapCreate(DWORD flOptions,SIZE_T dwInitialSize,SIZE_T dwMaximumSize);
BOOL __stdcall import_HeapDestroy(HANDLE hHeap);
BOOL __stdcall import_HeapFree(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem);
LONG __stdcall import_InterlockedIncrement(LONG *lpAddend);
BOOL __stdcall import_IsBadReadPtr(void *lp,UINT_PTR ucb);
BOOL __stdcall import_IsValidLocale(LCID Locale,DWORD dwFlags);
int __stdcall import_LCMapStringA(LCID Locale,DWORD dwMapFlags,LPCSTR lpSrcStr,int cchSrc,LPSTR lpDestStr,int cchDest);
HMODULE __stdcall import_LoadLibraryA(LPCSTR lpLibFileName);
HGLOBAL __stdcall import_LoadResource(HMODULE hModule,HRSRC hResInfo);
HLOCAL __stdcall import_LocalFree(HLOCAL hMem);
HLOCAL __stdcall import_LocalHandle(LPCVOID pMem);
LPVOID __stdcall import_LocalLock(HLOCAL hMem);
HLOCAL __stdcall import_LocalReAlloc(HLOCAL hMem,SIZE_T uBytes,UINT uFlags);
BOOL __stdcall import_LocalUnlock(HLOCAL hMem);
BOOL __stdcall import_LockFile(HANDLE hFile,DWORD dwFileOffsetLow,DWORD dwFileOffsetHigh,DWORD nNumberOfBytesToLockLow, DWORD nNumberOfBytesToLockHigh);
LPVOID __stdcall import_LockResource(HGLOBAL hResData);
int __stdcall import_MulDiv(int nNumber,int nNumerator,int nDenominator);
int __stdcall import_MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte, LPWSTR lpWideCharStr,int cchWideChar);
void __stdcall import_RaiseException(DWORD dwExceptionCode,DWORD dwExceptionFlags,DWORD nNumberOfArguments, ULONG_PTR *lpArguments);
BOOL __stdcall import_ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped);
void __stdcall import_RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue);
BOOL __stdcall import_SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine,BOOL Add);
BOOL __stdcall import_SetEndOfFile(HANDLE hFile);
UINT __stdcall import_SetErrorMode(UINT uMode);
DWORD __stdcall import_SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod);
UINT __stdcall import_SetHandleCount(UINT uNumber);
void __stdcall import_SetLastError(DWORD dwErrCode);
BOOL __stdcall import_SetThreadLocale(LCID Locale);
BOOL __stdcall import_TlsFree(DWORD dwTlsIndex);
LPVOID __stdcall import_TlsGetValue(DWORD dwTlsIndex);
BOOL __stdcall import_TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue);
LONG __stdcall import_UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo);
BOOL __stdcall import_UnlockFile(HANDLE hFile,DWORD dwFileOffsetLow,DWORD dwFileOffsetHigh,DWORD nNumberOfBytesToUnlockLow ,DWORD nNumberOfBytesToUnlockHigh);
LPVOID __stdcall import_VirtualAlloc(LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect);
BOOL __stdcall import_VirtualFree(LPVOID lpAddress,SIZE_T dwSize,DWORD dwFreeType);
SIZE_T __stdcall import_VirtualQueryEx(HANDLE hProcess,LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength);
int __stdcall import_WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar, LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar);
UINT __stdcall import_WinExec(LPCSTR lpCmdLine,UINT uCmdShow);
BOOL __stdcall import_WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);
LPSTR __stdcall import_lstrcatA(LPSTR lpString1,LPCSTR lpString2);
LPSTR __stdcall import_lstrcpyA(LPSTR lpString1,LPCSTR lpString2);
LPSTR __stdcall import_lstrcpynA(LPSTR lpString1,LPCSTR lpString2,int iMaxLength);
BOOL __stdcall import_BitBlt(HDC hdc,int x,int y,int cx,int cy,HDC hdcSrc,int x1,int y1,DWORD rop);
HBITMAP __stdcall import_CreateBitmap(int nWidth,int nHeight,UINT nPlanes,UINT nBitCount,void *lpBits);
HBITMAP __stdcall import_CreateCompatibleBitmap(HDC hdc,int cx,int cy);
HDC __stdcall import_CreateCompatibleDC(HDC hdc);
HBRUSH __stdcall import_CreateDIBPatternBrush(HGLOBAL h,UINT iUsage);
HBITMAP __stdcall import_CreateDIBitmap(HDC hdc,BITMAPINFOHEADER *pbmih,DWORD flInit,void *pjBits,BITMAPINFO *pbmi, UINT iUsage);
HBITMAP __stdcall import_CreateDiscardableBitmap(HDC hdc,int cx,int cy);
HFONT __stdcall import_CreateFontA(int cHeight,int cWidth,int cEscapement,int cOrientation,int cWeight,DWORD bItalic, DWORD bUnderline,DWORD bStrikeOut,DWORD iCharSet,DWORD iOutPrecision,DWORD iClipPrecision ,DWORD iQuality,DWORD iPitchAndFamily,LPCSTR pszFaceName);
HFONT __stdcall import_CreateFontIndirectA(LOGFONTA *lplf);
HPALETTE __stdcall import_CreatePalette(LOGPALETTE *plpal);
HRGN __stdcall import_CreateRectRgn(int x1,int y1,int x2,int y2);
HBRUSH __stdcall import_CreateSolidBrush(COLORREF color);
BOOL __stdcall import_DPtoLP(HDC hdc,LPPOINT lppt,int c);
BOOL __stdcall import_DeleteDC(HDC hdc);
BOOL __stdcall import_DeleteObject(HGDIOBJ ho);
BOOL __stdcall import_ExtTextOutA(HDC hdc,int x,int y,UINT options,RECT *lprect,LPCSTR lpString,UINT c,INT *lpDx);
COLORREF __stdcall import_GetBkColor(HDC hdc);
int __stdcall import_GetClipRgn(HDC hdc,HRGN hrgn);
int __stdcall import_GetDeviceCaps(HDC hdc,int index);
int __stdcall import_GetObjectA(HANDLE h,int c,LPVOID pv);
HGDIOBJ __stdcall import_GetStockObject(int i);
UINT __stdcall import_GetSystemPaletteEntries(HDC hdc,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries);
COLORREF __stdcall import_GetTextColor(HDC hdc);
BOOL __stdcall import_GetTextExtentPoint32A(HDC hdc,LPCSTR lpString,int c,LPSIZE psizl);
BOOL __stdcall import_GetTextMetricsA(HDC hdc,LPTEXTMETRICA lptm);
BOOL __stdcall import_GetViewportOrgEx(HDC hdc,LPPOINT lppoint);
int __stdcall import_IntersectClipRect(HDC hdc,int left,int top,int right,int bottom);
BOOL __stdcall import_LineTo(HDC hdc,int x,int y);
BOOL __stdcall import_MoveToEx(HDC hdc,int x,int y,LPPOINT lppt);
BOOL __stdcall import_OffsetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt);
BOOL __stdcall import_PatBlt(HDC hdc,int x,int y,int w,int h,DWORD rop);
UINT __stdcall import_RealizePalette(HDC hdc);
BOOL __stdcall import_Rectangle(HDC hdc,int left,int top,int right,int bottom);
HDC __stdcall import_ResetDCA(HDC hdc,DEVMODEA *lpdm);
BOOL __stdcall import_RestoreDC(HDC hdc,int nSavedDC);
int __stdcall import_SaveDC(HDC hdc);
BOOL __stdcall import_ScaleViewportExtEx(HDC hdc,int xn,int dx,int yn,int yd,LPSIZE lpsz);
BOOL __stdcall import_ScaleWindowExtEx(HDC hdc,int xn,int xd,int yn,int yd,LPSIZE lpsz);
int __stdcall import_SelectClipRgn(HDC hdc,HRGN hrgn);
HGDIOBJ __stdcall import_SelectObject(HDC hdc,HGDIOBJ h);
HPALETTE __stdcall import_SelectPalette(HDC hdc,HPALETTE hPal,BOOL bForceBkgd);
COLORREF __stdcall import_SetBkColor(HDC hdc,COLORREF color);
int __stdcall import_SetBkMode(HDC hdc,int mode);
int __stdcall import_SetMapMode(HDC hdc,int iMode);
COLORREF __stdcall import_SetTextColor(HDC hdc,COLORREF color);
BOOL __stdcall import_SetViewportExtEx(HDC hdc,int x,int y,LPSIZE lpsz);
BOOL __stdcall import_SetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt);
BOOL __stdcall import_SetWindowExtEx(HDC hdc,int x,int y,LPSIZE lpsz);
BOOL __stdcall import_TextOutA(HDC hdc,int x,int y,LPCSTR lpString,int c);
HRESULT __stdcall import_SHGetMalloc(IMalloc **ppMalloc);
HRESULT __stdcall import_SHGetSpecialFolderLocation(HWND hwnd,int csidl,LPITEMIDLIST *ppidl);
BOOL __stdcall import_SHGetPathFromIDListA(LPCITEMIDLIST pidl,LPSTR pszPath);
BOOL __stdcall import_AppendMenuA(HMENU hMenu,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem);
HDWP __stdcall import_BeginDeferWindowPos(int nNumWindows);
HDC __stdcall import_BeginPaint(HWND hWnd,LPPAINTSTRUCT lpPaint);
LRESULT __stdcall import_CallWindowProcA(WNDPROC lpPrevWndFunc,HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam);
DWORD __stdcall import_CheckMenuItem(HMENU hMenu,UINT uIDCheckItem,UINT uCheck);
BOOL __stdcall import_ClientToScreen(HWND hWnd,LPPOINT lpPoint);
BOOL __stdcall import_CloseClipboard(void);
HICON __stdcall import_CopyIcon(HICON hIcon);
int __stdcall import_CountClipboardFormats(void);
HWND __stdcall import_CreateDialogIndirectParamA(HINSTANCE hInstance,LPCDLGTEMPLATEA lpTemplate,HWND hWndParent,DLGPROC lpDialogFunc, LPARAM dwInitParam);
HWND __stdcall import_CreateDialogParamA(HINSTANCE hInstance,LPCSTR lpTemplateName,HWND hWndParent,DLGPROC lpDialogFunc, LPARAM dwInitParam);
HMENU __stdcall import_CreateMenu(void);
HMENU __stdcall import_CreatePopupMenu(void);
HWND __stdcall import_CreateWindowExA(DWORD dwExStyle,LPCSTR lpClassName,LPCSTR lpWindowName,DWORD dwStyle,int X,int Y, int nWidth,int nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance,LPVOID lpParam );
LRESULT __stdcall import_DefWindowProcA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam);
HDWP __stdcall import_DeferWindowPos(HDWP hWinPosInfo,HWND hWnd,HWND hWndInsertAfter,int x,int y,int cx,int cy,UINT uFlags );
BOOL __stdcall import_DeleteMenu(HMENU hMenu,UINT uPosition,UINT uFlags);
BOOL __stdcall import_DestroyCursor(HCURSOR hCursor);
BOOL __stdcall import_DestroyMenu(HMENU hMenu);
BOOL __stdcall import_DestroyWindow(HWND hWnd);
INT_PTR __stdcall import_DialogBoxIndirectParamA(HINSTANCE hInstance,LPCDLGTEMPLATEA hDialogTemplate,HWND hWndParent,DLGPROC lpDialogFunc, LPARAM dwInitParam);
INT_PTR __stdcall import_DialogBoxParamA(HINSTANCE hInstance,LPCSTR lpTemplateName,HWND hWndParent,DLGPROC lpDialogFunc, LPARAM dwInitParam);
LRESULT __stdcall import_DispatchMessageA(MSG *lpMsg);
BOOL __stdcall import_DrawEdge(HDC hdc,LPRECT qrc,UINT edge,UINT grfFlags);
BOOL __stdcall import_DrawIcon(HDC hDC,int X,int Y,HICON hIcon);
BOOL __stdcall import_DrawMenuBar(HWND hWnd);
int __stdcall import_DrawTextA(HDC hdc,LPCSTR lpchText,int cchText,LPRECT lprc,UINT format);
int __stdcall import_DrawTextExA(HDC hdc,LPSTR lpchText,int cchText,LPRECT lprc,UINT format,LPDRAWTEXTPARAMS lpdtp);
BOOL __stdcall import_EnableMenuItem(HMENU hMenu,UINT uIDEnableItem,UINT uEnable);
BOOL __stdcall import_EnableScrollBar(HWND hWnd,UINT wSBflags,UINT wArrows);
BOOL __stdcall import_EnableWindow(HWND hWnd,BOOL bEnable);
BOOL __stdcall import_EndDeferWindowPos(HDWP hWinPosInfo);
BOOL __stdcall import_EndDialog(HWND hDlg,INT_PTR nResult);
BOOL __stdcall import_EndPaint(HWND hWnd,PAINTSTRUCT *lpPaint);
BOOL __stdcall import_EnumThreadWindows(DWORD dwThreadId,WNDENUMPROC lpfn,LPARAM lParam);
HWND __stdcall import_FindWindowA(LPCSTR lpClassName,LPCSTR lpWindowName);
int __stdcall import_FrameRect(HDC hDC,RECT *lprc,HBRUSH hbr);
HWND __stdcall import_GetActiveWindow(void);
BOOL __stdcall import_GetClassInfoA(HINSTANCE hInstance,LPCSTR lpClassName,LPWNDCLASSA lpWndClass);
int __stdcall import_GetClassNameA(HWND hWnd,LPSTR lpClassName,int nMaxCount);
BOOL __stdcall import_GetClientRect(HWND hWnd,LPRECT lpRect);
BOOL __stdcall import_GetCursorPos(LPPOINT lpPoint);
HWND __stdcall import_GetDesktopWindow(void);
int __stdcall import_GetDlgCtrlID(HWND hWnd);
HWND __stdcall import_GetDlgItem(HWND hDlg,int nIDDlgItem);
HWND __stdcall import_GetFocus(void);
BOOL __stdcall import_GetIconInfo(HICON hIcon,PICONINFO piconinfo);
SHORT __stdcall import_GetKeyState(int nVirtKey);
HMENU __stdcall import_GetMenu(HWND hWnd);
int __stdcall import_GetMenuItemCount(HMENU hMenu);
UINT __stdcall import_GetMenuItemID(HMENU hMenu,int nPos);
UINT __stdcall import_GetMenuState(HMENU hMenu,UINT uId,UINT uFlags);
HWND __stdcall import_GetParent(HWND hWnd);
BOOL __stdcall import_GetScrollInfo(HWND hwnd,int nBar,LPSCROLLINFO lpsi);
HMENU __stdcall import_GetSubMenu(HMENU hMenu,int nPos);
DWORD __stdcall import_GetSysColor(int nIndex);
HBRUSH __stdcall import_GetSysColorBrush(int nIndex);
int __stdcall import_GetSystemMetrics(int nIndex);
HWND __stdcall import_GetWindow(HWND hWnd,UINT uCmd);
HDC __stdcall import_GetWindowDC(HWND hWnd);
LONG __stdcall import_GetWindowLongA(HWND hWnd,int nIndex);
BOOL __stdcall import_GetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl);
BOOL __stdcall import_GetWindowRect(HWND hWnd,LPRECT lpRect);
int __stdcall import_GetWindowTextA(HWND hWnd,LPSTR lpString,int nMaxCount);
int __stdcall import_GetWindowTextLengthA(HWND hWnd);
DWORD __stdcall import_GetWindowThreadProcessId(HWND hWnd,LPDWORD lpdwProcessId);
BOOL __stdcall import_GrayStringA(HDC hDC,HBRUSH hBrush,GRAYSTRINGPROC lpOutputFunc,LPARAM lpData,int nCount,int X,int Y, int nWidth,int nHeight);
BOOL __stdcall import_InsertMenuA(HMENU hMenu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem);
BOOL __stdcall import_InvalidateRect(HWND hWnd,RECT *lpRect,BOOL bErase);
BOOL __stdcall import_IsChild(HWND hWndParent,HWND hWnd);
BOOL __stdcall import_IsClipboardFormatAvailable(UINT format);
BOOL __stdcall import_IsDialogMessageA(HWND hDlg,LPMSG lpMsg);
BOOL __stdcall import_IsIconic(HWND hWnd);
BOOL __stdcall import_IsMenu(HMENU hMenu);
BOOL __stdcall import_IsWindow(HWND hWnd);
BOOL __stdcall import_IsWindowEnabled(HWND hWnd);
BOOL __stdcall import_IsWindowVisible(HWND hWnd);
BOOL __stdcall import_IsZoomed(HWND hWnd);
BOOL __stdcall import_KillTimer(HWND hWnd,UINT_PTR uIDEvent);
HACCEL __stdcall import_LoadAcceleratorsA(HINSTANCE hInstance,LPCSTR lpTableName);
HCURSOR __stdcall import_LoadCursorA(HINSTANCE hInstance,LPCSTR lpCursorName);
HICON __stdcall import_LoadIconA(HINSTANCE hInstance,LPCSTR lpIconName);
HANDLE __stdcall import_LoadImageA(HINSTANCE hInst,LPCSTR name,UINT type,int cx,int cy,UINT fuLoad);
HMENU __stdcall import_LoadMenuA(HINSTANCE hInstance,LPCSTR lpMenuName);
int __stdcall import_MapWindowPoints(HWND hWndFrom,HWND hWndTo,LPPOINT lpPoints,UINT cPoints);
BOOL __stdcall import_MessageBeep(UINT uType);
int __stdcall import_MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType);
int __stdcall import_MessageBoxExA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType,WORD wLanguageId);
BOOL __stdcall import_ModifyMenuA(HMENU hMnu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem);
DWORD __stdcall import_MsgWaitForMultipleObjects(DWORD nCount,HANDLE *pHandles,BOOL fWaitAll,DWORD dwMilliseconds,DWORD dwWakeMask);
BOOL __stdcall import_OpenClipboard(HWND hWndNewOwner);
BOOL __stdcall import_PeekMessageA(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax,UINT wRemoveMsg);
BOOL __stdcall import_PostMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam);
void __stdcall import_PostQuitMessage(int nExitCode);
ATOM __stdcall import_RegisterClassA(WNDCLASSA *lpWndClass);
UINT __stdcall import_RegisterWindowMessageA(LPCSTR lpString);
BOOL __stdcall import_ReleaseCapture(void);
int __stdcall import_ReleaseDC(HWND hWnd,HDC hDC);
BOOL __stdcall import_ScreenToClient(HWND hWnd,LPPOINT lpPoint);
BOOL __stdcall import_ScrollWindow(HWND hWnd,int XAmount,int YAmount,RECT *lpRect,RECT *lpClipRect);
LRESULT __stdcall import_SendDlgItemMessageA(HWND hDlg,int nIDDlgItem,UINT Msg,WPARAM wParam,LPARAM lParam);
LRESULT __stdcall import_SendMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam);
HWND __stdcall import_SetCapture(HWND hWnd);
HCURSOR __stdcall import_SetCursor(HCURSOR hCursor);
HWND __stdcall import_SetFocus(HWND hWnd);
BOOL __stdcall import_SetMenu(HWND hWnd,HMENU hMenu);
HWND __stdcall import_SetParent(HWND hWndChild,HWND hWndNewParent);
int __stdcall import_SetScrollInfo(HWND hwnd,int nBar,LPCSCROLLINFO lpsi,BOOL redraw);
UINT_PTR __stdcall import_SetTimer(HWND hWnd,UINT_PTR nIDEvent,UINT uElapse,TIMERPROC lpTimerFunc);
LONG __stdcall import_SetWindowLongA(HWND hWnd,int nIndex,LONG dwNewLong);
BOOL __stdcall import_SetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl);
BOOL __stdcall import_SetWindowPos(HWND hWnd,HWND hWndInsertAfter,int X,int Y,int cx,int cy,UINT uFlags);
BOOL __stdcall import_SetWindowTextA(HWND hWnd,LPCSTR lpString);
BOOL __stdcall import_ShowScrollBar(HWND hWnd,int wBar,BOOL bShow);
BOOL __stdcall import_ShowWindow(HWND hWnd,int nCmdShow);
BOOL __stdcall import_SystemParametersInfoA(UINT uiAction,UINT uiParam,PVOID pvParam,UINT fWinIni);
LONG __stdcall import_TabbedTextOutA(HDC hdc,int x,int y,LPCSTR lpString,int chCount,int nTabPositions, INT *lpnTabStopPositions,int nTabOrigin);
BOOL __stdcall import_TrackPopupMenu(HMENU hMenu,UINT uFlags,int x,int y,int nReserved,HWND hWnd,RECT *prcRect);
int __stdcall import_TranslateAcceleratorA(HWND hWnd,HACCEL hAccTable,LPMSG lpMsg);
BOOL __stdcall import_TranslateMDISysAccel(HWND hWndClient,LPMSG lpMsg);
BOOL __stdcall import_TranslateMessage(MSG *lpMsg);
BOOL __stdcall import_UnregisterClassA(LPCSTR lpClassName,HINSTANCE hInstance);
BOOL __stdcall import_UpdateWindow(HWND hWnd);
BOOL __stdcall import_WaitMessage(void);
HWND __stdcall import_WindowFromPoint(POINT Point);
int __cdecl import_wsprintfA(LPSTR param_1,LPCSTR param_2,...);
HMENU __stdcall import_GetSystemMenu(HWND hWnd,BOOL bRevert);

// ---- call targets where Ghidra found no function (1) ----
code func_0x8b4579aa;

// ---- globals (1040) ----
extern undefined * pcRam0000000c;   // 0x0000000c
extern undefined DAT_00402e84;   // 0x00402e84
extern undefined LAB_00402ee0;   // 0x00402ee0
extern undefined DAT_00402fdc;   // 0x00402fdc
extern undefined LAB_00403038;   // 0x00403038
extern undefined DAT_00403714;   // 0x00403714
extern undefined LAB_00404230;   // 0x00404230
extern undefined DAT_004043c8;   // 0x004043c8
extern undefined DAT_00404480;   // 0x00404480
extern undefined DAT_00404628;   // 0x00404628
extern undefined DAT_0040467c;   // 0x0040467c
extern undefined DAT_00404790;   // 0x00404790
extern undefined DAT_00405354;   // 0x00405354
extern undefined DAT_00405450;   // 0x00405450
extern undefined DAT_004054c8;   // 0x004054c8
extern undefined DAT_004056d8;   // 0x004056d8
extern undefined DAT_0040580c;   // 0x0040580c
extern undefined DAT_00406864;   // 0x00406864
extern undefined LAB_004068bc;   // 0x004068bc
extern undefined DAT_00408678;   // 0x00408678
extern undefined LAB_004086e0;   // 0x004086e0
extern undefined LAB_00408844;   // 0x00408844
extern undefined DAT_004097d4;   // 0x004097d4
extern undefined LAB_00409830;   // 0x00409830
extern undefined DAT_0040f960;   // 0x0040f960
extern undefined DAT_0040feb8;   // 0x0040feb8
extern undefined DAT_00410114;   // 0x00410114
extern undefined DAT_00410764;   // 0x00410764
extern undefined DAT_004107fc;   // 0x004107fc
extern undefined LAB_00410f50;   // 0x00410f50
extern undefined DAT_0041261c;   // 0x0041261c
extern undefined DAT_0041265c;   // 0x0041265c
extern undefined DAT_004126c4;   // 0x004126c4
extern undefined DAT_00412754;   // 0x00412754
extern undefined DAT_0041281c;   // 0x0041281c
extern undefined DAT_00414d3c;   // 0x00414d3c
extern undefined LAB_00414d98;   // 0x00414d98
extern undefined DAT_00416440;   // 0x00416440
extern undefined DAT_004187b0;   // 0x004187b0
extern undefined LAB_0041880c;   // 0x0041880c
extern undefined DAT_0041ca28;   // 0x0041ca28
extern undefined LAB_0041ca7c;   // 0x0041ca7c
extern undefined DAT_00420fa8;   // 0x00420fa8
extern undefined LAB_00420ffc;   // 0x00420ffc
extern undefined DAT_00421420;   // 0x00421420
extern undefined DAT_00425a64;   // 0x00425a64
extern undefined DAT_00425ac0;   // 0x00425ac0
extern undefined DAT_00429d5c;   // 0x00429d5c
extern undefined DAT_0042cedc;   // 0x0042cedc
extern undefined LAB_0042cf18;   // 0x0042cf18
extern undefined DAT_0042e004;   // 0x0042e004
extern undefined DAT_0042e134;   // 0x0042e134
extern undefined DAT_0042f564;   // 0x0042f564
extern undefined DAT_0042f584;   // 0x0042f584
extern undefined DAT_00430b7c;   // 0x00430b7c
extern undefined LAB_00430be0;   // 0x00430be0
extern undefined DAT_00435cc8;   // 0x00435cc8
extern undefined DAT_0043e7d0;   // 0x0043e7d0
extern undefined DAT_004453f4;   // 0x004453f4
extern undefined LAB_00445454;   // 0x00445454
extern undefined DAT_00454c0c;   // 0x00454c0c
extern undefined LAB_00454c70;   // 0x00454c70
extern undefined LAB_00455f4b;   // 0x00455f4b
extern undefined LAB_00456a8c;   // 0x00456a8c
extern undefined LAB_00458a50;   // 0x00458a50
extern undefined * PTR_DAT_00461270;   // 0x00461270
extern int _tls_index;   // 0x004612c7
extern int _DAT_004612cb;   // 0x004612cb
extern HMODULE _DAT_004612cf;   // 0x004612cf
extern undefined DAT_00461324;   // 0x00461324
extern undefined DAT_0046132a;   // 0x0046132a
namespace DMDialog { extern undefined __entries; }   // 0x00461838  DAT_00461838
extern int * DAT_00461e80;   // 0x00461e80
namespace DMApplication { extern pointer vftable; }   // 0x00461f40  PTR_FUN_00461f40
extern pointer PTR_LAB_00461f94;   // 0x00461f94
extern undefined * PTR_LAB_00461fa4;   // 0x00461fa4
extern pointer PTR_LAB_00461fc4;   // 0x00461fc4
namespace std::out_of_range { extern undefined * vftable; }   // 0x00461fd4  PTR_FUN_00461fd4
namespace std::exception { extern undefined * vftable; }   // 0x00461fe8  PTR_FUN_00461fe8
namespace std::logic_error { extern undefined * vftable; }   // 0x00461ffc  PTR_FUN_00461ffc
namespace std::length_error { extern undefined * vftable; }   // 0x00462010  PTR_FUN_00462010
namespace DMDialog { extern undefined * vftable; }   // 0x00462024  PTR_FUN_00462024
extern pointer PTR_LAB_00462074;   // 0x00462074
extern pointer PTR_LAB_00462084;   // 0x00462084
extern pointer PTR_LAB_00462090;   // 0x00462090
extern undefined * PTR_LAB_0046209c;   // 0x0046209c
namespace MergeClient { extern undefined * vftable; }   // 0x00462130  PTR_FUN_00462130
namespace DMProgressBar { extern undefined * vftable; }   // 0x00462144  PTR_FUN_00462144
extern pointer PTR_LAB_00462178;   // 0x00462178
extern pointer PTR_LAB_00462184;   // 0x00462184
extern undefined * PTR_LAB_00462190;   // 0x00462190
namespace OWL::TStreamableBase { extern pointer vftable; }   // 0x00462224  PTR_FUN_00462224
namespace OWL::TEventHandler { extern pointer vftable; }   // 0x00462234  PTR_FUN_00462234
namespace Abandon_exception { extern undefined * vftable; }   // 0x00462d8c  PTR_FUN_00462d8c
namespace std::ios_base::failure { extern undefined * vftable; }   // 0x00462da0  PTR_FUN_00462da0
namespace std::bad_alloc { extern undefined * vftable; }   // 0x00462db4  PTR_FUN_00462db4
extern undefined DAT_004631a0;   // 0x004631a0
extern undefined DAT_004638d7;   // 0x004638d7
extern char DAT_00463f9c;   // 0x00463f9c
extern undefined DAT_00464060;   // 0x00464060
extern char DAT_00464064;   // 0x00464064
extern undefined4 DAT_004640c0;   // 0x004640c0
extern char DAT_004640c4;   // 0x004640c4
namespace OWL::TRichEdit { extern undefined __entries; }   // 0x00464120  DAT_00464120
namespace OWL::TRichEdit::Streamer { extern undefined * vftable; }   // 0x0046447c  PTR_FUN_0046447c
namespace OWL::TStreamer { extern undefined * vftable; }   // 0x00464498  PTR_FUN_00464498
namespace OWL::TNewStreamer { extern undefined * vftable; }   // 0x004644b4  PTR_FUN_004644b4
namespace OWL::TEditSearch { extern undefined * vftable; }   // 0x004644d0  PTR_FUN_004644d0
extern pointer PTR_LAB_00464530;   // 0x00464530
extern pointer PTR_LAB_0046453c;   // 0x0046453c
extern undefined * PTR_LAB_00464548;   // 0x00464548
namespace OWL::TEditFile { extern undefined * vftable; }   // 0x004645dc  PTR_FUN_004645dc
extern pointer PTR_LAB_0046465c;   // 0x0046465c
extern pointer PTR_LAB_00464668;   // 0x00464668
extern undefined * PTR_LAB_00464674;   // 0x00464674
namespace OWL::TRichEdit { extern undefined * vftable; }   // 0x00464708  PTR_FUN_00464708
extern pointer PTR_LAB_00464788;   // 0x00464788
extern pointer PTR_LAB_00464794;   // 0x00464794
extern undefined * PTR_LAB_004647a0;   // 0x004647a0
extern char DAT_0046483d;   // 0x0046483d
extern FARPROC DAT_00464848;   // 0x00464848
extern char DAT_0046484c;   // 0x0046484c
extern char DAT_00464887;   // 0x00464887
namespace OWL::TXOwl { extern undefined * vftable; }   // 0x00464da0  PTR_FUN_00464da0
namespace OWL::TCommCtrlDll { extern pointer vftable; }   // 0x00464dc0  PTR_FUN_00464dc0
extern char DAT_00464dd0;   // 0x00464dd0
extern undefined1 DAT_00464dd2;   // 0x00464dd2
extern char DAT_00464dd3;   // 0x00464dd3
extern undefined1 DAT_00464dd6;   // 0x00464dd6
extern char DAT_00464dd7;   // 0x00464dd7
extern char DAT_00464de8;   // 0x00464de8
extern char DAT_00464de9;   // 0x00464de9
extern char DAT_00464dea;   // 0x00464dea
extern char DAT_00464deb;   // 0x00464deb
extern char DAT_00464dec;   // 0x00464dec
extern char DAT_00464ded;   // 0x00464ded
extern char DAT_00464dee;   // 0x00464dee
extern char DAT_00464def;   // 0x00464def
namespace std::locale::facet { extern pointer vftable; }   // 0x00465040  PTR_FUN_00465040
extern char DAT_00465050;   // 0x00465050
namespace OWL::TAppDictPidImp { extern undefined * vftable; }   // 0x004651dc  PTR_FUN_004651dc
namespace OWL::TAppDictImp { extern undefined * vftable; }   // 0x00465204  PTR_FUN_00465204
namespace OWL::TAppDictInstImp { extern undefined * vftable; }   // 0x0046522c  PTR_FUN_0046522c
extern char DAT_0046543c;   // 0x0046543c
namespace OWL::TButtonGadgetEnabler { extern undefined * vftable; }   // 0x00465654  PTR_FUN_00465654
namespace OWL::TButtonGadget { extern undefined * vftable; }   // 0x0046566c  PTR_FUN_0046566c
namespace OWL::TCelArray { extern pointer vftable; }   // 0x00465948  PTR_FUN_00465948
extern char DAT_00465954;   // 0x00465954
extern char DAT_00465955;   // 0x00465955
extern char DAT_00465956;   // 0x00465956
extern char DAT_00465957;   // 0x00465957
extern char DAT_00465958;   // 0x00465958
extern char DAT_00465959;   // 0x00465959
extern char DAT_0046595a;   // 0x0046595a
extern undefined4 DAT_0046595f;   // 0x0046595f
extern undefined DAT_00465aa3;   // 0x00465aa3
extern undefined DAT_00465c24;   // 0x00465c24
extern int DAT_00465d38;   // 0x00465d38
namespace OWL::TDiagBase { extern undefined * vftable; }   // 0x00465d98  PTR_FUN_00465d98
namespace OWL::TDiagGroupDef { extern pointer vftable; }   // 0x00465dac  PTR_FUN_00465dac
namespace OWL::TXClipboard { extern undefined * vftable; }   // 0x00465e94  PTR_FUN_00465e94
extern char DAT_00465ea8;   // 0x00465ea8
extern char DAT_00465eab;   // 0x00465eab
extern char DAT_00465eac;   // 0x00465eac
extern char DAT_00465ead;   // 0x00465ead
extern char DAT_00465eae;   // 0x00465eae
extern char DAT_00465eb2;   // 0x00465eb2
extern char DAT_00465eb3;   // 0x00465eb3
namespace OWL::TCommonDialog { extern undefined __entries; }   // 0x00465f88  DAT_00465f88
namespace OWL::TCommonDialog { extern undefined * vftable; }   // 0x0046603c  PTR_FUN_0046603c
extern pointer PTR_LAB_00466080;   // 0x00466080
extern pointer PTR_LAB_0046608c;   // 0x0046608c
extern undefined * PTR_LAB_00466098;   // 0x00466098
namespace OWL::TFile { extern pointer vftable; }   // 0x00466164  PTR_FUN_00466164
extern undefined * PTR_FUN_0046616c;   // 0x0046616c
namespace OWL::TControlBar { extern undefined * vftable; }   // 0x00466264  PTR_FUN_00466264
extern undefined * PTR_LAB_004662d8;   // 0x004662d8
extern pointer PTR_LAB_004662f8;   // 0x004662f8
extern pointer PTR_LAB_00466304;   // 0x00466304
extern undefined * PTR_LAB_00466310;   // 0x00466310
namespace OWL::TCreatedDC { extern undefined * vftable; }   // 0x00466400  PTR_FUN_00466400
extern undefined DAT_00466567;   // 0x00466567
namespace OWL::TDC { extern undefined * vftable; }   // 0x0046671c  PTR_FUN_0046671c
extern int _DAT_0046677c;   // 0x0046677c
namespace OWL::TXBase { extern undefined * vftable; }   // 0x004668c4  PTR_FUN_004668c4
extern undefined * PTR_s_Unhandled_Exception_004668d4;   // 0x004668d4
namespace OWL::TXOutOfMemory { extern undefined * vftable; }   // 0x00466cc8  PTR_FUN_00466cc8
namespace OWL::TSeparatorGadget { extern undefined * vftable; }   // 0x00466ff8  PTR_FUN_00466ff8
namespace OWL::TGadget { extern undefined * vftable; }   // 0x00467058  PTR_FUN_00467058
namespace OWL::TGadgetList { extern undefined * vftable; }   // 0x00467114  PTR_FUN_00467114
extern undefined * PTR_FUN_0046712c;   // 0x0046712c
extern undefined * PTR_FUN_00467138;   // 0x00467138
extern undefined * PTR_FUN_00467144;   // 0x00467144
namespace OWL::TGadgetWindow { extern undefined __entries; }   // 0x00467150  DAT_00467150
extern byte DAT_00467240;   // 0x00467240
namespace OWL::TGadgetWindow { extern undefined * vftable; }   // 0x00467580  PTR_FUN_00467580
extern undefined * PTR_LAB_004675f4;   // 0x004675f4
extern pointer PTR_LAB_00467614;   // 0x00467614
extern pointer PTR_LAB_00467620;   // 0x00467620
extern undefined * PTR_LAB_0046762c;   // 0x0046762c
namespace OWL::TXGdi { extern undefined * vftable; }   // 0x004677bc  PTR_FUN_004677bc
extern int DAT_004677d0;   // 0x004677d0
extern undefined4 _DAT_004677d4;   // 0x004677d4
extern undefined DAT_004677d4;   // 0x004677d4
extern undefined4 _DAT_0046782c;   // 0x0046782c
extern undefined DAT_0046782c;   // 0x0046782c
namespace OWL::TLayoutWindow { extern undefined __entries; }   // 0x00467a54  DAT_00467a54
namespace OWL::TLayoutWindow::Streamer { extern undefined * vftable; }   // 0x00467c2c  PTR_FUN_00467c2c
namespace OWL::TLayoutWindow { extern undefined * vftable; }   // 0x00467c48  PTR_FUN_00467c48
extern pointer PTR_LAB_00467c60;   // 0x00467c60
extern pointer PTR_LAB_00467c6c;   // 0x00467c6c
extern undefined * PTR_LAB_00467c78;   // 0x00467c78
extern char DAT_00467d04;   // 0x00467d04
extern ushort DAT_00467d34;   // 0x00467d34
extern ushort DAT_00467d3c;   // 0x00467d3c
extern HMODULE DAT_00467d44;   // 0x00467d44
extern FARPROC DAT_00467dfc;   // 0x00467dfc
extern char DAT_00467e00;   // 0x00467e00
extern ushort DAT_00467e1c;   // 0x00467e1c
extern char DAT_00467e24;   // 0x00467e24
extern undefined4 DAT_00467e4c;   // 0x00467e4c
extern undefined DAT_00467f14;   // 0x00467f14
extern char DAT_004681c4;   // 0x004681c4
namespace OWL::TMemoryDC { extern undefined * vftable; }   // 0x004682b4  PTR_FUN_004682b4
namespace OWL::TXMenu { extern undefined * vftable; }   // 0x00468550  PTR_FUN_00468550
namespace OWL::TPopupMenu { extern undefined * vftable; }   // 0x00468570  PTR_FUN_00468570
namespace OWL::TMenu { extern undefined * vftable; }   // 0x0046858c  PTR_FUN_0046858c
namespace OWL::TMessageBar { extern undefined * vftable; }   // 0x004685cc  PTR_FUN_004685cc
extern undefined * PTR_LAB_00468644;   // 0x00468644
extern pointer PTR_LAB_00468664;   // 0x00468664
extern pointer PTR_LAB_00468670;   // 0x00468670
extern undefined * PTR_LAB_0046867c;   // 0x0046867c
namespace OWL::TMsgThread { extern undefined * vftable; }   // 0x00468794  PTR_FUN_00468794
extern int * DAT_004687f0;   // 0x004687f0
extern undefined DAT_00468b9c;   // 0x00468b9c
extern char DAT_00468ba0;   // 0x00468ba0
namespace OWL::TPaintDC { extern undefined * vftable; }   // 0x00468cb8  PTR_FUN_00468cb8
namespace OWL::TPickListPopup { extern undefined * vftable; }   // 0x00468de0  PTR_FUN_00468de0
extern pointer PTR_LAB_00468e70;   // 0x00468e70
extern pointer PTR_LAB_00468e7c;   // 0x00468e7c
extern undefined DAT_00468ed4;   // 0x00468ed4
namespace OWL::TRegLink { extern pointer vftable; }   // 0x00468f24  PTR_FUN_00468f24
extern char DAT_00468f28;   // 0x00468f28
extern char DAT_00468f29;   // 0x00468f29
namespace OWL::TWindow { extern undefined * vftable; }   // 0x00468fdc  PTR_FUN_00468fdc
extern pointer PTR_LAB_0046906c;   // 0x0046906c
extern pointer PTR_LAB_00469078;   // 0x00469078
namespace OWL::TWindow::Streamer { extern undefined * vftable; }   // 0x00469088  PTR_FUN_00469088
extern undefined DAT_004690a8;   // 0x004690a8
namespace OWL::TTooltip { extern undefined * vftable; }   // 0x00469160  PTR_FUN_00469160
extern pointer PTR_LAB_00469190;   // 0x00469190
extern pointer PTR_LAB_0046919c;   // 0x0046919c
extern undefined * PTR_LAB_004691a8;   // 0x004691a8
namespace OWL::TTooltipEnabler { extern undefined * vftable; }   // 0x0046923c  PTR_FUN_0046923c
extern undefined DAT_00469248;   // 0x00469248
extern undefined DAT_0046924c;   // 0x0046924c
extern int DAT_004692a0;   // 0x004692a0
extern undefined4 _DAT_004692a4;   // 0x004692a4
extern undefined DAT_004692a4;   // 0x004692a4
extern undefined4 _DAT_004692a8;   // 0x004692a8
extern undefined4 _DAT_004692ac;   // 0x004692ac
extern undefined4 _DAT_004692b0;   // 0x004692b0
extern char DAT_004692b4;   // 0x004692b4
extern undefined4 _DAT_004692b5;   // 0x004692b5
extern undefined DAT_004692b5;   // 0x004692b5
extern undefined4 _DAT_004692b9;   // 0x004692b9
extern undefined4 _DAT_004692bd;   // 0x004692bd
extern undefined4 _DAT_004692c1;   // 0x004692c1
extern char DAT_004692c5;   // 0x004692c5
extern undefined4 _DAT_004692c6;   // 0x004692c6
extern undefined DAT_004692c6;   // 0x004692c6
extern undefined4 _DAT_004692ca;   // 0x004692ca
extern undefined4 _DAT_004692ce;   // 0x004692ce
extern undefined4 _DAT_004692d2;   // 0x004692d2
extern char DAT_004692d6;   // 0x004692d6
extern undefined4 _DAT_004692d7;   // 0x004692d7
extern undefined DAT_004692d7;   // 0x004692d7
extern undefined4 _DAT_004692db;   // 0x004692db
extern undefined4 _DAT_004692df;   // 0x004692df
extern undefined4 _DAT_004692e3;   // 0x004692e3
extern char DAT_004692e7;   // 0x004692e7
extern char DAT_00469420;   // 0x00469420
extern undefined4 _DAT_00469714;   // 0x00469714
extern char DAT_00469718;   // 0x00469718
extern undefined4 _DAT_0046971c;   // 0x0046971c
extern char DAT_00469720;   // 0x00469720
extern undefined4 _DAT_00469724;   // 0x00469724
extern char DAT_00469728;   // 0x00469728
extern undefined4 _DAT_0046972c;   // 0x0046972c
extern char DAT_00469730;   // 0x00469730
extern undefined4 _DAT_00469734;   // 0x00469734
extern char DAT_00469738;   // 0x00469738
extern int DAT_0046973c;   // 0x0046973c
extern char DAT_00469740;   // 0x00469740
extern int DAT_00469744;   // 0x00469744
extern char DAT_00469748;   // 0x00469748
extern int DAT_0046974c;   // 0x0046974c
extern char DAT_00469750;   // 0x00469750
extern int DAT_00469754;   // 0x00469754
extern char DAT_00469758;   // 0x00469758
extern undefined4 _DAT_0046975c;   // 0x0046975c
extern char DAT_00469760;   // 0x00469760
extern undefined4 _DAT_00469764;   // 0x00469764
extern char DAT_00469768;   // 0x00469768
extern undefined4 _DAT_0046976c;   // 0x0046976c
extern char DAT_00469770;   // 0x00469770
extern undefined4 _DAT_00469774;   // 0x00469774
extern char DAT_00469778;   // 0x00469778
extern undefined4 _DAT_0046977c;   // 0x0046977c
extern char DAT_00469780;   // 0x00469780
extern undefined4 _DAT_00469784;   // 0x00469784
extern char DAT_00469788;   // 0x00469788
extern undefined4 _DAT_0046978c;   // 0x0046978c
extern char DAT_00469790;   // 0x00469790
extern undefined4 _DAT_00469794;   // 0x00469794
extern char DAT_00469798;   // 0x00469798
extern undefined4 _DAT_0046979c;   // 0x0046979c
extern char DAT_004697a0;   // 0x004697a0
extern undefined4 _DAT_004697a4;   // 0x004697a4
extern char DAT_004697a8;   // 0x004697a8
extern undefined4 _DAT_004697ac;   // 0x004697ac
extern char DAT_004697b0;   // 0x004697b0
extern undefined4 _DAT_004697b4;   // 0x004697b4
extern char DAT_004697b8;   // 0x004697b8
extern undefined4 _DAT_004697bc;   // 0x004697bc
extern char DAT_004697c0;   // 0x004697c0
extern undefined4 _DAT_004697c4;   // 0x004697c4
extern char DAT_004697c8;   // 0x004697c8
extern undefined4 _DAT_004697cc;   // 0x004697cc
extern char DAT_004697d0;   // 0x004697d0
extern undefined4 _DAT_004697d4;   // 0x004697d4
extern char DAT_004697d8;   // 0x004697d8
extern undefined4 _DAT_004697dc;   // 0x004697dc
extern char DAT_004697e0;   // 0x004697e0
extern undefined4 _DAT_004697e4;   // 0x004697e4
extern char DAT_004697e8;   // 0x004697e8
extern undefined4 _DAT_004697ec;   // 0x004697ec
extern char DAT_004697f0;   // 0x004697f0
extern undefined4 _DAT_004697f4;   // 0x004697f4
extern char DAT_004697f8;   // 0x004697f8
extern undefined4 _DAT_004697fc;   // 0x004697fc
extern char DAT_00469800;   // 0x00469800
extern undefined4 _DAT_00469804;   // 0x00469804
extern char DAT_00469808;   // 0x00469808
extern undefined4 _DAT_0046980c;   // 0x0046980c
extern char DAT_00469810;   // 0x00469810
extern int DAT_00469814;   // 0x00469814
extern char DAT_00469818;   // 0x00469818
extern int DAT_0046981c;   // 0x0046981c
extern char DAT_00469820;   // 0x00469820
extern undefined4 _DAT_00469824;   // 0x00469824
extern char DAT_00469828;   // 0x00469828
extern undefined4 _DAT_0046982c;   // 0x0046982c
extern char DAT_00469830;   // 0x00469830
extern undefined4 _DAT_00469834;   // 0x00469834
extern char DAT_00469838;   // 0x00469838
extern undefined4 _DAT_0046983c;   // 0x0046983c
extern char DAT_00469840;   // 0x00469840
extern undefined4 _DAT_00469844;   // 0x00469844
extern char DAT_00469848;   // 0x00469848
extern undefined4 _DAT_0046984c;   // 0x0046984c
extern char DAT_00469850;   // 0x00469850
extern undefined4 _DAT_00469854;   // 0x00469854
extern char DAT_00469858;   // 0x00469858
extern undefined4 _DAT_0046985c;   // 0x0046985c
extern char DAT_00469860;   // 0x00469860
extern undefined4 _DAT_00469864;   // 0x00469864
extern char DAT_00469868;   // 0x00469868
extern undefined4 _DAT_0046986c;   // 0x0046986c
extern char DAT_00469870;   // 0x00469870
extern undefined4 _DAT_00469874;   // 0x00469874
extern char DAT_00469878;   // 0x00469878
extern undefined4 _DAT_0046987c;   // 0x0046987c
extern char DAT_00469880;   // 0x00469880
extern undefined4 _DAT_00469884;   // 0x00469884
extern char DAT_00469888;   // 0x00469888
extern undefined4 _DAT_0046988c;   // 0x0046988c
extern char DAT_00469890;   // 0x00469890
extern undefined4 _DAT_00469894;   // 0x00469894
extern char DAT_00469898;   // 0x00469898
extern int DAT_0046989c;   // 0x0046989c
extern char DAT_004698a0;   // 0x004698a0
extern int DAT_004698a4;   // 0x004698a4
extern char DAT_004698a8;   // 0x004698a8
extern undefined4 _DAT_004698ac;   // 0x004698ac
extern char DAT_004698b0;   // 0x004698b0
extern undefined4 _DAT_004698b4;   // 0x004698b4
extern char DAT_004698b8;   // 0x004698b8
extern undefined4 _DAT_004698bc;   // 0x004698bc
extern char DAT_004698c0;   // 0x004698c0
extern undefined4 _DAT_004698c4;   // 0x004698c4
extern char DAT_004698c8;   // 0x004698c8
extern undefined4 _DAT_004698cc;   // 0x004698cc
extern char DAT_004698d0;   // 0x004698d0
extern undefined4 _DAT_004698d4;   // 0x004698d4
extern char DAT_004698d8;   // 0x004698d8
extern undefined4 _DAT_004698dc;   // 0x004698dc
extern char DAT_004698e0;   // 0x004698e0
extern undefined4 _DAT_004698e4;   // 0x004698e4
extern char DAT_004698e8;   // 0x004698e8
extern undefined4 _DAT_004698ec;   // 0x004698ec
extern char DAT_004698f0;   // 0x004698f0
extern undefined4 _DAT_004698f4;   // 0x004698f4
extern char DAT_004698f8;   // 0x004698f8
extern undefined4 _DAT_004698fc;   // 0x004698fc
extern char DAT_00469900;   // 0x00469900
extern undefined4 _DAT_00469904;   // 0x00469904
extern char DAT_00469908;   // 0x00469908
extern undefined4 _DAT_0046990c;   // 0x0046990c
extern char DAT_00469910;   // 0x00469910
extern undefined4 _DAT_00469914;   // 0x00469914
extern char DAT_00469918;   // 0x00469918
extern undefined4 _DAT_0046991c;   // 0x0046991c
extern char DAT_00469920;   // 0x00469920
extern undefined4 _DAT_00469924;   // 0x00469924
extern char DAT_00469928;   // 0x00469928
extern undefined4 _DAT_0046992c;   // 0x0046992c
extern char DAT_00469930;   // 0x00469930
extern undefined4 _DAT_00469934;   // 0x00469934
extern char DAT_00469938;   // 0x00469938
extern undefined4 _DAT_0046993c;   // 0x0046993c
extern char DAT_00469940;   // 0x00469940
extern undefined4 _DAT_00469944;   // 0x00469944
extern char DAT_00469948;   // 0x00469948
extern undefined4 _DAT_0046994c;   // 0x0046994c
extern char DAT_00469950;   // 0x00469950
extern undefined4 _DAT_00469954;   // 0x00469954
extern char DAT_00469958;   // 0x00469958
extern undefined4 _DAT_0046995c;   // 0x0046995c
extern char DAT_00469960;   // 0x00469960
extern undefined4 _DAT_00469964;   // 0x00469964
extern char DAT_00469968;   // 0x00469968
extern undefined4 _DAT_0046996c;   // 0x0046996c
extern char DAT_00469970;   // 0x00469970
extern undefined4 _DAT_00469974;   // 0x00469974
extern char DAT_00469978;   // 0x00469978
extern undefined4 _DAT_0046997c;   // 0x0046997c
extern char DAT_00469980;   // 0x00469980
extern undefined4 _DAT_00469984;   // 0x00469984
extern char DAT_00469988;   // 0x00469988
extern undefined4 _DAT_0046998c;   // 0x0046998c
extern char DAT_00469990;   // 0x00469990
extern undefined4 _DAT_00469994;   // 0x00469994
extern char DAT_00469998;   // 0x00469998
extern undefined4 _DAT_0046999c;   // 0x0046999c
extern char DAT_004699a0;   // 0x004699a0
extern undefined4 _DAT_004699a4;   // 0x004699a4
extern char DAT_004699a8;   // 0x004699a8
extern undefined DAT_004699fe;   // 0x004699fe
extern undefined DAT_00469a17;   // 0x00469a17
extern undefined DAT_00469a1c;   // 0x00469a1c
extern undefined DAT_00469a42;   // 0x00469a42
namespace OWL::TUrlLink { extern undefined __entries; }   // 0x00469a44  DAT_00469a44
namespace OWL::TUrlLink::Streamer { extern undefined * vftable; }   // 0x0046a228  PTR_FUN_0046a228
namespace OWL::TUrlLink { extern undefined * vftable; }   // 0x0046a244  PTR_FUN_0046a244
extern pointer PTR_LAB_0046a2a0;   // 0x0046a2a0
extern pointer PTR_LAB_0046a2ac;   // 0x0046a2ac
extern undefined * PTR_LAB_0046a2b8;   // 0x0046a2b8
extern char DAT_0046a370;   // 0x0046a370
extern UINT DAT_0046a374;   // 0x0046a374
extern char DAT_0046a3a8;   // 0x0046a3a8
extern char DAT_0046a3cd;   // 0x0046a3cd
extern char DAT_0046a3ce;   // 0x0046a3ce
extern char DAT_0046a3cf;   // 0x0046a3cf
extern char DAT_0046a3d0;   // 0x0046a3d0
extern uint DAT_0046a3d4;   // 0x0046a3d4
extern UINT DAT_0046a3d8;   // 0x0046a3d8
extern short DAT_0046a3dc;   // 0x0046a3dc
extern char DAT_0046a415;   // 0x0046a415
extern char DAT_0046a416;   // 0x0046a416
extern undefined * PTR_FUN_0046a417;   // 0x0046a417
namespace OWL::TWindow { extern undefined __entries; }   // 0x0046a4e4  DAT_0046a4e4
extern UINT _DAT_0046a7fc;   // 0x0046a7fc
extern char DAT_0046a82c;   // 0x0046a82c
namespace OWL::TXWindow { extern undefined * vftable; }   // 0x0046ab7c  PTR_FUN_0046ab7c
namespace OWL::TMenuItemEnabler { extern undefined * vftable; }   // 0x0046ab9c  PTR_FUN_0046ab9c
namespace OWL::TCommandEnabler { extern undefined * vftable; }   // 0x0046abb4  PTR_FUN_0046abb4
namespace OWL::TScreenDC { extern undefined * vftable; }   // 0x0046ac38  PTR_FUN_0046ac38
namespace OWL::TWindowDC { extern undefined * vftable; }   // 0x0046aca4  PTR_FUN_0046aca4
extern char DAT_0046ad04;   // 0x0046ad04
extern char DAT_0046ad05;   // 0x0046ad05
extern char DAT_0046ad7c;   // 0x0046ad7c
extern int DAT_0046ad80;   // 0x0046ad80
namespace OWL::TApplication { extern undefined * vftable; }   // 0x0046ae1c  PTR_FUN_0046ae1c
extern pointer PTR_LAB_0046ae70;   // 0x0046ae70
extern undefined * PTR_LAB_0046ae80;   // 0x0046ae80
extern pointer PTR_LAB_0046aea0;   // 0x0046aea0
extern HWND DAT_0046b43c;   // 0x0046b43c
extern char DAT_0046b440;   // 0x0046b440
namespace OWL::TApplication { extern undefined __entries; }   // 0x0046b4a4  DAT_0046b4a4
namespace OWL::TXInvalidMainWindow { extern undefined * vftable; }   // 0x0046b5d8  PTR_FUN_0046b5d8
extern undefined4 DAT_0046b5ec;   // 0x0046b5ec
extern char DAT_0046b630;   // 0x0046b630
namespace OWL::TButton { extern undefined __entries; }   // 0x0046b75c  DAT_0046b75c
namespace OWL::TButton { extern undefined * vftable; }   // 0x0046b7b0  PTR_FUN_0046b7b0
extern pointer PTR_LAB_0046b7e4;   // 0x0046b7e4
extern pointer PTR_LAB_0046b7f0;   // 0x0046b7f0
extern undefined * PTR_LAB_0046b7fc;   // 0x0046b7fc
namespace OWL::TButton::Streamer { extern undefined * vftable; }   // 0x0046b98c  PTR_FUN_0046b98c
extern undefined DAT_0046b99c;   // 0x0046b99c
namespace OWL::TCheckBox { extern undefined * vftable; }   // 0x0046b9f0  PTR_FUN_0046b9f0
extern pointer PTR_LAB_0046ba28;   // 0x0046ba28
extern pointer PTR_LAB_0046ba34;   // 0x0046ba34
extern undefined * PTR_LAB_0046ba40;   // 0x0046ba40
namespace OWL::TControl { extern undefined __entries; }   // 0x0046bb20  DAT_0046bb20
namespace OWL::TControl { extern undefined * vftable; }   // 0x0046bbe0  PTR_FUN_0046bbe0
extern pointer PTR_LAB_0046bc0c;   // 0x0046bc0c
extern pointer PTR_LAB_0046bc18;   // 0x0046bc18
extern undefined * PTR_LAB_0046bc24;   // 0x0046bc24
namespace OWL::TControl::Streamer { extern undefined * vftable; }   // 0x0046bda4  PTR_FUN_0046bda4
extern undefined DAT_0046be00;   // 0x0046be00
namespace OWL::TDecoratedFrame { extern undefined __entries; }   // 0x0046be04  DAT_0046be04
namespace OWL::TDecoratedFrame { extern undefined * vftable; }   // 0x0046bf10  PTR_FUN_0046bf10
extern undefined * PTR_LAB_0046bf54;   // 0x0046bf54
extern pointer PTR_LAB_0046bf6c;   // 0x0046bf6c
extern pointer PTR_LAB_0046bf78;   // 0x0046bf78
extern undefined * PTR_LAB_0046bf84;   // 0x0046bf84
extern undefined * PTR_LAB_0046c014;   // 0x0046c014
extern int * DAT_0046c060;   // 0x0046c060
extern undefined DAT_0046c064;   // 0x0046c064
namespace OWL::TDialog { extern undefined * vftable; }   // 0x0046c184  PTR_FUN_0046c184
extern pointer PTR_LAB_0046c1c8;   // 0x0046c1c8
extern pointer PTR_LAB_0046c1d4;   // 0x0046c1d4
extern undefined * PTR_LAB_0046c1e0;   // 0x0046c1e0
namespace OWL::TControlEnabler { extern undefined * vftable; }   // 0x0046c2e8  PTR_FUN_0046c2e8
namespace OWL::TDib { extern undefined * vftable; }   // 0x0046c300  PTR_FUN_0046c300
extern undefined DAT_0046c39c;   // 0x0046c39c
extern undefined1 DAT_0046c39e;   // 0x0046c39e
extern undefined DAT_0046c39f;   // 0x0046c39f
extern undefined DAT_0046c3a0;   // 0x0046c3a0
namespace OWL::TDocManager { extern undefined __entries; }   // 0x0046c440  DAT_0046c440
namespace OWL::TDocument { extern undefined * vftable; }   // 0x0046cca0  PTR_FUN_0046cca0
namespace OWL::TDocManager { extern undefined * vftable; }   // 0x0046cd10  PTR_FUN_0046cd10
extern pointer PTR_LAB_0046cd88;   // 0x0046cd88
extern pointer PTR_LAB_0046cd94;   // 0x0046cd94
namespace OWL::TDvFileSaveDialog { extern undefined * vftable; }   // 0x0046cda4  PTR_FUN_0046cda4
extern pointer PTR_LAB_0046cdec;   // 0x0046cdec
extern pointer PTR_LAB_0046cdf8;   // 0x0046cdf8
extern undefined * PTR_LAB_0046ce04;   // 0x0046ce04
namespace OWL::TDvFileOpenDialog { extern undefined * vftable; }   // 0x0046ce98  PTR_FUN_0046ce98
extern pointer PTR_LAB_0046cee0;   // 0x0046cee0
extern pointer PTR_LAB_0046ceec;   // 0x0046ceec
extern undefined * PTR_LAB_0046cef8;   // 0x0046cef8
namespace OWL::TDocTemplate { extern undefined * vftable; }   // 0x0046cfec  PTR_FUN_0046cfec
extern pointer PTR_LAB_0046d010;   // 0x0046d010
extern pointer PTR_s_Document_Class_0046d014;   // 0x0046d014
extern pointer PTR_s_Document_Title_0046d024;   // 0x0046d024
extern undefined DAT_0046d184;   // 0x0046d184
extern undefined DAT_0046d2a5;   // 0x0046d2a5
extern int * DAT_0046d2ac;   // 0x0046d2ac
namespace OWL::TEdit { extern undefined __entries; }   // 0x0046d2b0  DAT_0046d2b0
namespace OWL::TEdit { extern undefined * vftable; }   // 0x0046d604  PTR_FUN_0046d604
extern pointer PTR_LAB_0046d664;   // 0x0046d664
extern pointer PTR_LAB_0046d670;   // 0x0046d670
extern undefined * PTR_LAB_0046d67c;   // 0x0046d67c
namespace OWL::TEdit::Streamer { extern undefined * vftable; }   // 0x0046d7b4  PTR_FUN_0046d7b4
extern undefined DAT_0046d7c4;   // 0x0046d7c4
extern undefined DAT_0046dc54;   // 0x0046dc54
namespace OWL::TEditFile::Streamer { extern undefined * vftable; }   // 0x0046dcdc  PTR_FUN_0046dcdc
namespace OWL::TEditSearch { extern undefined __entries; }   // 0x0046dd00  DAT_0046dd00
namespace OWL::TEditSearch::Streamer { extern undefined * vftable; }   // 0x0046dff8  PTR_FUN_0046dff8
namespace OWL::TXBadFormat { extern undefined * vftable; }   // 0x0046e068  PTR_FUN_0046e068
namespace OWL::TDiskFileHandle { extern undefined * vftable; }   // 0x0046e114  PTR_FUN_0046e114
namespace OWL::TFileHandle { extern undefined * vftable; }   // 0x0046e17c  PTR_FUN_0046e17c
extern undefined DAT_0046e334;   // 0x0046e334
extern undefined * PTR_DAT_0046e484;   // 0x0046e484
extern undefined DAT_0046e4a4;   // 0x0046e4a4
extern char DAT_0046e4a7;   // 0x0046e4a7
extern undefined DAT_0046e4a8;   // 0x0046e4a8
extern undefined DAT_0046e4aa;   // 0x0046e4aa
extern undefined DAT_0046e4ad;   // 0x0046e4ad
extern char DAT_0046e4af;   // 0x0046e4af
extern undefined DAT_0046e4b2;   // 0x0046e4b2
extern undefined DAT_0046e6a8;   // 0x0046e6a8
namespace OWL::TFindReplaceDialog { extern undefined __entries; }   // 0x0046e6d0  DAT_0046e6d0
namespace OWL::TReplaceDialog { extern undefined * vftable; }   // 0x0046e778  PTR_FUN_0046e778
extern pointer PTR_LAB_0046e7bc;   // 0x0046e7bc
extern pointer PTR_LAB_0046e7c8;   // 0x0046e7c8
extern undefined * PTR_LAB_0046e7d4;   // 0x0046e7d4
namespace OWL::TFindDialog { extern undefined * vftable; }   // 0x0046e868  PTR_FUN_0046e868
extern pointer PTR_LAB_0046e8ac;   // 0x0046e8ac
extern pointer PTR_LAB_0046e8b8;   // 0x0046e8b8
extern undefined * PTR_LAB_0046e8c4;   // 0x0046e8c4
namespace OWL::TFindReplaceDialog { extern undefined * vftable; }   // 0x0046e958  PTR_FUN_0046e958
extern pointer PTR_LAB_0046e99c;   // 0x0046e99c
extern pointer PTR_LAB_0046e9a8;   // 0x0046e9a8
extern undefined * PTR_LAB_0046e9b4;   // 0x0046e9b4
extern HICON DAT_0046ea3c;   // 0x0046ea3c
extern undefined DAT_0046ea55;   // 0x0046ea55
extern undefined DAT_0046ea59;   // 0x0046ea59
namespace OWL::TFrameWindow { extern undefined __entries; }   // 0x0046ea5c  DAT_0046ea5c
namespace OWL::TFrameWindow { extern undefined * vftable; }   // 0x0046ecc8  PTR_FUN_0046ecc8
extern pointer PTR_LAB_0046ed1c;   // 0x0046ed1c
extern pointer PTR_LAB_0046ed28;   // 0x0046ed28
extern undefined * PTR_LAB_0046ed34;   // 0x0046ed34
namespace OWL::TMenuDescr { extern undefined * vftable; }   // 0x0046ee54  PTR_FUN_0046ee54
extern char DAT_0046ee75;   // 0x0046ee75
extern char DAT_0046ee76;   // 0x0046ee76
extern char DAT_0046ee77;   // 0x0046ee77
extern char DAT_0046ee78;   // 0x0046ee78
extern char DAT_0046ee79;   // 0x0046ee79
extern char DAT_0046ee7b;   // 0x0046ee7b
extern char DAT_0046ee80;   // 0x0046ee80
extern char DAT_0046ee82;   // 0x0046ee82
extern int DAT_0046f040;   // 0x0046f040
namespace OWL::TXInvalidModule { extern undefined * vftable; }   // 0x0046f5c0  PTR_FUN_0046f5c0
namespace OWL::TModule { extern pointer vftable; }   // 0x0046f5e0  PTR_FUN_0046f5e0
namespace OWL::TModule::Streamer { extern undefined * vftable; }   // 0x0046f6ac  PTR_FUN_0046f6ac
extern undefined DAT_0046f6f8;   // 0x0046f6f8
extern int DAT_0046f710;   // 0x0046f710
namespace OWL::TFileSaveDialog { extern undefined * vftable; }   // 0x0046f78c  PTR_FUN_0046f78c
extern pointer PTR_LAB_0046f7d4;   // 0x0046f7d4
extern pointer PTR_LAB_0046f7e0;   // 0x0046f7e0
extern undefined * PTR_LAB_0046f7ec;   // 0x0046f7ec
namespace OWL::TFileOpenDialog { extern undefined * vftable; }   // 0x0046f880  PTR_FUN_0046f880
extern pointer PTR_LAB_0046f8c8;   // 0x0046f8c8
extern pointer PTR_LAB_0046f8d4;   // 0x0046f8d4
extern undefined * PTR_LAB_0046f8e0;   // 0x0046f8e0
namespace OWL::TOpenSaveDialog { extern undefined * vftable; }   // 0x0046f974  PTR_FUN_0046f974
extern pointer PTR_LAB_0046f9bc;   // 0x0046f9bc
extern pointer PTR_LAB_0046f9c8;   // 0x0046f9c8
extern undefined * PTR_LAB_0046f9d4;   // 0x0046f9d4
namespace OWL::TRadioButton { extern undefined __entries; }   // 0x0046fa6c  DAT_0046fa6c
namespace OWL::TRadioButton { extern undefined * vftable; }   // 0x0046facc  PTR_FUN_0046facc
extern pointer PTR_LAB_0046fb04;   // 0x0046fb04
extern pointer PTR_LAB_0046fb10;   // 0x0046fb10
extern undefined * PTR_LAB_0046fb1c;   // 0x0046fb1c
namespace OWL::TScroller { extern undefined * vftable; }   // 0x0046fbd4  PTR_FUN_0046fbd4
namespace OWL::TScroller::Streamer { extern undefined * vftable; }   // 0x0046fcdc  PTR_FUN_0046fcdc
namespace OWL::TStatic { extern undefined __entries; }   // 0x0046fd00  DAT_0046fd00
namespace OWL::TStatic { extern undefined * vftable; }   // 0x0046fd60  PTR_FUN_0046fd60
extern pointer PTR_LAB_0046fd98;   // 0x0046fd98
extern pointer PTR_LAB_0046fda4;   // 0x0046fda4
extern undefined * PTR_LAB_0046fdb0;   // 0x0046fdb0
namespace OWL::TStatic::Streamer { extern undefined * vftable; }   // 0x0046fee8  PTR_FUN_0046fee8
extern undefined DAT_0046fef8;   // 0x0046fef8
namespace OWL::TTinyCaption { extern undefined * vftable; }   // 0x00470190  PTR_FUN_00470190
extern pointer PTR_LAB_004701a4;   // 0x004701a4
extern pointer PTR_LAB_004701b0;   // 0x004701b0
extern undefined * PTR_LAB_004701bc;   // 0x004701bc
namespace OWL::TValidator { extern undefined * vftable; }   // 0x00470274  PTR_FUN_00470274
namespace OWL::TValidator::Streamer { extern undefined * vftable; }   // 0x0047033c  PTR_FUN_0047033c
extern pointer PTR_FUN_00470348;   // 0x00470348
extern pointer PTR_s_View_Class_0047034c;   // 0x0047034c
extern pointer PTR_s_View_Name_00470350;   // 0x00470350
extern uint DAT_00470374;   // 0x00470374
namespace OWL::TView { extern undefined * vftable; }   // 0x00470420  PTR_FUN_00470420
extern pointer PTR_FUN_00470458;   // 0x00470458
extern pointer PTR_LAB_00470464;   // 0x00470464
namespace OWL::TBarDescr { extern undefined * vftable; }   // 0x004705fc  PTR_FUN_004705fc
extern char DAT_00470684;   // 0x00470684
extern char DAT_00470693;   // 0x00470693
extern int DAT_00470a60;   // 0x00470a60
extern undefined DAT_00470a64;   // 0x00470a64
extern char DAT_00470a68;   // 0x00470a68
extern undefined DAT_00470a71;   // 0x00470a71
extern int DAT_00470c5c;   // 0x00470c5c
extern undefined4 _DAT_00470d00;   // 0x00470d00
extern undefined4 _DAT_00470d04;   // 0x00470d04
extern undefined * PTR_FUN_00470d08;   // 0x00470d08
extern undefined * PTR_FUN_00470d0c;   // 0x00470d0c
extern undefined * PTR_FUN_00470d10;   // 0x00470d10
extern undefined * PTR_LAB_00470d14;   // 0x00470d14
extern uint DAT_00470d18;   // 0x00470d18
extern int DAT_00470d1c;   // 0x00470d1c
extern int DAT_00470d20;   // 0x00470d20
extern uint DAT_00470d28;   // 0x00470d28
extern uint DAT_00470d2c;   // 0x00470d2c
extern uint DAT_00470d30;   // 0x00470d30
extern uint * DAT_00470d34;   // 0x00470d34
extern uint * _DAT_00470d38;   // 0x00470d38
extern int DAT_00470d3c;   // 0x00470d3c
extern undefined4 DAT_00470d40;   // 0x00470d40
extern undefined * PTR_DAT_00470d44;   // 0x00470d44
extern undefined * PTR_DAT_00470d4c;   // 0x00470d4c
extern uint DAT_00470d50;   // 0x00470d50
extern uint DAT_00470d54;   // 0x00470d54
extern undefined DAT_00471081;   // 0x00471081
extern undefined4 DAT_00471d5c;   // 0x00471d5c
extern undefined DAT_00471d68;   // 0x00471d68
extern int DAT_00471f90;   // 0x00471f90
extern undefined DAT_00471fdc;   // 0x00471fdc
namespace __rwstd::ref_counted { extern pointer vftable; }   // 0x00472fcc  PTR_FUN_00472fcc
namespace __rwstd::facet_imp { extern undefined * vftable; }   // 0x00472fdc  PTR_FUN_00472fdc
extern undefined * PTR_FUN_00472ff0;   // 0x00472ff0
namespace std::basic_ofstream_char { extern pointer vftable; }   // 0x00473020  PTR_FUN_00473020
extern pointer PTR_LAB_0047302c;   // 0x0047302c
namespace std::basic_ifstream_char { extern pointer vftable; }   // 0x0047303c  PTR_FUN_0047303c
extern pointer PTR_LAB_00473048;   // 0x00473048
namespace std::basic_ios_char { extern pointer vftable; }   // 0x00473058  PTR_FUN_00473058
namespace std::basic_ostream_char { extern pointer vftable; }   // 0x00473068  PTR_FUN_00473068
extern pointer PTR_LAB_00473074;   // 0x00473074
namespace std::basic_istream_char { extern pointer vftable; }   // 0x00473084  PTR_FUN_00473084
extern pointer PTR_LAB_00473090;   // 0x00473090
namespace std::basic_streambuf_char { extern undefined * vftable; }   // 0x004730a0  PTR_FUN_004730a0
namespace std::basic_filebuf_char { extern undefined * vftable; }   // 0x004730e0  PTR_FUN_004730e0
extern undefined DAT_00473114;   // 0x00473114
extern undefined * PTR_s_iostream_object_has_failbit_set_00473194;   // 0x00473194
extern undefined * PTR_s_iostream_object_has_badbit_set_00473198;   // 0x00473198
extern undefined * PTR_s_iostream_object_has_eofbit_set_0047319c;   // 0x0047319c
extern char DAT_00473200;   // 0x00473200
namespace std::ios_base { extern pointer vftable; }   // 0x0047331c  PTR_FUN_0047331c
extern undefined DAT_004733a0;   // 0x004733a0
extern undefined DAT_004733a8;   // 0x004733a8
extern undefined * PTR_FUN_00473854;   // 0x00473854
extern undefined1 DAT_0047387c;   // 0x0047387c
extern undefined * PTR_FUN_00473950;   // 0x00473950
extern undefined * PTR_s_locale_initid_called_twice_0047397c;   // 0x0047397c
extern undefined * PTR_s_Error_constructing_locale_name_00473988;   // 0x00473988
extern char DAT_00473a00;   // 0x00473a00
extern undefined DAT_00473b19;   // 0x00473b19
extern undefined DAT_00473b1a;   // 0x00473b1a
extern undefined DAT_00473b1b;   // 0x00473b1b
extern undefined DAT_00473b29;   // 0x00473b29
extern undefined DAT_00473e6c;   // 0x00473e6c
namespace std::runtime_error { extern undefined * vftable; }   // 0x00473ec0  PTR_FUN_00473ec0
namespace __rwstd::locale_imp { extern pointer vftable; }   // 0x00473ed4  PTR_FUN_00473ed4
extern undefined * PTR_s_no_named_exception_thrown_00473f24;   // 0x00473f24
extern undefined * PTR_s_bad_alloc_exception_thrown_00473f2c;   // 0x00473f2c
extern undefined * PTR_s_invalid_string_size_parameter_in_00474068;   // 0x00474068
extern undefined * PTR_s_resulting_length_is_invalid_in_f_00474070;   // 0x00474070
extern undefined * PTR_s_string_index_out_of_range_in_fun_00474074;   // 0x00474074
extern undefined * PTR_s_unexpected_NULL_pointer_in_funct_00474078;   // 0x00474078
extern undefined DAT_0047422f;   // 0x0047422f
extern undefined DAT_0047423e;   // 0x0047423e
extern undefined DAT_00474499;   // 0x00474499
namespace type_info_hash { extern pointer vftable; }   // 0x00474534  PTR_FUN_00474534
namespace std::type_info { extern pointer vftable; }   // 0x00474544  PTR_FUN_00474544
extern undefined * DAT_00474548;   // 0x00474548
extern undefined * DAT_0047454c;   // 0x0047454c
extern undefined DAT_00474584;   // 0x00474584
extern int _DAT_00474598;   // 0x00474598
extern int DAT_00474668;   // 0x00474668
extern undefined * PTR_FUN_0047467c;   // 0x0047467c
extern uint _DAT_00474680;   // 0x00474680
extern undefined4 _DAT_00474684;   // 0x00474684
extern undefined4 DAT_00474688;   // 0x00474688
extern undefined DAT_004746a0;   // 0x004746a0
extern undefined DAT_004746b8;   // 0x004746b8
extern uint DAT_00474b38;   // 0x00474b38
extern undefined4 DAT_00474b3c;   // 0x00474b3c
extern undefined * PTR_DAT_00474c08;   // 0x00474c08
extern undefined DAT_00474c0c;   // 0x00474c0c
extern int DAT_00474dfc;   // 0x00474dfc
extern undefined1 DAT_004751bc;   // 0x004751bc
extern undefined DAT_004751ca;   // 0x004751ca
extern undefined DAT_0047522e;   // 0x0047522e
extern pointer PTR_DAT_00475430;   // 0x00475430
extern undefined * PTR_DAT_00475434;   // 0x00475434
extern undefined * PTR_DAT_00475438;   // 0x00475438
extern undefined * PTR_DAT_0047543c;   // 0x0047543c
extern undefined * PTR_DAT_00475440;   // 0x00475440
extern undefined * PTR_DAT_00475444;   // 0x00475444
extern undefined * PTR_DAT_00475448;   // 0x00475448
extern undefined * PTR_DAT_0047544c;   // 0x0047544c
extern undefined * PTR_DAT_00475450;   // 0x00475450
extern undefined * PTR_DAT_00475454;   // 0x00475454
extern undefined1 DAT_00475458;   // 0x00475458
extern undefined1 DAT_00475459;   // 0x00475459
extern undefined1 DAT_0047545a;   // 0x0047545a
extern undefined1 DAT_0047545b;   // 0x0047545b
extern undefined1 DAT_0047545c;   // 0x0047545c
extern undefined1 DAT_0047545d;   // 0x0047545d
extern undefined1 DAT_0047545e;   // 0x0047545e
extern undefined1 DAT_0047545f;   // 0x0047545f
extern undefined DAT_0047546c;   // 0x0047546c
extern undefined DAT_0047546f;   // 0x0047546f
extern undefined DAT_00475474;   // 0x00475474
extern undefined DAT_00475477;   // 0x00475477
extern undefined DAT_0047547c;   // 0x0047547c
extern undefined DAT_0047547f;   // 0x0047547f
extern undefined DAT_00475484;   // 0x00475484
extern undefined DAT_00475487;   // 0x00475487
extern undefined DAT_0047548c;   // 0x0047548c
extern undefined DAT_0047548f;   // 0x0047548f
extern undefined DAT_00475492;   // 0x00475492
extern undefined DAT_00475495;   // 0x00475495
extern undefined DAT_0047549a;   // 0x0047549a
extern undefined DAT_0047549d;   // 0x0047549d
extern undefined DAT_004754a0;   // 0x004754a0
extern undefined DAT_004754a3;   // 0x004754a3
extern undefined DAT_004754a8;   // 0x004754a8
extern undefined DAT_004754ab;   // 0x004754ab
extern undefined DAT_004754ae;   // 0x004754ae
extern undefined DAT_004754b1;   // 0x004754b1
extern undefined DAT_004754b6;   // 0x004754b6
extern undefined DAT_004754bc;   // 0x004754bc
extern undefined DAT_004755bc;   // 0x004755bc
extern UINT _DAT_004756bc;   // 0x004756bc
extern undefined4 DAT_004756c4;   // 0x004756c4
extern undefined4 DAT_00475704;   // 0x00475704
extern undefined4 DAT_00475741;   // 0x00475741
extern undefined4 DAT_0047574b;   // 0x0047574b
extern undefined4 DAT_00475755;   // 0x00475755
extern undefined4 DAT_0047575f;   // 0x0047575f
extern undefined1 DAT_00475763;   // 0x00475763
extern undefined DAT_004757cb;   // 0x004757cb
extern undefined DAT_004757cd;   // 0x004757cd
extern undefined DAT_004757cf;   // 0x004757cf
extern undefined DAT_004757d1;   // 0x004757d1
extern undefined1 DAT_004757d4;   // 0x004757d4
extern pointer PTR_DAT_00475808;   // 0x00475808
extern undefined * PTR_DAT_00475820;   // 0x00475820
extern undefined4 DAT_004758e4;   // 0x004758e4
extern undefined * PTR_DAT_00475910;   // 0x00475910
extern pointer PTR_DAT_00475a34;   // 0x00475a34
extern undefined * _DAT_00475b5c;   // 0x00475b5c
extern undefined * PTR_FUN_00475b60;   // 0x00475b60
extern undefined4 DAT_00475c2c;   // 0x00475c2c
extern undefined * PTR_FUN_00475cb4;   // 0x00475cb4
extern undefined * PTR_FUN_00475cb8;   // 0x00475cb8
extern undefined1 DAT_00475cbc;   // 0x00475cbc
extern undefined1 DAT_00475cc1;   // 0x00475cc1
extern undefined1 DAT_00475cc6;   // 0x00475cc6
extern undefined1 DAT_00475ccb;   // 0x00475ccb
extern undefined4 DAT_00475cf8;   // 0x00475cf8
extern undefined4 DAT_00475cfc;   // 0x00475cfc
extern undefined2 DAT_00475d00;   // 0x00475d00
extern undefined4 DAT_00475d02;   // 0x00475d02
extern undefined4 DAT_00475d06;   // 0x00475d06
extern undefined2 DAT_00475d0a;   // 0x00475d0a
extern undefined4 DAT_00475d0c;   // 0x00475d0c
extern undefined4 DAT_00475d10;   // 0x00475d10
extern undefined2 DAT_00475d14;   // 0x00475d14
extern undefined4 DAT_00475d16;   // 0x00475d16
extern undefined4 DAT_00475d1a;   // 0x00475d1a
extern undefined2 DAT_00475d1e;   // 0x00475d1e
extern undefined4 DAT_00475d20;   // 0x00475d20
extern undefined4 DAT_00475d24;   // 0x00475d24
extern undefined2 DAT_00475d28;   // 0x00475d28
extern undefined4 DAT_00475d2a;   // 0x00475d2a
extern undefined4 DAT_00475d2e;   // 0x00475d2e
extern undefined2 DAT_00475d32;   // 0x00475d32
extern undefined4 DAT_00475d34;   // 0x00475d34
extern undefined4 DAT_00475d38;   // 0x00475d38
extern undefined2 DAT_00475d3c;   // 0x00475d3c
extern undefined4 DAT_00475d3e;   // 0x00475d3e
extern undefined4 DAT_00475d42;   // 0x00475d42
extern undefined2 DAT_00475d46;   // 0x00475d46
extern byte DAT_00475d48;   // 0x00475d48
extern byte DAT_00475d49;   // 0x00475d49
extern byte DAT_00475d4a;   // 0x00475d4a
extern byte DAT_00475d4b;   // 0x00475d4b
extern undefined4 _DAT_00475dd8;   // 0x00475dd8
extern undefined * DAT_00475ddc;   // 0x00475ddc
extern LPCSTR DAT_00475de0;   // 0x00475de0
extern undefined DAT_00475de4;   // 0x00475de4
extern undefined DAT_00475de7;   // 0x00475de7
extern undefined * DAT_00475e54;   // 0x00475e54
extern undefined * PTR_FUN_00475e58;   // 0x00475e58
extern undefined * PTR_FUN_00475e5c;   // 0x00475e5c
extern undefined * PTR_FUN_00475e60;   // 0x00475e60
extern undefined * PTR_FUN_00475e64;   // 0x00475e64
extern undefined * PTR_LAB_00475e68;   // 0x00475e68
extern undefined * PTR_FUN_00475e6c;   // 0x00475e6c
extern undefined * PTR_LAB_00475e70;   // 0x00475e70
extern int DAT_00475ec8;   // 0x00475ec8
extern undefined * PTR_FUN_00475f14;   // 0x00475f14
extern undefined * PTR_FUN_00475f18;   // 0x00475f18
extern char DAT_00475f90;   // 0x00475f90
extern undefined DAT_00475f94;   // 0x00475f94
extern undefined4 DAT_00475fbc;   // 0x00475fbc
extern undefined DAT_00475fe4;   // 0x00475fe4
extern int DAT_00475ff0;   // 0x00475ff0
extern int DAT_00475ff4;   // 0x00475ff4
extern int DAT_00475ff8;   // 0x00475ff8
extern int DAT_00475ffc;   // 0x00475ffc
extern undefined * PTR_DAT_00476000;   // 0x00476000
extern undefined * PTR_DAT_00476004;   // 0x00476004
extern undefined DAT_00476008;   // 0x00476008
extern undefined1 DAT_0047600b;   // 0x0047600b
extern undefined1 DAT_0047600c;   // 0x0047600c
extern undefined DAT_00476228;   // 0x00476228
extern undefined DAT_00476889;   // 0x00476889
extern int DAT_004768a4;   // 0x004768a4
extern int DAT_004768b4;   // 0x004768b4
extern undefined DAT_004768bc;   // 0x004768bc
extern undefined * DAT_004768c0;   // 0x004768c0
extern undefined DAT_004768c9;   // 0x004768c9
extern undefined4 DAT_004768dc;   // 0x004768dc
extern undefined DAT_004769c8;   // 0x004769c8
extern undefined4 _DAT_004769dc;   // 0x004769dc
extern undefined DAT_004769dc;   // 0x004769dc
extern undefined DAT_00476a94;   // 0x00476a94
extern undefined DAT_00476aa5;   // 0x00476aa5
extern undefined DAT_00476ab6;   // 0x00476ab6
extern undefined DAT_00476ac7;   // 0x00476ac7
extern undefined DAT_00476ad8;   // 0x00476ad8
extern undefined DAT_00476ae9;   // 0x00476ae9
extern undefined DAT_00476afa;   // 0x00476afa
extern undefined DAT_00476b0b;   // 0x00476b0b
extern undefined DAT_00476b1c;   // 0x00476b1c
extern undefined DAT_00476b20;   // 0x00476b20
extern uint DAT_00476b28;   // 0x00476b28
extern undefined DAT_00476b2d;   // 0x00476b2d
extern undefined DAT_00476b31;   // 0x00476b31
extern undefined DAT_00476b35;   // 0x00476b35
extern undefined DAT_00476b3c;   // 0x00476b3c
extern undefined DAT_00476b4d;   // 0x00476b4d
extern undefined4 DAT_00476b5a;   // 0x00476b5a
extern undefined4 DAT_00476b5e;   // 0x00476b5e
extern undefined4 DAT_00476b62;   // 0x00476b62
extern undefined4 DAT_00476b66;   // 0x00476b66
extern undefined4 DAT_00476b6a;   // 0x00476b6a
extern undefined4 DAT_00476b6e;   // 0x00476b6e
extern undefined DAT_00476b84;   // 0x00476b84
extern undefined DAT_00476b88;   // 0x00476b88
extern undefined DAT_00476b8c;   // 0x00476b8c
extern undefined DAT_00476b98;   // 0x00476b98
extern undefined DAT_00476ba0;   // 0x00476ba0
extern undefined DAT_00476ba8;   // 0x00476ba8
extern int DAT_00476bac;   // 0x00476bac
extern int DAT_00476bb0;   // 0x00476bb0
extern undefined DAT_00476bc8;   // 0x00476bc8
extern undefined DAT_00476bcc;   // 0x00476bcc
extern undefined4 DAT_00476bf0;   // 0x00476bf0
extern undefined4 DAT_00476bf4;   // 0x00476bf4
extern undefined DAT_00476bfc;   // 0x00476bfc
extern int DAT_00476c04;   // 0x00476c04
extern undefined4 DAT_00476c08;   // 0x00476c08
extern undefined4 DAT_00476c0c;   // 0x00476c0c
extern undefined DAT_00476c18;   // 0x00476c18
extern undefined4 DAT_00476c2d;   // 0x00476c2d
extern undefined4 DAT_00476c31;   // 0x00476c31
extern undefined4 DAT_00476c35;   // 0x00476c35
extern undefined4 DAT_00476c39;   // 0x00476c39
extern undefined4 DAT_00476c49;   // 0x00476c49
extern undefined4 DAT_00476c4d;   // 0x00476c4d
extern undefined DAT_00476c54;   // 0x00476c54
extern undefined4 _DAT_00476c64;   // 0x00476c64
extern undefined DAT_00476c64;   // 0x00476c64
extern undefined DAT_00476c68;   // 0x00476c68
extern undefined DAT_00476dc4;   // 0x00476dc4
extern HANDLE DAT_00476e14;   // 0x00476e14
extern undefined DAT_00476e18;   // 0x00476e18
extern int _DAT_00476e29;   // 0x00476e29
extern undefined DAT_00476e34;   // 0x00476e34
extern undefined4 _DAT_00476e39;   // 0x00476e39
extern undefined4 _DAT_00476e3d;   // 0x00476e3d
extern undefined4 _DAT_00476e41;   // 0x00476e41
extern uint * DAT_00476e45;   // 0x00476e45
extern undefined DAT_00476e4c;   // 0x00476e4c
extern undefined DAT_00476e5c;   // 0x00476e5c
extern undefined1 DAT_0047704c;   // 0x0047704c
extern undefined4 _DAT_0047704d;   // 0x0047704d
extern undefined4 _DAT_00477051;   // 0x00477051
extern undefined4 _DAT_00477055;   // 0x00477055
extern HWND DAT_00477059;   // 0x00477059
extern undefined DAT_0047705d;   // 0x0047705d
extern int DAT_00477078;   // 0x00477078
extern undefined DAT_0047707c;   // 0x0047707c
extern undefined DAT_00477180;   // 0x00477180
extern undefined4 _DAT_00477184;   // 0x00477184
extern undefined DAT_00477184;   // 0x00477184
extern undefined4 _DAT_00477188;   // 0x00477188
extern undefined4 _DAT_0047718c;   // 0x0047718c
extern HMODULE DAT_00477190;   // 0x00477190
extern undefined4 DAT_00477194;   // 0x00477194
extern undefined4 DAT_00477198;   // 0x00477198
extern undefined DAT_0047719c;   // 0x0047719c
extern int DAT_004771a4;   // 0x004771a4
extern undefined DAT_004771ac;   // 0x004771ac
extern undefined DAT_00477270;   // 0x00477270
extern undefined DAT_00477280;   // 0x00477280
extern undefined DAT_00477290;   // 0x00477290
extern undefined DAT_004772a0;   // 0x004772a0
extern undefined DAT_004772b0;   // 0x004772b0
extern undefined DAT_004772c0;   // 0x004772c0
extern undefined4 DAT_004772cd;   // 0x004772cd
extern undefined4 DAT_004772d1;   // 0x004772d1
extern undefined4 DAT_004772d5;   // 0x004772d5
extern undefined4 DAT_004772d9;   // 0x004772d9
extern undefined DAT_004772e1;   // 0x004772e1
extern undefined DAT_004772fe;   // 0x004772fe
extern undefined DAT_0047730f;   // 0x0047730f
extern undefined DAT_00477328;   // 0x00477328
extern undefined DAT_00477338;   // 0x00477338
extern undefined DAT_00477348;   // 0x00477348
extern undefined DAT_00477358;   // 0x00477358
extern undefined DAT_00477368;   // 0x00477368
extern undefined4 DAT_004773ad;   // 0x004773ad
extern undefined DAT_004773b8;   // 0x004773b8
extern undefined * DAT_004773c8;   // 0x004773c8
extern undefined * * _DAT_004773cc;   // 0x004773cc
extern undefined DAT_004773cc;   // 0x004773cc
extern undefined DAT_004773e8;   // 0x004773e8
extern undefined DAT_0047742c;   // 0x0047742c
extern undefined DAT_00477470;   // 0x00477470
extern int DAT_004774b4;   // 0x004774b4
extern undefined DAT_004774f8;   // 0x004774f8
extern int DAT_00477538;   // 0x00477538
extern int DAT_00477578;   // 0x00477578
extern undefined DAT_004775b8;   // 0x004775b8
extern int DAT_004775c0;   // 0x004775c0
extern undefined4 * DAT_004775c4;   // 0x004775c4
extern int DAT_004775c8;   // 0x004775c8
extern undefined4 * DAT_004775cc;   // 0x004775cc
extern undefined4 * DAT_004775d0;   // 0x004775d0
extern int DAT_004775d4;   // 0x004775d4
extern undefined DAT_004775d8;   // 0x004775d8
extern undefined4 DAT_004775e0;   // 0x004775e0
extern undefined DAT_004779e0;   // 0x004779e0
extern int * DAT_004779ec;   // 0x004779ec
extern undefined * DAT_004779f0;   // 0x004779f0
extern undefined * DAT_004779f4;   // 0x004779f4
extern HANDLE _DAT_00477ac0;   // 0x00477ac0
extern undefined DAT_00477ac0;   // 0x00477ac0
extern HANDLE DAT_00477ac4;   // 0x00477ac4
extern HANDLE _DAT_00477ac8;   // 0x00477ac8
extern int _DAT_00477b88;   // 0x00477b88
extern undefined1 DAT_00477b8c;   // 0x00477b8c
extern undefined1 DAT_00477b8d;   // 0x00477b8d
extern undefined1 DAT_00477b8e;   // 0x00477b8e
extern UINT _DAT_00477c90;   // 0x00477c90
extern undefined DAT_00477c94;   // 0x00477c94
extern undefined DAT_00477d94;   // 0x00477d94
extern int DAT_00477db0;   // 0x00477db0
extern int DAT_00477db4;   // 0x00477db4
extern int DAT_00477db8;   // 0x00477db8
extern undefined1 * DAT_00477dc0;   // 0x00477dc0
extern undefined2 * DAT_00477dc4;   // 0x00477dc4
extern int * DAT_00477dc8;   // 0x00477dc8
extern uint * DAT_00477dcc;   // 0x00477dcc
extern int _DAT_00477dd0;   // 0x00477dd0
extern char * DAT_00477de4;   // 0x00477de4
extern LPCH DAT_00477de8;   // 0x00477de8
extern int DAT_00477dec;   // 0x00477dec
extern undefined DAT_00477df0;   // 0x00477df0
extern undefined1 * DAT_00477df8;   // 0x00477df8
extern undefined4 _DAT_00477e0c;   // 0x00477e0c
extern undefined DAT_00477e0c;   // 0x00477e0c
extern int _DAT_00477e10;   // 0x00477e10
extern undefined4 DAT_00477e20;   // 0x00477e20
extern int * DAT_00477e24;   // 0x00477e24
extern undefined4 _DAT_00477e28;   // 0x00477e28
extern undefined4 _DAT_00477e2c;   // 0x00477e2c
extern char DAT_01004553;   // 0x01004553
extern char cRam02000000;   // 0x02000000
extern char cRam03000000;   // 0x03000000
extern char cRam28000000;   // 0x28000000

} // namespace tea
