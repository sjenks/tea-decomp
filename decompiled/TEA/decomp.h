// TEA.exe — declarations for the decompiled program. Generated; do not edit.
// One prototype per function (as Ghidra has it after its signatures were committed) and one
// declaration per global the pseudocode names. Class names appear as namespaces: the binary has no
// type information from which real class definitions could be rebuilt.
#pragma once
#include "../ghidra.h"

namespace tea {

// ---- functions (4493) ----
void __stdcall entry(void);
void __stdcall FUN_00401012(void);
void __cdecl __GetExceptDLLinfo(undefined4 *param_1);
undefined4 __stdcall FUN_00401140(void);
int * __cdecl FUN_00401150(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6);
namespace TEADictionaryPropertiesWindows { void __cdecl _dtor(int *param_1,uint param_2); }
namespace TEADictionaryPropertiesWindows { void __cdecl vf11(int *param_1); }
int __cdecl FUN_00401d10(int param_1,int param_2,uint *param_3);
namespace TEADictionaryPropertiesWindows { void __cdecl vf47(int *param_1); }
namespace OWL::TWindow { undefined4 __cdecl vf1(int param_1); }
namespace OWL::TWindow { bool __cdecl vf24(int param_1,byte param_2); }
namespace OWL::TWindow { void __cdecl vf26(int param_1,byte param_2); }
namespace OWL::TWindow { void __cdecl vf27(int param_1,RECT *param_2,byte param_3); }
namespace std::string { void __cdecl _dtor(int param_1,byte param_2); }
namespace OWL::TStatic { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TGroupBox { void __cdecl _dtor(int *param_1,uint param_2); }
namespace std::vector_PropertiesViewWindows_MoveableControl_ptr { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_00402f68(undefined4 param_1,int param_2,int param_3);
namespace PrintoutFeeder { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 * __cdecl FUN_00402fa0(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 *param_7);
namespace TEAPrintout { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_0040317c(undefined4 param_1,int param_2,int param_3);
namespace TEAPrintout { void __cdecl vf6(int param_1,int param_2); }
namespace TEAPrintout { void __cdecl vf9(int param_1,undefined4 *param_2,int *param_3); }
namespace TEAPrintout { void __cdecl vf2(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5); }
void __cdecl FUN_004034c0(int param_1);
undefined4 * __cdecl FUN_00403e94(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_00403ec0(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_00404174(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_004041a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_00404240(int param_1,int param_2);
namespace TEAPrintout { undefined4 __cdecl vf5(int param_1,int param_2); }
namespace OWL::TScreenDC { void __cdecl _dtor(int *param_1,byte param_2); }
namespace OWL::TFont { void __cdecl _dtor(uint *param_1,byte param_2); }
namespace std::exception { undefined * __stdcall vf1(void); }
namespace std::bad_alloc { undefined * __stdcall vf1(void); }
namespace PrintPreviewPrintout { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace PrintoutFeeder { char * vf6(char *param_1,undefined4 param_2,byte param_3); }
namespace std::vector_TEAPrintout_PageInfo { void __cdecl _dtor(int param_1,byte param_2); }
char * __cdecl FUN_004047bc(int param_1,int param_2,int param_3);
int * __cdecl FUN_00404870(int *param_1,int param_2,undefined4 *param_3,int param_4,int param_5);
namespace TEAPropertiesViewWindows { void __cdecl _dtor(int *param_1,byte param_2); }
namespace TEAPropertiesViewWindows { void __cdecl vf19(undefined4 *param_1,int param_2,int param_3); }
namespace TEAPropertiesViewWindows { void __cdecl vf29(int param_1); }
namespace TEAPropertiesViewWindows { void __cdecl vf27(int param_1,int *param_2); }
namespace TEAPropertiesViewWindows { void __cdecl vf28(int param_1,undefined4 *param_2,int param_3); }
namespace TEAPropertiesViewWindows { void __cdecl vf21(int param_1,undefined4 param_2,int param_3); }
namespace TEAPropertiesViewWindows { void __cdecl vf36(int param_1,int param_2); }
void __cdecl FUN_0040625c(int param_1);
namespace TEAPropertiesViewWindows { void __cdecl vf11(int *param_1); }
namespace TEAPropertiesViewWindows { void __cdecl vf48(int *param_1); }
void __cdecl FUN_004068e8(int param_1);
void __cdecl FUN_00406984(int param_1,uint *param_2);
namespace OWL::TRadioButton { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TListBox { void __cdecl _dtor(int *param_1,uint param_2); }
void __stdcall FUN_004074f4(void);
void __stdcall FUN_0040758c(void);
undefined4 * __cdecl FUN_004075e4(undefined4 *param_1,uint *param_2);
namespace TSDictionaryList { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_0040771c(undefined4 param_1,int param_2,int param_3);
undefined4 * __cdecl FUN_00407734(uint *param_1);
void __cdecl FUN_004085f0(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_004087c8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_004087ec(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_0040886c(int param_1,int param_2);
namespace TSDictionaryList { void __cdecl ReleaseDictionaries(int param_1); }
int * __cdecl FUN_00408984(int *param_1,int *param_2,int *param_3);
undefined4 * __cdecl FUN_004089a4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __stdcall FUN_004089c8(void);
namespace TSDictionaryList { int __cdecl GetCount(int param_1); }
undefined4 __cdecl FUN_00408b34(int param_1);
undefined1 __cdecl FUN_00408b6c(int param_1,int param_2);
undefined4 __cdecl FUN_00408c68(int param_1,int param_2);
undefined4 __cdecl FUN_00408c8c(undefined4 *param_1);
undefined4 __cdecl FUN_00408c98(int param_1,int param_2);
undefined4 __cdecl FUN_00408cbc(undefined4 param_1,int param_2,int param_3);
undefined4 __cdecl FUN_00408d0c(undefined4 param_1,int param_2,int param_3);
undefined4 __cdecl FUN_00408d5c(undefined4 param_1,int param_2,int param_3);
void __cdecl FUN_00408dac(int param_1,int param_2);
undefined4 __stdcall FUN_00408dd8(void);
namespace TSDictionaryList { undefined2 __cdecl GetNumLengths(int param_1,int param_2); }
bool __cdecl FUN_00408dfc(int param_1,int param_2);
void __cdecl FUN_00408e24(int param_1,int param_2);
undefined4 __cdecl FUN_00408e54(int param_1,int param_2,int param_3);
namespace TSDictionaryList { undefined4 __cdecl GetWordStreamOffset(int param_1,int param_2,int param_3); }
undefined4 __cdecl FUN_00408ea0(int param_1,int param_2,int param_3);
int __cdecl FUN_00408ec0(int param_1,int param_2);
int __cdecl FUN_00408edc(int param_1,int param_2);
namespace TSDictionaryList { uint __cdecl CollectDefinitionOffsets(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7); }
void __cdecl FUN_004092e8(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_004094c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_004094e4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_00409564(int param_1,int param_2);
void __cdecl FUN_0040957c(undefined4 param_1,int param_2,int param_3);
void __cdecl FUN_00409594(int param_1,int param_2,int param_3);
void __cdecl FUN_00409d44(int param_1,uint param_2);
undefined4 __cdecl FUN_0040a04c(int param_1,int param_2,uint param_3,int param_4);
int __cdecl FUN_0040a2f4(int param_1,int param_2,int param_3);
int __cdecl FUN_0040a988(int param_1,int param_2,int param_3);
void __cdecl FUN_0040aad4(int param_1,int param_2);
void __cdecl FUN_0040aaec(int param_1,int param_2);
int __cdecl FUN_0040ab04(int param_1,int param_2,int param_3);
int __cdecl FUN_0040ab88(int param_1,int param_2);
int __cdecl FUN_0040add8(int param_1,int param_2,int param_3);
void __cdecl FUN_0040ae0c(int param_1,int param_2,int param_3);
void __cdecl FUN_0040ae88(int param_1,int param_2,int param_3);
void __cdecl FUN_0040b4f0(undefined4 param_1,int param_2,int param_3);
int __cdecl FUN_0040b5a8(int param_1,int param_2,int param_3);
void __cdecl FUN_0040b62c(undefined4 param_1,int param_2,int param_3);
namespace TSDictionaryList::Dictionary { undefined4 * __cdecl Dictionary(undefined4 *param_1,int param_2); }
namespace TSDictionaryList::Dictionary { void __cdecl _dtor(int *param_1,byte param_2); }
namespace TSDictionaryList::Dictionary { int * __cdecl Load(int *param_1,int param_2); }
namespace TSDictionaryList::Dictionary { undefined4 * __cdecl Unload(int param_1); }
namespace TSDictionaryList::Dictionary { int __cdecl EnsureCurrent(int *param_1); }
namespace TSDictionaryList::Dictionary { undefined4 __cdecl vf4(int param_1); }
namespace TSDictionaryList::Dictionary { int __cdecl GetFileTitle(int param_1,int param_2); }
namespace TSDictionaryList::Dictionary { undefined4 __cdecl vf6(int param_1); }
namespace TSDictionaryList::Dictionary { void __cdecl GetCounts(int param_1,int *param_2,int *param_3,int *param_4,int *param_5); }
namespace TSDictionaryList::Dictionary { uint __cdecl GetSummaryText(int *param_1,int param_2); }
namespace TSDictionaryList::Dictionary { int __cdecl GetFileDateText(int param_1,int param_2); }
namespace TSDictionaryList::Dictionary { int __cdecl GetDescription(int param_1,int param_2); }
namespace TSDictionaryDefinitionRetriever { int * __cdecl TSDictionaryDefinitionRetriever(int *param_1,int param_2,int param_3,undefined4 *param_4); }
namespace TSDictionaryDefinitionRetriever { void __cdecl _dtor(int param_1,byte param_2); }
namespace TSDictionaryDefinitionRetriever { void __cdecl ReadDefinition(int param_1,LONG param_2,int param_3); }
void __cdecl FUN_0040db1c(int param_1,uint param_2);
undefined4 __cdecl FUN_0040dc7c(int param_1,int param_2,uint param_3,int param_4);
int __cdecl FUN_0040df24(int param_1,int param_2,int param_3);
int __cdecl FUN_0040e070(int param_1,int param_2,int param_3);
void __cdecl FUN_0040e0a0(int param_1,int param_2,int param_3);
void __cdecl FUN_0040e0cc(int param_1,int param_2,int param_3);
int __cdecl FUN_0040e20c(int param_1,int param_2,int param_3);
void __cdecl FUN_0040e240(int param_1,int param_2,int param_3);
namespace TSDictionaryDefinitionSearchIndexed { int * __cdecl TSDictionaryDefinitionSearchIndexed(int *param_1,int param_2,int param_3,int param_4,undefined4 *param_5); }
void __cdecl FUN_0040fc0c(int param_1,uint param_2);
void __cdecl FUN_0040ff44(int param_1,uint param_2);
undefined4 __cdecl FUN_0040ffe4(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void __cdecl FUN_0041028c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_004102ac(undefined4 *param_1,int param_2,undefined4 *param_3);
void __cdecl FUN_00410328(int *param_1,int *param_2);
void __cdecl FUN_00410378(int *param_1,int *param_2);
void __cdecl FUN_004103d4(int *param_1,int param_2);
void __cdecl FUN_004103f8(int *param_1,int *param_2);
void __cdecl sort_uint32(int *param_1,int *param_2);
int * __cdecl FUN_004104e8(int *param_1,int *param_2,int param_3);
int * __cdecl FUN_00410538(int *param_1,int *param_2);
int * __cdecl unique_uint32(int *param_1,int *param_2,int *param_3);
undefined4 * __cdecl FUN_00410598(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl set_union_uint32(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5);
int * __cdecl set_intersection_uint32(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5);
namespace TSDictionaryDefinitionSearchIndexed { void __cdecl _dtor(int param_1,byte param_2); }
namespace TSDictionaryDefinitionSearchIndexed { undefined4 __cdecl Next(int *param_1,int param_2); }
void __cdecl FUN_00410750(int param_1,int *param_2,int *param_3);
namespace TSDictionaryDefinitionSearchSequential { int * __cdecl TSDictionaryDefinitionSearchSequential(int *param_1,int param_2,int param_3,int param_4,undefined4 *param_5); }
namespace TSDictionaryDefinitionSearchSequential { void __cdecl _dtor(int param_1,byte param_2); }
namespace TSDictionaryDefinitionSearchSequential { int * __cdecl Next(int *param_1,int param_2); }
void __cdecl FUN_00410d88(undefined4 param_1,int param_2,int param_3);
void __cdecl FUN_00410da0(int *param_1,int *param_2,int *param_3);
namespace Definition { void __cdecl _dtor(int param_1,byte param_2); }
namespace MatchEngine { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::logic_error { undefined4 __cdecl vf1(int param_1); }
namespace std::vector_TSDictionaryList_Dictionary_ptr { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::vector_const_MatchEngine_ptr { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::vector_long { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::vector_std_string { void __cdecl _dtor(int param_1,byte param_2); }
undefined4 __stdcall MsgHookProc_qqsiuil(int param_1,undefined4 param_2,undefined4 *param_3);
namespace InputEngine { undefined4 * __cdecl InputEngine(undefined4 *param_1,int param_2,int param_3); }
namespace InputEngine { void __cdecl _dtor(int param_1,byte param_2); }
namespace InputEngine { bool __cdecl StartLength(int param_1,int param_2); }
namespace InputEngine { int __cdecl NextWord(int param_1,int param_2); }
namespace InputEngine { char * __cdecl NextMatch(int param_1,int param_2); }
namespace MatchEngineSet { uint __cdecl EvalLogic(int param_1,int param_2,int param_3,byte *param_4,int *param_5); }
namespace InputEngine { bool __cdecl OpenFile(int param_1); }
namespace InputEngine { int __cdecl GetLinkGroupIndex(int param_1); }
namespace InputEngine { char * __cdecl GetAnnotation(int param_1); }
void __stdcall FUN_004122e4(void);
int __cdecl FUN_00412334(int param_1);
undefined * __cdecl FUN_0041238c(int param_1,int param_2);
int __cdecl FUN_00412434(int param_1,int param_2,int param_3);
void __cdecl FUN_0041251c(int param_1,uint *param_2);
void __cdecl FUN_00412830(int param_1);
int * __cdecl FUN_00412cf0(int *param_1,int param_2,int param_3);
namespace FileHistory { void __cdecl _dtor(int param_1,byte param_2); }
namespace IntroductionViewWindows { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_004132a8(int *param_1,int param_2,undefined4 param_3,int param_4);
namespace IntroductionViewWindows { void __cdecl _dtor(int *param_1,uint param_2); }
namespace IntroductionViewWindows { void __stdcall Cmd1530(void); }
namespace IntroductionViewWindows { void __stdcall Cmd29991(void); }
namespace IntroductionViewWindows { void __stdcall Cmd90(void); }
namespace IntroductionViewWindows { void __cdecl Cmd100(int param_1); }
int __cdecl FUN_00413990(int param_1,int param_2);
namespace PropertiesViewWindows { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace PropertiesViewWindows { void __stdcall EvMsg_19(int param_1); }
namespace PropertiesViewWindows { void __stdcall EvSize(int param_1); }
namespace PropertiesViewWindows { void __stdcall Cmd1530(int param_1); }
int * __cdecl FUN_00413cf4(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,uint *param_6, int param_7,int param_8);
namespace PropertiesViewWindows { void __cdecl _dtor(int *param_1,uint param_2); }
void vshared_414108(char *param_1,undefined4 param_2,char param_3);
namespace PropertiesViewWindows { void __cdecl vf15(int *param_1); }
namespace PropertiesViewWindows { void __cdecl vf16(int *param_1); }
namespace PropertiesViewWindows { bool __cdecl vf17(int param_1); }
undefined4 * __cdecl FUN_00414278(undefined4 *param_1,int param_2);
void __cdecl FUN_004146a0(int param_1,int param_2);
void __cdecl FUN_00414708(int param_1,int param_2);
void __cdecl FUN_004149d4(int param_1,undefined4 param_2,undefined4 param_3,byte *param_4);
void __cdecl FUN_00414acc(int param_1,int param_2);
void __cdecl FUN_00414bd8(uint param_1,uint param_2);
uint __cdecl FUN_00414e84(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,byte *param_5);
void __cdecl FUN_00415118(int param_1);
namespace PropertiesViewWindows { void __cdecl vf18(int *param_1); }
namespace PropertiesViewWindows { void __stdcall vf19(void); }
namespace PropertiesViewWindows { void __stdcall vf20(void); }
namespace PropertiesViewWindows { void __stdcall vf21(void); }
namespace PropertiesViewWindows { void __stdcall vf22(void); }
namespace PropertiesViewWindows { undefined4 __stdcall vf23(void); }
namespace PropertiesViewWindows { void __stdcall vf24(void); }
namespace PropertiesViewWindows { undefined4 __stdcall vf25(void); }
namespace PropertiesViewWindows { void __stdcall vf26(void); }
namespace PropertiesViewWindows { void __stdcall vf27(void); }
namespace PropertiesViewWindows { void __stdcall vf28(void); }
namespace PropertiesViewWindows { void __stdcall vf29(void); }
namespace PropertiesViewWindows { undefined4 __stdcall vf30(void); }
namespace PropertiesViewWindows { undefined4 __stdcall vf31(void); }
namespace PropertiesViewWindows { void __cdecl vf32(undefined4 param_1,undefined4 param_2,LPCSTR param_3); }
namespace PropertiesViewWindows { void __stdcall vf37(void); }
namespace PropertiesViewWindows { undefined4 __stdcall vf33(void); }
namespace PropertiesViewWindows { int __cdecl vf34(int param_1); }
namespace PropertiesViewWindows { void __stdcall vf35(void); }
namespace PropertiesViewWindows { void __stdcall vf36(void); }
namespace PropertiesViewWindows { void __cdecl vf9(int *param_1,INT_PTR param_2); }
namespace PropertiesViewWindows { void __stdcall vf41(void); }
namespace PropertiesViewWindows { int __cdecl vf42(int param_1,int param_2,uint param_3); }
void __stdcall FUN_00415388(void);
namespace PropertiesViewWindows { void __cdecl vf43(int param_1,undefined4 param_2,LPARAM param_3); }
undefined4 __cdecl FUN_004153ec(int param_1,int param_2,int param_3,int param_4);
namespace PropertiesViewWindows { undefined4 __cdecl EvRegisteredMsg_4154a0(int param_1,int param_2); }
namespace PropertiesViewWindows { void __cdecl EvInitMenuPopup(int *param_1,HMENU param_2,undefined4 param_3,char param_4); }
namespace PropertiesViewWindows { void __cdecl EvMenuSelect(undefined4 param_1,undefined4 param_2,uint param_3,int param_4); }
namespace PropertiesViewWindows { void __cdecl vf11(int *param_1); }
void __cdecl FUN_00415920(int *param_1,int param_2);
void __cdecl FUN_00415944(int *param_1,int *param_2,int *param_3);
namespace PropertiesViewWindows { void __stdcall vf45(void); }
namespace PropertiesViewWindows { void __cdecl CmEditExternalLookupSetup(undefined4 *param_1); }
namespace PropertiesViewWindows { void __cdecl CmShared_415d40(int *param_1,int param_2); }
namespace PropertiesViewWindows { int __cdecl vf44(int param_1); }
namespace PropertiesViewWindows { void __cdecl vf46(int *param_1,int *param_2); }
namespace PropertiesViewWindows { undefined4 __cdecl vf39(int *param_1,HDC param_2,HWND param_3,int param_4); }
namespace PropertiesViewWindows { void __cdecl vf40(int *param_1,int param_2); }
namespace PropertiesViewWindows { void __cdecl EvPaint(int *param_1); }
namespace PropertiesViewWindows { void __cdecl EvActivate(int *param_1); }
namespace PropertiesViewWindows { bool __cdecl vf7(int *param_1,LPMSG param_2); }
namespace PropertiesViewWindows { undefined4 __cdecl vf38(int *param_1,int param_2,undefined4 *param_3); }
undefined4 __cdecl FUN_00416a78(int param_1,uint *param_2,undefined4 param_3);
void __cdecl FUN_00416c2c(int param_1,uint *param_2);
int __cdecl FUN_00416dd4(int param_1,int param_2,uint *param_3,uint *param_4);
void __cdecl FUN_0041717c(int param_1,uint *param_2,uint *param_3);
int * __cdecl FUN_004173c0(int *param_1,int param_2,int param_3,int param_4,int param_5);
namespace PropertiesViewWindows { void __stdcall vf47(void); }
void __cdecl FUN_00417498(int param_1,undefined4 param_2);
void __cdecl FUN_004174cc(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_004176a4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_004176c8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_00417748(int param_1,int param_2);
void __cdecl FUN_00417760(undefined4 param_1,HWND param_2);
void __cdecl FUN_00417780(int *param_1,int param_2);
LOGBRUSH * __cdecl FUN_004178ac(LOGBRUSH *param_1,COLORREF param_2);
namespace PVWBrush { void __cdecl _dtor(int param_1,byte param_2); }
namespace PVWPushButton { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_004179f0(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4);
namespace PVWPushButton { void __cdecl _dtor(int *param_1,uint param_2); }
namespace PVWPushButton { void __cdecl BNClicked(int *param_1); }
namespace PVWPushButton { void __cdecl vf11(int *param_1,LPMSG param_2); }
namespace PVWPushButton { void __cdecl EvShowWindow(int *param_1,char param_2); }
namespace PVWRadioButton { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace PVWRadioButton { void __stdcall EvMouseMove(int param_1); }
int * __cdecl FUN_00417e40(int *param_1,int param_2,undefined4 *param_3,uint param_4,int param_5);
namespace PVWRadioButton { void __cdecl _dtor(int *param_1,uint param_2); }
namespace PVWRadioButton { void __cdecl vf12(int *param_1,LPMSG param_2); }
namespace PVWRadioButton { void __cdecl vf13(int *param_1); }
namespace PVWRadioButton { void __cdecl vf10(int *param_1); }
namespace PVWRadioButton { void __cdecl BNClicked(int *param_1); }
namespace PVWRadioButton { void __cdecl EvShowWindow(int *param_1,char param_2); }
namespace PVWCheckBox { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_00418398(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4);
namespace PVWCheckBox { void __cdecl _dtor(int *param_1,uint param_2); }
namespace PVWCheckBox { void __cdecl BNClicked(int *param_1); }
namespace PVWCheckBox { void __cdecl EvShowWindow(int *param_1,char param_2); }
namespace PVWColourButton { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_004187a4(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5);
namespace PVWColourButton { void __cdecl _dtor(int *param_1,uint param_2); }
namespace PVWColourButton { void __cdecl vf11(int *param_1,LPMSG param_2); }
void __cdecl FUN_00418a48(int *param_1,int *param_2);
namespace PVWColourButton { undefined4 __stdcall EvRegisteredMsg_418a70(void); }
namespace PVWColourButton { void __cdecl vf7(int param_1); }
namespace PVWColourButton { void __cdecl vf6(int param_1); }
namespace PVWColourButton { void __cdecl vf5(int param_1,int param_2); }
namespace PVWColourButton { void __cdecl BNClicked(int *param_1); }
namespace PVWFontButton { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_00419138(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5,int param_6 ,int param_7);
namespace PVWFontButton { void __cdecl _dtor(int *param_1,uint param_2); }
namespace PVWFontButton { void __cdecl vf11(int *param_1,LPMSG param_2); }
void __cdecl FUN_00419418(int *param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6,int param_7);
namespace PVWFontButton { undefined4 __stdcall EvRegisteredMsg_419488(void); }
namespace PVWFontButton { void __cdecl vf7(int param_1); }
namespace PVWFontButton { void __cdecl vf6(int param_1); }
namespace PVWFontButton { void __cdecl vf5(int param_1,int param_2); }
namespace PVWFontButton { void __cdecl BNClicked(int *param_1); }
namespace PVWRichEdit { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_00419c00(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int *param_5, int param_6);
namespace PVWRichEdit { void __cdecl _dtor(int *param_1,uint param_2); }
namespace PVWRichEdit { void __cdecl EvLButtonDblClk(int *param_1); }
namespace PVWRichEdit { void __cdecl NotifyAtChild_512(int *param_1); }
namespace PVWRichEdit { void __cdecl NotifyAtChild_768(int *param_1); }
int __cdecl FUN_00419f9c(int param_1,int *param_2,int param_3,int param_4);
namespace PVWRichEdit { void __cdecl vf20(int *param_1); }
namespace PVWRichEdit { undefined1 __stdcall vf21(void); }
namespace PVWRichEdit { undefined1 __stdcall vf32(void); }
void __cdecl FUN_0041aa8c(int *param_1,LPCSTR param_2);
int __cdecl FUN_0041aacc(int param_1,int *param_2);
void __cdecl FUN_0041ac90(int *param_1,int param_2);
void __cdecl FUN_0041ad00(int *param_1,int param_2);
namespace PVWRichEdit { void __cdecl vf30(int *param_1,LONG *param_2); }
namespace PVWRichEdit { void __stdcall vf31(void); }
namespace PVWRichEdit { void __cdecl vf9(int *param_1); }
void __cdecl FUN_0041ae3c(undefined4 *param_1,int param_2);
namespace PVWEdit { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_0041af38(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5);
namespace PVWEdit { void __cdecl _dtor(int *param_1,uint param_2); }
namespace PVWEdit { void __cdecl NotifyAtChild_512(int *param_1); }
namespace PVWEdit { void __cdecl NotifyAtChild_768(int *param_1); }
void __cdecl FUN_0041b1ec(int *param_1,LPCSTR param_2);
void __cdecl FUN_0041b218(int *param_1);
void __cdecl FUN_0041b24c(int *param_1);
int __cdecl FUN_0041b280(int *param_1);
int __cdecl FUN_0041b2b0(int param_1,int *param_2);
void __cdecl FUN_0041b474(int *param_1,int param_2);
void __cdecl FUN_0041b48c(int *param_1,int param_2);
namespace PVWEdit { void __cdecl vf9(int *param_1); }
namespace PVWEdit { void __cdecl vf22(int *param_1,LPMSG param_2); }
namespace PVWStatic { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_0041b680(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5);
namespace PVWStatic { void __cdecl _dtor(int *param_1,uint param_2); }
bool __cdecl FUN_0041b8f8(int *param_1);
int __cdecl FUN_0041b914(int param_1,int *param_2);
namespace PVWStatic { void __cdecl BNClicked(int *param_1); }
namespace PVWUpDown { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_0041bb44(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4);
namespace PVWUpDown { void __cdecl _dtor(int *param_1,uint param_2); }
namespace PVWUpDown { void __cdecl vf11(int *param_1,LPMSG param_2); }
namespace PVWUpDown { void __cdecl EvVScroll(int *param_1,int param_2); }
namespace PVWEnumeration { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_0041be78(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5,int param_6 );
namespace PVWEnumeration { void __cdecl _dtor(int *param_1,uint param_2); }
namespace PVWEnumeration { void __cdecl vf33(int param_1); }
void __cdecl FUN_0041c1cc(int param_1);
namespace PVWEnumeration { void __cdecl NotifyAtChild_9(int *param_1); }
namespace PVWCombo { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_0041c258(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5);
namespace PVWCombo { void __cdecl _dtor(int *param_1,uint param_2); }
void __cdecl FUN_0041c4b0(int param_1);
int __cdecl FUN_0041c4f8(int param_1,uint *param_2,int param_3);
undefined4 __cdecl FUN_0041c740(int param_1);
undefined4 __cdecl FUN_0041c758(int param_1);
int __cdecl FUN_0041c780(int param_1,int param_2,int param_3);
namespace PVWCombo { bool __cdecl vf35(int *param_1,LPMSG param_2); }
namespace PVWCombo { void __cdecl NotifyAtChild_9(int *param_1); }
int __cdecl FUN_0041ca1c(int param_1,int param_2);
namespace PVWURL { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace PVWURL { void __stdcall EvGetDlgCode(int param_1); }
namespace PVWURL { void __stdcall EvLButtonDown(int param_1); }
namespace PVWURL { void __stdcall EvMouseMove(int param_1); }
namespace PVWURL { void __stdcall EvLButtonUp(int param_1); }
int * __cdecl FUN_0041d588(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5,int param_6 );
namespace PVWURL { void __cdecl _dtor(int *param_1,uint param_2); }
namespace PVWURL { void __cdecl vf20(int *param_1); }
undefined4 * __cdecl FUN_0041e688(undefined4 *param_1,int param_2);
namespace PVWURL { void __cdecl vf22(int *param_1,undefined4 param_2,int *param_3); }
namespace PVWURL { void __cdecl vf23(int *param_1,undefined4 param_2,int *param_3); }
namespace PVWURL { void __cdecl vf24(int *param_1); }
namespace PVWURL { uint __cdecl vf25(int *param_1,int param_2); }
undefined4 * __cdecl FUN_0041e888(undefined4 *param_1);
namespace PVWFontMaintainer { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_0041e940(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_0041e9dc(int *param_1,int *param_2);
undefined4 __cdecl FUN_0041ea74(undefined4 *param_1);
namespace PVWTabs { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_0041eac8(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4);
namespace PVWTabs { void __cdecl _dtor(int *param_1,uint param_2); }
namespace PVWTabs { void __cdecl EvKeyDown(int *param_1,int param_2); }
namespace PVWTabs { void __cdecl EvLButtonDblClk(int param_1); }
namespace PVWPathListBox { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace PVWPathListBox { void __stdcall EvMouseMove(int param_1); }
int * __cdecl FUN_0041eec8(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4);
namespace PVWPathListBox { void __cdecl _dtor(int *param_1,uint param_2); }
namespace PVWPathListBox { void __cdecl vf31(int *param_1); }
void __cdecl FUN_0041f1c8(int param_1,int param_2,char param_3);
int __cdecl FUN_0041f8c8(int param_1,int param_2,int param_3);
void __cdecl FUN_0041fbe4(int param_1,int param_2,int param_3);
undefined4 __cdecl FUN_0041fea4(int param_1);
int * __cdecl FUN_0041fedc(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5);
namespace PVWPathList { void __cdecl _dtor(int *param_1,byte param_2); }
void __cdecl FUN_0042056c(int param_1,int param_2);
char * __cdecl FUN_00420b88(char *param_1,char param_2,int param_3);
void __cdecl FUN_00420bb4(int param_1);
void __cdecl FUN_00420cbc(int param_1,int param_2);
void __cdecl FUN_00420e2c(int param_1,int param_2);
void __cdecl FUN_00420ec0(int param_1,int *param_2,int param_3,int *param_4);
void __cdecl FUN_0042116c(int param_1,int param_2);
void __cdecl FUN_004215f0(int param_1,int param_2);
undefined4 * __cdecl FUN_004216a0(undefined4 *param_1,int param_2);
bool __cdecl FUN_004216dc(undefined4 param_1,int param_2);
namespace OWL::TDefaultGUIFont { void __cdecl _dtor(uint *param_1,byte param_2); }
namespace OWL::TChooseColorDialog::TData { void __cdecl _dtor(int param_1,byte param_2); }
namespace OWL::TPen { void __cdecl _dtor(uint *param_1,byte param_2); }
void __cdecl FUN_00421b48(int param_1,byte param_2);
namespace OWL::TPopupMenu { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TListBox { void __cdecl vf9(int *param_1); }
namespace OWL::TListBox { void __cdecl vf10(int *param_1,LPARAM param_2,WPARAM param_3); }
namespace OWL::TListBox { void __cdecl vf11(int *param_1,undefined4 param_2,undefined4 param_3); }
namespace OWL::TListBox { void __cdecl vf12(int *param_1); }
namespace OWL::TListBox { void __cdecl vf13(int *param_1,WPARAM param_2); }
namespace OWL::TListBox { void __cdecl vf14(int *param_1); }
namespace OWL::TListBox { void __cdecl vf15(int *param_1,WPARAM param_2); }
namespace OWL::TListBox { void __cdecl vf16(int *param_1,WPARAM param_2); }
namespace OWL::TListBox { void __cdecl vf17(int *param_1,LPARAM param_2,WPARAM param_3); }
namespace OWL::TListBox { void __cdecl vf18(int *param_1,WPARAM param_2); }
namespace OWL::TListBox { void __cdecl vf19(int *param_1,WPARAM param_2,LPARAM param_3); }
namespace OWL::TListBox { void __cdecl vf20(int *param_1,WPARAM param_2); }
namespace OWL::TListBox { void __cdecl vf21(int *param_1,WPARAM param_2,ushort param_3); }
namespace OWL::TListBox { void __cdecl vf22(int *param_1); }
namespace OWL::TListBox { void __cdecl vf23(int *param_1,WPARAM param_2,LPARAM param_3); }
namespace OWL::TListBox { void __cdecl vf24(int *param_1,LPARAM param_2); }
namespace OWL::TListBox { void __cdecl vf25(int *param_1,LPARAM param_2,WPARAM param_3); }
namespace OWL::TListBox { void __cdecl vf26(int *param_1,WPARAM param_2); }
namespace OWL::TEdit { void __cdecl vf13(int *param_1,WPARAM param_2,LPARAM param_3); }
namespace OWL::TEdit { undefined4 __cdecl vf14(int param_1); }
namespace OWL::TEdit { bool __cdecl vf15(int *param_1,WPARAM param_2,LPARAM param_3); }
namespace OWL::TEdit { void __cdecl vf17(int *param_1); }
namespace OWL::TEdit { void __cdecl vf18(int *param_1,undefined2 param_2,undefined2 param_3); }
namespace OWL::TEdit { void __cdecl vf19(int *param_1,WPARAM param_2); }
namespace OWL::TComboBox { void __cdecl vf9(int *param_1); }
namespace OWL::TComboBox { void __cdecl vf10(int *param_1,LPARAM param_2,WPARAM param_3); }
namespace OWL::TComboBox { void __cdecl vf11(int *param_1,LPARAM param_2,WPARAM param_3); }
namespace OWL::TComboBox { void __cdecl vf12(int *param_1); }
namespace OWL::TComboBox { void __cdecl vf13(int *param_1,WPARAM param_2); }
namespace OWL::TComboBox { void __cdecl vf14(int *param_1); }
namespace OWL::TComboBox { void __cdecl vf15(int *param_1,WPARAM param_2); }
namespace OWL::TComboBox { void __cdecl vf16(int *param_1,WPARAM param_2); }
namespace OWL::TComboBox { void __cdecl vf17(int *param_1,LPARAM param_2,WPARAM param_3); }
namespace OWL::TComboBox { void __cdecl vf18(int *param_1,WPARAM param_2); }
namespace OWL::TComboBox { void __cdecl vf19(int *param_1,WPARAM param_2,LPARAM param_3); }
namespace OWL::TComboBox { void __cdecl vf20(int *param_1,WPARAM param_2); }
namespace OWL::TComboBox { void __cdecl vf21(int *param_1,WPARAM param_2,ushort param_3); }
namespace OWL::TComboBox { void __cdecl vf22(int *param_1); }
namespace OWL::TComboBox { void __cdecl vf23(int *param_1,WPARAM param_2,LPARAM param_3); }
namespace OWL::TComboBox { void __cdecl vf24(int *param_1,LPARAM param_2); }
namespace OWL::TComboBox { void __cdecl vf25(int *param_1,LPARAM param_2,WPARAM param_3); }
namespace OWL::TComboBox { void __cdecl vf26(int *param_1,WPARAM param_2); }
namespace OWL::TComboBox { void __cdecl vf27(int *param_1); }
namespace OWL::TComboBox { void __cdecl vf28(int *param_1,WPARAM param_2); }
namespace OWL::TComboBox { void __cdecl vf31(int *param_1,LPARAM param_2,WPARAM param_3); }
namespace OWL::TComboBox { void __cdecl vf32(int *param_1,LPARAM param_2,WPARAM param_3); }
namespace OWL::TRichEdit { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TUpDown { void __cdecl _dtor(int *param_1,uint param_2); }
void __cdecl FUN_00422de4(undefined4 *param_1);
namespace OWL::TAPointer_char { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_00422e14(undefined4 *param_1);
namespace OWL::TAPointer_OWL_TColor { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __stdcall FUN_00422f80(void);
undefined * __cdecl FUN_00422fc4(int param_1);
uint __cdecl FUN_00423078(int param_1,uint *param_2,int param_3);
int __cdecl FUN_00423c2c(int *param_1);
void __cdecl FUN_00423c6c(int *param_1);
void __cdecl FUN_00423e14(int *param_1,int param_2,int param_3);
void __cdecl FUN_00424168(int param_1);
int __cdecl FUN_004248a4(int param_1,int param_2);
int * __cdecl FUN_00424c28(int *param_1,int param_2);
undefined4 * __cdecl FUN_004258e8(undefined4 *param_1);
namespace LookupConfiguration::LookupEntry { void __cdecl _dtor(int param_1,byte param_2); }
namespace LookupConfiguration { void __cdecl _dtor(int param_1,byte param_2); }
namespace LookupConfiguration::LookupStyleEntries { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_004263ec(int param_1);
namespace PrintPreviewWindow { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace PrintPreviewWindow { void __stdcall EvSize(int param_1); }
int * __cdecl FUN_004264ec(int *param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,int param_7, int param_8,uint *param_9,undefined4 param_10,int *param_11);
namespace PrintPreviewWindow { void __cdecl _dtor(int *param_1,uint param_2); }
namespace PrintPreviewWindow { void __cdecl vf19(int param_1,int *param_2); }
namespace OWL::TControl::Streamer { void vf4(char *param_1,int param_2,byte param_3); }
namespace PrintPreviewWindow { void __cdecl vf9(int *param_1); }
namespace PrintPreviewWindow { undefined4 __cdecl vf15(int param_1); }
namespace PrintPreviewWindow { undefined4 __cdecl vf3(int *param_1,LPMSG param_2); }
namespace PrintPreviewWindow { void __cdecl vf16(int param_1,undefined4 param_2); }
namespace PrintPreviewWindow { void __cdecl vf13(undefined4 *param_1,int *param_2); }
namespace PrintPreviewWindow { int * __cdecl vf18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6); }
namespace PrintPreviewWindow { void __cdecl vf17(int param_1); }
namespace PrintPreviewWindow { void __cdecl vf20(int param_1); }
namespace PrintPreviewWindow { void __stdcall EvHelp(void); }
namespace PrintPreviewWindow { void __cdecl vf21(undefined4 *param_1,WPARAM param_2,int *param_3); }
namespace PrintPreviewWindow { void __cdecl CeCmd5690(undefined4 param_1,undefined4 *param_2); }
namespace PrintPreviewWindow { void __cdecl CeCmd5720(undefined4 param_1,undefined4 *param_2); }
namespace PrintPreviewWindow { void __cdecl CeCmd5730(undefined4 param_1,undefined4 *param_2); }
namespace PrintPreviewWindow { void __cdecl Cmd5690(int param_1); }
namespace PrintPreviewWindow { undefined4 __cdecl Cmd5720(int param_1); }
namespace PrintPreviewWindow { undefined4 __cdecl Cmd5730(int param_1); }
undefined4 __cdecl FUN_00428340(int param_1);
int __cdecl FUN_0042835c(int param_1);
int __cdecl FUN_004283a8(int param_1);
namespace MyScroller { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TPrintDC { void __cdecl _dtor(int *param_1,byte param_2); }
namespace OWL::TGadgetWindowFont { void __cdecl _dtor(uint *param_1,byte param_2); }
namespace OWL::TSeparatorGadget { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TPreviewPage { void __cdecl _dtor(int *param_1,uint param_2); }
int * __cdecl FUN_00428ce4(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int *param_5);
namespace MatchListLabelWindows { void __cdecl _dtor(int *param_1,uint param_2); }
void __cdecl FUN_0042905c(int *param_1,int param_2,int param_3);
void __cdecl FUN_00429084(int *param_1,int param_2);
void __cdecl FUN_0042909c(int *param_1);
namespace MatchListWindows { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_00429308(int *param_1,int param_2,undefined4 *param_3,int param_4,int *param_5);
void __cdecl FUN_00429928(int *param_1);
void __cdecl FUN_00429a74(int *param_1);
void __cdecl FUN_00429bc0(int param_1,uint param_2);
undefined4 * __cdecl FUN_00429f04(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_00429fa0(int param_1,int param_2);
void __cdecl FUN_00429fb8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_00429ffc(int param_1,int *param_2,int *param_3);
int * __cdecl FUN_0042a220(int *param_1,int *param_2,int *param_3);
namespace MatchListWindows { void __cdecl _dtor(int *param_1,uint param_2); }
void __cdecl FUN_0042a45c(undefined4 param_1,int param_2,int param_3);
undefined4 * __cdecl FUN_0042a474(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
void __cdecl FUN_0042a578(int param_1,int param_2);
undefined4 * __cdecl FUN_0042a5d0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
void __cdecl FUN_0042ae70(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_0042ae80(int param_1);
int __cdecl FUN_0042aea0(int param_1);
void __cdecl FUN_0042aec0(int param_1);
void __cdecl FUN_0042af24(int param_1);
undefined4 * __cdecl FUN_0042af64(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
void __cdecl FUN_0042b068(int param_1,int param_2);
undefined4 * __cdecl FUN_0042b0a4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
void __cdecl FUN_0042b8f8(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_0042b908(int param_1);
int __cdecl FUN_0042b928(int param_1);
void __cdecl FUN_0042b948(int param_1);
void __cdecl FUN_0042b9ac(int param_1);
void __cdecl FUN_0042b9ec(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __cdecl FUN_0042ba08(int param_1);
int __cdecl FUN_0042ba14(int param_1);
void __cdecl FUN_0042ba94(int param_1);
int __cdecl FUN_0042baf8(int param_1,int param_2);
void __cdecl FUN_0042bb18(int *param_1);
int * __cdecl FUN_0042bce8(int *param_1,int *param_2,int *param_3);
namespace MatchListWindows { void __cdecl vf9(int *param_1,byte param_2); }
void __cdecl FUN_0042bd3c(int *param_1,int *param_2,char param_3);
namespace MatchListWindows { void __cdecl vf10(int *param_1,LPMSG param_2); }
void __cdecl FUN_0042bdf0(int *param_1,char param_2);
namespace MatchListWindows { char * __stdcall vf11(void); }
namespace MatchListWindows { void __cdecl vf12(int *param_1,int *param_2); }
undefined4 * __cdecl FUN_0042cbc0(undefined4 *param_1);
undefined4 * __cdecl FUN_0042cbf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_0042cc14(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_0042cdec(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_0042ce10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_0042ce90(int param_1,int param_2);
namespace MatchListWindows { void __cdecl vf13(int *param_1); }
namespace MatchListWindows { uint __cdecl EvGetDlgCode(int *param_1); }
namespace MatchListWindows { void __cdecl EvKeyDown(int *param_1,int param_2); }
namespace MatchListWindows { void __cdecl EvSysKeyDown(int *param_1,int param_2); }
namespace MatchListWindows { void __cdecl EvLButtonDown(int *param_1,byte param_2,int param_3); }
namespace MatchListWindows { void __cdecl EvLButtonDblClk(int param_1); }
namespace MatchListWindows { void __cdecl EvLButtonUp(int *param_1); }
namespace MatchListWindows { void __stdcall EvRButtonDown(int *param_1,byte param_2,int param_3); }
void __stdcall FUN_0042d5fe(void);
namespace MatchListWindows { void __cdecl EvRButtonUp(int *param_1,undefined4 param_2,int *param_3); }
namespace MatchListWindows { void __stdcall EvMouseMove(int *param_1,uint param_2,int param_3); }
void __stdcall FUN_0042d792(void);
int * __cdecl FUN_0042d9a0(int *param_1,int *param_2,int *param_3);
namespace MatchListWindows { void __cdecl EvSetFocus(int *param_1); }
namespace MatchListWindows { void __cdecl EvKillFocus(int *param_1); }
namespace MatchListWindows { void __cdecl EvTimer(int *param_1); }
namespace MatchListWindows { void __cdecl EvVScroll(int *param_1,int param_2); }
void __cdecl FUN_0042dbdc(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4, undefined4 param_5);
undefined4 __cdecl FUN_0042dc18(int *param_1,uint *param_2,uint *param_3,int param_4,undefined4 param_5);
undefined4 * __cdecl FUN_0042e408(undefined4 *param_1,int *param_2,int *param_3);
int __cdecl FUN_0042e60c(int param_1,int *param_2,int param_3,int param_4,int *param_5);
undefined4 * __cdecl FUN_0042e908(int *param_1,undefined4 *param_2);
void __cdecl FUN_0042e9d8(int param_1);
bool __cdecl FUN_0042ea44(int param_1,uint *param_2,char *param_3);
undefined4 * __cdecl FUN_0042eb4c(undefined4 *param_1,int param_2,int *param_3);
undefined4 __cdecl FUN_0042ec10(int *param_1,int param_2,int param_3);
undefined1 __cdecl FUN_0042eca0(int param_1,int param_2,int param_3,undefined4 *param_4);
void __cdecl FUN_0042ecfc(int *param_1);
void __cdecl FUN_0042ed34(int *param_1);
undefined1 __cdecl FUN_0042ed6c(int param_1,int param_2);
int * __cdecl FUN_0042ed8c(int *param_1,int *param_2,int param_3,int param_4,int param_5,char param_6);
undefined4 * __cdecl FUN_0042faf4(undefined4 *param_1,int *param_2,int *param_3);
int __cdecl FUN_0042fcfc(int param_1,int *param_2,int param_3,int param_4,int *param_5);
undefined4 * __cdecl FUN_0042fff8(int *param_1,undefined4 *param_2);
void __cdecl FUN_00430114(int param_1);
int * __cdecl FUN_00430180(int *param_1,int *param_2);
undefined4 * __cdecl FUN_00430224(int *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 __cdecl FUN_00430290(int *param_1,int param_2,int param_3,int *param_4);
void __stdcall FUN_00430438(int *param_1);
void __stdcall FUN_0043043e(void);
namespace MatchListWindows::Entry { void __cdecl Entry(undefined4 *param_1,uint *param_2,char *param_3,undefined4 param_4); }
undefined4 __cdecl FUN_00430548(undefined4 param_1,int param_2,int param_3);
undefined4 * __cdecl FUN_00430560(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_004305b4(int *param_1,int *param_2);
void __cdecl FUN_004305f4(undefined4 *param_1);
int * __cdecl FUN_0043061c(int *param_1,int param_2);
int __cdecl FUN_00430678(int *param_1);
void __cdecl FUN_00430730(int *param_1,int param_2);
undefined4 __cdecl FUN_004307e4(int param_1,int param_2);
undefined4 * __cdecl FUN_004308e4(int param_1,int param_2);
namespace MatchListWindows { bool __cdecl CompareEntries(int param_1,int param_2,uint param_3); }
int __cdecl FUN_00430a68(int param_1,byte *param_2,int param_3,uint param_4);
void __cdecl FUN_00430aec(int *param_1,int *param_2);
namespace MatchListWindows::Selection { void __cdecl _dtor(int param_1,byte param_2); }
namespace MatchListWindows::EntryHead { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::set_MatchListWindows_Selection_std_less_MatchListWindows_Selection { void __cdecl _dtor(int param_1,byte param_2); }
namespace __rwstd::rb_tree_MatchListWindows_Selection_MatchListWindows_Selection_rwstd_ident_MatchListWindows_Selection_MatchListWindows_Selection_std_less_MatchListWindows_Selection { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::set_const_MatchListWindows_Entry_ptr_MatchListWindows_EntryIndexComparator { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::vector_int { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::vector_MatchListWindows_EntryHead { void __cdecl _dtor(int param_1,byte param_2); }
namespace __rwstd::rb_tree_const_MatchListWindows_Entry_ptr_const_MatchListWindows_Entry_ptr_rwstd_ident_const_MatchListWindows_Entry_ptr_const_MatchListWindows_Entry_ptr_MatchListWindows_EntryIndexComparator { void __cdecl _dtor(int param_1,byte param_2); }
undefined4 __cdecl FUN_00431458(int param_1,undefined4 param_2);
namespace MatchEngine { int __cdecl CompilePattern(int *param_1,int *param_2,int param_3,int *param_4,int *param_5,int *param_6); }
namespace MatchEngine { int __cdecl CompileTemplate(int param_1,int *param_2,int param_3,int *param_4,int *param_5,undefined4 *param_6); }
namespace MatchEngine { int __cdecl CompileAnagram(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4,int param_5); }
namespace MatchEngine { void __cdecl Compile(int *param_1,int param_2,int param_3,uint *param_4,int param_5); }
namespace MatchEngine { undefined4 __cdecl IsValid(int param_1); }
namespace MatchEngine { undefined4 __cdecl GetStatus(int param_1); }
namespace MatchEngine { undefined4 * __cdecl MatchEngine(undefined4 *param_1); }
namespace MatchEngine { void __cdecl SetShortest(int param_1,int param_2); }
namespace MatchEngine { void __cdecl SetLongest(int param_1,int param_2); }
namespace MatchEngine { undefined4 __cdecl GetLengthKind(int param_1); }
namespace MatchEngine { void __cdecl SetWordLength(int param_1,int param_2); }
namespace MatchEngine { bool __cdecl MatchWord(int param_1,int param_2); }
namespace MatchEngine { void __cdecl FormatBalance(int param_1,int param_2); }
namespace MatchEngine { int __cdecl GetMinLength(int param_1); }
namespace MatchEngine { int __cdecl GetMaxLength(int param_1); }
int __cdecl FUN_00434ad8(int param_1);
namespace Pattern { undefined4 * __cdecl Pattern(undefined4 *param_1); }
namespace Pattern { void __cdecl _dtor(int param_1,byte param_2); }
namespace Pattern { int __cdecl Add(int *param_1,int param_2); }
void __cdecl FUN_00434cac(undefined4 *param_1);
int __cdecl FUN_00434cb8(int param_1,byte param_2);
int * __cdecl FUN_00434cd0(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5);
namespace GridAboutBoxViewWindows { void __cdecl _dtor(int *param_1,uint param_2); }
namespace GridAboutBoxViewWindows { void __cdecl vf11(int *param_1); }
undefined4 __stdcall FUN_004354bc(HWND param_1,undefined4 *param_2);
undefined4 __stdcall FUN_0043550c(HWND param_1,int param_2,undefined4 param_3,int param_4);
int __cdecl FUN_00435534(int param_1,int param_2);
bool __cdecl FUN_0043568c(HWND param_1,LPCSTR param_2,int param_3);
int __cdecl FUN_00435880(int param_1,uint *param_2,int param_3);
undefined4 __cdecl FUN_00435a1c(int param_1,int param_2,int param_3);
int __cdecl FUN_00435de0(int param_1,int param_2);
int __cdecl FUN_00436b94(int param_1,int param_2,int param_3);
int __cdecl FUN_00436e14(int param_1,int param_2);
bool __cdecl FUN_00436f50(int param_1);
int __cdecl GetProgramDirectory(int param_1);
int __cdecl FUN_00437158(int param_1);
int __cdecl FUN_00437470(int param_1,int param_2);
bool __cdecl FUN_004378c0(int param_1,int param_2,LPFILETIME param_3);
void __cdecl FUN_00437928(int param_1,LPFILETIME param_2);
int __cdecl FUN_00437bd4(int param_1);
namespace std::locale { void __cdecl _dtor(int *param_1,byte param_2); }
int __cdecl FUN_00437fc4(int param_1,int param_2);
namespace TEAViewProfileWindows { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_0043a064(int param_1,undefined4 param_2);
int __cdecl ExpandQueryMacros(int param_1,int param_2,int param_3);
void __cdecl LoadPatternOptions(int param_1,int param_2);
namespace PrintPreviewWindowTEA { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_0043bbfc(int *param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,int param_7, undefined1 param_8,uint *param_9,undefined4 param_10,int *param_11);
namespace PrintPreviewWindowTEA { void __cdecl _dtor(int *param_1,uint param_2); }
namespace PrintPreviewWindowTEA { void __cdecl CmShared_43bfc8(int param_1,int param_2); }
namespace PrintPreviewWindowTEA { void __cdecl CeCmd9850(undefined4 param_1,undefined4 *param_2); }
undefined4 * __cdecl FUN_0043c330(undefined4 *param_1,undefined4 param_2);
namespace TEAPrintoutFeeder { undefined4 __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace TEAPrintoutFeeder { void __cdecl vf1(int param_1); }
namespace TEAPrintoutFeeder { int __cdecl vf2(int param_1); }
namespace TEAPrintoutFeeder { void __cdecl vf3(int param_1,int param_2); }
namespace TEAPrintoutFeeder { void __cdecl vf4(int param_1,int param_2); }
namespace TEAPrintoutFeeder { int __cdecl vf5(int param_1,int param_2); }
int __cdecl FUN_0043c624(byte *param_1,int param_2,byte *param_3,int param_4);
int __cdecl FUN_0043c6a4(byte *param_1,int param_2);
undefined4 __cdecl FUN_0043c6d4(byte param_1);
int * __cdecl FUN_0043c6fc(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7,int param_8,int param_9,int param_10,int param_11);
namespace TSDictionarySaveTEADialog { void __cdecl _dtor(int *param_1,uint param_2); }
namespace TSDictionarySaveTEADialog { undefined4 __cdecl vf50(int *param_1,undefined4 *param_2,int param_3,uint param_4); }
namespace TSDictionarySaveTEADialog { void __cdecl vf51(int param_1); }
namespace TSDictionarySaveDialog { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_0043ce14(int *param_1,int param_2,undefined4 param_3,int param_4,uint *param_5,int param_6, int param_7,int param_8,int param_9,int param_10,int param_11);
namespace TSDictionarySaveDialog { void __cdecl _dtor(int *param_1,byte param_2); }
namespace TSDictionarySaveDialog { void __cdecl vf19(int *param_1,undefined4 param_2,int param_3); }
uint __cdecl FUN_0043db94(int *param_1,int param_2);
undefined4 __cdecl FUN_0043dfb0(int param_1);
void __cdecl FUN_0043e02c(int *param_1,char param_2);
namespace TSDictionarySaveDialog { void __cdecl vf11(int *param_1); }
namespace TSDictionarySaveDialog { void __cdecl vf9(int *param_1,INT_PTR param_2); }
namespace TSDictionarySaveDialog { void __cdecl vf48(int param_1,byte *param_2); }
namespace TSDictionarySaveDialog { void __cdecl vf49(int param_1); }
namespace TSDictionarySaveDialog { undefined4 __cdecl Child7830_Notify1(int param_1); }
namespace OWL::TFileSaveDialog { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TOpenSaveDialog { void __cdecl _dtor(int *param_1,uint param_2); }
void __cdecl FUN_0043ef48(int *param_1);
void __cdecl FUN_0043ef70(undefined4 *param_1,undefined4 param_2);
void __cdecl FUN_0043ef88(undefined4 *param_1,int param_2,uint param_3);
void __cdecl FUN_0043f014(undefined4 *param_1,byte *param_2,int param_3);
void __cdecl FUN_0043f058(undefined4 *param_1);
void __cdecl FUN_0043f078(undefined4 *param_1);
undefined4 __cdecl FUN_0043f098(uint param_1,uint param_2,uint param_3);
void __stdcall FUN_0043f138(void);
undefined4 __cdecl FUN_0043f198(int *param_1,int *param_2);
void __cdecl FUN_0043f1c8(int *param_1,int param_2);
void __cdecl FUN_0043f204(int *param_1);
int __stdcall FUN_0043f244(void);
int __cdecl FUN_0043f398(int param_1,uint *param_2);
int __cdecl FUN_0043f910(int param_1,char *param_2);
uint __cdecl FUN_0043fb9c(int *param_1,int param_2);
bool __cdecl FUN_0043fd78(int param_1,int param_2);
undefined4 * __cdecl FUN_0043fd98(undefined4 *param_1);
namespace DictionaryMaintainer { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OccurrenceListCache { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_0043ff6c(int param_1);
void __cdecl FUN_0043ffd0(undefined4 param_1,int param_2,int param_3);
undefined4 * __cdecl FUN_004400a0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
void __cdecl FUN_004401a4(int param_1,int param_2);
undefined4 * __cdecl FUN_004402dc(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
void __cdecl FUN_00440c78(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_00440c88(int param_1);
int __cdecl FUN_00440ca8(int param_1);
void __cdecl FUN_00440cc8(int param_1);
uint __stdcall FUN_00440d08(int *param_1,int param_2,LPCSTR param_3,uint *param_4,int param_5,int param_6, int param_7,int param_8);
void __cdecl FUN_004486a0(undefined4 *param_1,int param_2,int param_3);
void __cdecl FUN_004487c0(int *param_1,int param_2,int param_3);
undefined4 * __cdecl FUN_004489b8(int *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_00448a24(int *param_1,int param_2);
int __cdecl FUN_00448bf4(int param_1);
int __cdecl FUN_00448c14(int param_1);
void __cdecl FUN_00448c34(int param_1,int param_2);
namespace WordListMap { void __cdecl AllocateNode(int *param_1); }
undefined4 * __cdecl FUN_00448d98(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
void __cdecl FUN_00448e9c(int param_1,int param_2);
undefined4 * __cdecl FUN_00448fa4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
void __cdecl FUN_00449940(undefined4 *param_1,undefined4 param_2);
void __cdecl FUN_00449950(int param_1);
void __cdecl FUN_004499b4(int param_1);
void __cdecl FUN_004499f4(undefined4 *param_1,int param_2,int param_3);
void __cdecl FUN_00449b14(int *param_1,int param_2,int param_3);
undefined4 * __cdecl FUN_00449d04(int *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_00449d70(int *param_1,int param_2);
void __cdecl FUN_00449f18(int param_1,int param_2);
void __cdecl FUN_00449f30(int *param_1);
void __cdecl FUN_0044a07c(undefined4 *param_1,int param_2,undefined4 *param_3);
void __cdecl FUN_0044a18c(undefined4 param_1,int param_2,int param_3);
undefined4 * __cdecl FUN_0044a23c(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5, undefined4 param_6,int param_7);
int __cdecl FUN_0044a638(int param_1,int *param_2,int param_3,int param_4,int param_5);
undefined4 * __cdecl FUN_0044a980(undefined4 *param_1,int *param_2,int param_3);
int __cdecl FUN_0044ac68(int param_1);
undefined4 * __cdecl FUN_0044acd4(undefined4 *param_1,int param_2,int param_3);
undefined4 * __cdecl FUN_0044add0(undefined4 *param_1,int *param_2,int param_3);
int __cdecl FUN_0044b040(int param_1,int *param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_0044b358(int param_1);
int __cdecl FUN_0044b3c4(int param_1);
void __cdecl FUN_0044b428(int *param_1);
undefined4 * __cdecl FUN_0044b574(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
void __cdecl FUN_0044b678(int param_1,int param_2);
void __cdecl FUN_0044b780(int param_1);
undefined4 * __cdecl FUN_0044b7c0(undefined4 *param_1,int param_2,int param_3);
void __cdecl FUN_0044b8bc(int param_1);
undefined4 * __cdecl FUN_0044b920(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
void __cdecl FUN_0044c2bc(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_0044c2cc(int param_1);
int __cdecl FUN_0044c2ec(int param_1);
undefined4 * __cdecl FUN_0044c30c(undefined4 *param_1,int *param_2,int param_3);
int __cdecl FUN_0044c57c(int param_1,int *param_2,int param_3,int param_4,int param_5);
undefined4 * __cdecl FUN_0044c894(int *param_1,int param_2);
void __cdecl FUN_0044ca3c(int param_1);
void __cdecl FUN_0044caa8(int param_1,uint param_2);
undefined4 * __cdecl FUN_0044cde0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_0044ce88(int param_1,int param_2);
void __cdecl FUN_0044cea0(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_0044d0c8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_0044d0f8(undefined4 *param_1,undefined4 *param_2,undefined *param_3);
void __cdecl FUN_0044d154(undefined4 *param_1,undefined4 *param_2,undefined *param_3);
void __cdecl FUN_0044d1f0(undefined4 *param_1);
void __cdecl FUN_0044d238(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_0044d278(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4);
undefined4 * __cdecl FUN_0044d3b8(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_0044d44c(undefined4 param_1,int param_2,int param_3);
namespace DictionaryMaintainer { void __stdcall vf3(void); }
namespace DictionaryMaintainer { void __stdcall vf4(void); }
namespace std::map_std_string_long_std_less_std_string { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::pair_const_std_string_std_vector_long_ptr { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::pair_const_std_string_long { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::pair_std_string_long { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::map_std_string_std_vector_long_ptr_std_less_std_string_std_allocator_std_pair_const_std_string_std_vector_long_ptr { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::multimap_std_string_long_WordListMapComparator { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_0044e49c(int param_1,byte param_2);
void __cdecl FUN_0044e4d4(int param_1,byte param_2);
void __cdecl FUN_0044e67c(int param_1,byte param_2);
void __cdecl FUN_0044e6b4(int param_1,byte param_2);
void __cdecl FUN_0044e728(int param_1,byte param_2);
void __cdecl FUN_0044e79c(int param_1,byte param_2);
int __stdcall FUN_0044e810(void);
namespace Persist { int * __cdecl Persist(int *param_1,int param_2,int param_3,int param_4); }
namespace Persist { void __cdecl _dtor(int param_1,byte param_2); }
namespace Persist { undefined4 __cdecl QueryValueSized(int param_1,int param_2,int param_3); }
namespace Persist { undefined4 __cdecl QueryValue(int param_1,int param_2,undefined4 *param_3); }
undefined4 __cdecl FUN_0044ea14(int param_1,int param_2,int param_3,uint *param_4);
uint __cdecl FUN_0044eb80(int param_1,int param_2,uint *param_3);
void __cdecl FUN_0044ec78(int param_1,int param_2,int param_3);
void __cdecl FUN_0044eca8(int param_1,int param_2);
void __cdecl FUN_0044eccc(int param_1,int param_2,undefined4 param_3);
void __cdecl FUN_0044eda8(int param_1,int param_2,undefined4 param_3);
void __cdecl FUN_0044ee84(char *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void __cdecl FUN_0044eee4(undefined1 *param_1);
uint * __cdecl FUN_0044ef10(char *param_1,uint *param_2);
void __cdecl FUN_0044ef70(undefined4 param_1,undefined1 *param_2);
void __cdecl FUN_0044efa4(char *param_1,uint *param_2);
void __cdecl FUN_0044f060(undefined4 param_1,undefined1 *param_2);
undefined4 __stdcall FUN_0044f0dc(void);
undefined4 __cdecl FUN_0044f0f0(LPCSTR param_1,LPCSTR param_2,uint *param_3);
undefined4 __stdcall FUN_0044f1d8(void);
void __stdcall FUN_0044f21c(void);
undefined4 * __cdecl FUN_0044f260(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);
namespace MyScroller { void __cdecl vf3(int param_1); }
namespace MyScroller { void __cdecl vf5(int *param_1,int param_2,int param_3); }
namespace MyScroller { void __cdecl vf11(int param_1,int param_2,int param_3); }
namespace MyScroller { void __cdecl vf4(int param_1); }
namespace MyScroller { void __cdecl vf10(int *param_1,int param_2,int param_3); }
namespace MyScroller { void __cdecl vf9(int *param_1,int param_2,int param_3); }
namespace MyScroller { void __cdecl vf8(int param_1); }
void __cdecl FUN_0044f8cc(int param_1,undefined1 param_2);
namespace OWL::TScroller { void __cdecl vf1(int param_1,undefined4 param_2); }
namespace OWL::TScroller { bool __cdecl vf12(int param_1,UINT param_2,UINT param_3); }
namespace OWL::TScroller { void __cdecl vf13(int param_1,int param_2,byte param_3); }
namespace OWL::TScroller { void __cdecl vf16(int param_1,int param_2,UINT param_3,byte param_4); }
namespace OWL::TScroller { void __cdecl vf17(int param_1,int param_2); }
namespace OWL::TScroller { void __cdecl vf18(int param_1,int param_2,int *param_3,int *param_4); }
namespace OWL::TScroller { void __cdecl vf19(int param_1,int param_2,int param_3,int param_4,byte param_5); }
namespace OWL::TScroller { void __cdecl vf20(int param_1,int param_2); }
namespace OWL::TScroller { void __cdecl vf21(int param_1,int param_2,int param_3,byte param_4); }
undefined4 __cdecl FUN_0044f9f0(int param_1,int *param_2);
void __cdecl FUN_0044faac(int param_1);
int * __cdecl FUN_0044fb08(int *param_1,int param_2,undefined4 param_3,undefined4 param_4);
namespace TEAProgressBar { void __cdecl _dtor(int *param_1,uint param_2); }
void __cdecl FUN_0044fd7c(int *param_1,int param_2,int param_3);
void __cdecl FUN_0044fdb8(int *param_1,int param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_0044ffb8(int *param_1,int param_2);
namespace TEAProgressBar { void __cdecl vf5(int param_1,int param_2); }
namespace TEAProgressBar { void __cdecl vf11(int *param_1,LPMSG param_2); }
int * __cdecl FUN_00450940(int *param_1,int param_2,undefined4 param_3,undefined4 param_4);
namespace SearchModeButton { void __cdecl vf12(int *param_1,LPMSG param_2); }
namespace SearchModeButton { void __cdecl vf5(undefined4 param_1,int param_2); }
namespace TEAViewWindows { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace TEAViewWindows { void __stdcall EvLButtonDown(int param_1); }
namespace TEAViewWindows { void __stdcall EvMouseMove(int param_1); }
namespace TEAViewWindows { void __stdcall EvLButtonUp(int param_1); }
namespace TEAViewWindows { void __stdcall EvLButtonDblClk(int param_1); }
namespace TEAViewWindows { void __stdcall EvRButtonDown(int param_1); }
namespace TEAViewWindows { void __stdcall EvRButtonUp(int param_1); }
namespace TEAViewWindows { void __stdcall EvDropFiles(int param_1); }
namespace TEAViewWindows { void __stdcall EvSysColorChange(int param_1); }
int * __cdecl FUN_00450bbc(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6);
namespace TEAViewWindows { void __cdecl _dtor(int *param_1,byte param_2); }
void __cdecl FUN_00451754(undefined4 param_1,int param_2,int param_3);
void __cdecl FUN_0045176c(undefined4 param_1,int param_2,int param_3);
undefined4 __cdecl FUN_00451784(int *param_1,int param_2);
undefined4 * __cdecl FUN_0045233c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_00452360(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_00452538(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_0045255c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_004525dc(int param_1,int param_2);
void __cdecl FUN_004525f4(int param_1);
void __cdecl FUN_0045269c(int *param_1);
void __cdecl FUN_004526b4(int *param_1);
void __cdecl FUN_00452b50(int *param_1,int param_2);
undefined4 __cdecl FUN_00452bcc(int param_1);
int __cdecl FUN_00452bdc(int param_1,int param_2,int *param_3,int *param_4,int *param_5);
bool __cdecl FUN_00452cf4(int param_1);
int __cdecl FUN_00452d1c(int param_1);
undefined4 __cdecl FUN_00452d7c(int param_1);
void __cdecl FUN_00452dc8(undefined4 *param_1);
void __cdecl FUN_00452ef8(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_004530d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_004530f4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_00453174(int param_1,int param_2);
undefined4 __cdecl FUN_0045318c(int *param_1);
undefined4 __cdecl FUN_004534b8(int param_1);
void __cdecl FUN_004536c4(int param_1);
void __cdecl FUN_00453724(int *param_1);
void __cdecl FUN_0045424c(int *param_1);
void __cdecl FUN_00454434(int param_1);
undefined4 __cdecl FUN_00454458(int *param_1);
namespace TEAViewWindows { void __cdecl CeShared_454478(int param_1,int *param_2); }
bool __cdecl FUN_00454524(int param_1,int param_2);
namespace TEAViewWindows { void __cdecl CmShared_4548d0(int *param_1,int param_2); }
namespace TEAViewWindows { void __cdecl vf15(int *param_1); }
namespace TEAViewWindows { void __cdecl vf19(int *param_1,undefined4 param_2,int param_3); }
namespace TEAViewWindows { void __cdecl vf43(int param_1,int *param_2,undefined4 *param_3); }
namespace TEAViewWindows { int __cdecl vf44(int param_1,int param_2); }
void __cdecl FUN_00456480(int param_1);
undefined4 __cdecl FUN_00456728(int *param_1,int *param_2);
namespace TEAViewWindows { void __cdecl vf29(int *param_1); }
namespace TEAViewWindows { void __cdecl Child4270_Notify5(int *param_1); }
void __cdecl FUN_00456950(int param_1);
namespace TEAViewWindows { void __cdecl vf21(int *param_1,undefined4 param_2,int param_3); }
namespace TEAViewWindows { void __cdecl vf22(int *param_1); }
void __stdcall FUN_0045734c(void);
void __cdecl FUN_00457354(int *param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_00458090(undefined4 *param_1,int param_2,int param_3);
int __cdecl FUN_004581a0(int *param_1);
int __cdecl FUN_00458310(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6);
namespace TEAViewWindows { void __cdecl vf24(int param_1,int param_2); }
namespace TEAViewWindows { void __cdecl vf47(int *param_1); }
LONG * __cdecl FUN_00459150(LONG *param_1,int *param_2);
int __cdecl FUN_004591fc(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5);
namespace TEAViewWindows { void __cdecl vf11(int *param_1); }
namespace TEAViewWindows { void __cdecl vf48(int *param_1,undefined4 param_2,int *param_3); }
namespace TEAViewWindows { int __cdecl vf49(int *param_1,uint param_2,int *param_3); }
namespace TEAViewWindows { void __cdecl vf50(int *param_1); }
namespace TEAViewWindows { void __cdecl vf51(int *param_1,undefined4 param_2,int *param_3); }
namespace TEAViewWindows { void __cdecl vf52(int *param_1,undefined4 param_2,int *param_3); }
namespace TEAViewWindows { void __cdecl vf53(int *param_1,undefined4 param_2,LPPOINT param_3); }
namespace TEAViewWindows { void __cdecl vf40(int *param_1,int param_2); }
namespace TEAViewWindows { void __cdecl vf54(int *param_1); }
namespace TEAViewWindows { void __cdecl vf55(int param_1); }
namespace TEAViewWindows { undefined4 __cdecl vf39(int *param_1,HDC param_2,HWND param_3,int param_4); }
void __cdecl FUN_0045a7f0(int param_1);
void __cdecl FUN_0045adf0(int param_1);
void __cdecl FUN_0045b89c(int *param_1);
void __cdecl FUN_0045bc3c(int *param_1);
void __cdecl FUN_0045c448(int param_1,int param_2,int param_3);
void __cdecl FUN_0045c520(int *param_1);
void __cdecl FUN_0045c57c(int param_1,int param_2);
namespace TEAViewWindows { void __cdecl Cmd12690(int *param_1); }
void __cdecl FUN_0045c5f0(int *param_1,UINT param_2);
void __cdecl FUN_0045c6d4(int param_1,int param_2);
int * __cdecl FUN_0045cbd0(undefined4 *param_1,int param_2);
void __cdecl FUN_0045cd28(undefined4 *param_1);
void __cdecl FUN_0045ce74(int *param_1);
namespace TEAViewWindows { void __cdecl vf9(int *param_1,int param_2); }
namespace TEAViewWindows { bool __cdecl vf7(int *param_1,LPMSG param_2); }
void __cdecl FUN_0045d86c(int param_1);
void __cdecl FUN_0045d938(int param_1);
void __cdecl FUN_0045d9e8(int param_1);
void __cdecl FUN_0045daf8(int param_1);
void __cdecl FUN_0045db98(int param_1);
void __cdecl FUN_0045dbd8(int *param_1,int param_2);
int __cdecl FUN_0045dc48(int param_1,int *param_2);
int * __cdecl FUN_0045dcb8(int *param_1,int *param_2);
int __cdecl FUN_0045dd8c(int param_1);
void __cdecl FUN_0045de08(int *param_1,int param_2,int param_3);
void __cdecl FUN_0045dfbc(int *param_1,uint *param_2);
void __cdecl FUN_0045e060(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined2 *param_5, int param_6);
int * __cdecl FUN_0045e25c(undefined4 *param_1,int param_2);
undefined4 __cdecl FUN_0045e4dc(int *param_1,int param_2,int param_3,int param_4);
int __cdecl FUN_0045e59c(int param_1,undefined4 param_2,undefined4 param_3);
namespace TEAViewWindows::OutputGroup { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_0045e7c8(int param_1,int param_2,int param_3);
void __cdecl FUN_0045e800(int param_1);
undefined4 __cdecl FUN_0045e810(int param_1);
void __cdecl FUN_0045e830(int param_1,undefined4 *param_2,undefined4 *param_3);
namespace OWL::TFileOpenDialog { void __cdecl _dtor(int *param_1,uint param_2); }
namespace SearchModeButton { void __cdecl _dtor(int *param_1,uint param_2); }
namespace std::vector_Definition { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::vector_OWL_TWindow_ptr { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::vector_TEAViewWindows_OutputGroup_ptr { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::vector_MatchEngine_ptr { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_0045f0c4(undefined4 param_1,int param_2,int param_3);
namespace MatchEngine { byte * MatchFixedTemplate(undefined4 param_1,int param_2,int param_3); }
namespace MatchEngine { byte * MatchDistinctAnagram(undefined4 param_1,int param_2,byte *param_3); }
namespace MatchEngine { byte * MatchMultiAnagram(undefined4 param_1,int param_2,byte *param_3); }
namespace MatchEngine { byte * RunTemplateVM(int param_1,byte *param_2,byte *param_3,int param_4,int param_5); }
namespace MatchEngine { byte * AnagramSingleLetters(undefined4 param_1,byte *param_2,int param_3,int param_4); }
namespace MatchEngine { byte * AnagramMultiLetters(undefined4 param_1,byte *param_2,int param_3,int param_4); }
int FUN_0045f8dc(undefined4 param_1,int param_2);
namespace MatchEngine { int AnagramChoiceLists(undefined4 param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6, int param_7,undefined4 param_8); }
namespace MatchEngine { void AnagramChoiceListsOp(int param_1,byte *param_2,int param_3,int param_4,int param_5); }
namespace MatchEngine { int AnagramVariables(undefined4 param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6); }
int FUN_0045fb68(undefined4 param_1,byte *param_2,byte *param_3,int param_4,int param_5);
namespace MatchEngine { int AnagramSubPattern(int param_1,byte *param_2,int param_3,char param_4,int param_5,int param_6, int param_7,uint param_8,int param_9,undefined4 param_10); }
namespace MatchEngine { byte * RunAnagramVM(int param_1,byte *param_2,byte *param_3,undefined4 param_4,uint param_5, int param_6,undefined4 param_7); }
namespace MatchEngine { void ComputeBalance(char *param_1,byte *param_2,int param_3); }
namespace MatchEngine { byte * MatchGeneral(int param_1,char *param_2,byte *param_3,int param_4,int param_5,int param_6); }
namespace VariableValues { void __cdecl _dtor(int *param_1,byte param_2); }
int * __cdecl FUN_00460220(int *param_1,int param_2,undefined4 param_3,int param_4);
namespace LookupPropertiesViewWindows { void __cdecl _dtor(int *param_1,byte param_2); }
namespace LookupPropertiesViewWindows { void __cdecl vf9(int *param_1,INT_PTR param_2); }
namespace LookupPropertiesViewWindows { void __cdecl vf11(int *param_1); }
void __cdecl FUN_0046136c(int param_1);
void __cdecl FUN_00461484(int param_1,int param_2,uint *param_3,int *param_4);
namespace LookupPropertiesViewWindows { void __cdecl vf19(int *param_1,int param_2,int param_3); }
namespace LookupPropertiesViewWindows { void __cdecl vf22(int param_1,undefined4 param_2,int param_3); }
namespace LookupPropertiesViewWindows { void __cdecl vf29(int param_1,char param_2,int param_3); }
namespace LookupPropertiesViewWindows::URLControls { void __cdecl _dtor(int param_1,byte param_2); }
namespace LookupPropertiesViewWindows::DDEControls { void __cdecl _dtor(int param_1,byte param_2); }
namespace LookupPropertiesViewWindows::MessageControls { void __cdecl _dtor(int param_1,byte param_2); }
namespace LookupPropertiesViewWindows::ProgramControls { void __cdecl _dtor(int param_1,byte param_2); }
void __stdcall FUN_00462bc8(void);
void __stdcall FUN_00462c20(void);
int __cdecl FUN_00462d44(int param_1);
int __cdecl FUN_00462d9c(int param_1,int param_2);
namespace GridViewWindows { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_00463310(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5, undefined4 *param_6,undefined4 *param_7,undefined4 *param_8);
void __cdecl FUN_00463bfc(int param_1);
void __cdecl FUN_0046449c(int param_1);
void __cdecl FUN_0046495c(int param_1);
void __stdcall FUN_00464980(void);
int __cdecl FUN_004649b0(int param_1);
int __cdecl FUN_00464a94(int param_1,int param_2,uint param_3);
undefined4 __cdecl FUN_00464ae0(int param_1);
undefined4 __cdecl FUN_00464af0(int param_1);
void __stdcall FUN_00464ba4(void);
void __stdcall FUN_00464bac(void);
undefined4 __cdecl FUN_00464bb4(int param_1,uint *param_2);
void __cdecl FUN_00464f24(int param_1);
void __cdecl FUN_004650a8(int param_1,int param_2);
void __stdcall FUN_00465244(void);
uint __cdecl FUN_0046524c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void __cdecl FUN_0046583c(undefined4 param_1,uint *param_2);
void __cdecl FUN_0046597c(int param_1,uint *param_2,uint *param_3);
void __cdecl FUN_00465a64(int param_1,int param_2);
void __cdecl FUN_00465a80(int param_1);
void __cdecl FUN_00466370(int param_1,int param_2,int param_3);
void __cdecl FUN_004663a0(int param_1,int param_2);
undefined4 __cdecl FUN_00466a90(int param_1);
void __cdecl FUN_00466aa0(int param_1);
void __stdcall FUN_00466b10(void);
undefined4 __cdecl FUN_00466b18(int param_1);
undefined4 __cdecl FUN_00466b28(int param_1);
void __cdecl FUN_00466b38(int param_1);
void __stdcall FUN_00466e78(void);
int * __cdecl FUN_00466e80(int param_1,int param_2);
void __cdecl FUN_00466e98(int param_1,int param_2,int param_3);
undefined4 __cdecl FUN_00467044(int param_1,int param_2,int param_3,int param_4);
undefined4 __stdcall FUN_0046715c(HWND param_1,WPARAM param_2);
undefined4 __stdcall FUN_0046719c(HWND param_1,WPARAM param_2);
int * __cdecl FUN_004671dc(int *param_1,int param_2,undefined4 *param_3,int param_4,int param_5);
namespace TEAQuickReferenceViewWindows { void __cdecl _dtor(int *param_1,uint param_2); }
bool __cdecl FUN_004677b8(int param_1);
namespace TEAQuickReferenceViewWindows { void __cdecl vf32(int param_1,int param_2); }
void __cdecl FUN_00467844(int param_1);
namespace TEAQuickReferenceViewWindows { void __cdecl vf11(int *param_1); }
namespace TEAQuickReferenceViewWindows { undefined4 __cdecl vf39(int *param_1,HDC param_2,HWND param_3,int param_4); }
namespace TabbyPropertiesViewWindows { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_00467d88(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6, undefined4 param_7,int param_8,uint *param_9,int param_10);
namespace TabbyPropertiesViewWindows { void __cdecl _dtor(int *param_1,uint param_2); }
namespace TabbyPropertiesViewWindows { void __cdecl vf15(int *param_1); }
namespace TabbyPropertiesViewWindows { undefined4 __cdecl vf31(int param_1,int param_2); }
namespace TabbyPropertiesViewWindows { void __cdecl vf38(int *param_1,int param_2,undefined4 *param_3); }
namespace TabbyPropertiesViewWindows { void __cdecl vf7(int *param_1,LPMSG param_2); }
namespace TabbyPropertiesViewWindows { void __cdecl vf43(int param_1,undefined4 param_2,LPARAM param_3); }
namespace TabbyPropertiesViewWindows { void __cdecl vf11(int *param_1); }
namespace TabbyPropertiesViewWindows { void __cdecl vf45(int param_1); }
namespace TabbyPropertiesViewWindows { void __cdecl vf18(int *param_1,byte param_2); }
namespace TabbyPropertiesViewWindows { void __cdecl vf48(int *param_1); }
void __cdecl FUN_00468478(int *param_1,int param_2,int param_3);
void __cdecl FUN_004684d4(int *param_1,byte param_2);
namespace TabbyPropertiesViewWindows { void __cdecl vf46(int *param_1,int *param_2); }
namespace VariableValues { bool __cdecl Bind(int param_1,char param_2); }
namespace VariableValues { undefined1 * __cdecl Get(int param_1); }
namespace VariableValues { undefined4 __cdecl IsLetterBound(char param_1); }
namespace VariableValues { void __stdcall Clear(void); }
namespace VariableValues { void __cdecl Save(int param_1); }
namespace VariableValues { void __cdecl Restore(int param_1); }
namespace MatchEngine { void __stdcall ResetMatchState(void); }
undefined4 __stdcall FUN_00468bc8(void);
void __stdcall FUN_00468c4c(void);
namespace OWL::TRichEdit { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace OWL::TRichEdit { void __cdecl Cmd24322(int *param_1); }
namespace OWL::TRichEdit { void __cdecl Cmd24323(int *param_1); }
namespace OWL::TRichEdit { void __cdecl Cmd24324(int param_1); }
namespace OWL::TRichEdit { void __cdecl Cmd24325(int *param_1); }
namespace OWL::TRichEdit { void __cdecl Cmd24326(int param_1); }
namespace OWL::TRichEdit { void __cdecl Cmd24321(int *param_1); }
int * __cdecl FUN_00468d58(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9, uint *param_10,int param_11);
bool __stdcall FUN_00468ee0(void);
undefined4 __cdecl FUN_00468f98(undefined4 param_1);
namespace OWL::TDllLoader_OWL_TRichEditModule { void __cdecl _dtor(int param_1,byte param_2); }
undefined * __stdcall FUN_004690e8(void);
void __cdecl FUN_004690f0(int *param_1,LPARAM param_2,char param_3);
bool __cdecl FUN_00469120(int *param_1,LPARAM param_2,WPARAM param_3);
undefined4 * __cdecl FUN_0046914c(undefined4 *param_1,int *param_2,uint *param_3);
namespace OWL::TRichEdit { void __cdecl vf13(int *param_1,undefined4 *param_2,undefined4 *param_3); }
void __cdecl FUN_004691fc(int *param_1,LPARAM param_2);
namespace OWL::TRichEdit { bool __cdecl vf15(int *param_1,undefined4 param_2,undefined4 param_3); }
undefined4 __cdecl FUN_0046924c(int *param_1,LPARAM param_2);
void __cdecl FUN_0046926c(int *param_1,LPARAM param_2);
namespace OWL::TRichEdit { void __cdecl vf12(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4); }
undefined4 __cdecl FUN_004692bc(int *param_1,WPARAM param_2,LPARAM param_3);
namespace OWL::TRichEdit { int __cdecl vf16(int *param_1,int param_2,uint *param_3,char param_4,char param_5,char param_6); }
namespace OWL::TRichEdit { void __cdecl vf17(int *param_1); }
void __cdecl FUN_004693a0(int *param_1,WPARAM param_2,LPARAM param_3);
void __cdecl FUN_004693c4(int *param_1,WPARAM param_2,LPARAM param_3);
undefined4 __cdecl FUN_004693e8(int *param_1);
void __cdecl FUN_00469408(int *param_1,LPARAM param_2);
namespace OWL::TRichEdit { void __cdecl EvGetDlgCode(int *param_1); }
namespace OWL::TRichEdit { void __cdecl EvChar(int *param_1); }
namespace OWL::TRichEdit { void __cdecl EvKeyDown(int *param_1); }
namespace OWL::TRichEdit { void __cdecl EvKillFocus(int *param_1); }
namespace OWL::TRichEdit { void __cdecl EvSetFocus(int *param_1); }
namespace OWL::TRichEdit { void __cdecl CeShared_469490(int param_1,undefined4 *param_2); }
namespace OWL::TRichEdit { void __cdecl CeCmd24324(int *param_1,undefined4 *param_2); }
namespace OWL::TRichEdit { void __cdecl CeCmd24326(int *param_1,undefined4 *param_2); }
namespace OWL::TRichEdit { void __cdecl CeCmd24321(int *param_1,undefined4 *param_2); }
namespace OWL::TRichEdit { char * __stdcall vf11(void); }
undefined4 __stdcall FUN_00469604(void);
namespace OWL::TRichEdit { void __cdecl vf20(int *param_1); }
undefined4 __stdcall FUN_004696dc(int *param_1,undefined1 *param_2,int param_3,undefined4 *param_4);
undefined4 __stdcall FUN_00469724(int *param_1,int param_2,int param_3,int *param_4);
namespace OWL::TRichEdit { undefined4 __stdcall vf10(void); }
bool __cdecl FUN_004697bc(int *param_1,undefined4 param_2,WPARAM param_3);
bool __cdecl FUN_004697f8(int *param_1,undefined4 param_2,WPARAM param_3);
namespace OWL::TRichEdit { undefined4 __cdecl vf25(int *param_1,LPCSTR param_2); }
namespace OWL::TRichEdit { undefined4 __cdecl vf29(int *param_1,LPCSTR param_2); }
undefined4 * __cdecl FUN_00469a6c(undefined4 *param_1);
undefined4 __cdecl FUN_00469b1c(char param_1);
namespace OWL::TErrorMode { void __cdecl _dtor(UINT *param_1,byte param_2); }
namespace OWL::TRichEditModule { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
int __cdecl FUN_00469e1c(int param_1,int param_2,int *param_3);
bool __cdecl FUN_00469f48(int param_1,int param_2);
namespace DefinitionRichEdit { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_0046a058(int *param_1,int param_2,undefined4 *param_3,int *param_4);
namespace DefinitionRichEdit { void __cdecl _dtor(int *param_1,uint param_2); }
namespace DefinitionRichEdit { void __cdecl vf31(int *param_1,int param_2); }
namespace DefinitionRichEdit { void __cdecl EvKeyDown(int *param_1,int param_2); }
namespace DefinitionViewWindows { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_0046a40c(int *param_1,int param_2,int param_3,int param_4);
namespace DefinitionViewWindows { void __cdecl _dtor(int *param_1,uint param_2); }
namespace DefinitionViewWindows { void __cdecl CeShared_46a8f4(int *param_1,undefined4 *param_2); }
namespace DefinitionViewWindows { void __cdecl CmShared_46a924(int *param_1,uint param_2); }
uint __cdecl FUN_0046b0fc(int *param_1,uint param_2);
void __cdecl FUN_0046b2ec(int param_1,int param_2);
namespace DefinitionViewWindows { void __cdecl vf11(int *param_1); }
namespace DefinitionViewWindows { void __cdecl vf9(int *param_1); }
namespace DefinitionViewWindows { void __cdecl vf47(int *param_1); }
namespace DefinitionViewWindows { void __cdecl vf48(int *param_1,undefined4 param_2,int *param_3); }
namespace DefinitionViewWindows { void __cdecl vf49(int *param_1,byte param_2,int *param_3); }
namespace DefinitionViewWindows { void __cdecl vf50(int *param_1); }
undefined4 __cdecl FUN_0046c024(int *param_1,int *param_2);
void __cdecl FUN_0046c198(int *param_1);
namespace DefinitionViewWindows { undefined4 __cdecl vf23(int *param_1,undefined4 param_2,int param_3); }
undefined4 __cdecl FUN_0046c244(int param_1,int param_2,int *param_3,int *param_4);
namespace DefinitionViewWindows { bool __cdecl vf7(int *param_1,LPMSG param_2); }
namespace DefinitionViewWindows { int __cdecl vf44(int param_1,int param_2); }
namespace DefinitionViewWindows { undefined4 __cdecl Child13860_Notifym402(int *param_1); }
namespace DefinitionViewWindows { void __cdecl Child13860_Notifym406(int param_1); }
void __cdecl FUN_0046c760(int param_1);
void __cdecl FUN_0046c7e4(int *param_1);
void __cdecl FUN_0046caa4(int *param_1);
void __cdecl FUN_0046ccac(int param_1);
uint __cdecl FUN_0046d004(int *param_1,int param_2,int param_3);
int __cdecl FUN_0046d2c8(int param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_0046d86c(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7, int param_8);
int __cdecl FUN_0046ddd0(int param_1,int param_2);
int __cdecl FUN_0046e020(int param_1,int param_2,int param_3);
int __cdecl FUN_0046e698(int param_1,int param_2,int param_3);
namespace DefinitionViewWindows { void __stdcall EvHelp(void); }
void __cdecl FUN_0046e740(int *param_1,int param_2,int param_3);
void __cdecl FUN_0046faf0(int param_1,int param_2,undefined *param_3);
void __cdecl FUN_0046fb4c(int param_1,int param_2,undefined *param_3);
void __cdecl FUN_0047094c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10);
void __cdecl FUN_00470bec(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_00471128(uint param_1,uint param_2,undefined4 param_3,undefined *param_4);
uint __cdecl FUN_004717cc(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5);
void __cdecl FUN_004722fc(int param_1);
int __cdecl FUN_00472370(int param_1);
int * __cdecl FUN_004723b0(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,int param_6);
namespace DefinitionViewFrame { void __cdecl _dtor(int *param_1,uint param_2); }
namespace DefinitionViewFrame { void __cdecl vf9(int *param_1); }
namespace DefinitionViewFrame { void __cdecl vf15(int param_1); }
void __cdecl FUN_004733d8(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7, int param_8);
void __cdecl FUN_00473470(int param_1,uint *param_2);
void __cdecl FUN_00473488(int *param_1);
void __cdecl FUN_004734c4(int param_1,int param_2);
namespace OWL::TTreeNode { void __cdecl _dtor(int param_1,byte param_2); }
namespace GripBar { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TStatusBar { void __cdecl _dtor(int *param_1,uint param_2); }
int __cdecl FUN_00473df0(int param_1);
namespace TEAFrameWindow { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_00473f78(int *param_1,int param_2,int param_3,int *param_4);
namespace TEAFrameWindow { void __cdecl _dtor(int *param_1,uint param_2); }
namespace TEAFrameWindow { void __cdecl EvInitMenuPopup(undefined4 *param_1,HMENU param_2,undefined4 param_3,char param_4); }
namespace TEAFrameWindow { char * __stdcall vf15(void); }
namespace TEAFrameWindow { undefined4 __cdecl EvRegisteredMsg_474770(int param_1); }
namespace TEAFrameWindow { void __cdecl vf9(int *param_1); }
namespace TEAFrameWindow { bool __cdecl vf16(int param_1); }
namespace TEAFrameWindow { void __cdecl CeFilePageSetup(int param_1,undefined4 *param_2); }
namespace TEAFrameWindow { void __cdecl CeShared_4748c8(int param_1,int *param_2); }
namespace TEAFrameWindow { void __cdecl CmFileClose(int param_1); }
namespace TEAFrameWindow { void __cdecl CmFileDemote(int param_1); }
namespace TEAFrameWindow { void __cdecl CmFilePromote(int param_1); }
namespace TEAFrameWindow { void __cdecl CmToolsOptions(int param_1); }
namespace TEAFrameWindow { void __cdecl CmRange4840to4849(int param_1,int param_2); }
namespace TEAFrameWindow { void __cdecl CmFilePageSetup(int param_1); }
namespace TEAFrameWindow { void __cdecl CmShared_474a3c(int param_1,int param_2); }
namespace TEAFrameWindow { void __cdecl CmToolsDictionaryBuilder(int param_1); }
namespace TEAFrameWindow { void __cdecl CmToolsWordListMerge(int param_1); }
namespace TEAFrameWindow { void __cdecl CmWindowAlwaysOnTop(int param_1); }
namespace TEAFrameWindow { void __cdecl CmShared_474adc(int param_1,int param_2); }
namespace TEAFrameWindow { void __cdecl CmHelpQuickReference(int param_1); }
namespace TEAFrameWindow { void __cdecl CmHelpStartupTips(int param_1); }
namespace TEAFrameWindow { void __stdcall CmHelpContents(void); }
namespace TEAFrameWindow { void __stdcall CmHelpOnlineTutorial(void); }
namespace TEAFrameWindow { void __stdcall CmHelpEmailSupport(void); }
namespace TEAFrameWindow { void __stdcall CmHelpOnlineHelp(void); }
namespace TEAFrameWindow { void __stdcall CmHelpOnlineOrdering(void); }
namespace TEAFrameWindow { void __stdcall CmHelpOrderForm(void); }
namespace TEAFrameWindow { void __cdecl CmHelpAboutTEA(int param_1); }
int * __cdecl FUN_00474e1c(int *param_1,int param_2);
namespace TEAAppWindows { void __cdecl _dtor(int *param_1,uint param_2); }
namespace TEAAppWindows { void __cdecl vf17(int param_1); }
void __cdecl FUN_004753f4(int param_1,int param_2,LPCSTR param_3);
namespace TEAAppWindows { void __cdecl vf16(int param_1); }
undefined4 __stdcall FUN_004755ac(void);
namespace OWL::TApplication { void __stdcall vf9(void); }
namespace OWL::TApplication { undefined4 __cdecl vf13(int param_1); }
int * __cdecl FUN_00475a74(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6);
namespace ExternalLookupViewWindows { void __cdecl _dtor(int *param_1,uint param_2); }
namespace ExternalLookupViewWindows { void __cdecl vf19(undefined4 *param_1); }
namespace ExternalLookupViewWindows { void __cdecl vf9(int *param_1,INT_PTR param_2); }
namespace ExternalLookupViewWindows { void __cdecl vf11(int *param_1); }
void __cdecl FUN_004760d8(int param_1);
namespace DictionaryListViewWindows { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_004765e8(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6);
namespace DictionaryListViewWindows { void __cdecl _dtor(int *param_1,uint param_2); }
namespace DictionaryListViewWindows { void __cdecl vf19(int *param_1); }
namespace DictionaryListViewWindows { void __cdecl vf22(int param_1); }
namespace DictionaryListViewWindows { void __cdecl vf37(int param_1,undefined4 param_2,int param_3); }
namespace DictionaryListViewWindows { void __cdecl vf43(int param_1,int *param_2,int param_3); }
int __cdecl FUN_0047784c(int param_1,int param_2);
namespace DictionaryListViewWindows { void __cdecl vf11(int *param_1); }
namespace DictionaryListViewWindows { void __cdecl vf9(int *param_1,int param_2); }
namespace DictionaryListViewWindows { void __cdecl CmShared_477acc(int param_1,int param_2); }
namespace DictionaryListViewWindows { void __cdecl Child7830_Notify1(int param_1); }
namespace DictionaryListViewWindows { void __cdecl Child7830_Notify2(int param_1); }
namespace DictionaryListViewWindows { void __cdecl Child7840_Notify1(int param_1); }
namespace DictionaryListViewWindows { void __cdecl Child7840_Notify2(int param_1); }
undefined4 * __cdecl FUN_00477ca0(undefined4 *param_1);
namespace MatchEngineSet { void __cdecl _dtor(int param_1,byte param_2); }
namespace MatchEngineSet { undefined4 __cdecl Compile(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7); }
void __cdecl FUN_004791f0(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_004793c8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_004793ec(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_0047946c(int param_1,int param_2);
undefined4 __cdecl FUN_00479484(int param_1,int param_2);
void __cdecl FUN_00479518(int param_1,int param_2,int param_3);
void __cdecl FUN_00479ab8(int param_1,int param_2,int param_3);
void __cdecl FUN_00479b08(int param_1,int *param_2,int *param_3);
undefined4 __cdecl FUN_00479b7c(int param_1);
void __cdecl FUN_00479bd4(int param_1,int param_2);
void __cdecl FUN_00479c14(int param_1,uint param_2);
undefined4 __cdecl FUN_00479cb4(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
undefined4 * __cdecl FUN_00479f5c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_00479fdc(int param_1,int param_2);
undefined4 * __cdecl FUN_00479ff4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_0047a018(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_0047a038(undefined4 *param_1,int param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_0047a0b4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_0047a0d8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_0047a0fc(int param_1);
void __cdecl FUN_0047a74c(int param_1,uint param_2);
undefined4 __cdecl FUN_0047a7ec(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void __cdecl FUN_0047aa94(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_0047aab4(undefined4 *param_1,int param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_0047ab30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
int * __cdecl FUN_0047ab54(int *param_1,int param_2,undefined4 *param_3,int param_4);
namespace TEAStartupTipsViewWindows { void __cdecl _dtor(int *param_1,uint param_2); }
bool __cdecl FUN_0047af2c(int param_1);
namespace TEAStartupTipsViewWindows { void __cdecl vf19(int param_1,undefined4 param_2,int param_3); }
namespace TEAStartupTipsViewWindows { void __cdecl vf15(int *param_1); }
namespace TEAStartupTipsViewWindows { void __cdecl vf11(int *param_1); }
undefined4 * __cdecl FUN_0047b728(int param_1,uint *param_2,undefined4 param_3);
namespace TEAStartupTipsViewWindows { void __cdecl vf9(int *param_1,INT_PTR param_2); }
void __cdecl FUN_0047b87c(int param_1);
namespace std::locale::facet { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace __rwstd::facet_imp { void __stdcall vf1(void); }
namespace __rwstd::facet_imp { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
int * __cdecl FUN_0047be04(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
namespace OWL::TGadgetWindow { undefined4 __cdecl vf3(int param_1); }
uint __cdecl FUN_0047c140(char *param_1);
undefined4 __cdecl FUN_0047c168(int param_1);
uint * __cdecl FUN_0047c18c(char *param_1,uint *param_2,undefined4 *param_3);
void __cdecl FUN_0047c438(int param_1,uint *param_2,int param_3,int param_4);
void __cdecl FUN_0047c494(int param_1,int param_2);
undefined4 __stdcall FUN_0047c558(int param_1,undefined4 *param_2,uint param_3,uint *param_4);
undefined4 __stdcall FUN_0047c7c8(int param_1,uint *param_2,undefined4 param_3,undefined4 *param_4);
void __cdecl FUN_0047c804(int param_1,int param_2,int param_3,uint *param_4);
undefined4 __cdecl FUN_0047c864(undefined4 param_1);
undefined4 * __cdecl FUN_0047c8e8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_0047c968(int param_1,int param_2);
undefined4 * __cdecl FUN_0047c980(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_0047c9a4(undefined4 param_1,int param_2,int param_3);
void __cdecl FUN_0047c9bc(undefined4 param_1,int param_2,int param_3);
void __cdecl FUN_0047c9d0(undefined4 *param_1,uint param_2,int param_3,int *param_4);
void __cdecl FUN_0047ce48(int param_1,uint param_2,undefined4 *param_3,uint param_4);
int * FUN_0047d0e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5 );
void __cdecl FUN_0047ede4(int param_1,undefined4 param_2,undefined4 *param_3,int param_4);
void __cdecl FUN_0047efa0(int param_1,int param_2,uint param_3,int param_4);
void __cdecl FUN_0047f2d8(int param_1,uint param_2);
int __cdecl FUN_0047f348(int param_1,undefined1 *param_2,uint param_3,undefined1 *param_4);
undefined1 * __cdecl FUN_0047f57c(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3);
void __cdecl FUN_0047f5fc(int param_1,int param_2);
undefined1 * __cdecl FUN_0047f610(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3);
undefined1 * __cdecl FUN_0047f630(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3);
void __cdecl FUN_0047f650(undefined1 *param_1,int param_2,undefined1 *param_3);
undefined1 * __cdecl FUN_0047f6cc(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3);
void __cdecl FUN_0047f6ec(int param_1,undefined1 param_2);
void __cdecl FUN_0047f720(int param_1,int param_2,undefined4 param_3);
void __cdecl FUN_0047f820(int param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_0047f9f8(int param_1);
void __cdecl FUN_0047fa24(int param_1,uint param_2,int param_3);
void __cdecl FUN_0047faa8(int param_1);
void __cdecl FUN_0047fb1c(int param_1,int param_2);
void __cdecl FUN_0047fb8c(int param_1,undefined4 param_2);
void __cdecl FUN_0047fc9c(int param_1,undefined4 param_2);
void __cdecl FUN_0047fdac(int param_1,uint param_2,int param_3);
void __cdecl FUN_00480144(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_0048031c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_00480340(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_004803c0(int param_1,int param_2);
void __cdecl FUN_004803d8(undefined4 param_1,int param_2,int param_3);
void __cdecl FUN_004803f0(int param_1,int param_2,int param_3);
void __cdecl FUN_004804b0(int param_1,undefined4 param_2);
void __cdecl FUN_00480578(int param_1);
undefined4 __cdecl FUN_00480608(int param_1);
undefined4 __cdecl FUN_0048070c(int param_1);
undefined4 * __cdecl FUN_00480754(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_00481b70(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_00481c1c(undefined4 *param_1,undefined4 *param_2);
namespace FormattedTextSegment { void __cdecl _dtor(int param_1,byte param_2); }
undefined4 * __cdecl FUN_00481f7c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
namespace FormattedTextParagraph { void __cdecl _dtor(int param_1,byte param_2); }
int __cdecl FUN_00482150(int param_1);
int __cdecl FUN_004825dc(int param_1,int param_2);
int __cdecl FUN_004828bc(int param_1,int param_2,int param_3);
int __cdecl FUN_00482908(int param_1,int param_2);
int __cdecl FUN_00482a60(int param_1,int param_2);
bool __cdecl FUN_00482bb8(int param_1);
int __cdecl FUN_00482bdc(int param_1,int param_2,int param_3);
int __cdecl FUN_004837d0(int param_1,int param_2);
void __cdecl FUN_00483a88(HWND param_1,int param_2,int param_3);
namespace std::basic_ostream_char::sentry { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::vector_FormattedTextSegment_ptr { void __cdecl _dtor(int param_1,byte param_2); }
undefined4 * __cdecl FUN_00485614(undefined4 *param_1,int *param_2,char param_3,undefined4 param_4);
void __cdecl FUN_00485664(int param_1,char param_2);
void __cdecl FUN_00485680(int param_1,char param_2);
void __cdecl FUN_0048569c(int param_1,char param_2);
void __cdecl FUN_004856b8(int param_1,char param_2);
void __cdecl FUN_004856d4(int param_1,undefined4 *param_2);
char * __cdecl FUN_00485700(int param_1,char *param_2);
void __cdecl FUN_00485738(int param_1,undefined1 param_2);
void __cdecl FUN_00485748(int param_1,undefined1 param_2);
void __cdecl FUN_00485758(int param_1,undefined4 param_2);
undefined4 * __cdecl FUN_00485770(int param_1,int *param_2);
void __cdecl FUN_004857f4(int param_1);
undefined4 * __cdecl FUN_00485870(undefined4 *param_1,undefined4 param_2);
void __cdecl FUN_004858a4(int param_1,undefined4 param_2,char param_3);
void __cdecl FUN_004858cc(int param_1,undefined4 param_2);
void __cdecl FUN_004858e0(int param_1,undefined4 param_2);
void __cdecl FUN_004858f4(int param_1,undefined2 param_2);
void __cdecl FUN_00485908(int param_1,short param_2,undefined4 *param_3);
void __stdcall FUN_0048593c(void);
undefined4 __cdecl FUN_0048597c(HWND param_1);
undefined4 * __cdecl FUN_00485a4c(undefined4 *param_1);
namespace Help { void __cdecl _dtor(int *param_1,byte param_2); }
int __cdecl FUN_00485bb8(int param_1,int param_2);
namespace Common { void __cdecl _dtor(int param_1,byte param_2); }
undefined4 __cdecl FUN_00485fac(int param_1,int param_2,int param_3);
void __cdecl FUN_00486058(int param_1,int param_2,int param_3);
undefined4 __cdecl FUN_0048609c(byte *param_1,char *param_2);
bool __cdecl FUN_004860b4(byte *param_1,char *param_2);
void __cdecl FUN_0048622c(byte param_1,byte *param_2,byte *param_3);
int * __cdecl FUN_004862b0(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6);
namespace LicenseViewWindows { void __cdecl _dtor(int *param_1,uint param_2); }
namespace LicenseViewWindows { void __cdecl vf8(int *param_1,int param_2); }
undefined4 __cdecl FUN_004867cc(byte *param_1,char *param_2);
undefined4 __cdecl FUN_004867e4(byte *param_1,char *param_2);
undefined4 __stdcall FUN_004867fc(void);
void __stdcall FUN_0048687b(void);
void __stdcall FUN_004868d1(void);
undefined4 * __cdecl FUN_00486924(undefined4 *param_1,int *param_2);
int * __cdecl FUN_0048698c(int *param_1,int param_2);
namespace OWL::TRichEdit::Streamer { undefined4 __cdecl vf1(int param_1,int *param_2); }
void __cdecl FUN_00486ac4(int param_1,int *param_2);
namespace OWL::TRichEdit::Streamer { void __cdecl vf2(int param_1,int *param_2); }
void __cdecl FUN_00486b34(int param_1,int *param_2);
undefined4 * __cdecl FUN_00486b88(int *param_1);
namespace OWL::TNewStreamer { void __cdecl vf0(int param_1); }
namespace OWL::TRichEdit::Streamer { undefined4 __stdcall vf3(void); }
void __stdcall FUN_00486df0(void);
undefined4 * __cdecl FUN_00486e34(undefined4 *param_1);
void __cdecl FUN_00486eec(int param_1);
bool __cdecl FUN_00486f1c(int param_1,int param_2);
undefined4 __stdcall FUN_00486f84(void);
undefined4 __stdcall FUN_00486ff4(void);
bool __stdcall FUN_00487090(void);
undefined * __stdcall FUN_004870d0(void);
undefined * __stdcall FUN_00487178(void);
bool __stdcall FUN_00487180(void);
undefined4 * __cdecl FUN_00487190(undefined4 *param_1);
namespace OWL::TXCommCtrl { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXCommCtrl { void __cdecl vf3(int *param_1); }
void __stdcall FUN_0048739c(void);
namespace OWL::TXCommCtrl { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TCommCtrlDll { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined * __stdcall FUN_0048751c(void);
undefined1 __stdcall FUN_00487548(void);
undefined1 __stdcall FUN_00487578(void);
bool __stdcall FUN_004875a8(void);
void __stdcall FUN_004875c0(void);
undefined * __stdcall FUN_004876f0(void);
PHKEY __cdecl FUN_00487794(PHKEY param_1,HKEY param_2,uint *param_3,REGSAM param_4,int param_5);
undefined4 * __cdecl FUN_0048786c(undefined4 *param_1,undefined4 param_2,undefined1 param_3,uint *param_4);
namespace OWL::TRegKey { void __cdecl _dtor(int *param_1,byte param_2); }
LSTATUS __cdecl FUN_00487964(undefined4 *param_1,LPSTR param_2,LPDWORD param_3,LPDWORD param_4,LPDWORD param_5, DWORD *param_6,DWORD *param_7,LPDWORD param_8,LPDWORD param_9,LPDWORD param_10, PFILETIME param_11);
undefined4 * __cdecl FUN_00487a14(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
namespace OWL::TRegValue { void __cdecl _dtor(int param_1,byte param_2); }
void __stdcall FUN_00487b80(void);
undefined * __stdcall FUN_00487bc0(void);
undefined4 * __cdecl FUN_00487c5c(undefined4 *param_1);
namespace OWL::TAppDictionary { void __cdecl _dtor(int *param_1,byte param_2); }
undefined4 __cdecl FUN_00487e08(undefined4 *param_1,int param_2);
void __cdecl FUN_00487e38(undefined4 *param_1,undefined4 param_2,int param_3);
void __cdecl FUN_00487e60(undefined4 *param_1);
bool __cdecl FUN_00487eac(undefined4 *param_1);
undefined4 * __cdecl FUN_00487ed8(undefined4 *param_1);
namespace OWL::TAppDictPidImp { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TAppDictPidImp { void __cdecl vf1(int param_1,int param_2,int param_3); }
namespace OWL::TAppDictPidImp { void __cdecl vf2(int *param_1); }
namespace OWL::TAppDictPidImp { int * __cdecl vf3(int param_1,int param_2); }
namespace OWL::TAppDictPidImp { uint __cdecl vf4(int param_1,int param_2); }
namespace OWL::TAppDictPidImp { void vf5(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,undefined *param_5); }
namespace OWL::TAppDictPidImp { int __cdecl vf6(int param_1); }
undefined4 * __cdecl FUN_004880b4(int param_1);
void __stdcall FUN_004880e0(void);
int __cdecl FUN_004880f0(int param_1);
int * __cdecl FUN_00488138(int param_1);
namespace OWL::TAppDictImp { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TAppDictInstImp { void __cdecl _dtor(int param_1,byte param_2); }
namespace OWL::TAppDictInstImp { void __cdecl vf1(int param_1,undefined4 param_2,undefined4 param_3); }
namespace OWL::TAppDictInstImp { void __cdecl vf2(int param_1); }
namespace OWL::TAppDictInstImp { int __cdecl vf3(int param_1); }
namespace OWL::TAppDictInstImp { int __cdecl vf4(int param_1); }
namespace OWL::TAppDictInstImp { void __cdecl vf5(undefined4 param_1,undefined *param_2); }
namespace OWL::TAppDictInstImp { bool __cdecl vf6(int param_1); }
uint * __cdecl FUN_004883bc(uint *param_1,undefined4 param_2,int param_3);
uint * __cdecl FUN_0048842c(uint *param_1,int param_2,int param_3,byte param_4,byte param_5,void *param_6);
uint * __cdecl FUN_004884a0(uint *param_1,undefined4 *param_2,int param_3,int param_4,char param_5);
uint * __cdecl FUN_0048852c(uint *param_1,uint *param_2);
uint * __cdecl FUN_004885cc(uint *param_1,int param_2,uint *param_3);
namespace OWL::TBitmap { void __cdecl _dtor(uint *param_1,byte param_2); }
undefined4 __cdecl FUN_00488700(undefined4 *param_1);
undefined4 __cdecl FUN_00488728(undefined4 *param_1);
undefined4 * __cdecl FUN_00488750(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_00488788(uint *param_1,int param_2,uint *param_3);
void __cdecl FUN_0048882c(uint *param_1,uint *param_2);
namespace OWL::TPalette { void __cdecl _dtor(uint *param_1,byte param_2); }
namespace OWL::TButtonGadget { int vf28(...); }   // not decompiled
void __stdcall FUN_00488bbc(void);
void __stdcall FUN_00488bfc(void);
namespace OWL::TButtonGadgetEnabler { void __cdecl vf0(int param_1); }
namespace OWL::TButtonGadgetEnabler { void __stdcall vf1(void); }
namespace OWL::TButtonGadgetEnabler { void __cdecl vf2(int param_1,int param_2); }
int * __cdecl FUN_00488c78(int *param_1,uint *param_2,undefined4 param_3,char param_4,undefined4 param_5, byte param_6,char param_7);
namespace OWL::TButtonGadget { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_00488e74(int param_1,byte param_2);
namespace OWL::TButtonGadget { void __cdecl vf5(int param_1); }
namespace OWL::TButtonGadget { void __cdecl vf6(int *param_1); }
void __cdecl FUN_00488f94(int *param_1);
void __cdecl FUN_004890e4(int *param_1,int param_2);
namespace OWL::TButtonGadget { void __cdecl vf3(int *param_1,int *param_2); }
namespace OWL::TButtonGadget { void __cdecl vf2(int *param_1,int *param_2); }
namespace OWL::TButtonGadget { int * __cdecl vf22(int param_1); }
namespace OWL::TDib { void vf3(char *param_1,int param_2,char param_3); }
namespace OWL::TButtonGadget { void __cdecl vf23(undefined4 param_1,int param_2); }
namespace OWL::TButtonGadget { void __cdecl vf24(int *param_1); }
void __cdecl FUN_00489588(int param_1,undefined4 param_2);
namespace OWL::TButtonGadget { void __cdecl vf12(int *param_1); }
namespace OWL::TButtonGadget { void __cdecl vf13(int param_1,undefined4 *param_2); }
undefined * __stdcall FUN_00489774(void);
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
undefined4 * __cdecl FUN_00489c74(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 * __cdecl FUN_00489df0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4, undefined4 param_5,int param_6);
namespace OWL::TCelArray { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
int * __cdecl FUN_00489f44(int *param_1,int param_2,int param_3,int param_4);
int * __cdecl FUN_00489f80(int *param_1,int param_2,int param_3,int param_4);
undefined4 __cdecl FUN_00489ffc(int param_1,uint *param_2);
undefined4 __cdecl FUN_0048a094(int param_1,int param_2,int param_3);
undefined4 __cdecl FUN_0048a134(int param_1,int param_2);
undefined4 __cdecl FUN_0048a244(int param_1,int param_2,uint *param_3);
uint __cdecl FUN_0048a2b4(uint *param_1,uint *param_2,int *param_3,int *param_4,int param_5,int param_6);
undefined4 __cdecl FUN_0048a3c4(int param_1,int param_2);
undefined4 __cdecl FUN_0048a404(int param_1,int param_2);
void __stdcall FUN_0048a614(void);
HMODULE __stdcall FUN_0048a629(HANDLE param_1,LPCVOID param_2);
undefined4 __cdecl FUN_0048a6d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void __stdcall FUN_0048a88b(void);
void __stdcall FUN_0048a8c9(void);
undefined4 * __cdecl FUN_0048a920(undefined4 *param_1,undefined4 param_2,byte param_3,char param_4);
namespace OWL::TDiagGroupDef { undefined4 __stdcall vf0(void); }
undefined4 * __cdecl FUN_0048a99c(undefined4 *param_1,undefined4 param_2,byte param_3,char param_4);
namespace OWL::TDiagBase { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_0048aa64(undefined4 param_1);
void __cdecl FUN_0048aa90(int param_1);
undefined * __stdcall FUN_0048aac0(void);
void __stdcall FUN_0048ab18(void);
undefined4 __stdcall FUN_0048ab58(void);
void __stdcall FUN_0048ab9c(void);
undefined4 __stdcall FUN_0048ac00(void);
undefined4 __stdcall FUN_0048ac50(void);
undefined4 __stdcall FUN_0048aca0(void);
void __cdecl FUN_0048ace4(int param_1,int param_2);
namespace OWL::TDiagGroupDef { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __stdcall FUN_0048ae6c(void);
void __stdcall FUN_0048ae7c(void);
void __cdecl FUN_0048aee8(int param_1,int param_2);
namespace OWL::TTmpBuffer_char { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TChooseColorDialog { undefined4 __cdecl vf14(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_0048b0c0(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7);
namespace OWL::TChooseColorDialog { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TChooseColorDialog { void __cdecl vf1(int *param_1,int param_2,undefined4 param_3); }
namespace OWL::TChooseColorDialog { undefined4 __cdecl vf6(int param_1); }
namespace OWL::TChooseFontDialog { undefined4 __cdecl vf14(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_0048b59c(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7);
namespace OWL::TChooseFontDialog { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TChooseFontDialog { void __cdecl vf1(int *param_1,int param_2,undefined4 param_3); }
namespace OWL::TChooseFontDialog { undefined4 __cdecl vf6(int param_1); }
char * __cdecl FUN_0048ba8c(char *param_1,HWND param_2,char param_3);
namespace OWL::TClipboard { void __cdecl _dtor(char *param_1,byte param_2); }
void __cdecl FUN_0048bc08(char *param_1);
void __cdecl FUN_0048bc20(undefined4 param_1,HWND param_2);
undefined4 * __cdecl FUN_0048bc3c(undefined4 *param_1,uint param_2);
namespace OWL::TXClipboard { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXClipboard { void __cdecl vf3(int *param_1); }
namespace OWL::TXClipboard { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __stdcall FUN_0048be18(void);
int __cdecl FUN_0048c0a0(short param_1);
undefined4 __cdecl FUN_0048c0e0(int param_1);
uint __cdecl FUN_0048c12c(uint *param_1);
uint __cdecl FUN_0048c160(uint *param_1);
int __cdecl FUN_0048c174(uint *param_1);
uint __cdecl FUN_0048c18c(uint *param_1);
void __stdcall FUN_0048c1a0(void);
undefined * __stdcall FUN_0048c1e4(void);
undefined4 __stdcall FUN_0048c23c(void);
undefined4 __stdcall FUN_0048c274(void);
undefined4 __stdcall FUN_0048c2ac(void);
undefined4 __stdcall FUN_0048c2dc(void);
undefined4 __stdcall FUN_0048c314(void);
undefined4 __stdcall FUN_0048c35c(void);
undefined4 __stdcall FUN_0048c394(void);
undefined4 __stdcall FUN_0048c3cc(void);
undefined4 __stdcall FUN_0048c404(void);
undefined4 __stdcall FUN_0048c43c(void);
undefined4 __stdcall FUN_0048c474(void);
namespace OWL::TCommonDialog { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace OWL::TCommonDialog { void __cdecl EvClose(int *param_1); }
namespace OWL::TCommonDialog { void __cdecl CmRange1to2(int *param_1); }
int * __cdecl FUN_0048c514(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5);
namespace OWL::TCommonDialog { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TCommonDialog { void __cdecl vf11(int *param_1); }
namespace OWL::TCommonDialog { void __stdcall vf4(void); }
namespace OWL::TCommonDialog { undefined4 __stdcall vf6(void); }
void __cdecl FUN_0048c8b0(int param_1,uint param_2);
int __cdecl FUN_0048c8fc(int param_1,uint param_2);
undefined4 __stdcall FUN_0048c948(int param_1);
undefined4 __stdcall FUN_0048c94e(void);
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
void __stdcall FUN_0048cc38(void);
namespace OWL::TMBlockList_TStandardAllocator { void __cdecl _dtor(int param_1,byte param_2); }
namespace OWL::TMMemBlocks_TStandardAllocator { void __cdecl _dtor(int param_1,byte param_2); }
namespace OWL::TMMemStack_TStandardAllocator { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_0048ce3c(int param_1,byte param_2);
int * __cdecl FUN_0048ce64(int *param_1,int param_2,undefined4 param_3,undefined1 param_4,uint *param_5, int param_6);
namespace OWL::TControlBar { void __cdecl _dtor(int *param_1,uint param_2); }
undefined4 * __cdecl FUN_0048d298(undefined4 *param_1);
int * __cdecl FUN_0048d2f8(int *param_1,LPCSTR param_2,LPCSTR param_3,LPCSTR param_4,DEVMODEA *param_5);
undefined4 * __cdecl FUN_0048d35c(undefined4 *param_1,undefined4 param_2,int param_3);
namespace OWL::TCreatedDC { void __cdecl _dtor(int *param_1,byte param_2); }
int * __cdecl FUN_0048d424(int *param_1,int param_2,int param_3);
int * __cdecl FUN_0048d474(int *param_1,uint param_2,uint param_3,uint param_4);
int * __cdecl FUN_0048d4ac(int *param_1,ushort *param_2);
bool __cdecl FUN_0048d4f0(uint param_1,uint param_2,uint param_3);
int __cdecl FUN_0048d544(uint param_1,uint param_2,uint param_3);
undefined4 __cdecl FUN_0048d5c8(uint param_1);
void __cdecl FUN_0048d600(int *param_1,uint *param_2,uint *param_3,uint *param_4);
uint __cdecl FUN_0048d6b0(int *param_1);
int * __cdecl FUN_0048d6d8(int *param_1,int *param_2,int param_3);
int __cdecl FUN_0048d714(int *param_1,uint param_2);
uint __cdecl FUN_0048d764(int *param_1);
void __cdecl FUN_0048d78c(int *param_1,int *param_2,int param_3);
void __cdecl FUN_0048d7a0(int param_1);
undefined4 * __cdecl FUN_0048d7c8(undefined4 *param_1,undefined4 param_2);
undefined4 * __cdecl FUN_0048d82c(undefined4 *param_1);
undefined4 * __cdecl FUN_0048d870(undefined4 *param_1,undefined4 param_2,int param_3);
namespace OWL::TDC { void __cdecl _dtor(int *param_1,byte param_2); }
namespace OWL::TDC { undefined4 __cdecl vf23(undefined4 *param_1); }
void __cdecl FUN_0048d8f4(undefined4 *param_1,uint *param_2);
void __cdecl FUN_0048d938(undefined4 *param_1,uint *param_2);
namespace OWL::TDC { void __cdecl vf5(undefined4 *param_1,uint *param_2); }
void __cdecl FUN_0048d9c0(undefined4 *param_1,uint *param_2,byte param_3);
namespace OWL::TDC { void __cdecl vf6(undefined4 *param_1,int param_2); }
void __cdecl FUN_0048da38(undefined4 *param_1);
void __cdecl FUN_0048da64(undefined4 *param_1);
namespace OWL::TDC { void __cdecl vf7(undefined4 *param_1); }
void __cdecl FUN_0048dabc(undefined4 *param_1);
void __cdecl FUN_0048dae8(undefined4 *param_1);
void __cdecl FUN_0048db14(undefined4 *param_1);
void __cdecl FUN_0048db40(int *param_1);
HGDIOBJ __cdecl FUN_0048db7c(undefined4 *param_1,UINT param_2);
void __cdecl FUN_0048db90(undefined4 *param_1,uint *param_2,int *param_3,int param_4,int param_5,DWORD param_6);
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
void __cdecl FUN_0048e150(undefined4 param_1,undefined *param_2);
undefined1 __cdecl FUN_0048e178(undefined4 param_1,undefined *param_2);
undefined1 __cdecl FUN_0048e1a8(undefined4 param_1,undefined *param_2);
void __cdecl FUN_0048e1e0(undefined4 param_1,undefined *param_2);
void __cdecl FUN_0048e20c(undefined4 param_1,undefined *param_2);
void __cdecl FUN_0048e230(undefined4 param_1,undefined *param_2);
undefined1 __cdecl FUN_0048e254(undefined4 param_1,undefined *param_2);
bool __cdecl FUN_0048e27c(undefined4 param_1,undefined *param_2);
void __cdecl FUN_0048e2ac(undefined4 param_1,undefined *param_2);
void __cdecl FUN_0048e2d4(undefined4 param_1,undefined *param_2);
undefined1 __cdecl FUN_0048e314(undefined4 param_1,undefined *param_2);
void __cdecl FUN_0048e370(undefined4 param_1,undefined *param_2);
undefined1 __cdecl FUN_0048e3ac(undefined4 param_1,undefined *param_2);
void __cdecl FUN_0048e3ec(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0048e420(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0048e444(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0048e46c(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0048e4ac(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0048e4d4(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0048e518(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0048e544(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0048e578(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0048e5ac(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0048e5e4(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0048e61c(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0048e65c(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0048e684(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0048e6c0(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0048e6ec(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0048e724(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0048e764(undefined4 param_1,undefined *param_2,undefined4 param_3,int param_4,ushort param_5);
namespace OWL::TEventHandler { undefined4 __stdcall vf0(void); }
undefined4 __cdecl FUN_0048e7e0(undefined4 param_1,int param_2);
undefined4 __cdecl FUN_0048e808(undefined4 param_1,int *param_2,int *param_3,undefined *param_4);
undefined4 * __cdecl FUN_0048e860(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_0048e99c(undefined4 *param_1,int *param_2);
namespace OWL::TXBase { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TXBase { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXBase { void __cdecl vf3(int *param_1); }
namespace OWL::TXBase { undefined4 __cdecl vf1(int param_1); }
undefined4 __stdcall FUN_0048ebe4(void);
undefined4 __stdcall FUN_0048ec38(undefined4 param_1,undefined1 *param_2);
undefined4 __cdecl FUN_0048ec48(int *param_1,LPCSTR param_2,char *param_3);
undefined4 * __cdecl FUN_0048ed28(undefined4 *param_1,int param_2,undefined4 param_3);
undefined4 * __cdecl FUN_0048ed90(undefined4 *param_1,uint param_2,int param_3);
namespace OWL::TXOwl { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TXOwl { void __cdecl vf4(undefined4 param_1,int *param_2); }
namespace OWL::TXOwl { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXOwl { void __cdecl vf3(int *param_1); }
undefined4 * __cdecl FUN_0048efdc(undefined4 *param_1,int *param_2);
void __cdecl FUN_0048f024(int param_1,undefined4 param_2);
int __cdecl FUN_0048f078(int param_1,char *param_2,uint param_3,int param_4);
int __cdecl FUN_0048f258(int param_1,uint param_2,undefined4 param_3,int param_4);
int __cdecl FUN_0048f35c(int param_1,uint param_2,undefined4 param_3,int param_4);
undefined4 * __cdecl FUN_0048f460(undefined4 *param_1);
namespace OWL::TXOutOfMemory { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXOutOfMemory { void __cdecl vf3(int *param_1); }
void __stdcall FUN_0048f674(void);
namespace OWL::TXOutOfMemory { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
uint * __cdecl FUN_0048f708(uint *param_1,undefined4 param_2,int param_3);
uint * __cdecl FUN_0048f75c(uint *param_1,LPCSTR param_2,int param_3,int param_4,int param_5,int param_6, int param_7,byte param_8,byte param_9,byte param_10,byte param_11,byte param_12, byte param_13,byte param_14,byte param_15);
uint * __cdecl FUN_0048f7fc(uint *param_1,LOGFONTA *param_2);
void __cdecl FUN_0048f85c(undefined4 param_1,LPTEXTMETRICA param_2,int param_3);
void __cdecl FUN_0048f898(undefined4 param_1,LPTEXTMETRICA param_2);
LONG * __cdecl FUN_0048f8fc(LONG *param_1,undefined4 param_2);
LONG * __cdecl FUN_0048f980(LONG *param_1,undefined4 param_2,uint *param_3);
LONG * __cdecl FUN_0048f9ec(LONG *param_1,undefined4 param_2,int param_3,uint *param_4);
int __cdecl FUN_0048fa68(int param_1,undefined4 *param_2);
undefined1 __cdecl FUN_0048fac4(undefined4 *param_1);
uint * __cdecl FUN_0048faec(uint *param_1);
undefined4 * __cdecl FUN_0048fb40(undefined4 *param_1,int param_2,undefined4 *param_3,uint param_4);
int __cdecl FUN_0048fb88(int param_1,int param_2);
undefined4 __cdecl FUN_0048fba0(int param_1);
void __cdecl FUN_0048fbc8(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6);
undefined4 * __stdcall FUN_0048fcec(undefined4 *param_1,undefined4 param_2);
int __stdcall FUN_0048fcf2(void);
namespace OWL::TGadget { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TGadget { undefined4 __cdecl vf4(int *param_1,int param_2); }
namespace OWL::TGadget { void __stdcall vf5(void); }
namespace OWL::TGadget { void __stdcall vf6(void); }
void __cdecl FUN_0048fe6c(int param_1,undefined1 param_2,undefined1 param_3);
namespace OWL::TGadget { void __cdecl vf1(int param_1,char param_2); }
namespace OWL::TGadget { void __cdecl vf3(int *param_1,int *param_2); }
void __cdecl FUN_0048ff24(int param_1,undefined4 *param_2);
void __cdecl FUN_0048ff54(int param_1,undefined4 *param_2);
void __cdecl FUN_0048ff7c(int param_1,undefined4 param_2);
namespace OWL::TGadget { undefined4 __cdecl vf11(int param_1,int *param_2); }
namespace OWL::TGadget { void __cdecl vf7(int param_1); }
namespace OWL::TGadget { void __stdcall vf8(void); }
namespace OWL::TGadget { void __cdecl vf10(int param_1); }
namespace OWL::TGadget { void __cdecl vf9(int param_1); }
void __cdecl FUN_00490358(int param_1);
void __cdecl FUN_004903b8(int param_1);
void __cdecl FUN_00490404(int param_1);
namespace OWL::TGadget { void __cdecl vf13(int param_1,undefined4 *param_2); }
namespace OWL::TGadget { void __cdecl vf12(int *param_1); }
namespace OWL::TGadget { void __cdecl vf2(int param_1,int *param_2); }
void __cdecl FUN_004905e8(int param_1,int *param_2,int *param_3,int *param_4,int *param_5);
void __cdecl FUN_004906a0(int param_1,int *param_2);
namespace OWL::TGadget { void __cdecl vf14(int param_1); }
namespace OWL::TGadget { void __stdcall vf15(void); }
namespace OWL::TGadget { void __cdecl vf16(int param_1); }
namespace OWL::TGadget { void __cdecl vf17(int param_1); }
namespace OWL::TGadget { void __cdecl vf19(int param_1); }
namespace OWL::TGadget { void __stdcall vf18(void); }
namespace OWL::TGadget { void __stdcall vf20(void); }
int * __cdecl FUN_00490848(int *param_1,int param_2,undefined4 param_3,undefined1 param_4);
namespace OWL::TSeparatorGadget { void __cdecl vf8(int param_1); }
namespace OWL::TSeparatorGadget { void __cdecl vf12(int *param_1,undefined4 *param_2); }
int * __cdecl FUN_00490ab0(int *param_1,undefined4 param_2);
namespace OWL::TSizeGripGadget { void __cdecl vf12(int param_1,undefined4 *param_2); }
namespace OWL::TSizeGripGadget { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 * __cdecl FUN_00490ca8(undefined4 *param_1);
namespace OWL::TGadgetList { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
int * __cdecl FUN_00490d84(int param_1);
int __cdecl FUN_00490dd0(int param_1,int param_2);
int __cdecl FUN_00490df0(int param_1,int param_2);
namespace OWL::TGadgetList { void __cdecl vf1(int *param_1,int param_2,int param_3,int param_4); }
namespace OWL::TGadgetList { void vf2(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5, int param_6,int param_7); }
namespace OWL::TGadgetList { int __cdecl vf3(int *param_1,int param_2); }
namespace OWL::TGadgetList { void __stdcall vf4(void); }
namespace OWL::TGadgetList { void __stdcall vf5(void); }
namespace OWL::TGadgetWindow { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
uint * __cdecl FUN_00490fa8(uint *param_1,int param_2,char param_3,byte param_4);
int * __cdecl FUN_00491150(int *param_1,int param_2,undefined4 param_3,undefined1 param_4,uint *param_5, int param_6);
namespace OWL::TGadgetWindow { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TGadgetWindow { void EvSysColorChange(undefined4 param_1,undefined4 param_2,int *param_3,int param_4); }
namespace OWL::TGadgetWindow { void __cdecl vf12(int *param_1,int param_2); }
uint __cdecl FUN_00491668(int *param_1);
undefined4 __cdecl FUN_004916ac(int *param_1,int param_2);
void __cdecl FUN_004916d0(int param_1,int param_2);
void __cdecl FUN_004916ec(int *param_1,int param_2);
uint __cdecl FUN_004917ac(int param_1,int param_2);
namespace OWL::TGadgetWindow { void __cdecl vf13(int *param_1); }
namespace OWL::TGadgetWindow { void __cdecl vf14(int *param_1,undefined4 *param_2); }
undefined4 * __cdecl FUN_004918cc(undefined4 *param_1);
int __cdecl FUN_00491968(int *param_1);
namespace OWL::TGadgetWindow { void __cdecl vf1(int *param_1); }
namespace OWL::TGadgetWindow { void __cdecl vf2(int *param_1,int param_2); }
namespace OWL::TGadgetWindow { void __cdecl vf16(int *param_1,int *param_2); }
namespace OWL::TGadgetWindow { void __cdecl vf20(int param_1,int param_2,int param_3,int *param_4); }
namespace OWL::TGadgetWindow { int * __cdecl vf18(int *param_1,int param_2); }
void __cdecl FUN_00491cec(int param_1,int *param_2);
void __cdecl FUN_00491fbc(int param_1,int *param_2);
void __cdecl FUN_004921d4(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6, int *param_7);
void __cdecl FUN_004922a4(int param_1,int *param_2);
namespace OWL::TGadgetWindow { void __cdecl vf17(int param_1,int param_2,int *param_3); }
void __cdecl FUN_00492634(int param_1);
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
void __stdcall FUN_00492f80(int *param_1);
void __stdcall FUN_00492f8c(int *param_1);
namespace OWL::TGadgetWindow { void __cdecl vf4(int *param_1,byte param_2); }
void __cdecl FUN_0049304c(int *param_1,undefined4 param_2);
namespace OWL::TGadgetWindow { undefined4 __cdecl vf24(int *param_1,int param_2,HWND param_3,undefined4 param_4); }
namespace OWL::TGadgetWindow { void __cdecl vf25(int *param_1,int param_2); }
namespace OWL::TGadgetWindow::TLayoutInfo { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_00493498(undefined4 *param_1);
namespace OWL::TAPointer_OWL_TRect { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 * __cdecl FUN_004934c8(undefined4 *param_1);
undefined4 * __cdecl FUN_004934f8(undefined4 *param_1,undefined4 param_2,int param_3);
void __cdecl FUN_00493530(int *param_1,uint param_2);
void __cdecl FUN_00493548(int param_1,uint param_2);
undefined4 * __cdecl FUN_00493560(undefined4 *param_1,uint param_2,undefined4 param_3);
namespace OWL::TXGdi { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXGdi { void __cdecl vf3(int *param_1); }
void __cdecl FUN_00493800(uint param_1,undefined4 param_2);
namespace OWL::TXGdi { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 __stdcall FUN_0049389c(void);
LONG __stdcall FUN_0049398e(void);
void __cdecl FUN_00493a94(int param_1);
undefined4 __cdecl FUN_00493ae0(uint param_1);
uint __cdecl FUN_00493bac(int param_1,uint *param_2);
void __cdecl FUN_00493c34(uint param_1,undefined1 param_2);
int __stdcall FUN_00493cc0(int param_1,uint *param_2);
int __stdcall FUN_00493cc6(void);
void __cdecl FUN_00493dec(int param_1,int param_2);
void __cdecl FUN_00493e88(uint param_1);
uint __cdecl FUN_00493eb4(uint param_1);
undefined4 * __cdecl FUN_00493fdc(undefined4 *param_1);
undefined4 * __cdecl FUN_0049402c(undefined4 *param_1,undefined4 param_2,int param_3);
namespace OWL::TGdiObject { void __cdecl _dtor(uint *param_1,byte param_2); }
namespace OWL::TObjInfo { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_004941a4(int param_1,byte param_2);
void __cdecl FUN_004942c0(int param_1,byte param_2);
void __cdecl FUN_00494390(int param_1,byte param_2);
void __cdecl FUN_00494454(int *param_1,int param_2,int param_3);
int * __cdecl FUN_00494470(int *param_1,int param_2,int param_3);
void __cdecl FUN_0049448c(int *param_1,int *param_2);
void __cdecl FUN_00494540(int *param_1,int *param_2);
int * __cdecl FUN_004945ec(int *param_1);
namespace OWL::TImageList { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_004946f4(int *param_1);
undefined4 __cdecl FUN_00494708(int param_1);
int __cdecl FUN_00494722(int param_1,int param_2);
void __cdecl FUN_0049473d(int param_1,int param_2,int param_3);
void __stdcall FUN_00494930(void);
void __stdcall FUN_00494986(void);
undefined4 * __cdecl FUN_004949b6(undefined4 *param_1);
undefined4 * __cdecl FUN_004949e0(undefined4 *param_1,int param_2);
bool __cdecl FUN_00494a40(int *param_1,HWND param_2,HWND param_3,int param_4,int param_5,int param_6,int param_7, UINT param_8);
undefined4 __cdecl FUN_00494a74(undefined4 *param_1);
namespace OWL::TDeferWinPos { void __cdecl _dtor(int *param_1,byte param_2); }
namespace OWL::TLayoutWindow { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_00494b04(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5);
undefined4 * __cdecl FUN_00494c8c(undefined4 *param_1);
namespace OWL::TLayoutWindow { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TLayoutWindow { void __cdecl vf1(int *param_1); }
void __cdecl FUN_00494fc8(int param_1,int param_2,undefined4 *param_3);
undefined4 __cdecl FUN_00495098(int param_1,int param_2,undefined4 *param_3);
undefined4 __cdecl FUN_004950cc(int param_1,int param_2);
namespace OWL::TLayoutWindow { void __cdecl EvSize(int *param_1,int param_2,int *param_3); }
namespace OWL::TLayoutWindow { void __cdecl vf2(int *param_1,int param_2); }
int __cdecl FUN_004952f8(int param_1,int param_2);
void __cdecl FUN_00495318(int param_1);
void __cdecl FUN_0049533c(int param_1);
void __cdecl FUN_00495374(int *param_1);
void __cdecl FUN_00495468(int *param_1,int param_2,int *param_3,int param_4);
void __cdecl FUN_00495904(int param_1,undefined1 *param_2);
void __cdecl FUN_00495978(int *param_1,char *param_2);
int __cdecl FUN_00495b64(int param_1,int param_2);
void __cdecl FUN_00495b84(int *param_1);
undefined4 * __cdecl FUN_00495c18(undefined4 *param_1,int *param_2);
int * __cdecl FUN_00495c80(int *param_1,int param_2);
namespace OWL::TLayoutWindow::Streamer { undefined4 __cdecl vf1(int param_1); }
namespace OWL::TLayoutWindow::Streamer { void __stdcall vf2(void); }
undefined1 * __cdecl FUN_00495da0(undefined1 *param_1,undefined4 param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_00495e60(undefined4 *param_1);
undefined4 __cdecl FUN_00495ec8(int *param_1);
int __cdecl FUN_00495f04(int *param_1);
int __cdecl FUN_00495f78(int param_1);
undefined4 * __cdecl FUN_00495f90(undefined4 *param_1);
void __cdecl FUN_00496088(int param_1,char param_2);
undefined4 * __cdecl FUN_004960f4(int *param_1);
namespace OWL::TLayoutWindow::Streamer { undefined4 __stdcall vf3(void); }
undefined * __stdcall FUN_004962e8(void);
void __stdcall FUN_0049637f(void);
undefined4 * __cdecl FUN_00496414(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
int __stdcall FUN_00496458(void);
undefined4 * __cdecl FUN_0049646c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
uint * __cdecl FUN_004964ec(undefined4 *param_1,char *param_2);
int __cdecl FUN_00496740(int param_1,ushort param_2);
namespace OWL::_TLocaleCacheList { void __cdecl _dtor(int *param_1,byte param_2); }
void __cdecl FUN_00496924(int *param_1,int param_2);
int __cdecl FUN_00496938(int *param_1,ushort param_2);
undefined4 __cdecl FUN_00496a1c(ushort param_1);
namespace OWL::_TLocaleCache { void __cdecl _dtor(int param_1,byte param_2); }
int __cdecl FUN_00496b14(char *param_1,char *param_2);
undefined * __stdcall FUN_00496b94(void);
void __stdcall FUN_00496bdf(void);
char * __cdecl FUN_00496d48(uint *param_1);
undefined4 * __cdecl FUN_00496d90(undefined4 *param_1);
int * __cdecl FUN_00497298(int *param_1,int param_2);
namespace OWL::TTmpBufferBase { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::__TFixedAlloc { void __cdecl _dtor(int param_1,byte param_2); }
undefined * __stdcall FUN_0049754c(void);
void __stdcall FUN_00497595(void);
int __cdecl FUN_00497628(int param_1);
namespace OWL::TMemDCCache { void __cdecl _dtor(int param_1,byte param_2); }
undefined4 __cdecl FUN_004976cc(int param_1);
void __cdecl FUN_00497724(int param_1,int param_2);
int * __cdecl FUN_00497758(int *param_1);
int * __cdecl FUN_004977c0(int *param_1,undefined4 *param_2);
int * __cdecl FUN_00497828(int *param_1,uint *param_2);
void __cdecl FUN_00497880(int *param_1);
void __cdecl FUN_004978c0(undefined4 *param_1,uint *param_2);
void __cdecl FUN_00497904(undefined4 *param_1);
namespace OWL::TMemoryDC { int * __cdecl _dtor(int *param_1,byte param_2); }
undefined4 * __cdecl FUN_004979c4(undefined4 *param_1,undefined4 param_2);
undefined4 * __cdecl FUN_00497a04(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_00497a7c(undefined4 *param_1,int *param_2,int param_3);
undefined4 * __cdecl FUN_00497aec(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * __cdecl FUN_00497b38(undefined4 *param_1,HWND param_2,int param_3);
undefined4 * __cdecl FUN_00497b98(undefined4 *param_1,HINSTANCE param_2,LPCSTR param_3);
namespace OWL::TMenu { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
UINT __cdecl FUN_00497c2c(int param_1,int param_2);
void __cdecl FUN_00497cdc(int param_1,uint param_2);
namespace OWL::TMenu { void __stdcall vf2(void); }
namespace OWL::TMenu { void __stdcall vf3(void); }
bool __cdecl FUN_00497d04(int param_1,UINT param_2,char param_3,LPCMENUITEMINFOA param_4);
bool __cdecl FUN_00497d34(int param_1,UINT param_2,char param_3,LPCMENUITEMINFOA param_4);
int * __cdecl FUN_00497d64(int param_1,int *param_2,int param_3,int param_4);
undefined4 * __cdecl FUN_00497f00(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_00497f68(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * __cdecl FUN_00497fac(undefined4 *param_1,int *param_2,int param_3);
undefined4 * __cdecl FUN_00498008(undefined4 *param_1,uint param_2);
namespace OWL::TXMenu { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXMenu { void __cdecl vf3(int *param_1); }
void __cdecl FUN_00498208(uint param_1);
namespace OWL::TXMenu { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TMenu { undefined4 __cdecl vf1(int param_1); }
uint * __stdcall FUN_004982d4(void);
int * __cdecl FUN_0049834c(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5);
namespace OWL::TMessageBar { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TMessageBar { void vf15(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4, undefined4 *param_5,undefined1 param_6,int *param_7); }
namespace OWL::TMessageBar { void __cdecl vf16(int *param_1,int *param_2); }
namespace OWL::TMessageBar { void __cdecl vf14(int *param_1,undefined4 *param_2); }
void __cdecl FUN_004987c4(int param_1,uint *param_2);
void __cdecl FUN_004987e0(int param_1,int param_2,uint *param_3);
namespace OWL::TMessageBar { void __cdecl vf27(int *param_1,uint *param_2); }
undefined4 * __cdecl FUN_004989b8(undefined4 *param_1,undefined4 param_2,uint *param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7);
namespace OWL::TModeGadget { undefined4 __cdecl vf4(int *param_1,int param_2); }
namespace OWL::TModeGadget { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TTextGadget { void __cdecl vf21(undefined4 *param_1); }
namespace OWL::TSystemMessage { void __cdecl _dtor(int param_1,byte param_2); }
undefined4 * __cdecl FUN_00498c80(undefined4 *param_1);
namespace OWL::TMsgThread { undefined4 __cdecl vf0(int *param_1); }
namespace OWL::TMsgThread { undefined4 __stdcall vf1(void); }
namespace OWL::TMsgThread { undefined4 __cdecl vf2(undefined4 param_1,MSG *param_2); }
undefined4 __cdecl FUN_00498d7c(int *param_1);
void __stdcall FUN_00498dd8(void);
namespace OWL::TMsgThread { void __cdecl vf3(int *param_1); }
namespace OWL::TMsgThread { undefined4 __stdcall vf4(void); }
namespace OWL::TMsgThread { undefined4 __cdecl vf5(undefined4 param_1,undefined4 param_2); }
void __cdecl FUN_00498ebc(undefined4 param_1,int param_2);
void __cdecl FUN_00498ed8(undefined4 param_1,int param_2);
undefined4 __cdecl FUN_00498ef4(undefined4 param_1,uint *param_2);
void __stdcall FUN_00498f10(void);
void __stdcall FUN_00498f8c(void);
int __cdecl FUN_00498fc4(int param_1,int param_2);
void __cdecl FUN_00499074(int param_1,int param_2);
uint __cdecl FUN_00499110(int param_1,int param_2);
undefined4 * __cdecl FUN_00499268(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int param_5);
namespace OWL::TStreamableClass { void __cdecl _dtor(int param_1,byte param_2); }
int * __cdecl FUN_00499330(int *param_1);
namespace OWL::TStreamableTypes { void __cdecl _dtor(int *param_1,byte param_2); }
void __cdecl FUN_00499468(int param_1,char param_2);
void __cdecl FUN_004994b4(int *param_1,undefined4 param_2,int param_3);
void __cdecl FUN_004994cc(int *param_1,undefined4 param_2,int param_3);
undefined4 __cdecl FUN_00499538(int *param_1,undefined4 param_2,uint *param_3);
void __cdecl FUN_004999b8(int *param_1,undefined4 param_2);
void __cdecl FUN_004999ec(int param_1,int param_2);
undefined4 __cdecl FUN_00499a88(int *param_1,uint param_2);
void __cdecl FUN_00499aa8(int param_1,int param_2);
void __cdecl FUN_00499b44(int *param_1,int param_2);
int __stdcall FUN_00499b70(int param_1,uint *param_2);
int __stdcall FUN_00499b76(void);
undefined4 __cdecl FUN_00499c78(int param_1,int param_2);
uint __cdecl FUN_00499cbc(int param_1,uint *param_2);
void __stdcall FUN_00499d44(void);
uint __cdecl FUN_00499d4c(int *param_1);
void __cdecl FUN_00499da0(int *param_1,undefined4 param_2,int param_3);
void __cdecl FUN_00499dec(int *param_1,undefined4 *param_2,uint param_3);
uint __cdecl FUN_00499e9c(int *param_1);
uint __cdecl FUN_00499ec0(int *param_1);
undefined4 __cdecl FUN_00499f04(int *param_1);
uint __cdecl FUN_00499f48(int *param_1);
int __cdecl FUN_00499f7c(int *param_1,int param_2,int param_3);
undefined4 * __cdecl FUN_00499fc4(int *param_1);
int __cdecl FUN_0049a010(int *param_1,undefined4 param_2);
void __cdecl FUN_0049a094(int *param_1,undefined4 *param_2,int *param_3);
void __cdecl FUN_0049a180(int *param_1);
int __cdecl FUN_0049a1b0(int *param_1,int *param_2,undefined4 param_3);
void __cdecl FUN_0049a238(int *param_1,byte param_2);
void __cdecl FUN_0049a294(int *param_1,undefined4 param_2,int param_3);
void __cdecl FUN_0049a2e0(int *param_1);
void __cdecl FUN_0049a31c(int *param_1);
void __cdecl FUN_0049a358(int *param_1,undefined4 *param_2,uint param_3);
void __cdecl FUN_0049a3c4(int *param_1,uint *param_2);
void __cdecl FUN_0049a40c(int *param_1,uint *param_2);
void __cdecl FUN_0049a454(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_0049a490(int *param_1,int *param_2,undefined4 param_3);
void __cdecl FUN_0049a508(int *param_1,int *param_2);
void __cdecl FUN_0049a554(int *param_1,int *param_2,undefined4 param_3);
void __cdecl FUN_0049a758(undefined4 *param_1);
namespace OWL::TPointer_OWL_TStreamer { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_0049a788(int param_1,byte param_2);
void __cdecl FUN_0049a8dc(int param_1,byte param_2);
void __cdecl FUN_0049aa2c(int param_1,byte param_2);
void __cdecl FUN_0049ab28(int param_1,byte param_2);
void __cdecl FUN_0049abe8(int param_1,byte param_2);
FARPROC __stdcall FUN_0049ac18(void);
void __stdcall FUN_0049ac2e(void);
undefined4 __stdcall FUN_0049ac6c(void);
undefined * __stdcall FUN_0049ac74(void);
void __cdecl FUN_0049ac7c(undefined4 param_1);
void __stdcall FUN_0049ac8c(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
undefined1 * __cdecl FUN_0049acf4(undefined4 param_1);
undefined4 * __stdcall FUN_0049adbc(void);
void __stdcall FUN_0049ae74(void);
void __cdecl FUN_0049ae7c(int param_1);
void FUN_0049aea4(int param_1);
namespace TThunkAllocator { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_0049af68(LPVOID param_1);
int * __cdecl FUN_0049af8c(int *param_1,HWND param_2);
namespace OWL::TPaintDC { void __cdecl _dtor(int *param_1,byte param_2); }
uint * __cdecl FUN_0049b094(uint *param_1,undefined4 param_2,int param_3);
namespace OWL::TPaintDC { int vf24(...); }   // not decompiled
uint * __cdecl FUN_0049b104(uint *param_1,int param_2,BYTE param_3);
void __cdecl FUN_0049b14c(uint *param_1,int param_2,BYTE param_3);
namespace OWL::TFileName { void __cdecl _dtor(int param_1,byte param_2); }
uint * __cdecl FUN_0049b6a8(uint *param_1,uint *param_2,int param_3,int param_4);
int * __cdecl FUN_0049b7b0(int *param_1,int param_2,undefined4 param_3,uint param_4);
undefined4 __cdecl FUN_0049b904(int param_1,LPCSTR param_2);
namespace OWL::TPickListPopup { undefined4 __cdecl vf7(int param_1); }
namespace OWL::TPickListPopup { undefined4 __cdecl vf18(int param_1,undefined4 param_2); }
void __cdecl FUN_0049b9d4(int param_1);
void __cdecl FUN_0049baac(int param_1,int param_2);
void __cdecl FUN_0049bb48(int param_1,undefined *param_2);
namespace OWL::TPickListPopup { void __cdecl _dtor(int *param_1,uint param_2); }
undefined4 * __cdecl FUN_0049bca0(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_0049bcdc(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
namespace OWL::TPreviewDCBase { undefined4 __cdecl vf23(int param_1); }
undefined4 * __cdecl FUN_0049bd60(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4,RECT *param_5);
namespace OWL::TPrintPreviewDC { void __cdecl _dtor(int *param_1,byte param_2); }
namespace OWL::TPrintPreviewDC { void __cdecl vf5(int param_1,int *param_2); }
namespace OWL::TPrintPreviewDC { void __cdecl vf6(undefined4 *param_1,int param_2); }
namespace OWL::TPrintPreviewDC { void __cdecl vf7(undefined4 *param_1); }
namespace OWL::TPrintPreviewDC { void __cdecl vf3(int param_1,int param_2); }
namespace OWL::TPrintPreviewDC { void __cdecl vf24(undefined4 *param_1); }
namespace OWL::TPrintPreviewDC { void __cdecl vf25(undefined4 *param_1); }
namespace OWL::TPrintPreviewDC { void __cdecl vf26(undefined4 *param_1); }
namespace OWL::TPrintPreviewDC { undefined4 * __cdecl vf8(undefined4 *param_1,undefined4 *param_2); }
namespace OWL::TPrintPreviewDC { undefined4 * __cdecl vf9(undefined4 *param_1,undefined4 *param_2); }
namespace OWL::TPrintPreviewDC { undefined4 __cdecl vf10(int param_1); }
namespace OWL::TPrintPreviewDC { undefined4 __cdecl vf11(int param_1); }
namespace OWL::TPrintPreviewDC { undefined4 __cdecl vf12(int param_1); }
namespace OWL::TPrintPreviewDC { undefined4 __cdecl vf13(int param_1); }
namespace OWL::TPrintPreviewDC { undefined4 __cdecl vf14(int param_1); }
namespace OWL::TPrintPreviewDC { undefined4 __cdecl vf15(int param_1); }
namespace OWL::TPrintPreviewDC { undefined4 __cdecl vf16(int param_1); }
namespace OWL::TPreviewPage { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_0049c640(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7);
void __cdecl FUN_0049c744(int param_1,undefined4 param_2);
namespace OWL::TPreviewPage { void __cdecl vf21(int param_1,undefined4 *param_2,undefined4 param_3,RECT *param_4); }
namespace OWL::TPreviewPage { void __cdecl EvSize(int param_1,int param_2); }
namespace OWL::TPreviewDCBase { void __cdecl _dtor(int *param_1,byte param_2); }
undefined4 * __cdecl FUN_0049ca30(undefined4 *param_1,undefined4 param_2,int param_3);
int * __cdecl FUN_0049caa8(int *param_1,LPCSTR param_2,LPCSTR param_3,LPCSTR param_4,DEVMODEA *param_5);
namespace OWL::TView { undefined4 __cdecl vf1(int param_1); }
namespace OWL::TView { undefined4 __cdecl vf2(int param_1); }
namespace OWL::TView { undefined4 __stdcall vf6(void); }
namespace OWL::TView { undefined4 __stdcall vf11(void); }
namespace OWL::TPrintDC { void vf24(char *param_1,byte *param_2,char param_3); }
namespace OWL::TToolbarRes { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TResource_OWL_TOOLBARTEMPLATE_241 { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 __cdecl FUN_0049ccc8(int param_1);
undefined4 __cdecl FUN_0049ccd8(int param_1);
undefined4 __cdecl FUN_0049cce4(int param_1);
undefined2 __cdecl FUN_0049ccf0(int param_1);
int __cdecl FUN_0049cd08(int param_1);
undefined2 __cdecl FUN_0049cd1c(int param_1);
undefined2 __cdecl FUN_0049cd34(int param_1);
undefined * __cdecl FUN_0049ce10(undefined4 *param_1,char *param_2,ushort param_3);
int * __cdecl FUN_0049ce64(int *param_1);
int * __cdecl FUN_0049ced4(int *param_1,RECT *param_2);
namespace OWL::TRegion { BOOL __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 * __cdecl FUN_0049cf60(undefined4 *param_1,RECT *param_2);
undefined4 * __cdecl FUN_0049cfc0(undefined4 *param_1,RECT *param_2);
namespace OWL::TRegLink { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined * __stdcall FUN_0049d0a8(void);
void __stdcall FUN_0049d0fd(void);
void __cdecl FUN_0049d148(int *param_1,int param_2,ushort param_3,uint *param_4);
namespace OWL::TStatusBar { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_0049d444(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, uint *param_6,int param_7);
undefined4 __cdecl FUN_0049d994(int *param_1);
undefined4 __cdecl FUN_0049da2c(int param_1,int param_2);
namespace OWL::TStatusBar { void __cdecl vf20(int param_1,undefined4 param_2,int *param_3,int *param_4); }
namespace OWL::TStatusBar { void __cdecl vf5(int *param_1,int param_2,int param_3,int param_4); }
namespace OWL::TStatusBar { void __cdecl vf27(int *param_1,uint *param_2); }
namespace OWL::TStatusBar { undefined4 __cdecl EvNCHitTest(int *param_1,LPPOINT param_2); }
namespace OWL::TStatusBar { void __cdecl EvMsg_7ef5(int *param_1,int param_2); }
namespace OWL::TModeStrings { void __cdecl _dtor(int param_1,byte param_2); }
void __stdcall FUN_0049dec0(void);
void __stdcall FUN_0049df16(void);
undefined4 * __cdecl FUN_0049df48(undefined4 *param_1,int *param_2);
int * __cdecl FUN_0049dfb0(int *param_1,int param_2);
int * __cdecl FUN_0049e070(int *param_1,undefined4 *param_2);
int * __cdecl FUN_0049e0c0(int *param_1,int param_2);
namespace OWL::TWindow::Streamer { int __cdecl vf1(int param_1,int *param_2,int param_3); }
namespace OWL::TWindow::Streamer { void __cdecl vf2(int param_1,int *param_2); }
undefined4 * __cdecl FUN_0049e6d8(int *param_1);
namespace OWL::TWindow::Streamer { undefined4 __stdcall vf3(void); }
uint * __cdecl FUN_0049e814(uint *param_1,uint *param_2,char *param_3,uint param_4);
void __cdecl FUN_0049e85c(uint *param_1,uint *param_2,char *param_3);
namespace OWL::TTabControl { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_0049e8f0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
namespace OWL::TTabControl { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TTabControl { char * __cdecl vf10(int param_1); }
namespace OWL::TTabControl { undefined4 __stdcall vf9(void); }
namespace OWL::TTabControl { void __cdecl EvVScroll(int *param_1); }
namespace OWL::TTabControl { void __cdecl EvHScroll(int *param_1); }
undefined4 * __cdecl FUN_0049eb84(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,uint *param_6,undefined4 param_7);
namespace OWL::TTextGadget { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_0049ed04(int param_1);
void __cdecl FUN_0049ed44(int param_1,uint *param_2);
namespace OWL::TTextGadget { void __cdecl vf2(int param_1,int *param_2); }
namespace OWL::TTextGadget { void __cdecl vf12(int *param_1,int *param_2); }
void __cdecl FUN_0049f044(int param_1);
void __cdecl FUN_0049f058(int param_1);
void __cdecl FUN_0049f098(int *param_1,int *param_2,int param_3);
int * __cdecl FUN_0049f0c4(int *param_1,uint param_2);
int * __cdecl FUN_0049f1b4(int *param_1,uint param_2);
uint * __cdecl FUN_0049f1fc(uint *param_1,int *param_2,int param_3,int param_4,int param_5);
uint * __cdecl FUN_0049f29c(uint *param_1,FILETIME *param_2);
undefined4 __cdecl FUN_0049f300(uint *param_1);
undefined4 * __cdecl FUN_0049f374(undefined4 *param_1,char param_2);
undefined4 * __cdecl FUN_0049f414(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4, uint *param_5);
undefined4 * __cdecl FUN_0049f498(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint *param_4);
void __cdecl FUN_0049f504(int param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_0049f51c(int param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_0049f534(int param_1,uint *param_2,char param_3);
void __cdecl FUN_0049f588(int param_1,uint *param_2);
undefined4 * __cdecl FUN_0049f5a4(undefined4 *param_1,int param_2,undefined4 param_3);
namespace OWL::TTooltipEnabler { void __cdecl vf1(int param_1,uint *param_2); }
namespace OWL::TTooltipEnabler { void __stdcall vf2(void); }
int * __cdecl FUN_0049f628(int *param_1,int param_2,undefined4 param_3,char param_4,int param_5);
namespace OWL::TTooltip { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TTooltip { char * __stdcall vf9(void); }
namespace OWL::TFrameWindow { undefined4 __stdcall vf4(void); }
namespace OWL::TFrameWindow { undefined4 __stdcall vf5(void); }
undefined4 * __cdecl FUN_0049f930(undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4);
undefined4 * __cdecl FUN_0049f990(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
int * __cdecl FUN_0049f9e0(int *param_1,int *param_2);
void __cdecl FUN_0049fa58(LPRECT param_1,undefined4 *param_2);
undefined4 __cdecl FUN_0049fa74(undefined4 *param_1,LPRECT param_2,uint param_3,uint param_4);
void __cdecl FUN_0049fec8(undefined4 *param_1,int *param_2,uint param_3,uint *param_4,uint *param_5);
undefined * __stdcall FUN_004a0094(void);
void __stdcall FUN_004a0119(void);
uint * __cdecl FUN_004a01ec(uint *param_1);
undefined4 __cdecl FUN_004a0230(int param_1,int *param_2);
uint * __stdcall FUN_004a02ec(void);
undefined4 __cdecl FUN_004a02fc(int *param_1);
void __cdecl FUN_004a0314(undefined4 *param_1,int *param_2,int *param_3,undefined4 *param_4,int *param_5, int *param_6);
void __cdecl FUN_004a03e4(undefined4 *param_1,undefined4 *param_2,int *param_3,uint *param_4);
void __cdecl FUN_004a0494(undefined4 *param_1,undefined4 *param_2,int *param_3);
undefined4 __cdecl FUN_004a04b0(int *param_1);
void __cdecl FUN_004a05b0(uint *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5,int param_6, char param_7,char param_8,int *param_9,uint *param_10);
void __cdecl FUN_004a0bc8(undefined4 *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5, int param_6,char param_7,char param_8,int *param_9,uint *param_10);
void __cdecl FUN_004a0c7c(undefined4 param_1,int *param_2,int *param_3,int *param_4,int param_5,char param_6, char param_7,COLORREF *param_8,ushort param_9);
void __cdecl FUN_004a1174(undefined4 *param_1,int *param_2,int *param_3,int param_4,char param_5,char param_6);
void __cdecl FUN_004a12b4(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int param_5,char param_6, char param_7);
namespace OWL::TUIFaceData { void __cdecl _dtor(uint *param_1,byte param_2); }
namespace OWL::THatch8x8Brush { void __cdecl _dtor(uint *param_1,byte param_2); }
void __cdecl FUN_004a153c(undefined4 *param_1);
namespace OWL::TPointer_OWL_TBitmap { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __stdcall FUN_004a15a0(void);
undefined4 __cdecl FUN_004a1e48(undefined4 param_1);
void __cdecl FUN_004a1e70(undefined4 param_1,undefined4 *param_2,LPRECT param_3,UINT param_4,UINT param_5);
undefined4 __cdecl FUN_004a1e90(undefined4 param_1,undefined4 *param_2,LPRECT param_3,UINT param_4,UINT param_5);
namespace OWL::TUpDown { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
undefined4 * __cdecl FUN_004a1f1c(undefined4 *param_1,undefined4 param_2);
int * __cdecl FUN_004a1f48(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6);
namespace OWL::TUpDown { char * __cdecl vf9(int param_1); }
namespace OWL::TUpDown { void __cdecl vf10(int *param_1); }
namespace OWL::TUpDown { void __cdecl EvVScroll(int *param_1); }
namespace OWL::TUpDown { void __cdecl EvHScroll(int *param_1); }
void __stdcall FUN_004a21c4(void);
void __stdcall FUN_004a221a(void);
namespace OWL::TUrlLink { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace OWL::TUrlLink { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TUrlLink { char * __stdcall vf11(void); }
namespace OWL::TUrlLink { void __cdecl vf15(int *param_1); }
namespace OWL::TUrlLink { void __cdecl vf13(int *param_1,byte param_2); }
void __cdecl FUN_004a2818(int *param_1,int param_2);
namespace OWL::TUrlLink { void __cdecl vf14(int *param_1,LPMSG param_2); }
LRESULT __stdcall FUN_004a29fc(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
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
void __cdecl FUN_004a3194(int *param_1,undefined1 param_2);
void __cdecl FUN_004a31b8(int *param_1);
namespace OWL::TUrlLink { uint __cdecl vf19(undefined4 param_1,uint *param_2,UINT param_3); }
namespace OWL::TUrlLink { void __cdecl vf20(int *param_1,undefined4 param_2); }
undefined4 * __cdecl FUN_004a412c(undefined4 *param_1,int *param_2);
int * __cdecl FUN_004a4194(int *param_1,int param_2);
namespace OWL::TUrlLink::Streamer { undefined4 __cdecl vf1(int param_1,int *param_2); }
void __cdecl FUN_004a43c8(int param_1,int *param_2);
namespace OWL::TUrlLink::Streamer { void __cdecl vf2(int param_1,int *param_2); }
void __cdecl FUN_004a44dc(int param_1,int *param_2);
undefined4 * __cdecl FUN_004a4530(int *param_1);
namespace OWL::TUrlLink::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TUrlLink { undefined4 __cdecl vf12(int param_1); }
void __cdecl FUN_004a4778(undefined4 *param_1);
namespace OWL::TPointer_OWL_TFont { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_004a47e8(int param_1);
undefined4 __cdecl FUN_004a4842(int *param_1,int *param_2);
undefined * __stdcall FUN_004a486b(void);
uint __stdcall FUN_004a48d0(void);
void __cdecl FUN_004a4a60(int param_1,int *param_2);
undefined4 __cdecl FUN_004a4a90(int param_1);
undefined4 __cdecl FUN_004a4ab5(int param_1);
bool __cdecl FUN_004a4b3e(int param_1,int param_2);
bool __cdecl FUN_004a4b55(int param_1,int *param_2);
undefined * __cdecl FUN_004a4b6b(int param_1);
void __stdcall FUN_004a4ca0(void);
void __stdcall FUN_004a4d13(void);
namespace OWL::TWindow { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
undefined4 * __cdecl FUN_004a4d68(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
namespace OWL::TCommandEnabler { void __cdecl vf0(int param_1); }
void __cdecl FUN_004a4db4(int param_1);
int * __cdecl FUN_004a4de0(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5);
int * __cdecl FUN_004a4ed0(int *param_1,int param_2,undefined4 param_3,int *param_4);
int * __cdecl FUN_004a4fbc(int *param_1,int param_2);
void __cdecl FUN_004a5098(int param_1,undefined4 param_2,uint *param_3,int param_4);
void __cdecl FUN_004a50ec(int param_1,undefined4 param_2,int *param_3);
void __cdecl FUN_004a5194(int param_1,undefined4 param_2,int param_3);
namespace OWL::TWindow { void __cdecl _dtor(undefined4 *param_1,uint param_2); }
namespace OWL::TWindow { bool __cdecl vf10(int param_1,LPMSG param_2); }
namespace OWL::TWindow { undefined4 __cdecl vf11(int param_1,int param_2); }
namespace OWL::TWindow { void __cdecl EvSysColorChange(int param_1); }
namespace OWL::TWindow { void __cdecl vf32(int param_1,int param_2); }
namespace OWL::TWindow { void __cdecl vf13(int param_1,int param_2); }
namespace OWL::TWindow { undefined4 __cdecl vf14(int param_1); }
void __cdecl FUN_004a56f8(int param_1,undefined4 param_2);
undefined4 __cdecl FUN_004a5774(int param_1);
namespace OWL::TWindow { undefined4 __cdecl vf18(undefined4 *param_1,int param_2,HWND param_3,undefined4 param_4); }
namespace OWL::TWindow { undefined4 __cdecl vf19(undefined4 *param_1,int param_2,undefined4 *param_3); }
namespace OWL::TWindow { void __cdecl vf20(undefined4 *param_1,int param_2); }
void __cdecl FUN_004a5b5c(undefined4 *param_1,HWND param_2,undefined4 *param_3);
namespace OWL::TWindow { void __cdecl vf17(int param_1,UINT param_2,WPARAM param_3,LPARAM param_4); }
undefined4 * __cdecl FUN_004a5cec(undefined4 *param_1);
void __cdecl FUN_004a5d74(int param_1,int param_2);
void __cdecl FUN_004a5da0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, undefined4 param_6);
undefined4 __cdecl FUN_004a5dd0(int param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_004a5e10(int param_1);
void __cdecl FUN_004a5e28(int param_1);
namespace OWL::TWindow { undefined4 __cdecl vf16(undefined4 *param_1,uint param_2,undefined4 param_3); }
undefined4 __cdecl FUN_004a6094(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int __cdecl FUN_004a60fc(int param_1,int param_2,undefined4 param_3,int param_4);
LRESULT __cdecl FUN_004a614c(HWND param_1,LPARAM param_2);
namespace OWL::TWindow { void __cdecl EvCreate(int param_1); }
namespace OWL::TWindow { undefined4 __stdcall vf12(void); }
namespace OWL::TWindow { void __cdecl EvKillFocus(int param_1); }
namespace OWL::TWindow { void __cdecl EvSize(int param_1,int param_2); }
namespace OWL::TWindow { void __cdecl EvMove(int param_1); }
namespace OWL::TWindow { void __cdecl EvCompareitem(int param_1,undefined4 param_2,int param_3); }
namespace OWL::TWindow { void __cdecl EvDeleteitem(int param_1,undefined4 param_2,int param_3); }
namespace OWL::TWindow { void __cdecl EvDrawItem(int param_1,undefined4 param_2,int *param_3); }
namespace OWL::TWindow { void __cdecl EvMeasureItem(undefined4 *param_1,WPARAM param_2,int *param_3); }
namespace OWL::TWindow { void __cdecl EvShared_4a6518(int param_1); }
void __cdecl FUN_004a65bc(int param_1,int param_2,undefined4 param_3,HWND param_4);
namespace OWL::TWindow { LRESULT __cdecl EvRegisteredMsg_4a6634(int param_1,int param_2,LPARAM param_3); }
namespace OWL::TWindow { bool __cdecl EvMouseWheel(int param_1,byte param_2,int param_3); }
namespace OWL::TWindow { void __cdecl EvHScroll(int param_1,int param_2,undefined4 param_3,HWND param_4); }
namespace OWL::TWindow { void __cdecl EvVScroll(int param_1,int param_2,undefined4 param_3,HWND param_4); }
namespace OWL::TWindow { bool __cdecl EvEraseBkgnd(int param_1,undefined4 param_2); }
namespace OWL::TWindow { uint __cdecl EvMsg_19(int param_1,HDC param_2,undefined4 param_3,int param_4); }
namespace OWL::TWindow { void __cdecl EvPaint(int param_1); }
namespace OWL::TWindow { void __stdcall vf21(void); }
namespace OWL::TWindow { bool __cdecl EvSetCursor(int param_1,int param_2,int param_3); }
namespace OWL::TWindow { void __cdecl EvLButtonDown(int param_1); }
void __cdecl FUN_004a6bcc(int param_1);
namespace OWL::TWindow { void __cdecl vf6(int param_1,undefined4 param_2); }
namespace OWL::TWindow { void __cdecl vf28(int param_1,undefined4 *param_2); }
namespace OWL::TWindow { char * __cdecl vf29(int param_1); }
void __cdecl FUN_004a6d7c(int param_1,undefined4 param_2);
void __cdecl FUN_004a6da0(int param_1);
namespace OWL::TWindow { void __cdecl vf5(int param_1,HMENU param_2); }
namespace OWL::TWindow { undefined4 __cdecl vf4(int param_1); }
namespace OWL::TWindow { void __cdecl vf7(int param_1); }
namespace OWL::TWindow { undefined4 __cdecl vf8(int param_1); }
namespace OWL::TWindow { void __cdecl vf30(int param_1); }
namespace OWL::TWindow { void __stdcall vf31(void); }
namespace OWL::TWindow { undefined4 __cdecl vf22(int param_1,int param_2); }
namespace OWL::TWindow { void __cdecl vf23(int param_1); }
void __cdecl FUN_004a70e4(int param_1);
namespace OWL::TWindow { bool __cdecl vf3(int param_1); }
namespace OWL::TWindow { bool __cdecl vf15(int param_1); }
namespace OWL::TWindow { void __cdecl vf9(int param_1,undefined4 param_2); }
namespace OWL::TWindow { void __cdecl EvClose(int param_1); }
namespace OWL::TWindow { void __cdecl EvDestroy(int param_1); }
namespace OWL::TWindow { void __cdecl EvNCDestroy(int param_1); }
namespace OWL::TWindow { uint __cdecl EvQueryEndSession(int param_1); }
namespace OWL::TWindow { void __cdecl EvEndSession(int param_1,char param_2); }
namespace OWL::TWindow { void __cdecl EvChildinvalid(undefined4 param_1,HWND param_2); }
int __cdecl FUN_004a743c(int param_1);
void __cdecl FUN_004a7454(int param_1);
bool __cdecl FUN_004a74bc(undefined4 param_1,int param_2,uint *param_3);
undefined4 __cdecl FUN_004a74d4(int param_1);
void __cdecl FUN_004a7560(int param_1,int param_2);
int __cdecl FUN_004a7590(int param_1,undefined *param_2);
void __cdecl FUN_004a75d0(int param_1,undefined *param_2);
int __cdecl FUN_004a7604(int param_1,undefined *param_2);
undefined4 __cdecl FUN_004a7658(int param_1);
int __cdecl FUN_004a768c(int param_1);
LRESULT __cdecl FUN_004a76a8(int param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
LRESULT __cdecl FUN_004a76c4(int param_1,HWND param_2,char param_3);
undefined4 __cdecl FUN_004a7708(int param_1,char param_2);
void __cdecl FUN_004a7740(int param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
void __cdecl FUN_004a7780(int param_1,uint *param_2);
void __cdecl FUN_004a77c8(int param_1);
LONG __cdecl FUN_004a783c(int param_1,char param_2);
LONG __cdecl FUN_004a78f0(int param_1);
LONG __cdecl FUN_004a7910(int param_1,LONG param_2);
LONG __cdecl FUN_004a793c(int param_1);
LONG __cdecl FUN_004a795c(int param_1,LONG param_2);
undefined4 __cdecl FUN_004a7988(int param_1,uint param_2,uint param_3,uint param_4);
undefined4 __cdecl FUN_004a79e0(int param_1,uint param_2,uint param_3,uint param_4);
void __cdecl FUN_004a7a30(int param_1,LPRECT param_2);
void __cdecl FUN_004a7a6c(int param_1,LPRECT param_2);
bool __cdecl FUN_004a7aa0(int param_1,HWND param_2,int param_3,int param_4,int param_5,int param_6,uint param_7);
namespace OWL::TWindow { bool __cdecl vf25(int param_1,int param_2); }
undefined4 __cdecl FUN_004a7bfc(int param_1,int param_2,int param_3);
namespace OWL::TWindow { void __cdecl EvInitMenuPopup(int param_1,HMENU param_2,undefined4 param_3,char param_4); }
namespace OWL::TWindow { void __cdecl EvContextMenu(int param_1,undefined4 param_2,int param_3,int param_4); }
namespace OWL::TWindow { void __cdecl EvEnteridle(int param_1,int param_2,HWND param_3); }
int __cdecl FUN_004a7f40(int param_1,int param_2);
int __cdecl FUN_004a7f80(int param_1,int param_2,int param_3,byte param_4);
void __cdecl FUN_004a7fdc(int param_1,int param_2,int *param_3,int *param_4);
void __cdecl FUN_004a802c(int param_1,int param_2,int param_3,int param_4,byte param_5);
void __cdecl FUN_004a807c(int param_1,int param_2,UINT param_3,byte param_4);
UINT __cdecl FUN_004a80c4(int param_1,int param_2);
namespace OWL::TWindow { void __cdecl vf2(int param_1,byte param_2); }
void __cdecl FUN_004a819c(int param_1,undefined4 param_2);
void __cdecl FUN_004a8244(int param_1,int param_2,LPCSCROLLINFO param_3,byte param_4);
void __cdecl FUN_004a8260(int param_1,int param_2,LPSCROLLINFO param_3);
void __stdcall FUN_004a8278(void);
undefined4 * __cdecl FUN_004a8294(undefined4 *param_1);
undefined4 * __cdecl FUN_004a82e0(undefined4 *param_1,int param_2,uint param_3);
undefined4 * __cdecl FUN_004a83f4(undefined4 *param_1,int *param_2);
namespace OWL::TXWindow { void __cdecl vf4(int param_1,int *param_2); }
namespace OWL::TXWindow { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXWindow { void __cdecl vf3(int *param_1); }
void __cdecl FUN_004a857c(int param_1,uint param_2);
namespace OWL::TXWindow { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TCacheEntryStr { void __cdecl _dtor(int param_1,byte param_2); }
namespace OWL::TCommandEnabler { undefined4 vf3(char *param_1,byte *param_2,undefined4 param_3); }
int * __cdecl FUN_004a8674(int *param_1,undefined4 param_2);
namespace OWL::TWindowDC { int * __cdecl _dtor(int *param_1,byte param_2); }
int * __cdecl FUN_004a8760(int *param_1);
void __stdcall FUN_004a87c4(void);
undefined4 __stdcall FUN_004a87e0(void);
undefined4 __stdcall FUN_004a87f8(void);
void __stdcall FUN_004a8814(void);
int * __cdecl FUN_004a8824(int *param_1,undefined4 *param_2);
int * __cdecl FUN_004a8888(int *param_1,undefined4 *param_2);
void __cdecl FUN_004a88f0(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4);
void __stdcall FUN_004a8923(void);
undefined4 * __cdecl FUN_004a8978(undefined4 *param_1);
namespace OWL::TApplicatData { void __cdecl _dtor(int param_1,byte param_2); }
undefined * __stdcall FUN_004a89e8(void);
undefined * __stdcall FUN_004a8a84(void);
namespace OWL::TEnumInfoStr { void __cdecl _dtor(int param_1,byte param_2); }
void __stdcall FUN_004a8b48(void);
undefined * __stdcall FUN_004a8c00(void);
int * __cdecl FUN_004a8c70(int *param_1,int param_2,uint *param_3,undefined4 *param_4,undefined *param_5);
namespace OWL::TApplication { void __cdecl _dtor(undefined4 *param_1,uint param_2); }
namespace OWL::TBwccDll { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TCtl3dDll { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TDocument::TList { void __cdecl _dtor(int *param_1,byte param_2); }
namespace OWL::TApplication { undefined4 __cdecl vf12(int param_1); }
namespace OWL::TApplication { void __stdcall vf15(void); }
namespace OWL::TApplication { void __cdecl vf16(int param_1); }
namespace OWL::TApplication { void __cdecl vf17(int param_1); }
namespace OWL::TApplication { void __cdecl vf18(int param_1,undefined4 param_2); }
undefined4 __cdecl FUN_004a95d8(int param_1,undefined4 param_2);
int __cdecl FUN_004a96c8(int param_1,undefined4 param_2,uint *param_3);
namespace OWL::TApplication { void __cdecl vf2(int param_1); }
namespace OWL::TApplication { undefined4 __cdecl vf3(int param_1); }
namespace OWL::TApplication { undefined4 __cdecl vf4(int param_1); }
namespace OWL::TApplication { undefined4 __cdecl vf5(int param_1); }
namespace OWL::TApplication { undefined4 __cdecl vf6(undefined4 *param_1,MSG *param_2); }
namespace OWL::TApplication { undefined4 __cdecl vf7(int param_1,int *param_2); }
namespace OWL::TApplication { void __cdecl vf8(int param_1,int param_2,char param_3); }
namespace OWL::TApplication { void __cdecl vf14(int param_1,byte param_2); }
void __cdecl FUN_004aabec(int param_1,undefined4 param_2);
namespace OWL::TApplication { void __cdecl EvActivateApp(int param_1,char param_2); }
namespace OWL::TApplication { void __cdecl CmFileExit(int param_1); }
namespace OWL::TApplication { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace OWL::TApplication { undefined4 __cdecl vf1(int param_1); }
namespace OWL::TApplication { void __cdecl vf10(int param_1); }
void __cdecl FUN_004aae70(int param_1,int param_2);
void __cdecl FUN_004aaeb0(int param_1,int param_2);
void __cdecl FUN_004aaef4(int param_1);
undefined4 * __cdecl FUN_004aaf5c(undefined4 *param_1);
namespace OWL::TXInvalidMainWindow { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXInvalidMainWindow { void __cdecl vf3(int *param_1); }
void __stdcall FUN_004ab17c(void);
namespace OWL::TXInvalidMainWindow { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 __stdcall FUN_004ab210(HWND param_1,int *param_2);
void __cdecl FUN_004ab25d(int *param_1);
undefined4 __cdecl FUN_004ab2b4(int param_1,int param_2,uint param_3);
void __cdecl FUN_004ab404(int param_1,undefined4 param_2);
void __cdecl FUN_004ab428(int param_1,char param_2);
void __stdcall FUN_004ab47c(void);
undefined * __stdcall FUN_004ab4bc(void);
undefined4 * __cdecl FUN_004ab558(undefined4 *param_1);
namespace OWL::TBrushCache { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_004ab620(undefined4 *param_1,int param_2);
undefined1 __cdecl FUN_004ab670(uint *param_1,uint param_2,uint param_3);
void __cdecl FUN_004ab72c(int param_1,int param_2);
undefined4 __cdecl FUN_004ab764(int param_1,int param_2);
undefined4 __cdecl FUN_004ab7a0(undefined4 *param_1,int param_2);
uint * __cdecl FUN_004ab7e4(uint *param_1,undefined4 param_2,int param_3);
uint * __cdecl FUN_004ab84c(uint *param_1,uint *param_2,char param_3);
uint * __cdecl FUN_004ab954(uint *param_1,LOGBRUSH *param_2);
namespace OWL::TBrush { undefined4 __cdecl _dtor(uint *param_1,byte param_2); }
uint * __cdecl FUN_004aba20(uint *param_1,int param_2,uint *param_3,uint *param_4);
void __cdecl FUN_004aba90(uint *param_1,int param_2,uint *param_3,uint *param_4);
HBRUSH __cdecl FUN_004abacc(int param_1,uint *param_2,uint *param_3);
namespace OWL::TButton { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_004abc64(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
namespace OWL::TButton { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TButton { char * __cdecl vf9(int *param_1); }
namespace OWL::TButton { void __cdecl vf10(int *param_1); }
namespace OWL::TButton { undefined4 __cdecl EvGetDlgCode(int *param_1); }
namespace OWL::TButton { undefined4 __cdecl EvMsg_f4(int *param_1,int param_2); }
void __stdcall FUN_004abf84(void);
void __stdcall FUN_004abfda(void);
undefined4 * __cdecl FUN_004ac00c(undefined4 *param_1,int *param_2);
int * __cdecl FUN_004ac074(int *param_1,int param_2);
undefined4 __cdecl EvRegisteredMsg_4ac190_4ac190(int param_1,int *param_2);
void __cdecl FUN_004ac1c8(int param_1,int *param_2);
namespace OWL::TButton::Streamer { void __cdecl vf2(int param_1,int *param_2); }
void __cdecl FUN_004ac254(int param_1,int *param_2);
undefined4 * __cdecl FUN_004ac2a8(int *param_1);
namespace OWL::TButton::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TCheckBox { undefined4 __cdecl vf8(undefined4 *param_1,int *param_2,undefined *param_3); }
void __cdecl EvGetDlgCode_4ac408(int *param_1);
int * __cdecl FUN_004ac4b8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, int param_6);
namespace OWL::TCheckBox { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TCheckBox { char * __cdecl vf9(int *param_1); }
namespace OWL::TCheckBox { undefined4 __cdecl vf11(int *param_1,ushort *param_2,int param_3); }
void __cdecl FUN_004ac750(int *param_1,WPARAM param_2);
void __cdecl BNClicked_4ac788(int *param_1);
void __cdecl FUN_004ac7b4(int *param_1);
void __cdecl FUN_004ac7e8(int *param_1,uint *param_2,char param_3);
void __cdecl FUN_004ac9dc(int *param_1,uint *param_2,undefined4 param_3,char param_4);
void __cdecl FUN_004aca24(int *param_1,int param_2);
void __cdecl FUN_004aca54(int *param_1,uint *param_2);
int * __cdecl FUN_004acc48(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6);
namespace OWL::TComboBox { void __cdecl _dtor(int *param_1,uint param_2); }
void __cdecl FUN_004ace70(int *param_1,int param_2);
uint __cdecl FUN_004acea4(int *param_1,uint *param_2,uint *param_3);
void __cdecl FUN_004aced4(undefined4 param_1,int param_2);
namespace OWL::TComboBox { undefined4 __cdecl vf29(int *param_1,int *param_2,int param_3); }
namespace OWL::TComboBox { char * __stdcall vf30(void); }
namespace OWL::TComboBox { void __cdecl vf33(int *param_1); }
namespace OWL::TComboBox { void __cdecl vf34(int *param_1); }
void __stdcall FUN_004ad25c(void);
void __stdcall FUN_004ad2b2(void);
undefined4 * __cdecl FUN_004ad2e4(undefined4 *param_1,int *param_2);
int * __cdecl FUN_004ad34c(int *param_1,int param_2);
undefined4 __cdecl EvRegisteredMsg_4ad468_4ad468(int param_1,int *param_2);
void __cdecl FUN_004ad498(int param_1,int *param_2);
namespace OWL::TComboBox::Streamer { void __cdecl vf2(int param_1,int *param_2); }
void __cdecl FUN_004ad520(int param_1,int *param_2);
undefined4 * __cdecl FUN_004ad574(int *param_1);
namespace OWL::TComboBox::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TControl { undefined4 __cdecl vf8(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_004ad6d8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10 );
int * __cdecl FUN_004ad87c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
namespace OWL::TControl { void __cdecl _dtor(int *param_1,uint param_2); }
void __cdecl EvPaint_4ada9c(int *param_1);
void __cdecl EvCompareitem_4adac8(int param_1);
namespace OWL::TControl { undefined4 __cdecl vf1(int *param_1,int param_2); }
void __cdecl EvDeleteitem_4adb24(int param_1);
namespace OWL::TControl { void __stdcall vf2(void); }
void __cdecl EvMeasureItem_4adb44(int param_1);
namespace OWL::TControl { void __cdecl vf3(undefined4 param_1,int param_2); }
void __cdecl EvDrawItem_4adb84(int param_1);
namespace OWL::TControl { void __cdecl vf4(int param_1,int param_2); }
namespace OWL::TControl { void __cdecl vf5(undefined4 param_1,int param_2); }
namespace OWL::TControl { void __cdecl vf6(undefined4 param_1,int param_2); }
namespace OWL::TControl { void __cdecl vf7(undefined4 param_1,int param_2); }
void __stdcall FUN_004adc5c(void);
void __stdcall FUN_004adcb2(void);
undefined4 * __cdecl FUN_004adce4(undefined4 *param_1,int *param_2);
int * __cdecl FUN_004add4c(int *param_1,int param_2);
namespace OWL::TControl::Streamer { int * __cdecl vf1(int param_1,int *param_2,uint param_3); }
void __cdecl FUN_004ade80(int param_1,int *param_2);
namespace OWL::TControl::Streamer { void __cdecl vf2(int param_1,int *param_2); }
void __cdecl FUN_004adf10(int param_1,int *param_2);
undefined4 * __cdecl FUN_004adf64(int *param_1);
namespace OWL::TControl::Streamer { undefined4 __stdcall vf3(void); }
int * __cdecl FUN_004ae07c(undefined4 param_1);
undefined4 __cdecl FUN_004ae109(int param_1,int *param_2);
undefined4 __cdecl FUN_004ae15f(int param_1,int *param_2);
undefined4 __cdecl FUN_004ae188(int param_1);
namespace OWL::TDecoratedFrame { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
undefined4 __cdecl FUN_004ae20c(int param_1,int param_2);
int * __cdecl FUN_004ae248(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5, undefined1 param_6,int param_7);
void __cdecl FUN_004ae754(undefined4 *param_1);
void __cdecl FUN_004ae764(undefined4 *param_1);
namespace OWL::TDecoratedFrame { void __cdecl _dtor(int *param_1,uint param_2); }
void __cdecl FUN_004ae8fc(int param_1,undefined4 *param_2);
void __cdecl FUN_004ae91c(int param_1,undefined4 *param_2);
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
void __cdecl FUN_004af210(int param_1,int param_2,int param_3);
void __cdecl FUN_004af394(int *param_1,int param_2,int param_3);
void __cdecl FUN_004af558(int *param_1,int param_2,int param_3);
void __cdecl FUN_004af794(int *param_1,int param_2,int param_3);
namespace OWL::TDecoratedFrame { void __cdecl vf1(int *param_1,int param_2,int param_3); }
namespace OWL::TDecoratedFrame { undefined4 * __cdecl vf5(int param_1); }
namespace OWL::TDecoratedFrame { undefined4 __cdecl vf8(int *param_1); }
namespace OWL::TDecoratedFrame { undefined4 __cdecl vf6(int *param_1); }
namespace OWL::TDecoratedFrame { undefined4 __cdecl vf7(int *param_1); }
void __cdecl Child4914547_Notify4914568_4afd49(int param_1);
void __cdecl FUN_004afd5e(int param_1);
void __cdecl FUN_004afd9d(int param_1,LPMSG param_2);
void __cdecl Child4977508_Notify4972756_4afddc(int param_1);
void __cdecl FUN_004afdf1(int param_1);
namespace OWL::TDialog { undefined4 __cdecl vf14(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_004affb4(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5);
bool __cdecl FUN_004b0208(int param_1);
void __cdecl FUN_004b0224(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
namespace OWL::TDialog { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TDialog { bool __cdecl vf7(int *param_1,LPMSG param_2); }
namespace OWL::TDialog { char * __cdecl vf12(int *param_1); }
namespace OWL::TDialog { void __cdecl vf13(int *param_1,int param_2); }
void __cdecl EvSetfont_4b0550(int *param_1);
void __cdecl EvPaint_4b0574(int *param_1);
uint __cdecl EvMsg_19_4b0584(int *param_1,HDC param_2,undefined4 param_3,int param_4);
void __cdecl EvMsg_400_4b05e4(int *param_1);
bool __cdecl EvMsg_401_4b05f8(int *param_1);
void __cdecl EvMsg_402_4b0614(int *param_1);
namespace OWL::TDialog { bool __cdecl vf1(int *param_1,int param_2,undefined4 param_3); }
undefined1 __stdcall FUN_004b070c(HWND param_1,int param_2);
void __cdecl FUN_004b07c8(int *param_1);
namespace OWL::TDialog { undefined4 __cdecl vf3(int *param_1); }
namespace OWL::TDialog { void __cdecl vf4(int *param_1,LPCDLGTEMPLATEA param_2); }
namespace OWL::TDialog { int __cdecl vf5(int *param_1); }
namespace OWL::TDialog { void __cdecl vf6(int *param_1); }
char __cdecl FUN_004b09e0(int *param_1);
namespace OWL::TDialog { undefined4 __cdecl vf2(int *param_1); }
namespace OWL::TDialog { void __cdecl vf11(int *param_1); }
namespace OWL::TDialog { void __cdecl vf8(int *param_1,undefined4 param_2); }
namespace OWL::TDialog { void __cdecl vf9(int *param_1,INT_PTR param_2); }
void __cdecl FUN_004b0c44(int *param_1,uint *param_2);
void __cdecl Cmd1_4b0c6c(int *param_1);
void __cdecl Cmd2_4b0cc0(int *param_1);
void __cdecl EvClose_4b0cd0(int *param_1);
undefined4 * __cdecl FUN_004b0d24(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
namespace OWL::TControlEnabler { void __cdecl vf0(int param_1,byte param_2); }
namespace OWL::TControlEnabler { void __cdecl vf1(int param_1,char *param_2); }
namespace OWL::TControlEnabler { void __cdecl vf2(int param_1,WPARAM param_2); }
namespace OWL::TDialog { undefined4 __cdecl vf10(int *param_1,int param_2); }
void __cdecl FUN_004b0f1c(int *param_1,undefined4 *param_2);
void __cdecl FUN_004b0f84(undefined4 *param_1);
void __cdecl FUN_004b103c(undefined4 *param_1);
namespace OWL::TDib { void __cdecl _dtor(int *param_1,byte param_2); }
void __cdecl FUN_004b10dc(int param_1,int param_2,uint *param_3);
int __cdecl FUN_004b1130(int param_1,uint *param_2,uint *param_3,char param_4);
void __cdecl FUN_004b11dc(int param_1,uint param_2,uint *param_3);
namespace OWL::TDib { undefined4 __cdecl vf1(int *param_1,int *param_2,char param_3); }
int * __cdecl FUN_004b1504(int *param_1,HMODULE param_2,LPCSTR param_3);
bool __cdecl FUN_004b1598(int *param_1,HMODULE param_2,LPCSTR param_3);
namespace OWL::TDib { bool __cdecl vf2(undefined4 *param_1,undefined4 *param_2,char param_3); }
int * __cdecl FUN_004b165c(int *param_1,int param_2,int param_3,uint param_4,undefined2 param_5);
namespace OWL::TFloatingSlip { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TFloatingFrame { void __cdecl _dtor(int *param_1,uint param_2); }
void __cdecl FUN_004b1bc8(int *param_1,int *param_2,int param_3);
undefined4 __cdecl FUN_004b1c06(uint *param_1,uint *param_2);
uint * __cdecl FUN_004b1c88(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6, uint param_7,uint param_8);
undefined4 * __cdecl FUN_004b1d08(undefined4 *param_1,undefined4 param_2);
int * __cdecl FUN_004b1d34(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5);
namespace OWL::TDvFileOpenDialog { void __cdecl vf1(int *param_1,int param_2,undefined4 param_3); }
int * __cdecl FUN_004b1f0c(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5);
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
int __cdecl FUN_004b232c(int param_1,int param_2,int param_3);
namespace OWL::TDocManager { int __cdecl vf1(int param_1,int param_2,undefined4 param_3,char param_4); }
namespace OWL::TDocManager { int __cdecl vf2(int param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5); }
namespace OWL::TDocManager { int __cdecl vf3(int param_1,int param_2,undefined4 param_3,int param_4); }
namespace OWL::TDocManager { char * __cdecl vf4(undefined4 param_1,int param_2,int param_3,uint *param_4); }
namespace OWL::TDocManager { undefined4 __cdecl vf5(int param_1,char *param_2,uint param_3); }
namespace OWL::TDocManager { int * __cdecl vf6(int param_1,int *param_2,int param_3,int param_4,uint param_5); }
int * __cdecl FUN_004b2980(int param_1,int *param_2,int param_3,uint param_4);
namespace OWL::TDocManager { undefined4 __cdecl vf7(int param_1,int param_2); }
int __cdecl FUN_004b2d18(undefined4 param_1,int param_2,int *param_3);
namespace OWL::TDocManager { undefined4 __cdecl vf8(int param_1,int *param_2); }
namespace OWL::TDocManager { undefined4 __cdecl vf9(int param_1,int *param_2); }
namespace OWL::TDocManager { int __cdecl vf10(int param_1,uint *param_2); }
undefined4 __cdecl FUN_004b301c(uint *param_1,uint *param_2);
namespace OWL::TDocManager { int * __cdecl vf11(int param_1); }
int __cdecl FUN_004b3b84(int param_1,char *param_2);
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
void __cdecl FUN_004b50d8(undefined4 *param_1);
namespace OWL::TAPointer_OWL_TDocTemplate_ptr { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_004b5170(int param_1,uint param_2);
void __cdecl FUN_004b5180(int param_1,uint param_2);
undefined * __cdecl FUN_004b5190(int param_1);
namespace OWL::TDocTemplate { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined * __cdecl FUN_004b5254(int param_1);
undefined * __cdecl FUN_004b5274(int param_1);
undefined * __cdecl FUN_004b5294(int param_1);
namespace OWL::TDocument { void __cdecl _dtor(int *param_1,byte param_2); }
namespace OWL::TDocument { undefined * __cdecl vf19(undefined4 param_1,int param_2); }
namespace OWL::TDocument { undefined * __cdecl vf18(undefined4 param_1,int param_2); }
namespace OWL::TDocument { int __cdecl vf17(undefined4 param_1,char *param_2); }
namespace OWL::TDocument { char * __cdecl vf20(int *param_1,undefined4 param_2,int *param_3,char *param_4); }
namespace OWL::TDocument { undefined4 __cdecl vf21(int *param_1,int param_2); }
namespace OWL::TDocument { void __cdecl vf7(int param_1); }
namespace OWL::TDocument { undefined4 __cdecl vf8(int *param_1,uint *param_2); }
namespace OWL::TDocument { void __cdecl vf9(int param_1,uint *param_2); }
undefined4 __cdecl FUN_004b5734(int param_1,int param_2);
void __cdecl FUN_004b57a4(int param_1);
namespace OWL::TDocument { void __cdecl vf23(int param_1,int param_2); }
namespace OWL::TDocument { void __cdecl vf24(int param_1,int param_2); }
undefined4 __cdecl FUN_004b5874(int param_1,int param_2);
int __cdecl FUN_004b5890(int param_1,int param_2);
undefined4 __cdecl FUN_004b596c(int *param_1,int param_2);
namespace OWL::TDocument { char __cdecl vf5(int param_1,uint param_2); }
namespace OWL::TDocument { char __cdecl vf6(int param_1,uint param_2); }
char __cdecl FUN_004b5ab0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
undefined4 * __cdecl FUN_004b5b68(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
namespace OWL::TDocument { bool __cdecl vf10(int param_1); }
namespace OWL::TDocument { bool __cdecl vf13(int *param_1); }
namespace OWL::TDocument { int * __cdecl vf14(int *param_1,undefined4 param_2); }
namespace OWL::TDocument { undefined4 __cdecl vf12(int param_1); }
namespace OWL::TDocument { undefined4 __cdecl vf4(int param_1); }
namespace OWL::TDocument { void __cdecl vf15(int param_1); }
undefined4 __cdecl FUN_004b5d60(undefined4 *param_1,int param_2);
undefined4 __cdecl FUN_004b5d78(int *param_1,int param_2);
void __cdecl FUN_004b5da0(int *param_1);
uint * __cdecl FUN_004b5e14(uint *param_1,uint *param_2,char param_3);
char * __cdecl FUN_004b5ea2(char *param_1,int param_2,uint *param_3,char param_4);
namespace OWL::TEdit { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace OWL::TEdit { void __cdecl Cmd24322(int *param_1); }
namespace OWL::TEdit { void __cdecl Cmd24323(int *param_1); }
namespace OWL::TEdit { void __cdecl Cmd24324(int param_1); }
namespace OWL::TEdit { void __cdecl Cmd24325(int *param_1); }
namespace OWL::TEdit { void __cdecl Cmd24326(int param_1); }
namespace OWL::TEdit { void __cdecl Cmd24321(int *param_1); }
int * __cdecl FUN_004b5ff0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10 ,char param_11,int param_12);
int * __cdecl FUN_004b6184(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6);
namespace OWL::TEdit { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TEdit { void __cdecl NotifyAtChild_1280(int *param_1); }
namespace OWL::TEdit { uint __cdecl EvGetDlgCode(int *param_1); }
namespace OWL::TEdit { void __cdecl EvChar(int *param_1,int param_2); }
namespace OWL::TEdit { void __cdecl EvKeyDown(int *param_1,int param_2); }
namespace PVWEdit { void __cdecl EvKillFocus(int *param_1,HWND param_2); }
namespace OWL::TEdit { void __cdecl EvSetFocus(int *param_1); }
namespace OWL::TEdit { undefined4 __cdecl NotifyAtChild_m722(int *param_1); }
namespace OWL::TEdit { void __cdecl EvChildinvalid(int *param_1); }
void __cdecl FUN_004b6920(int *param_1);
namespace OWL::TEdit { void __cdecl vf9(int *param_1); }
namespace OWL::TEdit { bool __cdecl vf21(int *param_1); }
namespace OWL::TEdit { void __cdecl CeShared_4b69c4(int param_1,undefined4 *param_2); }
namespace OWL::TEdit { void __cdecl CeCmd24324(int *param_1,undefined4 *param_2); }
namespace OWL::TEdit { void __cdecl CeCmd24326(int *param_1,undefined4 *param_2); }
namespace OWL::TEdit { void __cdecl CeCmd24321(int *param_1,undefined4 *param_2); }
undefined4 __cdecl FUN_004b6ae8(int *param_1,WPARAM param_2);
bool __cdecl FUN_004b6b2c(int *param_1,undefined2 *param_2,uint param_3,WPARAM param_4);
LPSTR __cdecl FUN_004b6ba0(int *param_1,SIZE_T param_2);
void __cdecl FUN_004b6c5c(int *param_1,LPCSTR param_2,char param_3);
namespace OWL::TEdit { int __cdecl vf16(int *param_1,int param_2,uint *param_3,char param_4,char param_5,char param_6); }
bool __cdecl FUN_004b6e50(int *param_1);
bool __cdecl FUN_004b6e94(int *param_1);
namespace OWL::TEdit { void __cdecl vf12(int *param_1,int param_2,uint param_3,uint param_4); }
namespace OWL::TEdit { undefined * __stdcall vf11(void); }
namespace OWL::TEdit { void __cdecl vf20(int *param_1); }
undefined1 __cdecl FUN_004b7060(int *param_1,char param_2);
void __cdecl FUN_004b70e0(int param_1,undefined4 param_2);
namespace OWL::TEdit { int __cdecl vf10(int *param_1,LPSTR param_2,int param_3); }
void __stdcall FUN_004b72d0(void);
void __stdcall FUN_004b7326(void);
undefined4 * __cdecl FUN_004b7358(undefined4 *param_1,int *param_2);
int * __cdecl FUN_004b73c0(int *param_1,int param_2);
undefined4 __cdecl EvRegisteredMsg_4b74dc_4b74dc(int param_1,int *param_2);
namespace OWL::TEdit::Streamer { void __cdecl vf2(int param_1,int *param_2); }
undefined4 * __cdecl FUN_004b753c(int *param_1);
namespace OWL::TEdit::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TEditFile { undefined4 __cdecl vf8(undefined4 *param_1,int *param_2,undefined *param_3); }
void __cdecl Cmd24333_4b7698(int param_1);
void __cdecl Cmd24334_4b76a8(int param_1);
int * __cdecl FUN_004b76b8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9, uint *param_10,int param_11);
namespace OWL::TEditFile { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TEditFile { void __cdecl vf20(int *param_1); }
int __cdecl FUN_004b7c98(int *param_1,uint *param_2);
namespace OWL::TEditFile { void __cdecl vf23(int *param_1); }
namespace OWL::TEditFile { void __cdecl vf26(int *param_1,uint *param_2); }
namespace OWL::TEditFile { void __cdecl vf24(undefined4 *param_1); }
namespace OWL::TEditFile { uint __cdecl vf25(int *param_1,int param_2); }
namespace OWL::TEditFile { undefined4 __cdecl vf27(int *param_1); }
namespace OWL::TEditFile { undefined4 __cdecl vf28(int *param_1); }
void __cdecl CeCmd24333_4b8a40(int *param_1,undefined4 *param_2);
namespace OWL::TEditFile { undefined4 __cdecl vf29(int *param_1,int param_2); }
namespace OWL::TEditFile { uint __cdecl vf22(int *param_1); }
namespace OWL::TEditFile { void __cdecl vf21(int param_1); }
void __stdcall FUN_004b908c(void);
void __stdcall FUN_004b90e2(void);
undefined4 * __cdecl FUN_004b9114(undefined4 *param_1,int *param_2);
int * __cdecl FUN_004b917c(int *param_1,int param_2);
namespace OWL::TEditFile::Streamer { int __cdecl vf1(int param_1,int *param_2); }
void __cdecl FUN_004b92f8(int param_1,int *param_2);
namespace OWL::TEditFile::Streamer { void __cdecl vf2(int param_1,int *param_2); }
void __cdecl FUN_004b9388(int param_1,int *param_2);
undefined4 * __cdecl FUN_004b93dc(int *param_1);
namespace OWL::TEditFile::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TEditSearch { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_004b9560(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10 );
namespace OWL::TEditSearch { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TEditSearch { void __cdecl vf20(int *param_1); }
void __cdecl FUN_004b988c(int *param_1);
namespace OWL::TEditSearch { void __cdecl Cmd24351(undefined4 *param_1); }
namespace OWL::TEditSearch { void __cdecl Cmd24352(undefined4 *param_1); }
namespace OWL::TEditSearch { void __cdecl CeRange24351to24352(undefined4 param_1,undefined4 *param_2); }
namespace OWL::TEditSearch { void __cdecl Cmd24353(int *param_1); }
namespace OWL::TEditSearch { void __cdecl CeCmd24353(int param_1,undefined4 *param_2); }
namespace OWL::TEditSearch { undefined4 __cdecl EvRegisteredMsg_4b9d94(int *param_1,undefined4 param_2,int param_3); }
namespace OWL::TFindDialog { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TReplaceDialog { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TFindReplaceDialog { void __cdecl _dtor(int *param_1,uint param_2); }
void __stdcall FUN_004ba164(void);
void __stdcall FUN_004ba1ba(void);
undefined4 * __cdecl FUN_004ba1ec(undefined4 *param_1,int *param_2);
int * __cdecl FUN_004ba254(int *param_1,int param_2);
namespace OWL::TEditSearch::Streamer { undefined4 __cdecl vf1(int param_1,int *param_2); }
void __cdecl FUN_004ba3cc(int param_1,int *param_2);
namespace OWL::TEditSearch::Streamer { void __cdecl vf2(int param_1,int *param_2); }
void __cdecl FUN_004ba464(int param_1,int *param_2);
undefined4 * __cdecl FUN_004ba4b8(int *param_1);
namespace OWL::TEditSearch::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TListBox::Streamer { int vf4(...); }   // not decompiled
undefined4 * __cdecl FUN_004ba680(undefined4 *param_1);
int vshared_4ba6cc(...);   // not decompiled
void __stdcall FUN_004ba6ec(void);
namespace OWL::TXBadFormat { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TXBadFormat { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXBadFormat { void __cdecl vf3(int *param_1); }
undefined4 * __cdecl FUN_004ba8d0(undefined4 *param_1,int *param_2);
void __cdecl FUN_004ba924(uint *param_1,uint *param_2,uint *param_3,uint param_4);
undefined4 * __cdecl FUN_004ba980(undefined4 *param_1,uint *param_2,undefined4 param_3);
namespace OWL::TDiskFileHandle { void __cdecl _dtor(int param_1,byte param_2); }
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf1(int param_1); }
namespace OWL::TDiskFileHandle { int __cdecl vf2(int param_1,int param_2); }
namespace OWL::TDiskFileHandle { bool __cdecl vf4(int param_1); }
namespace OWL::TFileHandle { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 * __cdecl FUN_004bad10(undefined4 *param_1,undefined4 param_2,uint *param_3,undefined4 param_4);
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
uint __cdecl FUN_004bb0cc(uint param_1);
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf22(int *param_1,uint *param_2); }
namespace OWL::TFile { void __cdecl _dtor(int *param_1,byte param_2); }
namespace OWL::TFile { bool __cdecl vf2(int param_1,uint *param_2,undefined4 param_3); }
namespace OWL::TFile { undefined4 __cdecl vf3(int param_1); }
namespace OWL::TFile { void __cdecl vf14(int param_1); }
namespace OWL::TFile { void __cdecl vf15(int param_1); }
namespace OWL::TFile { void __cdecl vf16(int param_1); }
int __cdecl FUN_004bb45c(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_004bb49e(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_004bb509(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
undefined4 __stdcall FUN_004bb574(void);
int __cdecl FUN_004bb57b(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_004bb62f(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_004bb671(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_004bb6dc(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
undefined4 __stdcall FUN_004bb747(void);
int __cdecl FUN_004bb74e(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_004bb804(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_004bb82c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_004bb854(int param_1);
int __cdecl FUN_004bb874(int *param_1,undefined4 param_2,int *param_3,int param_4);
undefined1 __cdecl FUN_004bb9ac(int *param_1,undefined4 param_2,int *param_3,int param_4);
void __cdecl FUN_004bbaf0(int *param_1,undefined4 param_2,int param_3,int param_4);
void __cdecl FUN_004bbb14(int *param_1,undefined4 param_2,int param_3,int param_4);
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
char * __cdecl FUN_004bbca0(char *param_1);
char * __cdecl FUN_004bbcb0(char *param_1,char *param_2,int param_3);
char * __cdecl FUN_004bbcce(char *param_1,char *param_2,uint *param_3);
char * __cdecl FUN_004bbd06(char *param_1,char *param_2,int param_3);
char * __cdecl FUN_004bbd24(char *param_1,char *param_2,uint *param_3);
char * __cdecl FUN_004bbd5c(char *param_1,char *param_2,char *param_3);
undefined4 __cdecl FUN_004bbd80(int param_1,uint *param_2,char param_3);
int __cdecl FUN_004bc960(int param_1,uint *param_2,char param_3);
void __cdecl FUN_004bca70(int param_1);
int __cdecl FUN_004bcae0(int param_1,uint param_2);
bool __cdecl FUN_004bcc54(int param_1,uint param_2);
undefined4 * __cdecl FUN_004bccc4(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
namespace OWL::TFindReplaceDialog::TData { void __cdecl _dtor(int param_1,byte param_2); }
namespace OWL::TFindReplaceDialog { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
void __cdecl FUN_004bcde4(int *param_1,int param_2);
int * __cdecl FUN_004bce80(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7);
namespace OWL::TFindReplaceDialog { void __stdcall vf4(void); }
namespace OWL::TFindReplaceDialog { void __cdecl vf1(int *param_1,int param_2,undefined4 param_3); }
namespace OWL::TFindReplaceDialog { void __cdecl EvNCDestroy(int *param_1); }
void __cdecl FUN_004bcffc(int param_1,int param_2);
int * __cdecl FUN_004bd020(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7);
namespace OWL::TFindDialog { void __cdecl vf4(int *param_1); }
int * __cdecl FUN_004bd164(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7);
namespace OWL::TReplaceDialog { void __cdecl vf4(int *param_1); }
void __cdecl FUN_004bd5e4(int param_1,int *param_2);
void __cdecl FUN_004bd664(undefined4 *param_1,int *param_2);
uint __cdecl FUN_004bd6bc(HMENU param_1,int param_2);
HICON __stdcall FUN_004bd700(void);
int __cdecl FUN_004bd7a3(int param_1);
bool __cdecl FUN_004bd80c(int param_1);
namespace OWL::TFrameWindow { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
namespace OWL::TMenuItemEnabler { void __cdecl vf0(int param_1,char param_2); }
namespace OWL::TMenuItemEnabler { void __cdecl vf1(int param_1,LPCSTR param_2); }
namespace OWL::TMenuItemEnabler { void __cdecl vf2(int param_1,int param_2); }
int * __cdecl FUN_004bd90c(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,char param_6, int param_7);
int * __cdecl FUN_004bda48(int *param_1,int param_2);
void __cdecl FUN_004bdb60(int *param_1,int param_2,char param_3);
void __cdecl FUN_004bdbb0(int *param_1,undefined4 param_2);
namespace OWL::TFrameWindow { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TFrameWindow { void __cdecl EvInitMenuPopup(int *param_1,HMENU param_2,undefined4 param_3,char param_4); }
void __cdecl Child4972344_Notify4914610_4bdebc(int *param_1,int param_2);
namespace OWL::TFrameWindow { HWND __cdecl vf9(int *param_1); }
namespace OWL::TFrameWindow { undefined4 __cdecl vf14(int *param_1,int param_2,HWND param_3,undefined4 param_4); }
namespace OWL::TFrameWindow { void __cdecl vf15(undefined4 *param_1,undefined4 *param_2); }
namespace OWL::TFrameWindow { undefined4 __cdecl vf10(int *param_1,LPMSG param_2); }
namespace OWL::TFrameWindow { bool __cdecl vf2(int *param_1,HMENU param_2); }
namespace OWL::TFrameWindow { undefined4 __cdecl vf1(int *param_1,uint *param_2); }
undefined4 __cdecl FUN_004be1e0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 __cdecl FUN_004be26c(int *param_1,undefined4 param_2,HANDLE param_3);
namespace OWL::TFrameWindow { undefined4 __cdecl vf6(int param_1); }
namespace OWL::TFrameWindow { int __cdecl vf7(int *param_1,undefined4 param_2); }
namespace OWL::TFrameWindow { void __cdecl vf8(int *param_1,int param_2); }
namespace OWL::TFrameWindow { undefined4 __cdecl vf13(int *param_1,uint *param_2,uint param_3); }
namespace OWL::TFrameWindow { void __cdecl EvPaint(int *param_1); }
namespace OWL::TFrameWindow { bool __cdecl EvEraseBkgnd(int *param_1,undefined4 param_2); }
namespace OWL::TFrameWindow { HICON __cdecl EvQuerydragicon(int *param_1); }
int __cdecl FUN_004be7cc(int *param_1);
namespace OWL::TFrameWindow { bool __cdecl vf12(int *param_1,HWND param_2,HWND param_3); }
namespace OWL::TFrameWindow { void __cdecl EvSetFocus(int *param_1); }
namespace OWL::TFrameWindow { void __cdecl EvParentNotify(int *param_1,int param_2,HWND param_3); }
namespace OWL::TFrameWindow { bool __cdecl EvQuerynewpalette(int *param_1); }
namespace OWL::TFrameWindow { void __cdecl EvPalettechanged(int *param_1); }
undefined4 __cdecl FUN_004be9dc(int *param_1,char param_2);
namespace OWL::TFrameWindow { void __cdecl vf16(int *param_1); }
namespace OWL::TFrameWindow { void __cdecl vf17(int *param_1); }
void __cdecl FUN_004bf118(int *param_1,WPARAM param_2,LPARAM param_3);
namespace OWL::TFrameWindow { void __stdcall EvSize(int param_1,int param_2,int *param_3); }
void __stdcall FUN_004bf14a(void);
namespace OWL::TFrameWindow { undefined4 __cdecl vf3(int *param_1,int *param_2); }
namespace OWL::TGroupBox { char * __cdecl vf10(int *param_1); }
int * __cdecl FUN_004bf504(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
namespace OWL::TGroupBox { void __cdecl vf9(int *param_1,int param_2); }
void __cdecl FUN_004bf6d0(int *param_1);
undefined4 __cdecl FUN_004bf6f4(int param_1);
void __cdecl FUN_004bf704(int param_1);
void __cdecl FUN_004bf714(int *param_1,uint *param_2,char param_3);
void __cdecl FUN_004bf908(int *param_1,uint *param_2,undefined4 param_3,char param_4);
void __cdecl FUN_004bf950(int param_1,int param_2);
int __cdecl FUN_004bf998(int param_1,int param_2);
int * __cdecl FUN_004bf9d8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
namespace OWL::TListBox { char * __stdcall vf30(void); }
namespace OWL::TListBox { undefined4 __cdecl vf29(int *param_1,int *param_2,int param_3); }
undefined4 __cdecl FUN_004bfd60(int *param_1);
namespace OWL::TListBox { undefined4 __cdecl vf27(int *param_1); }
undefined4 __cdecl FUN_004bfdd8(int *param_1,LPARAM param_2,WPARAM param_3);
namespace OWL::TListBox { undefined4 __cdecl vf28(int *param_1,WPARAM param_2); }
void __stdcall FUN_004bfeac(void);
void __stdcall FUN_004bff02(void);
undefined4 * __cdecl FUN_004bff34(undefined4 *param_1,int *param_2);
int * __cdecl FUN_004bff9c(int *param_1,int param_2);
namespace OWL::TListBox::Streamer { undefined4 __cdecl vf1(int param_1,int *param_2); }
namespace OWL::TListBox::Streamer { void __cdecl vf2(int param_1,int *param_2); }
undefined4 * __cdecl FUN_004c00dc(int *param_1);
namespace OWL::TListBox::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TMenuDescr { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 __cdecl FUN_004c0250(int *param_1,int *param_2,int param_3);
namespace OWL::TMenuDescr { undefined4 __cdecl vf1(int param_1); }
void __stdcall FUN_004c02d8(void);
DWORD * __cdecl FUN_004c0384(DWORD *param_1);
void __cdecl FUN_004c0418(DWORD *param_1,ushort param_2);
undefined4 __cdecl FUN_004c0490(int param_1);
void __cdecl FUN_004c055c(int param_1,undefined4 param_2,uint param_3);
void __cdecl FUN_004c05fc(int param_1,int param_2);
uint __cdecl FUN_004c0698(int param_1);
undefined4 __cdecl FUN_004c0740(int param_1,int param_2);
int __cdecl FUN_004c0788(int param_1,int param_2);
undefined4 __cdecl FUN_004c07ac(int param_1);
undefined4 __cdecl FUN_004c07e4(LPCSTR param_1,LPCSTR param_2);
undefined4 * __cdecl FUN_004c08dc(undefined4 *param_1,uint *param_2,char param_3,char param_4,char param_5);
undefined4 * __cdecl FUN_004c09ac(undefined4 *param_1,uint *param_2,undefined4 param_3,char param_4);
undefined4 * __cdecl FUN_004c0a20(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4,char param_5);
namespace OWL::TModule { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 __cdecl FUN_004c0b38(LPCSTR param_1,LPCSTR param_2);
void __cdecl FUN_004c0b54(int param_1,uint *param_2);
void __cdecl FUN_004c0bf0(int param_1,undefined4 param_2);
namespace OWL::TModule { void __cdecl vf1(int param_1,int *param_2,uint param_3,uint param_4); }
void __cdecl FUN_004c0cc4(int param_1,undefined4 param_2);
int __cdecl FUN_004c0cd4(int param_1,uint param_2,LPSTR param_3,int param_4);
int __cdecl FUN_004c0e0c(int param_1,int param_2,uint param_3);
HACCEL __cdecl FUN_004c1a9c(int param_1,LPCSTR param_2);
HMENU __cdecl FUN_004c1ae8(int param_1,LPCSTR param_2);
HCURSOR __cdecl FUN_004c1b34(int param_1,LPCSTR param_2);
int * __cdecl FUN_004c1b80(int *param_1,int param_2,LPCSTR param_3);
undefined * __stdcall FUN_004c1e30(void);
undefined4 __stdcall FUN_004c1e90(void);
void __stdcall FUN_004c1ed0(void);
undefined4 __stdcall FUN_004c1f08(void);
undefined4 __stdcall FUN_004c1f4c(void);
undefined4 * __cdecl FUN_004c1fa8(undefined4 *param_1,undefined4 param_2);
namespace OWL::TXInvalidModule { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXInvalidModule { void __cdecl vf3(int *param_1); }
void __cdecl FUN_004c225c(undefined4 param_1);
namespace OWL::TXInvalidModule { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_004c23f4(int param_1,byte param_2);
void __cdecl FUN_004c2444(int param_1,byte param_2);
void __stdcall FUN_004c2474(void);
void __stdcall FUN_004c24ca(void);
undefined4 * __cdecl FUN_004c24fc(undefined4 *param_1,int *param_2);
undefined4 * __cdecl FUN_004c2564(undefined4 *param_1);
int * __cdecl FUN_004c25a4(int *param_1,undefined4 *param_2);
int * __cdecl FUN_004c25f4(int *param_1,int *param_2);
namespace OWL::TModule::Streamer { int __cdecl vf1(int param_1,int *param_2); }
namespace OWL::TModule::Streamer { void __cdecl vf2(int param_1,int *param_2); }
undefined4 * __cdecl FUN_004c2694(int *param_1);
namespace OWL::TModule::Streamer { undefined4 __stdcall vf3(void); }
uint * __cdecl FUN_004c279c(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6, uint param_7,uint param_8,uint param_9);
namespace OWL::TOpenSaveDialog::TData { void __cdecl _dtor(int param_1,byte param_2); }
char * FUN_004c28b8(char *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint *param_5);
namespace OWL::TOpenSaveDialog { undefined4 __cdecl vf14(undefined4 *param_1,int *param_2,undefined *param_3); }
void __cdecl FUN_004c29b4(int *param_1,int param_2);
int * __cdecl FUN_004c2ab4(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7);
namespace OWL::TOpenSaveDialog { bool __cdecl vf1(int *param_1,int param_2,undefined4 param_3); }
namespace OWL::TOpenSaveDialog { undefined4 __stdcall vf15(void); }
int * __cdecl FUN_004c2c5c(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7);
namespace OWL::TFileOpenDialog { undefined4 __cdecl vf6(int param_1); }
int * __cdecl FUN_004c2e14(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7);
namespace OWL::TFileSaveDialog { undefined4 __cdecl vf6(int param_1); }
namespace OWL::TPrintDialog { undefined4 __cdecl vf14(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_004c3390(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6, int param_7,int param_8);
namespace OWL::TPrintDialog { void __cdecl vf1(int *param_1,int param_2,undefined4 param_3); }
namespace OWL::TPrintDialog { undefined4 __cdecl vf6(int *param_1); }
bool __cdecl FUN_004c3c90(int param_1);
undefined4 * __cdecl FUN_004c3ce4(undefined4 *param_1);
namespace OWL::TPrintDialog::TData { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_004c3e40(int param_1);
void __cdecl FUN_004c3e7c(int param_1);
void __cdecl FUN_004c3ec0(int param_1);
void __cdecl FUN_004c3eec(int param_1);
int __cdecl FUN_004c3f18(int param_1);
int __cdecl FUN_004c3f38(int param_1);
int __cdecl FUN_004c3f58(int param_1);
void __cdecl FUN_004c3f78(int param_1,uint *param_2,uint *param_3,uint *param_4);
undefined4 * __cdecl FUN_004c4074(int param_1);
namespace OWL::TPrintDialog { void __cdecl _dtor(int *param_1,uint param_2); }
int * __cdecl FUN_004c43ac(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5, uint *param_6);
namespace OWL::TFormattedStatic { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TFormattedStatic { void __cdecl vf12(int *param_1); }
namespace OWL::TNumericStatic { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_004c4754(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
namespace OWL::TNumericStatic { undefined4 __cdecl EvMsg_464(int *param_1,int param_2); }
namespace OWL::TPrinterAbortDlg { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_004c49bc(int *param_1,int param_2,undefined4 param_3,uint *param_4,uint *param_5,uint *param_6, uint *param_7,int param_8);
namespace OWL::TPrinterAbortDlg { void __cdecl vf11(int *param_1); }
namespace OWL::TPrinterAbortDlg { void __cdecl Cmd2(int *param_1); }
int * __cdecl FUN_004c4c74(int *param_1,int param_2);
namespace OWL::TPrinter { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TPrinter { void __cdecl vf1(int param_1); }
namespace OWL::TPrinter { void __cdecl vf6(int param_1); }
namespace OWL::TPrinter { void __cdecl vf7(int param_1,uint *param_2,uint *param_3,uint *param_4); }
undefined4 __stdcall FUN_004c4f30(int param_1,int param_2);
namespace OWL::TPrinter { uint __cdecl vf8(int param_1,undefined4 param_2); }
namespace OWL::TPrinter { bool __cdecl vf9(int param_1,undefined4 param_2); }
namespace OWL::TPrinter { int __cdecl vf10(int param_1,undefined4 param_2,int param_3); }
namespace OWL::TPrinter { void __cdecl vf5(int param_1,int param_2); }
void __cdecl FUN_004c52b0(int param_1,undefined4 *param_2);
namespace OWL::TPrinter { bool __cdecl vf3(int *param_1,int param_2,int *param_3,char param_4); }
namespace OWL::TPrinter { void __cdecl vf2(int *param_1); }
namespace OWL::TPrinter { undefined4 __cdecl vf4(int param_1,int param_2,int param_3); }
undefined4 * __cdecl FUN_004c5cf8(undefined4 *param_1,uint param_2);
namespace OWL::TXPrinter { undefined4 * __cdecl vf2(int *param_1); }
namespace OWL::TXPrinter { void __cdecl vf3(int *param_1); }
void __cdecl FUN_004c5f00(uint param_1);
namespace OWL::TXPrinter { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TPrinterAbortDlg { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TNumericStatic { void __cdecl _dtor(int *param_1,uint param_2); }
undefined4 * __cdecl FUN_004c6484(undefined4 *param_1,uint *param_2);
namespace OWL::TPrintout { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TPrintout { void __cdecl vf1(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4); }
namespace OWL::TPrintout { void __cdecl vf2(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5); }
namespace OWL::TPrintout { void __stdcall vf3(void); }
namespace OWL::TPrintout { void __stdcall vf4(void); }
namespace OWL::TPrintout { bool __cdecl vf5(undefined4 param_1,int param_2); }
namespace OWL::TPrintout { void __stdcall vf6(void); }
namespace OWL::TPrintout { void __stdcall vf7(void); }
namespace OWL::TPrintout { void __stdcall vf8(void); }
namespace OWL::TRadioButton { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_004c6664(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, int param_6);
namespace OWL::TRadioButton { char * __cdecl vf9(int *param_1); }
namespace OWL::TRadioButton { void __cdecl BNClicked(int *param_1); }
undefined4 * __cdecl FUN_004c684c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);
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
void __stdcall FUN_004c7364(void);
void __stdcall FUN_004c73ba(void);
undefined4 * __cdecl FUN_004c73ec(undefined4 *param_1,int *param_2);
undefined4 * __cdecl FUN_004c7454(undefined4 *param_1);
int * __cdecl FUN_004c7494(int *param_1,undefined4 *param_2);
int * __cdecl FUN_004c74e4(int *param_1,int *param_2);
namespace OWL::TScroller::Streamer { int __stdcall vf1(int param_1,int *param_2); }
int __stdcall FUN_004c7506(void);
namespace OWL::TScroller::Streamer { void __cdecl vf2(int param_1,int *param_2); }
undefined4 * __cdecl FUN_004c7790(int *param_1);
namespace OWL::TScroller::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TStatic { undefined4 __cdecl Find(undefined4 *param_1,int *param_2,undefined *param_3); }
int * __cdecl FUN_004c78e4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10 ,int param_11);
int * __cdecl FUN_004c7a28(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6);
namespace OWL::TStatic { void __cdecl EvSize(int *param_1,int param_2); }
namespace OWL::TStatic { char * __cdecl vf11(int *param_1); }
namespace OWL::TStatic { int __cdecl vf10(int *param_1,LPSTR param_2,int param_3); }
namespace OWL::TStatic { void __cdecl vf9(int *param_1); }
void __stdcall FUN_004c7c60(void);
void __stdcall FUN_004c7cb6(void);
undefined4 * __cdecl FUN_004c7ce8(undefined4 *param_1,int *param_2);
int * __cdecl FUN_004c7d50(int *param_1,int param_2);
undefined4 __cdecl EvRegisteredMsg_4c7e6c_4c7e6c(int param_1,int *param_2);
namespace OWL::TStatic::Streamer { void __cdecl vf2(int param_1,int *param_2); }
undefined4 * __cdecl FUN_004c7ecc(int *param_1);
namespace OWL::TStatic::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TTinyCaption { void __cdecl vf2(int param_1,int *param_2,undefined *param_3); }
namespace OWL::TTinyCaption { void __cdecl _dtor(int *param_1,uint param_2); }
undefined4 __cdecl EvNCHitTest_4c8120(int *param_1,int *param_2);
undefined4 __cdecl FUN_004c8154(int *param_1,int *param_2,undefined4 *param_3);
void __cdecl EvNCPaint_4c8344(int *param_1);
undefined4 __cdecl FUN_004c8360(int *param_1);
undefined4 __cdecl EvNccalcsize_4c83d8(int *param_1,undefined1 param_2,int param_3);
undefined4 __cdecl FUN_004c8408(int *param_1,undefined4 param_2,int param_3);
void __cdecl EvNclbuttondown_4c8458(int *param_1,int param_2,ushort *param_3);
int __cdecl FUN_004c8480(int *param_1,int param_2,ushort *param_3);
void __cdecl EvMouseMove_4c87a4(int *param_1,undefined4 param_2,LONG *param_3);
undefined4 __cdecl FUN_004c87cc(int *param_1,undefined4 param_2,LONG *param_3);
void __cdecl EvLButtonUp_4c89c4(int *param_1,undefined4 param_2,LONG *param_3);
undefined4 __cdecl FUN_004c89ec(int *param_1,undefined4 param_2,LONG *param_3);
undefined1 EvNcactivate_4c8afc(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined1 param_5);
undefined4 __cdecl FUN_004c8b34(int *param_1,undefined4 param_2,undefined1 *param_3);
namespace OWL::TTinyCaption { undefined4 __cdecl vf1(int *param_1,uint param_2,HWND param_3,undefined4 param_4); }
undefined4 __cdecl FUN_004c8bb8(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5);
void __cdecl EvSysCommand_4c8c04(int *param_1,uint param_2);
undefined4 __cdecl FUN_004c8c2c(int *param_1,uint param_2);
void __cdecl FUN_004c8c78(undefined4 param_1,undefined4 *param_2,RECT *param_3,char param_4);
uint __cdecl FUN_004c8fe0(undefined4 param_1,undefined4 *param_2,RECT *param_3,char param_4);
void __cdecl FUN_004c9178(undefined4 param_1,undefined4 *param_2,RECT *param_3);
void __cdecl FUN_004c93c0(undefined4 param_1,undefined4 *param_2,RECT *param_3,char param_4);
void __stdcall FUN_004c9490(int *param_1,undefined4 *param_2,int *param_3,char param_4);
void __stdcall FUN_004c9496(void);
void __cdecl FUN_004c9638(int *param_1);
int * __cdecl FUN_004c9a24(int *param_1,int *param_2);
int * __cdecl FUN_004c9ad8(int *param_1,int *param_2);
int * __cdecl FUN_004c9b28(int *param_1,int *param_2);
int * __cdecl FUN_004c9b94(int *param_1,int *param_2);
void __cdecl FUN_004c9be4(int *param_1);
namespace OWL::TValidator { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace OWL::TValidator { void __stdcall vf1(void); }
namespace OWL::TValidator { undefined1 __stdcall vf2(void); }
namespace OWL::TValidator { undefined1 __stdcall vf3(void); }
namespace OWL::TValidator { undefined4 __stdcall vf4(void); }
namespace OWL::TValidator { undefined4 __stdcall vf5(void); }
void __stdcall FUN_004c9e44(void);
void __stdcall FUN_004c9e9a(void);
undefined4 * __cdecl FUN_004c9ecc(undefined4 *param_1,int *param_2);
undefined4 * __cdecl FUN_004c9f34(undefined4 *param_1);
int * __cdecl FUN_004c9f74(int *param_1,undefined4 *param_2);
int * __cdecl FUN_004c9fc4(int *param_1,int *param_2);
namespace OWL::TValidator::Streamer { undefined4 __cdecl vf1(int param_1,int *param_2); }
namespace OWL::TValidator::Streamer { void __cdecl vf2(undefined4 param_1,int *param_2); }
undefined4 * __cdecl FUN_004ca024(int *param_1);
namespace OWL::TValidator::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TView { void __cdecl _dtor(undefined4 *param_1,uint param_2); }
namespace OWL::TView { undefined * __cdecl vf9(undefined4 param_1,int param_2); }
namespace OWL::TView { undefined * __cdecl vf8(undefined4 param_1,int param_2); }
namespace OWL::TView { int __cdecl vf7(undefined4 param_1,char *param_2); }
namespace OWL::TView { char * __cdecl vf10(int param_1,int param_2,undefined4 *param_3,char *param_4); }
void __stdcall FUN_004ca358(void);
namespace OWL::TView { undefined4 __stdcall vf4(void); }
namespace OWL::TView { undefined4 __stdcall vf5(void); }
namespace OWL::TTreeWindow { void __cdecl vf20(int *param_1); }
namespace OWL::TTreeWindow { void __cdecl vf21(int *param_1,undefined4 param_2,short param_3); }
int * __cdecl FUN_004ca3d0(uint *param_1,int param_2,undefined1 *param_3);
void __cdecl FUN_004ca482(int param_1,int param_2,int param_3);
namespace OWL::__TBarDescrGdNode { void __cdecl _dtor(int *param_1,byte param_2); }
void __cdecl FUN_004ca5fc(int param_1,int param_2);
namespace OWL::TBarDescr { void __stdcall _dtor(undefined4 *param_1,byte param_2); }
void __stdcall FUN_004ca69e(void);
void __cdecl FUN_004ca784(int param_1,char param_2);
undefined4 __cdecl FUN_004ca7d0(int *param_1);
namespace OWL::TBarDescr { undefined4 __cdecl vf1(int param_1,int param_2); }
namespace OWL::TBarDescr { undefined4 __cdecl vf2(int param_1,int param_2,int *param_3); }
namespace OWL::TBarDescr { undefined4 __cdecl vf3(int param_1,int *param_2); }
undefined4 __cdecl FUN_004cacbc(undefined4 param_1,int param_2);
void __cdecl FUN_004cadac(int param_1,byte param_2);
void __cdecl FUN_004caef4(int param_1,byte param_2);
void __cdecl FUN_004cb044(int param_1,byte param_2);
void __cdecl FUN_004cb094(int param_1,byte param_2);
void __stdcall FUN_004cb0c4(void);
undefined * __stdcall FUN_004cb108(void);
void __stdcall FUN_004cb160(void);
void __stdcall FUN_004cb19c(void);
void __stdcall FUN_004cb1d4(void);
undefined4 __stdcall FUN_004cb224(void);
void __stdcall FUN_004cb2a0(void);
void __stdcall FUN_004cb2f6(void);
uint * __cdecl FUN_004cb348(uint *param_1,uint param_2,byte param_3);
undefined4 * __cdecl FUN_004cb3b4(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __cdecl FUN_004cb40c(undefined4 *param_1,undefined4 *param_2);
undefined4 * __cdecl FUN_004cb424(undefined4 *param_1,undefined4 *param_2);
undefined4 * __cdecl FUN_004cb490(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4);
undefined4 __cdecl FUN_004cb50c(uint *param_1,uint *param_2,char param_3);
uint __cdecl FUN_004cb550(uint *param_1,uint *param_2,char param_3);
bool __cdecl FUN_004cb5ec(uint *param_1,uint param_2,char param_3);
bool __cdecl FUN_004cb628(uint *param_1,uint param_2,char param_3);
undefined4 __cdecl FUN_004cb664(uint *param_1,uint *param_2,char param_3);
undefined4 __cdecl FUN_004cb6a8(uint *param_1,uint *param_2,char param_3);
undefined4 * __cdecl FUN_004cb6ec(undefined4 *param_1,undefined4 param_2);
void __cdecl FUN_004cb794(int param_1);
int * __cdecl FUN_004cb7d0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
namespace OWL::TTreeWindow { void __cdecl _dtor(int *param_1,uint param_2); }
namespace OWL::TTreeWindow { char * __stdcall vf30(void); }
namespace OWL::TTreeWindow { undefined4 __stdcall vf29(void); }
void __cdecl FUN_004cba44(undefined4 *param_1);
undefined4 * __cdecl FUN_004cba5c(undefined4 *param_1);
undefined4 * __cdecl FUN_004cba88(undefined4 *param_1);
uint * __cdecl FUN_004cbac4(uint *param_1,uint *param_2,char *param_3);
void __cdecl FUN_004cbb00(uint *param_1,uint *param_2,char *param_3);
undefined4 __cdecl FUN_004cbb48(byte *param_1);
void __cdecl FUN_004cbb5c(uint *param_1,uint param_2);
void __cdecl FUN_004cbb70(uint *param_1,uint param_2);
void __cdecl FUN_004cbb84(uint *param_1,uint param_2);
undefined4 * __cdecl FUN_004cbb98(undefined4 *param_1,int *param_2);
int * __cdecl FUN_004cbc00(int *param_1,int param_2);
namespace OWL::TTreeWindow::Streamer { undefined4 __cdecl vf1(int param_1,int *param_2); }
namespace OWL::TTreeWindow::Streamer { void __cdecl vf2(int param_1,int *param_2); }
undefined4 * __cdecl FUN_004cbd50(int *param_1);
namespace OWL::TTreeWindow::Streamer { undefined4 __stdcall vf3(void); }
undefined * __stdcall GetDocTemplateHead(uint param_1);
undefined4 * __stdcall GetModulePtr(uint param_1);
void __stdcall FUN_004cbf28(void);
void __stdcall FUN_004cbf6c(HMODULE param_1,undefined4 param_2,uint *param_3,undefined4 param_4);
undefined4 * __cdecl calloc(int param_1,int param_2);
undefined4 __stdcall operator_delete(void);
undefined4 __stdcall operator_delete_array(void);
undefined4 __cdecl set_new_handler(undefined4 param_1);
int __stdcall operator_new(void);
int __stdcall operator_new_array(void);
void __stdcall FUN_004cc190(void);
void __stdcall FUN_004cc1f0(void);
void __stdcall FUN_004cc230(void);
void __cdecl _vector_delete_ldtc_(int param_1,int param_2,int param_3,uint param_4,undefined *param_5);
int __cdecl FUN_004cc288(int param_1,int param_2,int param_3,uint param_4,undefined *param_5);
int * __cdecl _vector_new_ldtc_(int *param_1,int param_2,int param_3,uint param_4,undefined *param_5);
bool FUN_004cc580(int param_1,undefined4 *param_2,uint *param_3);
bool FUN_004cc5ec(undefined4 *param_1,SIZE_T param_2);
undefined4 FUN_004cc614(LPVOID param_1,int param_2);
undefined4 FUN_004cc660(LPVOID param_1,SIZE_T param_2);
undefined4 FUN_004cc678(LPVOID param_1);
undefined4 __cdecl FUN_004cc6b4(int *param_1,int *param_2,int *param_3);
undefined4 __stdcall FUN_004cc730(void);
undefined4 __stdcall malloc(void);
void __stdcall free(void);
undefined4 __stdcall FUN_004cc754(void);
void __cdecl FUN_004cc76c(undefined4 param_1);
void __cdecl FUN_004cc7b4(undefined4 param_1);
void __cdecl FUN_004cc7cc(undefined4 param_1);
void __cdecl FUN_004cc7e4(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_004cc824(void);
void __stdcall FUN_004cc828(void);
undefined4 __cdecl FUN_004cc868(uint *param_1,uint param_2,uint param_3);
undefined4 __cdecl FUN_004cc968(uint *param_1,uint param_2);
undefined4 __cdecl FUN_004cca54(int param_1);
undefined4 __cdecl FUN_004ccd18(uint *param_1);
void __cdecl FUN_004cce0c(int param_1);
void __cdecl FUN_004cce38(int param_1);
int * __cdecl FUN_004ccf40(int param_1);
uint * __cdecl FUN_004ccf7c(uint param_1);
uint * __cdecl FUN_004ccfa4(uint param_1);
SIZE_T __stdcall FUN_004cd17c(void);
void __stdcall FUN_004cd194(void);
int __cdecl FUN_004cd1f4(int param_1,uint param_2);
uint * __cdecl FUN_004cd31c(uint *param_1,uint param_2);
uint * __cdecl FUN_004cd3d4(uint *param_1,uint param_2);
uint __cdecl FUN_004cd46c(int param_1);
void __stdcall FUN_004cd488(void);
void __stdcall FUN_004cd48c(void);
void __cdecl FUN_004cd750(int param_1);
void __cdecl FUN_004cd788(int param_1);
namespace __rwstd::rb_tree_int_std_pair_const_int_std_string_rwstd_select1st_std_pair_const_int_std_string_int_std_less_int { void __cdecl _dtor(int param_1,byte param_2); }
int __cdecl FUN_004cd82c(int param_1,int param_2);
int __cdecl FUN_004cd850(int param_1);
int __cdecl FUN_004cd864(int param_1);
int __cdecl FUN_004cd870(int param_1,undefined4 param_2);
int __cdecl FUN_004cd89c(int param_1,int param_2);
undefined4 * __cdecl FUN_004cd8bc(undefined4 *param_1,int param_2);
bool __cdecl FUN_004cd9ec(int param_1,int param_2);
int __cdecl FUN_004cda08(int param_1);
int __cdecl FUN_004cda1c(int param_1);
void __cdecl FUN_004cda28(int param_1,int param_2);
bool __cdecl FUN_004cda78(int *param_1);
int __cdecl FUN_004cda90(int param_1);
int __cdecl FUN_004cda9c(int param_1);
undefined4 __stdcall FUN_004cdab0(void);
int __cdecl FUN_004cdab4(int param_1);
bool __cdecl FUN_004cdac8(int param_1,int param_2);
undefined4 * __cdecl FUN_004cdae4(undefined4 *param_1,undefined4 *param_2);
int __cdecl FUN_004cdb24(int param_1);
undefined4 * __stdcall FUN_004cdbb8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
undefined4 __stdcall FUN_004cdbc1(void);
void __cdecl FUN_004ce4c0(undefined4 *param_1,undefined4 param_2);
void __cdecl FUN_004ce4d0(int param_1,int param_2);
undefined4 __cdecl FUN_004ce568(undefined4 param_1);
void __cdecl FUN_004ce570(undefined4 *param_1,undefined4 *param_2);
int __cdecl FUN_004ce588(int param_1);
int __cdecl FUN_004ce5b4(int param_1);
void __cdecl FUN_004ce5e0(int param_1,int param_2);
void __cdecl FUN_004ce6a8(int param_1,int param_2);
void __cdecl FUN_004ce770(int param_1,int param_2,char param_3);
undefined4 __cdecl FUN_004ce7c4(undefined4 param_1);
int __cdecl FUN_004ce7ec(int param_1);
undefined4 __cdecl FUN_004ce7f8(undefined4 param_1,undefined4 param_2);
void __cdecl FUN_004ce800(undefined4 param_1,int param_2);
void __cdecl FUN_004ce810(int param_1);
void __cdecl FUN_004ce88c(int param_1);
undefined4 __cdecl FUN_004ce924(int param_1);
int __cdecl FUN_004ce930(int param_1);
int __cdecl FUN_004ce944(int *param_1);
int __cdecl FUN_004ce950(int *param_1);
undefined4 * __stdcall FUN_004ce974(void);
undefined4 * __cdecl FUN_004ce97c(undefined4 *param_1);
undefined4 * __cdecl FUN_004ce9b0(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_004ce9e4(int *param_1);
undefined4 __cdecl FUN_004cea04(undefined4 param_1);
void __stdcall FUN_004cea2c(void);
void __stdcall FUN_004cea3c(void);
undefined4 __cdecl FUN_004cea44(undefined4 param_1);
undefined4 __cdecl FUN_004cea6c(int param_1);
void __stdcall FUN_004cea80(void);
int __cdecl FUN_004cea90(int param_1,int param_2,undefined4 *param_3);
int __cdecl FUN_004ceab4(int param_1,int param_2);
undefined4 __cdecl FUN_004ceae8(undefined4 param_1);
void __cdecl FUN_004ceb10(int param_1);
undefined4 __cdecl FUN_004ceb88(int param_1);
undefined4 __cdecl FUN_004ceb94(int param_1);
int __cdecl FUN_004ceba0(int param_1,int param_2,undefined4 *param_3);
int __cdecl FUN_004cebc4(int param_1,int param_2);
undefined4 __cdecl FUN_004cebf8(undefined4 param_1);
undefined4 __cdecl FUN_004cec20(undefined4 param_1);
void __stdcall FUN_004cec48(void);
undefined4 __cdecl FUN_004cec58(undefined4 param_1);
void __stdcall FUN_004cec80(void);
int __cdecl FUN_004cec90(int param_1,int *param_2);
int __cdecl FUN_004cecec(int param_1);
int * __cdecl FUN_004cecf8(int *param_1);
undefined4 __cdecl FUN_004ced34(undefined4 *param_1);
undefined4 __cdecl FUN_004ced40(int *param_1,uint param_2);
int * __cdecl FUN_004ced58(int *param_1);
undefined4 * __cdecl FUN_004ced98(undefined4 *param_1);
void __cdecl FUN_004cedc4(int param_1,uint *param_2,undefined4 param_3);
undefined4 * __stdcall FUN_004cedfc(void);
undefined4 * __stdcall FUN_004cee50(void);
undefined * __stdcall FUN_004ceea8(void);
undefined4 * __cdecl FUN_004ceed4(undefined4 *param_1,undefined4 param_2,char *param_3);
undefined4 * __cdecl FUN_004cef38(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
int __cdecl FUN_004cef80(int param_1,char *param_2);
undefined4 * __cdecl FUN_004cefbc(undefined4 param_1,uint *param_2,undefined4 param_3);
undefined4 * __cdecl FUN_004cf040(undefined4 *param_1,uint *param_2,undefined4 param_3);
undefined4 __cdecl FUN_004cf09c(undefined4 param_1,uint *param_2);
int * __cdecl FUN_004cf0b8(int *param_1,int param_2);
int __cdecl FUN_004cf0fc(int param_1,undefined4 param_2,int param_3);
int __cdecl FUN_004cf164(int param_1,int param_2,int *param_3);
int * __cdecl FUN_004cf1ac(int *param_1,int param_2,undefined4 *param_3);
namespace __rwstd::locale_vector_rwstd_rwcat_ptr { void __cdecl _dtor(int *param_1,byte param_2); }
undefined4 __cdecl FUN_004cf2b4(int param_1);
int __cdecl FUN_004cf2c0(int *param_1,int param_2);
int * __cdecl FUN_004cf2d4(int *param_1,int param_2,undefined4 *param_3);
namespace __rwstd::locale_vector_rwstd_facet_imp_ptr { void __cdecl _dtor(int *param_1,byte param_2); }
int __cdecl FUN_004cf384(int param_1,int param_2);
void __cdecl FUN_004cf3f4(int *param_1);
undefined4 __cdecl FUN_004cf40c(int param_1);
int __cdecl FUN_004cf41c(int param_1,uint *param_2);
undefined4 __cdecl FUN_004cf594(undefined4 param_1);
undefined4 * __cdecl FUN_004cf59c(undefined4 *param_1,int param_2);
bool __cdecl FUN_004cf5f0(char *param_1,char *param_2);
void __cdecl FUN_004cf608(undefined1 *param_1,undefined1 *param_2);
char * __cdecl FUN_004cf618(uint *param_1);
namespace std::string { int __cdecl string_from_cstr(int param_1,uint *param_2); }
undefined4 * __cdecl FUN_004cf758(undefined4 *param_1,undefined4 *param_2,uint param_3);
int __cdecl FUN_004cf778(int param_1,undefined4 param_2);
namespace std::string { int * __cdecl __getRep(undefined4 param_1,uint param_2,uint param_3); }
int __stdcall FUN_004cf870(void);
undefined4 * __cdecl FUN_004cf8dc(undefined4 *param_1);
undefined4 * __cdecl FUN_004cf91c(undefined4 *param_1,int param_2);
void __cdecl FUN_004cf950(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void __cdecl FUN_004cf968(undefined4 param_1,undefined4 *param_2);
undefined4 __cdecl FUN_004cf9b8(undefined4 param_1,undefined4 param_2);
undefined4 * __cdecl FUN_004cfa18(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_004cfa4c(undefined4 param_1,undefined4 param_2,undefined1 *param_3);
void __cdecl FUN_004cfa64(undefined4 param_1,undefined1 *param_2);
void __cdecl FUN_004cfa80(int *param_1,int param_2);
undefined4 __stdcall FUN_004cfa9c(void);
int __cdecl FUN_004cfaa0(int param_1);
int __cdecl FUN_004cfaac(int param_1,uint param_2,uint param_3,uint param_4,uint param_5);
int __cdecl FUN_004cfad4(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6, uint param_7);
undefined4 * __cdecl FUN_004cfecc(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_004cff14(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_004cff5c(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 __cdecl FUN_004cff7c(int param_1);
undefined4 __cdecl FUN_004cff94(int param_1);
undefined4 __cdecl FUN_004cffa0(int param_1);
namespace __rwstd::locale_vector_std_string { void __cdecl _dtor(int *param_1,byte param_2); }
namespace std::wstring { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_004d00c0(int param_1);
undefined4 __cdecl FUN_004d0158(int param_1);
int __cdecl FUN_004d0164(int param_1);
int __cdecl FUN_004d0178(int *param_1);
int __cdecl FUN_004d0184(int *param_1);
undefined * __stdcall FUN_004d01a8(void);
undefined4 * __cdecl FUN_004d01b0(undefined4 *param_1);
undefined4 * __cdecl FUN_004d01e8(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_004d021c(int *param_1);
undefined4 __cdecl FUN_004d023c(undefined4 param_1);
void __stdcall FUN_004d0264(void);
void __stdcall FUN_004d0274(void);
undefined4 __cdecl FUN_004d027c(undefined4 param_1);
void __stdcall FUN_004d02a4(void);
int __cdecl FUN_004d02b4(int param_1,int param_2,undefined4 *param_3);
int __cdecl FUN_004d02d8(int param_1,int param_2);
undefined4 __cdecl FUN_004d030c(undefined4 param_1);
undefined4 __cdecl FUN_004d0334(int param_1);
int __cdecl FUN_004d0348(int param_1);
int __cdecl FUN_004d03b8(int param_1,undefined4 *param_2);
int __cdecl FUN_004d03f4(int param_1);
int __cdecl FUN_004d0480(int param_1,undefined4 *param_2);
int __cdecl FUN_004d04bc(int param_1);
void __cdecl FUN_004d04c8(int *param_1);
undefined4 * __cdecl FUN_004d04e0(undefined4 *param_1);
undefined4 * __cdecl FUN_004d05d0(undefined4 *param_1,undefined4 param_2);
undefined4 * __cdecl FUN_004d0638(undefined4 *param_1);
int * __cdecl FUN_004d0688(int *param_1);
void __cdecl FUN_004d06f0(int param_1,char param_2);
undefined4 __stdcall FUN_004d0724(void);
undefined4 * __cdecl FUN_004d072c(undefined4 *param_1,int param_2);
namespace std::basic_filebuf_char { void __cdecl _dtor(int *param_1,byte param_2); }
int * __cdecl FUN_004d08c4(int *param_1);
undefined4 __stdcall FUN_004d0a2c(void);
bool __cdecl FUN_004d0a30(undefined4 param_1,int param_2);
undefined4 __cdecl FUN_004d0a40(undefined4 param_1,uint param_2);
namespace std::basic_streambuf_char { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 * __cdecl FUN_004d0ab0(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_004d0b18(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_004d0b78(undefined4 *param_1);
void __cdecl FUN_004d0be0(int param_1,undefined4 param_2);
undefined4 __cdecl FUN_004d0c30(int param_1);
undefined4 __cdecl FUN_004d0c94(int *param_1);
void __cdecl FUN_004d0cac(int param_1,uint param_2);
void __cdecl FUN_004d0cc4(int param_1,uint param_2);
undefined4 __cdecl FUN_004d0f44(int param_1);
undefined4 __cdecl FUN_004d0f50(int param_1);
int * __cdecl FUN_004d0f5c(int *param_1,LPCSTR param_2,uint param_3,uint param_4);
DWORD __cdecl FUN_004d1068(undefined4 param_1,uint param_2,LONG param_3,int param_4);
void __cdecl FUN_004d1084(int param_1,uint param_2);
namespace std::basic_ostream_char { void __cdecl _dtor(undefined4 *param_1,uint param_2); }
namespace std::basic_istream_char { void __cdecl _dtor(undefined4 *param_1,uint param_2); }
namespace std::basic_ios_char { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
int * __cdecl FUN_004d1208(int *param_1,int param_2,LPCSTR param_3,uint param_4,uint param_5);
void __cdecl FUN_004d12b8(int *param_1,LPCSTR param_2,uint param_3,uint param_4);
namespace std::basic_ifstream_char { void __cdecl _dtor(undefined4 *param_1,uint param_2); }
int * __cdecl FUN_004d13a0(int *param_1,int param_2,int param_3);
undefined4 __cdecl FUN_004d1450(int param_1);
int * __cdecl FUN_004d145c(int *param_1,int param_2,int param_3);
undefined4 * __cdecl FUN_004d1504(undefined4 *param_1,int *param_2,char param_3);
undefined4 __cdecl FUN_004d1688(int param_1);
bool __cdecl FUN_004d1694(int *param_1,int *param_2);
bool __cdecl FUN_004d16ac(int param_1,uint param_2,byte param_3);
bool __cdecl FUN_004d16ec(int param_1);
undefined4 __cdecl FUN_004d1700(int param_1);
int * __cdecl FUN_004d170c(int *param_1);
undefined4 __cdecl FUN_004d1748(int *param_1);
undefined4 __cdecl FUN_004d1758(int param_1);
undefined4 __cdecl FUN_004d1764(int *param_1);
undefined1 __cdecl FUN_004d179c(undefined1 *param_1);
undefined4 __cdecl FUN_004d17a8(int param_1);
undefined4 __cdecl FUN_004d17b4(int param_1);
void __cdecl FUN_004d17c0(int *param_1);
undefined4 __cdecl FUN_004d1804(int *param_1);
void __cdecl FUN_004d1850(int param_1,int param_2);
namespace std::basic_istream_char::sentry { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_004d187c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_004d1898(int param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_004d18b0(int param_1,int param_2);
int * __cdecl FUN_004d18dc(int *param_1,int param_2,LPCSTR param_3,uint param_4,uint param_5);
void __cdecl FUN_004d198c(int *param_1,LPCSTR param_2,uint param_3,uint param_4);
namespace std::basic_ofstream_char { void __cdecl _dtor(undefined4 *param_1,uint param_2); }
undefined4 * __cdecl FUN_004d1a74(undefined4 *param_1,int *param_2);
undefined1 __stdcall FUN_004d1b5c(void);
bool __cdecl FUN_004d1b68(undefined *param_1);
bool __cdecl FUN_004d1b7c(undefined4 *param_1);
undefined4 __cdecl FUN_004d1bb4(undefined4 param_1,int *param_2);
int __cdecl FUN_004d1bdc(int param_1,uint param_2,int param_3);
int __cdecl FUN_004d1c6c(int param_1,undefined4 *param_2,uint param_3);
int __cdecl FUN_004d1e40(int param_1,int param_2,uint param_3,uint param_4);
undefined4 * __cdecl FUN_004d1fb8(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_004d2000(int param_1,int param_2);
namespace std::num_put_char_std_ostreambuf_iterator_char { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __cdecl FUN_004d2174(undefined4 *param_1,byte param_2);
void __cdecl FUN_004d2218(undefined4 *param_1,byte param_2);
undefined4 * __cdecl FUN_004d2278(int *param_1,undefined4 *param_2);
undefined4 * __cdecl FUN_004d2320(int *param_1);
void __cdecl FUN_004d2384(int *param_1);
int __stdcall FUN_004d2494(void);
int __stdcall FUN_004d2504(void);
void __cdecl FUN_004d2574(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void __cdecl FUN_004d258c(undefined4 param_1,undefined4 *param_2);
undefined4 * __cdecl FUN_004d25dc(undefined4 *param_1,undefined4 *param_2);
int __cdecl FUN_004d2628(int param_1);
int __cdecl FUN_004d26e0(int param_1,int *param_2,undefined4 *param_3,int param_4,undefined4 *param_5);
undefined4 __cdecl FUN_004d2a8c(undefined4 param_1,undefined4 param_2);
undefined4 __cdecl FUN_004d2a94(int param_1);
bool __cdecl FUN_004d2ab8(undefined4 param_1,int *param_2,int *param_3);
undefined4 * __stdcall FUN_004d2ad0(undefined4 *param_1,undefined4 *param_2,int *param_3);
undefined4 __stdcall FUN_004d2ad6(void);
int __cdecl FUN_004d2bbc(int param_1);
int __cdecl FUN_004d2bd0(int *param_1,uint param_2,undefined4 param_3);
int __cdecl FUN_004d2c54(int *param_1,uint param_2,undefined4 param_3);
void __cdecl FUN_004d2cd8(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __stdcall FUN_004d2d10(void);
void __stdcall FUN_004d2d98(void);
undefined4 * __cdecl FUN_004d2db0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_004d2e04(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __stdcall FUN_004d2e3c(void);
undefined4 * __cdecl FUN_004d2e8c(undefined4 *param_1,undefined4 param_2);
void __stdcall FUN_004d2ed8(void);
undefined4 * __cdecl FUN_004d2ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined1 __cdecl FUN_004d2f44(undefined1 *param_1);
bool __cdecl FUN_004d2f50(int param_1);
undefined4 __cdecl FUN_004d2f64(int param_1);
undefined1 __cdecl FUN_004d2f78(int param_1);
undefined1 __cdecl FUN_004d2f84(int param_1);
namespace std::basic_filebuf_char { void __cdecl vf9(int *param_1); }
undefined4 __cdecl FUN_004d3420(int *param_1);
undefined4 * __cdecl FUN_004d3430(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_004d3444(int *param_1);
int __cdecl FUN_004d3474(int *param_1);
undefined4 __cdecl FUN_004d348c(int param_1);
undefined4 __cdecl FUN_004d3498(int param_1);
undefined4 __cdecl FUN_004d34a4(int param_1);
undefined4 __cdecl FUN_004d34b0(int param_1);
undefined4 __cdecl FUN_004d34bc(int *param_1,undefined1 param_2);
int * __cdecl FUN_004d3508(int *param_1,int param_2);
int * __cdecl FUN_004d354c(int *param_1,int *param_2);
int * __cdecl FUN_004d35a0(int *param_1);
bool __cdecl FUN_004d35dc(undefined4 param_1,uint param_2,char *param_3,int param_4,int param_5);
namespace std::basic_filebuf_char { int __cdecl vf10(int param_1,int param_2); }
namespace std::basic_filebuf_char { undefined4 __cdecl vf12(int *param_1); }
int * __cdecl FUN_004d39c0(int *param_1,int param_2);
undefined4 * __cdecl FUN_004d3a14(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_004d3a40(undefined4 *param_1);
bool __cdecl FUN_004d3a4c(int *param_1,int *param_2);
undefined4 * __cdecl FUN_004d3a64(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_004d3ab4(int *param_1,int *param_2);
bool __cdecl FUN_004d3b00(int *param_1,int *param_2);
namespace std::basic_filebuf_char { void __cdecl vf7(int *param_1); }
undefined4 __cdecl FUN_004d3f5c(int *param_1);
void __cdecl FUN_004d3f8c(undefined4 *param_1,undefined4 param_2);
char * __cdecl FUN_004d3f9c(undefined4 param_1,uint param_2,char *param_3,int param_4,int param_5);
int __cdecl FUN_004d3fc4(int param_1,char *param_2,char *param_3);
namespace std::basic_streambuf_char { void __stdcall vf9(void); }
namespace std::basic_streambuf_char { void __stdcall vf10(void); }
namespace std::basic_streambuf_char { undefined4 __stdcall vf12(void); }
namespace std::basic_streambuf_char { void __cdecl vf8(int *param_1); }
namespace std::basic_streambuf_char { void __stdcall vf7(void); }
uint __cdecl FUN_004d40d0(int param_1,uint param_2,uint param_3,byte *param_4,uint param_5);
int __cdecl FUN_004d4204(byte *param_1,byte *param_2,int param_3);
uint __cdecl FUN_004d4220(int param_1,uint param_2,uint param_3,int param_4);
namespace std::basic_filebuf_char { int __cdecl vf5(int param_1); }
namespace std::basic_filebuf_char { int __cdecl vf11(int *param_1,undefined1 *param_2,int param_3); }
undefined4 __cdecl FUN_004d44ec(int param_1);
int __cdecl FUN_004d44f8(int *param_1);
int * __cdecl FUN_004d4534(int *param_1,undefined1 *param_2,int param_3);
undefined1 __cdecl FUN_004d4740(int param_1);
namespace std::basic_streambuf_char { int __cdecl vf5(int param_1); }
namespace std::basic_streambuf_char { uint __cdecl vf6(int *param_1,undefined4 *param_2,uint param_3); }
namespace std::basic_streambuf_char { int __cdecl vf11(int *param_1,undefined1 *param_2,int param_3); }
void __cdecl FUN_004d48d8(int param_1);
undefined4 __cdecl FUN_004d4948(int param_1);
undefined4 __cdecl FUN_004d4954(int param_1,undefined4 param_2);
int __stdcall FUN_004d4968(void);
int __cdecl FUN_004d4978(int param_1,uint param_2,uint param_3);
int * __cdecl FUN_004d49a4(int *param_1,int param_2);
bool __cdecl FUN_004d4be0(int param_1);
undefined1 __cdecl FUN_004d4bf4(int param_1);
int * __cdecl FUN_004d4c00(int *param_1);
int __cdecl FUN_004d4c40(int param_1,int *param_2);
undefined1 __cdecl FUN_004d4c8c(int param_1);
undefined1 __cdecl FUN_004d4c98(int param_1);
int * __cdecl FUN_004d4ca4(int *param_1);
undefined4 __cdecl FUN_004d4e1c(undefined4 param_1,int *param_2);
void __cdecl FUN_004d4e64(undefined4 param_1,undefined *param_2);
int * __cdecl FUN_004d4e74(int *param_1,undefined1 param_2);
int * __cdecl FUN_004d4f98(int *param_1,int param_2,int param_3);
undefined4 __cdecl FUN_004d50b4(int *param_1);
int * __cdecl FUN_004d50d0(int *param_1,undefined1 param_2);
int * __cdecl FUN_004d5374(int *param_1,uint *param_2);
undefined4 __cdecl FUN_004d562c(int param_1,undefined4 param_2);
namespace std::basic_filebuf_char { int * __cdecl vf2(int *param_1,int param_2,int param_3); }
namespace std::basic_streambuf_char { undefined4 __cdecl vf2(undefined4 param_1); }
namespace std::string { int __cdecl append(int param_1,int param_2); }
int __cdecl FUN_004d5850(int param_1,int param_2,uint param_3,uint param_4);
namespace std::string { void __cdecl assign(int param_1,int param_2); }
int __cdecl FUN_004d5a50(int param_1,uint param_2,uint param_3,int param_4);
int __cdecl FUN_004d5a8c(int param_1,uint param_2,int param_3);
namespace std::string { int __cdecl replace_fill(int param_1,uint param_2,uint param_3,uint param_4,undefined1 param_5); }
undefined4 * __cdecl FUN_004d5fc4(undefined4 *param_1,uint param_2,undefined1 param_3);
int __cdecl FUN_004d5fe4(int *param_1,uint param_2);
int __cdecl FUN_004d6118(int param_1,int param_2,uint param_3,uint param_4);
void __cdecl FUN_004d6234(int param_1,uint param_2);
int __cdecl FUN_004d6350(int param_1,int param_2);
int __cdecl FUN_004d6394(int param_1,int param_2);
int __cdecl FUN_004d63d8(int param_1,int param_2);
namespace std::basic_filebuf_char { int * __cdecl vf3(int *param_1,int *param_2,int param_3,int param_4); }
undefined4 __cdecl FUN_004d6a44(int *param_1);
undefined4 * __cdecl FUN_004d6a54(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_004d6a84(int *param_1,int param_2);
void __cdecl FUN_004d6a94(int *param_1,int param_2);
namespace std::basic_filebuf_char { int * __cdecl vf4(int *param_1,int *param_2); }
undefined4 * __cdecl FUN_004d6c8c(undefined4 *param_1,int param_2);
int * __cdecl FUN_004d6cac(int *param_1,int *param_2);
namespace std::basic_streambuf_char { int * __cdecl vf3(int *param_1); }
namespace std::basic_streambuf_char { int * __cdecl vf4(int *param_1); }
void __cdecl FUN_004d6d58(int param_1,uint param_2);
void __cdecl FUN_004d6dc8(int *param_1);
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf12(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9, undefined4 param_10); }
void __cdecl FUN_004d6e54(int param_1,undefined1 param_2);
undefined4 __cdecl FUN_004d71bc(int param_1);
undefined4 __cdecl FUN_004d71d4(int param_1);
void __cdecl FUN_004d71e8(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_004d7210(undefined4 param_1);
int __cdecl FUN_004d7218(int param_1,undefined1 param_2);
undefined4 __cdecl FUN_004d7264(int param_1);
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf2(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined4 param_8,char param_9); }
void __stdcall FUN_004d7320(int param_1);
void __stdcall FUN_004d7326(void);
int __cdecl FUN_004d7414(int param_1,char param_2);
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf7(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9); }
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf5(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9, undefined4 param_10); }
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9); }
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf6(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9, undefined4 param_10,undefined2 param_11); }
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf3(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9); }
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined2 param_9); }
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf13(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9, undefined4 param_10); }
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf11(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9); }
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9); }
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf9(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined2 param_9); }
undefined4 * __cdecl FUN_004d7854(undefined4 *param_1,int *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_004d7a5c(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3);
undefined4 * __cdecl FUN_004d7a9c(undefined4 *param_1,undefined4 *param_2);
uint __cdecl FUN_004d7ae0(int param_1,undefined4 *param_2,uint param_3,uint param_4);
int __cdecl FUN_004d7be4(int param_1,byte *param_2,int param_3,int param_4);
int __cdecl FUN_004d7cf0(int param_1,byte *param_2,uint param_3,uint param_4);
void __cdecl FUN_004d7e24(int param_1);
void __cdecl FUN_004d7e64(int *param_1);
namespace std::basic_streambuf_char { void __cdecl vf1(int param_1,int *param_2); }
void __cdecl FUN_004d7ebc(int *param_1);
undefined4 __cdecl FUN_004d8000(int param_1,uint param_2);
undefined4 * __cdecl FUN_004d8030(undefined4 *param_1);
undefined4 * __cdecl FUN_004d805c(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
undefined4 __cdecl FUN_004d80dc(undefined4 param_1);
undefined4 * __cdecl FUN_004d80e4(undefined4 *param_1);
void __cdecl FUN_004d8174(int param_1);
undefined4 * __cdecl FUN_004d8180(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_004d8200(int param_1,char *param_2);
namespace __rwstd::facet_imp { void vf2(int *param_1,undefined4 param_2,byte *param_3,byte *param_4,int param_5, undefined4 param_6,byte *param_7,byte *param_8,byte *param_9,byte *param_10, byte *param_11,int param_12,undefined4 param_13,byte *param_14,byte *param_15, byte *param_16,byte *param_17,byte *param_18,byte *param_19,byte *param_20, byte *param_21,byte *param_22,byte *param_23,byte *param_24,byte *param_25, byte *param_26); }
namespace std::basic_filebuf_char { void vf13(byte *param_1,byte *param_2,undefined4 param_3,char *param_4,byte *param_5, char *param_6,byte *param_7); }
void __cdecl FUN_004d89e4(int param_1,byte param_2);
namespace std::pair_const_int_std_string { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_004d8ac8(int param_1,byte param_2);
namespace __rwstd::punct_data_char { void __cdecl _dtor(int param_1,byte param_2); }
undefined4 * __cdecl FUN_004d8b80(undefined4 *param_1,int param_2);
namespace std::ios_base::failure { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::ios_base::failure { undefined4 __cdecl vf1(int param_1); }
undefined4 __cdecl FUN_004d8d78(undefined4 param_1);
namespace std::ios_base::Init { void __cdecl _dtor(int param_1,byte param_2); }
undefined4 * __cdecl FUN_004d8e6c(undefined4 *param_1);
namespace std::ios_base { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __stdcall FUN_004d9030(void);
void __stdcall FUN_004d90fc(void);
void __stdcall FUN_004d91b4(void);
undefined1 * __cdecl FUN_004d91bc(uint *param_1);
undefined4 * __cdecl FUN_004d9614(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4);
void __cdecl FUN_004d984c(int param_1,int *param_2);
void __cdecl FUN_004d9a28(undefined4 *param_1,byte param_2);
uint __cdecl FUN_004d9abc(int param_1,uint param_2);
void __cdecl FUN_004d9af0(int param_1,byte *param_2,byte *param_3);
uint __cdecl FUN_004d9b2c(int param_1,uint param_2);
void __cdecl FUN_004d9b60(int param_1,byte *param_2,byte *param_3);
undefined1 __cdecl FUN_004d9b9c(undefined4 param_1,undefined1 param_2);
int __cdecl FUN_004d9ba4(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
undefined1 __cdecl FUN_004d9bc8(undefined4 param_1,undefined1 param_2);
int __cdecl FUN_004d9bd0(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4, undefined4 *param_5);
undefined4 __cdecl FUN_004d9bf4(char *param_1);
undefined4 * __cdecl FUN_004d9c54(undefined4 *param_1,uint *param_2,undefined4 param_3);
void __cdecl FUN_004d9e14(undefined4 *param_1,byte param_2);
uint * __cdecl FUN_004d9e74(uint *param_1);
void __stdcall FUN_004d9fc8(void);
void __stdcall FUN_004da004(void);
undefined4 * __cdecl FUN_004da038(undefined4 *param_1,LPCSTR param_2);
namespace __rwstd::__rwcat { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 __cdecl FUN_004da204(undefined4 *param_1,undefined4 param_2,UINT param_3,undefined4 param_4);
uint __cdecl FUN_004da4c0(int param_1);
int * __cdecl FUN_004da4f8(LPCSTR param_1);
undefined4 __cdecl FUN_004da604(int param_1,undefined4 param_2,UINT param_3,undefined4 param_4);
namespace std::map_int_std_string_std_less_int { void __cdecl _dtor(int param_1,byte param_2); }
void __stdcall FUN_004daa54(void);
int __cdecl FUN_004daac4(int param_1);
namespace __rwstd::ref_counted { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
int * __cdecl FUN_004dab3c(int *param_1);
undefined4 * __cdecl FUN_004dab5c(undefined4 *param_1,int param_2,undefined4 param_3);
namespace __rwstd::locale_imp { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined * __cdecl FUN_004dae04(int param_1,uint param_2);
int * __cdecl FUN_004dae38(int *param_1,uint *param_2,int param_3);
namespace __rwstd::use_Clib_locale { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __stdcall FUN_004daff8(void);
int * __cdecl FUN_004db414(int *param_1,int *param_2);
int __cdecl FUN_004db488(int param_1,int *param_2);
int * __cdecl FUN_004db7f8(int *param_1,uint *param_2,char param_3,uint param_4,undefined *param_5);
void __cdecl FUN_004db998(int *param_1,int *param_2,uint *param_3);
void __cdecl FUN_004dba58(undefined4 *param_1,byte param_2);
undefined4 __cdecl FUN_004dbabc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8);
undefined4 __cdecl FUN_004dbad8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8);
undefined4 __stdcall FUN_004dbaf4(void);
undefined1 __stdcall FUN_004dbb00(void);
undefined4 __stdcall FUN_004dbb08(void);
uint __cdecl FUN_004dbb14(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5);
undefined4 __stdcall FUN_004dbb28(void);
int __cdecl FUN_004dbb34(int param_1,int param_2);
namespace std::runtime_error { undefined4 __cdecl vf1(int param_1); }
undefined4 __cdecl FUN_004dbc60(int param_1,int *param_2);
void __cdecl FUN_004dbda4(int param_1);
void __cdecl FUN_004dbdcc(int param_1,undefined1 *param_2,char *param_3,char param_4);
void __cdecl FUN_004dbe44(int param_1);
void __cdecl FUN_004dbea8(int param_1);
void __cdecl FUN_004dbf0c(int param_1);
void __cdecl FUN_004dbf68(int param_1);
void __cdecl FUN_004dbfc4(int param_1);
void __cdecl FUN_004dc020(int param_1);
void __cdecl FUN_004dc07c(int param_1);
void __cdecl FUN_004dc0e0(int param_1);
undefined4 __cdecl FUN_004dc144(int param_1,undefined1 *param_2,char param_3);
void __cdecl FUN_004dc1d4(int param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_004dc254(int param_1);
int __cdecl FUN_004dc2bc(int param_1,int param_2,char *param_3);
undefined1 * __cdecl FUN_004dc320(undefined1 *param_1,byte *param_2);
char * __cdecl FUN_004dc358(char *param_1,UINT param_2);
namespace std::exception { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::bad_alloc { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::logic_error { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::domain_error { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::length_error { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::out_of_range { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::runtime_error { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
char * __cdecl memchr(char *param_1,char param_2,int param_3);
short * __cdecl FUN_004dc7b4(short *param_1,short param_2,int param_3);
undefined4 * __cdecl memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 * __cdecl FUN_004dc7f8(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 * __cdecl memset(undefined4 *param_1,undefined1 param_2,uint param_3);
undefined2 * __cdecl FUN_004dc8d0(undefined2 *param_1,undefined2 param_2,int param_3);
char * __cdecl FUN_004dc8e8(char *param_1,char *param_2);
char * __cdecl FUN_004dc924(char *param_1,char param_2);
int __cdecl FUN_004dc978(char *param_1,char *param_2);
char * __cdecl FUN_004dc9c4(char *param_1,char *param_2);
char * __cdecl strlen(uint *param_1);
char * __cdecl FUN_004dca50(char *param_1,char *param_2,uint param_3);
uint __cdecl FUN_004dcac0(byte *param_1,byte *param_2,int param_3);
char * __cdecl thunk_memchr(char *param_1,char param_2,int param_3);
char * __cdecl thunk_memchr_4dcaed(char *param_1,char param_2,int param_3);
char * __cdecl thunk_FUN_004dc924(char *param_1,char param_2);
char * __cdecl thunk_FUN_004dc924_4dcb01(char *param_1,char param_2);
char * __cdecl thunk_FUN_004dcc90(char *param_1,char *param_2);
uint * __cdecl thunk_strrchr(uint *param_1,char param_2);
uint * __cdecl thunk_strrchr_4dcb19(uint *param_1,char param_2);
char * __cdecl thunk_FUN_004dcd18(char *param_1,char *param_2);
char * __cdecl thunk_FUN_004dcd18_4dcb25(char *param_1,char *param_2);
int __cdecl FUN_004dcb2c(byte *param_1,byte *param_2,int param_3);
int __cdecl FUN_004dcb98(char *param_1,char *param_2);
undefined4 * __cdecl FUN_004dcbc4(uint *param_1);
int __cdecl FUN_004dcbf8(char *param_1,char *param_2);
undefined4 * __cdecl FUN_004dcc40(undefined4 *param_1,uint *param_2,char *param_3);
char * __cdecl FUN_004dcc90(char *param_1,char *param_2);
uint * __cdecl strrchr(uint *param_1,char param_2);
int __cdecl FUN_004dcce8(char *param_1,char *param_2);
char * __cdecl FUN_004dcd18(char *param_1,char *param_2);
char * __cdecl FUN_004dcd6c(char *param_1,char *param_2);
char * __cdecl FUN_004dcdd4(char *param_1,char *param_2);
int __cdecl FUN_004dce0c(short *param_1);
short * __cdecl FUN_004dce24(short *param_1,short *param_2);
undefined4 __InitExceptBlockLDTC(int param_1);
undefined4 __cdecl FUN_004dced4(int param_1,int *param_2,undefined4 param_3,int param_4);
void __stdcall FUN_004dd02b(void);
undefined4 * __cdecl FUN_004dd07e(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5,int *param_6, uint *param_7,int param_8);
undefined4 __cdecl FUN_004dd2e5(undefined4 *param_1,int param_2,int *param_3,int *param_4);
char * __cdecl FUN_004dd388(int param_1);
undefined4 __cdecl FUN_004dd3c0(int *param_1,int *param_2);
undefined4 __cdecl FUN_004dd49c(int *param_1,int *param_2,int param_3,undefined4 param_4);
namespace std::type_info { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 * __cdecl FUN_004dd5cc(int param_1,int param_2,int param_3);
char * __cdecl FUN_004dd6dc(int param_1);
undefined4 * __cdecl FUN_004dd744(int param_1,int param_2,int *param_3,int *param_4,int param_5);
int __cdecl FUN_004dd82c(int param_1,int param_2,int *param_3);
namespace type_info_hash { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __stdcall FUN_004dd974(void);
void __stdcall FUN_004dd99c(void);
void __stdcall FUN_004dda40(void);
void __stdcall FUN_004ddab4(void);
void __cdecl FUN_004ddaec(undefined4 *param_1);
void __cdecl FUN_004ddb38(undefined4 *param_1);
undefined4 __stdcall FUN_004ddb60(void);
LONG __cdecl FUN_004ddb6c(PEXCEPTION_RECORD param_1,PVOID param_2,PCONTEXT param_3);
void __cdecl FUN_004ddc5c(undefined4 *param_1);
void __cdecl FUN_004ddc78(undefined4 *param_1);
undefined4 __cdecl FUN_004ddc88(undefined4 param_1);
void __stdcall FUN_004ddcd4(void);
void __cdecl FUN_004ddce8(undefined4 *param_1);
void __cdecl FUN_004ddcfd(undefined4 *param_1);
void FUN_004ddd36(PVOID param_1,PEXCEPTION_RECORD param_2);
undefined4 __stdcall FUN_004ddd4b(void);
undefined4 __cdecl FUN_004ddd54(LPCSTR param_1,byte param_2);
undefined4 __cdecl FUN_004ddd90(uint param_1);
uint __cdecl FUN_004dddf0(uint param_1);
bool __cdecl FUN_004dde78(uint param_1);
bool __cdecl FUN_004ddea8(HANDLE param_1);
DWORD __cdecl FUN_004ddec0(uint param_1,LONG param_2,int param_3);
int __cdecl FUN_004ddf38(LPCSTR param_1,uint param_2,uint param_3);
char * __cdecl FUN_004de134(char *param_1,int param_2);
char * __cdecl FUN_004de1a0(uint param_1,char *param_2,char *param_3);
int __cdecl FUN_004de2d0(LPCWSTR param_1,uint param_2,uint param_3);
int __cdecl FUN_004de4cc(uint param_1,char *param_2,uint param_3);
undefined4 __cdecl FUN_004de5e8(undefined1 *param_1);
int __stdcall FUN_004de5fc(void);
undefined4 __cdecl FUN_004de634(uint param_1,LPVOID param_2,DWORD param_3);
void __cdecl FUN_004de67c(uint param_1,char *param_2,char *param_3);
undefined4 __cdecl thunk_FUN_004e0588(LPCSTR param_1);
void __cdecl FUN_004de6a0(LPCWSTR param_1,uint param_2);
void __cdecl FUN_004de6c0(LPCWSTR param_1,uint param_2);
undefined4 __cdecl FUN_004de6d8(uint param_1,LPCVOID param_2,DWORD param_3);
void __cdecl FUN_004de720(uint param_1,char *param_2,uint param_3);
undefined4 __cdecl thunk_FUN_004ddd54(LPCSTR param_1,byte param_2);
undefined4 __cdecl FUN_004de744(int *param_1,int param_2,int param_3,int param_4);
undefined4 __cdecl thunk_FUN_004ddd90(uint param_1);
undefined4 __cdecl FUN_004de7cc(int *param_1);
undefined4 __cdecl FUN_004de85c(int *param_1);
int __stdcall FUN_004de8dc(void);
void __cdecl FUN_004de938(undefined *param_1);
void __cdecl FUN_004de948(undefined4 *param_1);
uint __cdecl FUN_004de95c(char *param_1,uint *param_2,undefined4 *param_3);
int * __cdecl FUN_004dea38(int *param_1,LPCSTR param_2,char *param_3,uint param_4);
undefined4 * __stdcall FUN_004deae4(void);
int * __cdecl fopen(LPCSTR param_1,char *param_2);
uint __cdecl FUN_004deb3c(byte *param_1,uint param_2,int *param_3);
char * __cdecl FUN_004dec18(char *param_1,char *param_2,int *param_3);
uint __cdecl FUN_004ded48(char *param_1,int param_2,int param_3,int *param_4);
int __cdecl FUN_004ded7c(undefined4 *param_1);
undefined4 __cdecl fseek(int *param_1,LONG param_2,int param_3);
DWORD __cdecl FUN_004dee3c(undefined4 *param_1);
char * __cdecl FUN_004deebc(char *param_1,LPCSTR param_2,uint param_3);
uint __cdecl FUN_004def90(byte *param_1,uint param_2,uint param_3,int *param_4);
int __cdecl FUN_004defc4(undefined4 param_1,undefined4 param_2);
uint __cdecl FUN_004df004(uint param_1,uint param_2,undefined4 param_3);
void __cdecl FUN_004df06c(uint param_1);
int __cdecl FUN_004df088(int *param_1);
void __stdcall FUN_004df124(void);
undefined4 __cdecl FUN_004df280(int param_1);
undefined4 __stdcall FUN_004df2e4(void);
void __stdcall FUN_004df2f8(void);
undefined4 __cdecl FUN_004df32c(undefined4 *param_1);
uint __cdecl FUN_004df398(int *param_1);
uint __cdecl FUN_004df3b0(int *param_1);
uint __cdecl FUN_004df498(byte param_1,int *param_2);
DWORD __cdecl thunk_FUN_004ddec0(uint param_1,LONG param_2,int param_3);
char * __cdecl FUN_004df5b0(char *param_1,char *param_2,ushort param_3);
char * __cdecl FUN_004df600(char *param_1,ushort *param_2);
int __cdecl thunk_FUN_004ddf38(LPCSTR param_1,uint param_2,uint param_3);
char * __cdecl thunk_FUN_004de1a0(uint param_1,char *param_2,char *param_3);
undefined4 __cdecl FUN_004df65c(LPCSTR param_1,LPCSTR param_2);
void __cdecl FUN_004df67c(int *param_1);
int __cdecl FUN_004df6a0(undefined *param_1,undefined *param_2,byte *param_3,byte *param_4,int *param_5);
uint __cdecl FUN_004dfed8(undefined *param_1,undefined *param_2,undefined4 param_3,uint param_4,int param_5, int *param_6,int *param_7);
uint __cdecl FUN_004e00a0(undefined *param_1,undefined *param_2,uint param_3,uint param_4,int param_5, int *param_6,int *param_7);
undefined4 __cdecl setvbuf(int *param_1,int param_2,int param_3,uint param_4);
uint __cdecl FUN_004e031c(undefined4 *param_1,uint param_2,int *param_3);
uint __cdecl FUN_004e0344(undefined1 *param_1,byte *param_2);
void __cdecl FUN_004e036c(undefined1 *param_1,byte *param_2,uint *param_3);
uint __cdecl FUN_004e0394(int *param_1);
void __cdecl FUN_004e03b4(undefined4 param_1,int *param_2);
int __cdecl FUN_004e03c0(undefined4 param_1,byte *param_2);
void __cdecl FUN_004e03e4(undefined4 param_1,byte *param_2,int *param_3);
char * __cdecl FUN_004e0520(char *param_1);
int __cdecl FUN_004e0538(int param_1,uint *param_2);
undefined4 __cdecl FUN_004e0588(LPCSTR param_1);
void __cdecl FUN_004e05a4(int param_1);
void __cdecl FUN_004e05ec(undefined1 param_1,int param_2);
void __cdecl FUN_004e0620(uint param_1,int param_2);
uint __cdecl FUN_004e0654(undefined4 param_1,undefined4 param_2,byte *param_3,int param_4,undefined4 param_5, uint *param_6);
int __cdecl thunk_FUN_004de4cc(uint param_1,char *param_2,uint param_3);
undefined ** __stdcall FUN_004e0ff0(void);
char * __cdecl FUN_004e0ff8(char *param_1,char *param_2,uint param_3);
undefined4 __cdecl FUN_004e12bc(int param_1);
undefined4 __cdecl FUN_004e1310(uint param_1);
bool __cdecl FUN_004e1328(uint param_1);
undefined4 __cdecl FUN_004e133c(uint param_1);
undefined4 __cdecl FUN_004e1354(uint param_1);
undefined4 __cdecl FUN_004e1368(uint param_1);
undefined4 __cdecl FUN_004e137c(uint param_1);
undefined4 __cdecl FUN_004e1394(uint param_1);
undefined4 __cdecl FUN_004e13a8(uint param_1);
undefined4 __cdecl FUN_004e13c0(uint param_1);
undefined4 __cdecl FUN_004e13d4(uint param_1);
undefined4 __cdecl FUN_004e13e8(uint param_1);
undefined4 __cdecl FUN_004e13fc(uint param_1);
void __cdecl FUN_004e1414(ushort param_1);
bool __cdecl FUN_004e142c(ushort param_1);
void __cdecl FUN_004e1440(ushort param_1);
void __cdecl FUN_004e1458(ushort param_1);
void __cdecl FUN_004e146c(ushort param_1);
void __cdecl FUN_004e1480(ushort param_1);
void __cdecl FUN_004e1498(ushort param_1);
void __cdecl FUN_004e14ac(ushort param_1);
void __cdecl FUN_004e14c4(ushort param_1);
uint __cdecl FUN_004e14d8(ushort param_1);
void __cdecl FUN_004e14ec(ushort param_1);
void __cdecl FUN_004e1500(ushort param_1);
ushort __cdecl FUN_004e1518(uint param_1,ushort param_2);
uint __cdecl FUN_004e155c(WCHAR param_1,uint param_2);
undefined4 __cdecl FUN_004e15b4(ushort param_1,LPCWSTR param_2);
undefined4 __cdecl FUN_004e1664(ushort param_1,uint *param_2);
uint __cdecl FUN_004e1bb4(int *param_1,byte *param_2);
int __cdecl FUN_004e1e0c(uint *param_1,ushort param_2);
void __cdecl FUN_004e1fc8(int param_1);
undefined4 __cdecl FUN_004e2374(int *param_1,char *param_2);
undefined4 __cdecl FUN_004e2594(uint *param_1,uint *param_2);
undefined4 __cdecl FUN_004e2734(LCID param_1,LCTYPE param_2,undefined4 *param_3);
undefined4 __cdecl FUN_004e2790(LCID param_1,LCTYPE param_2,undefined2 *param_3,int param_4);
undefined4 __cdecl FUN_004e27ec(LCID param_1,UINT param_2,undefined4 *param_3);
bool __cdecl FUN_004e28d4(LCID param_1,undefined2 *param_2);
bool __cdecl FUN_004e2a54(LCID param_1,undefined4 *param_2);
bool __cdecl FUN_004e2eb0(LCID param_1,undefined4 *param_2);
undefined4 __stdcall FUN_004e2f38(void);
undefined ** __stdcall FUN_004e2f44(void);
byte * __cdecl FUN_004e2fdc(byte *param_1);
uint __cdecl FUN_004e3000(uint param_1);
uint __cdecl FUN_004e3054(uint param_1);
undefined4 __cdecl FUN_004e30a8(byte *param_1,int param_2);
undefined4 __cdecl FUN_004e3124(LPWSTR param_1,byte *param_2,int param_3);
int __cdecl FUN_004e31f8(LPSTR param_1,ushort param_2);
char * __cdecl FUN_004e326c(LPWSTR param_1,uint *param_2,char *param_3);
int __cdecl FUN_004e3398(short *param_1,int param_2);
uint __cdecl FUN_004e33d4(LPSTR param_1,LPCWSTR param_2,uint param_3);
undefined4 __cdecl FUN_004e3578(ushort param_1,uint *param_2);
int FUN_004e3590(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
int FUN_004e362b(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5);
uint FUN_004e36ee(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5);
void __cdecl thunk_FUN_004e3fb0(uint param_1,char *param_2,uint param_3);
void __cdecl FUN_004e3798(int param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4, undefined4 param_5,undefined4 param_6);
void __stdcall FUN_004e3848(void);
int __cdecl FUN_004e39d0(char *param_1);
void __cdecl FUN_004e3a38(char *param_1);
undefined2 __stdcall FUN_004e3a48(void);
uint __cdecl FUN_004e3a5c(uint param_1,int param_2);
undefined4 __stdcall thunk_FUN_004e3aa4(void);
undefined4 __stdcall thunk_FUN_004e3aa4_4e3a92(void);
void __stdcall thunk_FUN_004e3ab0(void);
void __stdcall thunk_FUN_004e3ab0_4e3a9e(void);
undefined4 __stdcall FUN_004e3aa4(void);
void __stdcall FUN_004e3ab0(void);
void __stdcall FUN_004e3ae1(void);
void __stdcall FUN_004e3bac(void);
void __stdcall FUN_004e3bec(void);
undefined4 __stdcall FUN_004e3c04(void);
void __cdecl FUN_004e3c2c(int param_1);
void __cdecl FUN_004e3c5c(longlong *param_1,longdouble *param_2);
ushort __cdecl FUN_004e3c80(longdouble *param_1);
char * __cdecl FUN_004e3c94(int param_1,uint param_2,char *param_3,uint param_4,char param_5,char param_6);
void __cdecl FUN_004e3d48(int param_1,undefined4 param_2,undefined4 param_3,ushort param_4);
void __cdecl FUN_004e3e60(undefined4 param_1,int param_2);
char * __cdecl FUN_004e3ed0(uint param_1,char *param_2,uint param_3,char param_4,char param_5);
void __cdecl FUN_004e3f44(uint param_1,char *param_2);
void __cdecl FUN_004e3f60(uint param_1,char *param_2,uint param_3);
void __cdecl FUN_004e3f90(uint param_1,char *param_2,uint param_3);
void __cdecl FUN_004e3fb0(uint param_1,char *param_2,uint param_3);
undefined4 __cdecl FUN_004e3fd8(int *param_1);
undefined4 __cdecl FUN_004e4004(int *param_1);
void __cdecl FUN_004e4034(undefined *param_1,undefined *param_2);
void __cdecl FUN_004e404c(double param_1,undefined4 param_2,uint param_3);
undefined4 __cdecl FUN_004e4228(undefined4 *param_1);
undefined4 __cdecl FUN_004e4250(uint *param_1,uint param_2);
void __cdecl FUN_004e4280(undefined4 param_1);
uint __stdcall FUN_004e42a8(void);
uint __cdecl FUN_004e4310(char param_1,uint param_2,uint param_3);
byte * __cdecl FUN_004e4354(longdouble *param_1,uint param_2,byte *param_3,byte param_4,char param_5,int param_6);
int __cdecl FUN_004e45dc(int param_1,int param_2);
uint __cdecl FUN_004e460c(short param_1,uint param_2,uint param_3);
void __cdecl FUN_004e4658(longdouble *param_1,int param_2,ushort *param_3,ushort param_4,short param_5, int param_6);
int __cdecl FUN_004e4910(int param_1,int param_2);
void __cdecl FUN_004e4940(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5, int *param_6,undefined4 *param_7);
void __cdecl FUN_004e4d8c(float *param_1,double *param_2,uint param_3);
void __cdecl FUN_004e4e24(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5, int *param_6,undefined4 *param_7);
void __cdecl FUN_004e526c(float *param_1,double *param_2,uint param_3);
int __cdecl FUN_004e5304(int *param_1);
void __cdecl FUN_004e5320(undefined4 param_1,int *param_2);
uint __cdecl FUN_004e532c(char *param_1,int *param_2,uint param_3);
int __cdecl FUN_004e53b8(longdouble *param_1,uint param_2,uint *param_3,undefined4 *param_4,int param_5);
int __cdecl FUN_004e568c(longdouble *param_1,int param_2,uint *param_3,undefined2 *param_4,int param_5);
undefined4 __cdecl FUN_004e5980(UINT param_1);
undefined4 __cdecl FUN_004e5abc(uint param_1);
undefined4 __cdecl FUN_004e5afc(uint param_1);
undefined4 __cdecl FUN_004e5b18(uint param_1);
byte * __cdecl FUN_004e5b34(byte *param_1,byte *param_2,uint param_3);
undefined4 __cdecl FUN_004e5b88(byte *param_1,byte *param_2,int param_3);
byte * __cdecl FUN_004e5c48(byte *param_1,uint param_2);
void __cdecl FUN_004e5ca0(uint *param_1,int param_2);
void __cdecl FUN_004e5ce8(undefined4 param_1,undefined4 param_2,uint param_3);
undefined * __stdcall FUN_004e5d48(void);
void __cdecl FUN_004e5d98(LPCSTR param_1,uint *param_2);
undefined4 __stdcall FUN_004e5e00(undefined4 param_1,undefined4 *param_2);
undefined4 __stdcall FUN_004e5e14(void);
void __cdecl FUN_004e5e58(uint *param_1);
void __cdecl FUN_004e5f74(uint *param_1);
void __cdecl FUN_004e5f84(uint *param_1);
void __stdcall __vstub_4e6028(void);
void __cdecl FUN_004e6038(undefined1 *param_1,undefined1 *param_2);
void __cdecl FUN_004e6060(undefined1 *param_1,uint param_2);
void __cdecl FUN_004e6244(undefined1 *param_1,uint param_2,int param_3,undefined4 param_4);
void __stdcall FUN_004e6270(void);
void __stdcall FUN_004e6284(void);
void __stdcall FUN_004e6294(void);
void __cdecl FUN_004e6298(int param_1,int param_2,UINT param_3);
void __cdecl FUN_004e62ec(UINT param_1);
void __cdecl FUN_004e6304(UINT param_1);
char * __cdecl FUN_004e633c(uint *param_1);
void __cdecl FUN_004e6394(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_004e63b0(undefined4 param_1,undefined *param_2);
void __cdecl FUN_004e63c4(undefined4 param_1,undefined *param_2);
void __cdecl FUN_004e63d8(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4);
void __cdecl FUN_004e64bc(uint *param_1,int param_2);
undefined4 __cdecl FUN_004e656c(undefined4 param_1,uint *param_2,undefined *param_3);
void __cdecl FUN_004e66e0(int *param_1,int *param_2);
undefined4 __cdecl FUN_004e6754(undefined4 param_1,short *param_2,undefined *param_3);
void __cdecl FUN_004e6904(int *param_1,int *param_2);
undefined4 __stdcall FUN_004e69f8(void);
int __cdecl FUN_004e6b64(int param_1);
undefined4 __cdecl FUN_004e6b84(int *param_1,undefined4 param_2,int param_3);
undefined4 __stdcall FUN_004e6d64(int param_1);
undefined4 __cdecl FUN_004e6d8c(int param_1,undefined4 param_2);
undefined4 __cdecl FUN_004e6dec(int param_1);
void __stdcall FUN_004e6e5c(UINT param_1);
undefined4 __stdcall FUN_004e6e6c(void);
undefined4 __stdcall FUN_004e6e70(void);
void __cdecl FUN_004e6e74(int *param_1,int param_2);
void __stdcall FUN_004e6f48(void);
void __cdecl FUN_004e6fb4(int param_1);
WORD __stdcall FUN_004e7138(void);
void __stdcall FUN_004e7160(DWORD param_1);
void __stdcall FUN_004e7170(DWORD param_1);
void __stdcall FUN_004e7180(DWORD param_1,LPVOID param_2);
void __stdcall FUN_004e7194(void);
void __stdcall FUN_004e719c(void);
bool __cdecl FUN_004e71a8(uint param_1,uint param_2,uint param_3,uint param_4);
int __cdecl FUN_004e72bc(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
char * __stdcall FUN_004e7454(void);
int __cdecl FUN_004e7624(int *param_1);
void FUN_004e769f(undefined *UNRECOVERED_JUMPTABLE);
int __cdecl FUN_004e76a6(uint param_1);
void __cdecl FUN_004e76f0(int param_1);
undefined4 __cdecl FUN_004e771d(int *param_1,undefined4 param_2,int *param_3,byte param_4);
void __cdecl FUN_004e77e3(undefined4 param_1,undefined4 param_2,undefined *param_3,uint param_4);
int __cdecl FUN_004e78f1(char *param_1);
void __cdecl FUN_004e7909(undefined4 param_1,int param_2);
void __cdecl FUN_004e7926(undefined4 param_1,int param_2,byte param_3,undefined *param_4,uint param_5,int param_6 );
void __cdecl FUN_004e79f6(undefined4 param_1,undefined *param_2,uint param_3);
void __cdecl FUN_004e7a74(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4,uint param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9);
void __cdecl FUN_004e7cc4(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4,uint param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8);
void __cdecl FUN_004e7cf9(undefined4 param_1,undefined4 param_2);
void __cdecl FUN_004e7d64(PVOID param_1,PEXCEPTION_RECORD param_2);
void __cdecl FUN_004e7da3(undefined4 param_1,int param_2,undefined *param_3,uint param_4);
void __cdecl FUN_004e7e18(int param_1);
void __stdcall FUN_004e7ea0(void);
void __cdecl FUN_004e7f91(int param_1,int param_2,int param_3,int *param_4,int param_5);
void __cdecl FUN_004e8265(int param_1);
void __cdecl FUN_004e83d0(int param_1);
void __cdecl FUN_004e83e3(undefined4 *param_1);
int * __cdecl FUN_004e83ff(int param_1,int param_2);
undefined4 __cdecl FUN_004e8444(int *param_1,undefined4 *param_2);
void __cdecl FUN_004e87a1(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5);
void __cdecl FUN_004e8898(int param_1,uint param_2,int *param_3,int *param_4);
void __cdecl FUN_004e88e3(int param_1,int param_2,uint param_3,uint param_4,int param_5,undefined4 param_6, int param_7);
void __cdecl FUN_004e8b93(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5);
int __cdecl FUN_004e8cb7(int param_1,int *param_2,int param_3);
undefined4 __cdecl FUN_004e8d3e(int *param_1,int param_2,int param_3,int param_4);
uint __cdecl FUN_004e91c2(int param_1);
LSTATUS __stdcall import_RegCloseKey(HKEY hKey);
LSTATUS __stdcall import_RegCreateKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD Reserved,LPSTR lpClass,DWORD dwOptions, REGSAM samDesired,LPSECURITY_ATTRIBUTES lpSecurityAttributes,PHKEY phkResult, LPDWORD lpdwDisposition);
LSTATUS __stdcall import_RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult);
LSTATUS __stdcall import_RegQueryInfoKeyA(HKEY hKey,LPSTR lpClass,LPDWORD lpcchClass,LPDWORD lpReserved,LPDWORD lpcSubKeys, LPDWORD lpcbMaxSubKeyLen,LPDWORD lpcbMaxClassLen,LPDWORD lpcValues, LPDWORD lpcbMaxValueNameLen,LPDWORD lpcbMaxValueLen,LPDWORD lpcbSecurityDescriptor, PFILETIME lpftLastWriteTime);
LSTATUS __stdcall import_RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData, LPDWORD lpcbData);
LSTATUS __stdcall import_RegSetValueExA(HKEY hKey,LPCSTR lpValueName,DWORD Reserved,DWORD dwType,BYTE *lpData,DWORD cbData);
BOOL __stdcall import_CloseHandle(HANDLE hObject);
HANDLE __stdcall import_CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes,HANDLE hTemplateFile);
HANDLE __stdcall import_CreateFileW(LPCWSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes,HANDLE hTemplateFile);
BOOL __stdcall import_CreateProcessA(LPCSTR lpApplicationName,LPSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes,LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles,DWORD dwCreationFlags,LPVOID lpEnvironment, LPCSTR lpCurrentDirectory,LPSTARTUPINFOA lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);
BOOL __stdcall import_DeleteFileA(LPCSTR lpFileName);
BOOL __stdcall import_DuplicateHandle(HANDLE hSourceProcessHandle,HANDLE hSourceHandle,HANDLE hTargetProcessHandle, LPHANDLE lpTargetHandle,DWORD dwDesiredAccess,BOOL bInheritHandle,DWORD dwOptions);
void __stdcall import_ExitProcess(UINT uExitCode);
DWORD __stdcall import_ExpandEnvironmentStringsA(LPCSTR lpSrc,LPSTR lpDst,DWORD nSize);
BOOL __stdcall import_FileTimeToLocalFileTime(FILETIME *lpFileTime,LPFILETIME lpLocalFileTime);
BOOL __stdcall import_FileTimeToSystemTime(FILETIME *lpFileTime,LPSYSTEMTIME lpSystemTime);
BOOL __stdcall import_FindClose(HANDLE hFindFile);
HANDLE __stdcall import_FindFirstFileA(LPCSTR lpFileName,LPWIN32_FIND_DATAA lpFindFileData);
BOOL __stdcall import_FindNextFileA(HANDLE hFindFile,LPWIN32_FIND_DATAA lpFindFileData);
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
int __stdcall import_GetDateFormatA(LCID Locale,DWORD dwFlags,SYSTEMTIME *lpDate,LPCSTR lpFormat,LPSTR lpDateStr, int cchDate);
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
DWORD __stdcall import_GetPrivateProfileStringA(LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpDefault,LPSTR lpReturnedString,DWORD nSize, LPCSTR lpFileName);
FARPROC __stdcall import_GetProcAddress(HMODULE hModule,LPCSTR lpProcName);
void __stdcall import_GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo);
HANDLE __stdcall import_GetStdHandle(DWORD nStdHandle);
BOOL __stdcall import_GetStringTypeA(LCID Locale,DWORD dwInfoType,LPCSTR lpSrcStr,int cchSrc,LPWORD lpCharType);
BOOL __stdcall import_GetStringTypeW(DWORD dwInfoType,LPCWSTR lpSrcStr,int cchSrc,LPWORD lpCharType);
LANGID __stdcall import_GetSystemDefaultLangID(void);
void __stdcall import_GetSystemTime(LPSYSTEMTIME lpSystemTime);
DWORD __stdcall import_GetTickCount(void);
int __stdcall import_GetTimeFormatA(LCID Locale,DWORD dwFlags,SYSTEMTIME *lpTime,LPCSTR lpFormat,LPSTR lpTimeStr, int cchTime);
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
BOOL __stdcall import_MoveFileA(LPCSTR lpExistingFileName,LPCSTR lpNewFileName);
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
BOOL __stdcall import_SystemTimeToFileTime(SYSTEMTIME *lpSystemTime,LPFILETIME lpFileTime);
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
BOOL __stdcall import_WritePrivateProfileStringA(LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpString,LPCSTR lpFileName);
LPSTR __stdcall import_lstrcatA(LPSTR lpString1,LPCSTR lpString2);
LPSTR __stdcall import_lstrcpyA(LPSTR lpString1,LPCSTR lpString2);
LPSTR __stdcall import_lstrcpynA(LPSTR lpString1,LPCSTR lpString2,int iMaxLength);
int __stdcall import_lstrlenA(LPCSTR lpString);
short __stdcall import_GetFileTitleA(LPCSTR param_1,LPSTR Buf,WORD cchSize);
BOOL __stdcall import_BitBlt(HDC hdc,int x,int y,int cx,int cy,HDC hdcSrc,int x1,int y1,DWORD rop);
int __stdcall import_CombineRgn(HRGN hrgnDst,HRGN hrgnSrc1,HRGN hrgnSrc2,int iMode);
HBITMAP __stdcall import_CreateBitmap(int nWidth,int nHeight,UINT nPlanes,UINT nBitCount,void *lpBits);
HBRUSH __stdcall import_CreateBrushIndirect(LOGBRUSH *plbrush);
HBITMAP __stdcall import_CreateCompatibleBitmap(HDC hdc,int cx,int cy);
HDC __stdcall import_CreateCompatibleDC(HDC hdc);
HDC __stdcall import_CreateDCA(LPCSTR pwszDriver,LPCSTR pwszDevice,LPCSTR pszPort,DEVMODEA *pdm);
HBRUSH __stdcall import_CreateDIBPatternBrush(HGLOBAL h,UINT iUsage);
HBITMAP __stdcall import_CreateDIBitmap(HDC hdc,BITMAPINFOHEADER *pbmih,DWORD flInit,void *pjBits,BITMAPINFO *pbmi, UINT iUsage);
HBITMAP __stdcall import_CreateDiscardableBitmap(HDC hdc,int cx,int cy);
HFONT __stdcall import_CreateFontA(int cHeight,int cWidth,int cEscapement,int cOrientation,int cWeight,DWORD bItalic, DWORD bUnderline,DWORD bStrikeOut,DWORD iCharSet,DWORD iOutPrecision,DWORD iClipPrecision ,DWORD iQuality,DWORD iPitchAndFamily,LPCSTR pszFaceName);
HFONT __stdcall import_CreateFontIndirectA(LOGFONTA *lplf);
HPALETTE __stdcall import_CreatePalette(LOGPALETTE *plpal);
HPEN __stdcall import_CreatePen(int iStyle,int cWidth,COLORREF color);
HRGN __stdcall import_CreateRectRgn(int x1,int y1,int x2,int y2);
HRGN __stdcall import_CreateRectRgnIndirect(RECT *lprect);
HBRUSH __stdcall import_CreateSolidBrush(COLORREF color);
BOOL __stdcall import_DPtoLP(HDC hdc,LPPOINT lppt,int c);
BOOL __stdcall import_DeleteDC(HDC hdc);
BOOL __stdcall import_DeleteObject(HGDIOBJ ho);
int __stdcall import_EndDoc(HDC hdc);
int __stdcall import_EndPage(HDC hdc);
int __stdcall import_Escape(HDC hdc,int iEscape,int cjIn,LPCSTR pvIn,LPVOID pvOut);
BOOL __stdcall import_ExtTextOutA(HDC hdc,int x,int y,UINT options,RECT *lprect,LPCSTR lpString,UINT c,INT *lpDx);
COLORREF __stdcall import_GetBkColor(HDC hdc);
int __stdcall import_GetClipRgn(HDC hdc,HRGN hrgn);
HGDIOBJ __stdcall import_GetCurrentObject(HDC hdc,UINT type);
BOOL __stdcall import_GetCurrentPositionEx(HDC hdc,LPPOINT lppt);
int __stdcall import_GetDeviceCaps(HDC hdc,int index);
int __stdcall import_GetObjectA(HANDLE h,int c,LPVOID pv);
HGDIOBJ __stdcall import_GetStockObject(int i);
UINT __stdcall import_GetSystemPaletteEntries(HDC hdc,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries);
UINT __stdcall import_GetTextAlign(HDC hdc);
COLORREF __stdcall import_GetTextColor(HDC hdc);
BOOL __stdcall import_GetTextExtentPoint32A(HDC hdc,LPCSTR lpString,int c,LPSIZE psizl);
int __stdcall import_GetTextFaceA(HDC hdc,int c,LPSTR lpName);
BOOL __stdcall import_GetTextMetricsA(HDC hdc,LPTEXTMETRICA lptm);
BOOL __stdcall import_GetViewportExtEx(HDC hdc,LPSIZE lpsize);
BOOL __stdcall import_GetViewportOrgEx(HDC hdc,LPPOINT lppoint);
BOOL __stdcall import_GetWindowExtEx(HDC hdc,LPSIZE lpsize);
BOOL __stdcall import_GetWindowOrgEx(HDC hdc,LPPOINT lppoint);
int __stdcall import_IntersectClipRect(HDC hdc,int left,int top,int right,int bottom);
BOOL __stdcall import_LineTo(HDC hdc,int x,int y);
BOOL __stdcall import_MoveToEx(HDC hdc,int x,int y,LPPOINT lppt);
BOOL __stdcall import_OffsetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt);
BOOL __stdcall import_PatBlt(HDC hdc,int x,int y,int w,int h,DWORD rop);
BOOL __stdcall import_Polyline(HDC hdc,POINT *apt,int cpt);
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
int __stdcall import_SetAbortProc(HDC hdc,ABORTPROC proc);
COLORREF __stdcall import_SetBkColor(HDC hdc,COLORREF color);
int __stdcall import_SetBkMode(HDC hdc,int mode);
int __stdcall import_SetMapMode(HDC hdc,int iMode);
COLORREF __stdcall import_SetPixel(HDC hdc,int x,int y,COLORREF color);
UINT __stdcall import_SetTextAlign(HDC hdc,UINT align);
COLORREF __stdcall import_SetTextColor(HDC hdc,COLORREF color);
BOOL __stdcall import_SetViewportExtEx(HDC hdc,int x,int y,LPSIZE lpsz);
BOOL __stdcall import_SetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt);
BOOL __stdcall import_SetWindowExtEx(HDC hdc,int x,int y,LPSIZE lpsz);
BOOL __stdcall import_SetWindowOrgEx(HDC hdc,int x,int y,LPPOINT lppt);
int __stdcall import_StartDocA(HDC hdc,DOCINFOA *lpdi);
int __stdcall import_StartPage(HDC hdc);
BOOL __stdcall import_TextOutA(HDC hdc,int x,int y,LPCSTR lpString,int c);
LPITEMIDLIST __stdcall import_SHBrowseForFolderA(LPBROWSEINFOA lpbi);
HRESULT __stdcall import_SHGetMalloc(IMalloc **ppMalloc);
HRESULT __stdcall import_SHGetSpecialFolderLocation(HWND hwnd,int csidl,LPITEMIDLIST *ppidl);
HINSTANCE __stdcall import_ShellExecuteA(HWND hwnd,LPCSTR lpOperation,LPCSTR lpFile,LPCSTR lpParameters,LPCSTR lpDirectory, INT nShowCmd);
BOOL __stdcall import_SHGetPathFromIDListA(LPCITEMIDLIST pidl,LPSTR pszPath);
int __stdcall import_SHGetFolderPathA(...);
BOOL __stdcall import_AppendMenuA(HMENU hMenu,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem);
HDWP __stdcall import_BeginDeferWindowPos(int nNumWindows);
HDC __stdcall import_BeginPaint(HWND hWnd,LPPAINTSTRUCT lpPaint);
BOOL __stdcall import_BringWindowToTop(HWND hWnd);
LRESULT __stdcall import_CallWindowProcA(WNDPROC lpPrevWndFunc,HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam);
DWORD __stdcall import_CheckMenuItem(HMENU hMenu,UINT uIDCheckItem,UINT uCheck);
BOOL __stdcall import_ClientToScreen(HWND hWnd,LPPOINT lpPoint);
BOOL __stdcall import_CloseClipboard(void);
HICON __stdcall import_CopyIcon(HICON hIcon);
HWND __stdcall import_CreateDialogIndirectParamA(HINSTANCE hInstance,LPCDLGTEMPLATEA lpTemplate,HWND hWndParent,DLGPROC lpDialogFunc, LPARAM dwInitParam);
HWND __stdcall import_CreateDialogParamA(HINSTANCE hInstance,LPCSTR lpTemplateName,HWND hWndParent,DLGPROC lpDialogFunc, LPARAM dwInitParam);
HMENU __stdcall import_CreateMenu(void);
HMENU __stdcall import_CreatePopupMenu(void);
HWND __stdcall import_CreateWindowExA(DWORD dwExStyle,LPCSTR lpClassName,LPCSTR lpWindowName,DWORD dwStyle,int X,int Y, int nWidth,int nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance,LPVOID lpParam );
HDDEDATA __stdcall import_DdeClientTransaction(LPBYTE pData,DWORD cbData,HCONV hConv,HSZ hszItem,UINT wFmt,UINT wType,DWORD dwTimeout, LPDWORD pdwResult);
HCONV __stdcall import_DdeConnect(DWORD idInst,HSZ hszService,HSZ hszTopic,PCONVCONTEXT pCC);
HSZ __stdcall import_DdeCreateStringHandleA(DWORD idInst,LPCSTR psz,int iCodePage);
BOOL __stdcall import_DdeDisconnect(HCONV hConv);
BOOL __stdcall import_DdeFreeStringHandle(DWORD idInst,HSZ hsz);
UINT __stdcall import_DdeInitializeA(LPDWORD pidInst,PFNCALLBACK pfnCallback,DWORD afCmd,DWORD ulRes);
BOOL __stdcall import_DdeUninitialize(DWORD idInst);
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
BOOL __stdcall import_DrawFocusRect(HDC hDC,RECT *lprc);
BOOL __stdcall import_DrawFrameControl(HDC param_1,LPRECT param_2,UINT param_3,UINT param_4);
BOOL __stdcall import_DrawIcon(HDC hDC,int X,int Y,HICON hIcon);
BOOL __stdcall import_DrawMenuBar(HWND hWnd);
int __stdcall import_DrawTextA(HDC hdc,LPCSTR lpchText,int cchText,LPRECT lprc,UINT format);
int __stdcall import_DrawTextExA(HDC hdc,LPSTR lpchText,int cchText,LPRECT lprc,UINT format,LPDRAWTEXTPARAMS lpdtp);
BOOL __stdcall import_EmptyClipboard(void);
BOOL __stdcall import_EnableMenuItem(HMENU hMenu,UINT uIDEnableItem,UINT uEnable);
BOOL __stdcall import_EnableScrollBar(HWND hWnd,UINT wSBflags,UINT wArrows);
BOOL __stdcall import_EnableWindow(HWND hWnd,BOOL bEnable);
BOOL __stdcall import_EndDeferWindowPos(HDWP hWinPosInfo);
BOOL __stdcall import_EndDialog(HWND hDlg,INT_PTR nResult);
BOOL __stdcall import_EndPaint(HWND hWnd,PAINTSTRUCT *lpPaint);
BOOL __stdcall import_EnumChildWindows(HWND hWndParent,WNDENUMPROC lpEnumFunc,LPARAM lParam);
BOOL __stdcall import_EnumThreadWindows(DWORD dwThreadId,WNDENUMPROC lpfn,LPARAM lParam);
int __stdcall import_FillRect(HDC hDC,RECT *lprc,HBRUSH hbr);
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
BOOL __stdcall import_GetMonitorInfoA(HMONITOR hMonitor,LPMONITORINFO lpmi);
HWND __stdcall import_GetParent(HWND hWnd);
BOOL __stdcall import_GetScrollInfo(HWND hwnd,int nBar,LPSCROLLINFO lpsi);
HMENU __stdcall import_GetSubMenu(HMENU hMenu,int nPos);
DWORD __stdcall import_GetSysColor(int nIndex);
HBRUSH __stdcall import_GetSysColorBrush(int nIndex);
int __stdcall import_GetSystemMetrics(int nIndex);
HWND __stdcall import_GetTopWindow(HWND hWnd);
HWND __stdcall import_GetWindow(HWND hWnd,UINT uCmd);
HDC __stdcall import_GetWindowDC(HWND hWnd);
LONG __stdcall import_GetWindowLongA(HWND hWnd,int nIndex);
BOOL __stdcall import_GetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl);
BOOL __stdcall import_GetWindowRect(HWND hWnd,LPRECT lpRect);
int __stdcall import_GetWindowTextA(HWND hWnd,LPSTR lpString,int nMaxCount);
int __stdcall import_GetWindowTextLengthA(HWND hWnd);
DWORD __stdcall import_GetWindowThreadProcessId(HWND hWnd,LPDWORD lpdwProcessId);
BOOL __stdcall import_GrayStringA(HDC hDC,HBRUSH hBrush,GRAYSTRINGPROC lpOutputFunc,LPARAM lpData,int nCount,int X,int Y, int nWidth,int nHeight);
BOOL __stdcall import_HideCaret(HWND hWnd);
BOOL __stdcall import_InsertMenuA(HMENU hMenu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem);
BOOL __stdcall import_InsertMenuItemA(HMENU hmenu,UINT item,BOOL fByPosition,LPCMENUITEMINFOA lpmi);
BOOL __stdcall import_InvalidateRect(HWND hWnd,RECT *lpRect,BOOL bErase);
BOOL __stdcall import_IsCharUpperA(CHAR ch);
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
int __stdcall import_LoadStringA(HINSTANCE hInstance,UINT uID,LPSTR lpBuffer,int cchBufferMax);
BOOL __stdcall import_MapDialogRect(HWND hDlg,LPRECT lpRect);
int __stdcall import_MapWindowPoints(HWND hWndFrom,HWND hWndTo,LPPOINT lpPoints,UINT cPoints);
BOOL __stdcall import_MessageBeep(UINT uType);
int __stdcall import_MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType);
int __stdcall import_MessageBoxExA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType,WORD wLanguageId);
BOOL __stdcall import_ModifyMenuA(HMENU hMnu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem);
HMONITOR __stdcall import_MonitorFromRect(LPCRECT lprc,DWORD dwFlags);
DWORD __stdcall import_MsgWaitForMultipleObjects(DWORD nCount,HANDLE *pHandles,BOOL fWaitAll,DWORD dwMilliseconds,DWORD dwWakeMask);
BOOL __stdcall import_OpenClipboard(HWND hWndNewOwner);
BOOL __stdcall import_PeekMessageA(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax,UINT wRemoveMsg);
BOOL __stdcall import_PostMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam);
void __stdcall import_PostQuitMessage(int nExitCode);
BOOL __stdcall import_RedrawWindow(HWND hWnd,RECT *lprcUpdate,HRGN hrgnUpdate,UINT flags);
ATOM __stdcall import_RegisterClassA(WNDCLASSA *lpWndClass);
UINT __stdcall import_RegisterWindowMessageA(LPCSTR lpString);
BOOL __stdcall import_ReleaseCapture(void);
int __stdcall import_ReleaseDC(HWND hWnd,HDC hDC);
BOOL __stdcall import_ScreenToClient(HWND hWnd,LPPOINT lpPoint);
BOOL __stdcall import_ScrollWindow(HWND hWnd,int XAmount,int YAmount,RECT *lpRect,RECT *lpClipRect);
LRESULT __stdcall import_SendDlgItemMessageA(HWND hDlg,int nIDDlgItem,UINT Msg,WPARAM wParam,LPARAM lParam);
LRESULT __stdcall import_SendMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam);
HWND __stdcall import_SetActiveWindow(HWND hWnd);
HWND __stdcall import_SetCapture(HWND hWnd);
HANDLE __stdcall import_SetClipboardData(UINT uFormat,HANDLE hMem);
HCURSOR __stdcall import_SetCursor(HCURSOR hCursor);
HWND __stdcall import_SetFocus(HWND hWnd);
BOOL __stdcall import_SetMenu(HWND hWnd,HMENU hMenu);
BOOL __stdcall import_SetMenuItemInfoA(HMENU hmenu,UINT item,BOOL fByPositon,LPCMENUITEMINFOA lpmii);
HWND __stdcall import_SetParent(HWND hWndChild,HWND hWndNewParent);
int __stdcall import_SetScrollInfo(HWND hwnd,int nBar,LPCSCROLLINFO lpsi,BOOL redraw);
UINT_PTR __stdcall import_SetTimer(HWND hWnd,UINT_PTR nIDEvent,UINT uElapse,TIMERPROC lpTimerFunc);
LONG __stdcall import_SetWindowLongA(HWND hWnd,int nIndex,LONG dwNewLong);
BOOL __stdcall import_SetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl);
BOOL __stdcall import_SetWindowPos(HWND hWnd,HWND hWndInsertAfter,int X,int Y,int cx,int cy,UINT uFlags);
BOOL __stdcall import_SetWindowTextA(HWND hWnd,LPCSTR lpString);
HHOOK __stdcall import_SetWindowsHookExA(int idHook,HOOKPROC lpfn,HINSTANCE hmod,DWORD dwThreadId);
BOOL __stdcall import_ShowCaret(HWND hWnd);
int __stdcall import_ShowCursor(BOOL bShow);
BOOL __stdcall import_ShowScrollBar(HWND hWnd,int wBar,BOOL bShow);
BOOL __stdcall import_ShowWindow(HWND hWnd,int nCmdShow);
BOOL __stdcall import_SystemParametersInfoA(UINT uiAction,UINT uiParam,PVOID pvParam,UINT fWinIni);
LONG __stdcall import_TabbedTextOutA(HDC hdc,int x,int y,LPCSTR lpString,int chCount,int nTabPositions, INT *lpnTabStopPositions,int nTabOrigin);
BOOL __stdcall import_TrackPopupMenu(HMENU hMenu,UINT uFlags,int x,int y,int nReserved,HWND hWnd,RECT *prcRect);
int __stdcall import_TranslateAcceleratorA(HWND hWnd,HACCEL hAccTable,LPMSG lpMsg);
BOOL __stdcall import_TranslateMDISysAccel(HWND hWndClient,LPMSG lpMsg);
BOOL __stdcall import_TranslateMessage(MSG *lpMsg);
BOOL __stdcall import_UnhookWindowsHookEx(HHOOK hhk);
BOOL __stdcall import_UnregisterClassA(LPCSTR lpClassName,HINSTANCE hInstance);
BOOL __stdcall import_UpdateWindow(HWND hWnd);
BOOL __stdcall import_WaitMessage(void);
HWND __stdcall import_WindowFromPoint(POINT Point);
int __cdecl import_wsprintfA(LPSTR param_1,LPCSTR param_2,...);
HMENU __stdcall import_GetSystemMenu(HWND hWnd,BOOL bRevert);

// ---- call targets where Ghidra found no function (2) ----
code func_0x504087b1;
code func_0x54418148;

// ---- globals (1569) ----
extern undefined * pcRam0000000c;   // 0x0000000c
extern undefined4 uRam00000748;   // 0x00000748
extern undefined4 uRam00000760;   // 0x00000760
extern char cRam0001004d;   // 0x0001004d
extern undefined DAT_004027f0;   // 0x004027f0
extern undefined DAT_00402910;   // 0x00402910
extern undefined DAT_0040299c;   // 0x0040299c
extern undefined DAT_00402af0;   // 0x00402af0
extern undefined DAT_00402b6c;   // 0x00402b6c
extern undefined DAT_00402be8;   // 0x00402be8
extern undefined DAT_00402cfc;   // 0x00402cfc
extern undefined DAT_00402e14;   // 0x00402e14
extern undefined DAT_004040dc;   // 0x004040dc
extern undefined LAB_00404134;   // 0x00404134
extern undefined DAT_00405c14;   // 0x00405c14
extern undefined DAT_00406af0;   // 0x00406af0
extern undefined DAT_00406e80;   // 0x00406e80
extern undefined DAT_004070f4;   // 0x004070f4
extern undefined DAT_00407170;   // 0x00407170
extern undefined DAT_004071ec;   // 0x004071ec
extern undefined DAT_00408314;   // 0x00408314
extern undefined LAB_00408370;   // 0x00408370
extern undefined DAT_0040846c;   // 0x0040846c
extern undefined LAB_004084c8;   // 0x004084c8
extern undefined DAT_004113dc;   // 0x004113dc
extern undefined DAT_0041385c;   // 0x0041385c
extern undefined LAB_004138d8;   // 0x004138d8
extern undefined DAT_00415b1c;   // 0x00415b1c
extern undefined DAT_004164a4;   // 0x004164a4
extern undefined DAT_00416760;   // 0x00416760
extern undefined DAT_00421acc;   // 0x00421acc
extern undefined DAT_00422c2c;   // 0x00422c2c
extern undefined DAT_00422e44;   // 0x00422e44
extern undefined DAT_00427ac8;   // 0x00427ac8
extern undefined DAT_00427b08;   // 0x00427b08
extern undefined DAT_00427ee4;   // 0x00427ee4
extern undefined DAT_00427f30;   // 0x00427f30
extern undefined DAT_00428068;   // 0x00428068
extern undefined DAT_004280c0;   // 0x004280c0
extern undefined DAT_0042850c;   // 0x0042850c
extern undefined DAT_00428974;   // 0x00428974
extern undefined DAT_00428aa0;   // 0x00428aa0
extern undefined DAT_00428c70;   // 0x00428c70
extern undefined LAB_00437ba4;   // 0x00437ba4
extern undefined DAT_0044fec4;   // 0x0044fec4
extern undefined LAB_0045422c;   // 0x0045422c
extern undefined DAT_0045a588;   // 0x0045a588
extern undefined DAT_0045b7f4;   // 0x0045b7f4
extern undefined DAT_0045da64;   // 0x0045da64
extern undefined DAT_00469dc4;   // 0x00469dc4
extern undefined DAT_0046a2bc;   // 0x0046a2bc
extern undefined DAT_00473698;   // 0x00473698
extern undefined DAT_00473d70;   // 0x00473d70
extern undefined DAT_004756a8;   // 0x004756a8
extern undefined DAT_0047ec18;   // 0x0047ec18
extern undefined LAB_0047ec80;   // 0x0047ec80
extern undefined DAT_004872f0;   // 0x004872f0
extern undefined LAB_00487348;   // 0x00487348
extern undefined DAT_00487430;   // 0x00487430
extern undefined DAT_004874c8;   // 0x004874c8
extern undefined DAT_0048bb10;   // 0x0048bb10
extern undefined LAB_0048bb6c;   // 0x0048bb6c
extern undefined DAT_0048f5c4;   // 0x0048f5c4
extern undefined LAB_0048f620;   // 0x0048f620
extern undefined DAT_00490c00;   // 0x00490c00
extern undefined DAT_00493758;   // 0x00493758
extern undefined LAB_004937ac;   // 0x004937ac
extern undefined DAT_00498160;   // 0x00498160
extern undefined LAB_004981b4;   // 0x004981b4
extern undefined DAT_0049c0de;   // 0x0049c0de
extern undefined DAT_0049f8d8;   // 0x0049f8d8
extern undefined DAT_004a40a8;   // 0x004a40a8
extern undefined DAT_004a73e0;   // 0x004a73e0
extern undefined LAB_004a741c;   // 0x004a741c
extern undefined DAT_004a8524;   // 0x004a8524
extern undefined DAT_004a9aac;   // 0x004a9aac
extern undefined DAT_004a9acc;   // 0x004a9acc
extern undefined DAT_004ab0c4;   // 0x004ab0c4
extern undefined LAB_004ab128;   // 0x004ab128
extern undefined DAT_004b17e8;   // 0x004b17e8
extern undefined DAT_004ba73c;   // 0x004ba73c
extern undefined DAT_004c21a8;   // 0x004c21a8
extern undefined LAB_004c2208;   // 0x004c2208
extern undefined DAT_004c5e54;   // 0x004c5e54
extern undefined LAB_004c5eac;   // 0x004c5eac
extern undefined DAT_004d94a4;   // 0x004d94a4
extern undefined LAB_004d9500;   // 0x004d9500
extern undefined DAT_004db2c4;   // 0x004db2c4
extern undefined LAB_004db328;   // 0x004db328
extern undefined LAB_004dceab;   // 0x004dceab
extern undefined LAB_004dd9ec;   // 0x004dd9ec
extern undefined LAB_004e0f98;   // 0x004e0f98
extern undefined LAB_004e0fc8;   // 0x004e0fc8
extern undefined * PTR_DAT_004ea2d0;   // 0x004ea2d0
extern int _tls_index;   // 0x004ea327
extern int _DAT_004ea32b;   // 0x004ea32b
extern HMODULE _DAT_004ea32f;   // 0x004ea32f
namespace TEADictionaryPropertiesWindows { extern undefined * vftable; }   // 0x004ea7c8  PTR_FUN_004ea7c8
extern pointer PTR_LAB_004ea890;   // 0x004ea890
extern pointer PTR_LAB_004ea89c;   // 0x004ea89c
extern undefined * PTR_LAB_004ea8a8;   // 0x004ea8a8
namespace OWL::TStreamableBase { extern pointer vftable; }   // 0x004ea93c  PTR_FUN_004ea93c
namespace OWL::TEventHandler { extern pointer vftable; }   // 0x004ea94c  PTR_FUN_004ea94c
namespace std::exception { extern undefined * vftable; }   // 0x004eac60  PTR_FUN_004eac60
namespace std::bad_alloc { extern undefined * vftable; }   // 0x004eac74  PTR_FUN_004eac74
namespace TEAPrintout { extern undefined * vftable; }   // 0x004eac88  PTR_FUN_004eac88
namespace PrintPreviewPrintout { extern undefined * vftable; }   // 0x004eacbc  PTR_FUN_004eacbc
namespace PrintoutFeeder { extern undefined * vftable; }   // 0x004eacf0  PTR_FUN_004eacf0
extern int DAT_004ead2c;   // 0x004ead2c
namespace TEAPropertiesViewWindows { extern undefined * vftable; }   // 0x004eb1fc  PTR_FUN_004eb1fc
extern pointer PTR_LAB_004eb2c8;   // 0x004eb2c8
extern pointer PTR_LAB_004eb2d4;   // 0x004eb2d4
extern undefined * PTR_LAB_004eb2e0;   // 0x004eb2e0
extern undefined DAT_004eb416;   // 0x004eb416
extern undefined4 _DAT_004eb4a0;   // 0x004eb4a0
extern undefined DAT_004eb4a0;   // 0x004eb4a0
extern int DAT_004eb4a4;   // 0x004eb4a4
extern int * DAT_004eb4a8;   // 0x004eb4a8
extern undefined4 DAT_004eb4b8;   // 0x004eb4b8
extern char DAT_004eb4c0;   // 0x004eb4c0
extern int DAT_004eb4c4;   // 0x004eb4c4
extern int DAT_004eb4c8;   // 0x004eb4c8
extern char DAT_004eb4cc;   // 0x004eb4cc
namespace TSDictionaryList::Dictionary { extern undefined * vftable; }   // 0x004eca60  PTR_FUN_004eca60
namespace std::out_of_range { extern undefined * vftable; }   // 0x004eca98  PTR_FUN_004eca98
namespace std::logic_error { extern undefined * vftable; }   // 0x004ecaac  PTR_FUN_004ecaac
namespace std::length_error { extern pointer vftable; }   // 0x004ecac0  PTR_FUN_004ecac0
extern undefined4 * DAT_004ecac8;   // 0x004ecac8
extern undefined4 * DAT_004ecacc;   // 0x004ecacc
extern undefined DAT_004ecb00;   // 0x004ecb00
extern undefined DAT_004ecb04;   // 0x004ecb04
extern char DAT_004ecb08;   // 0x004ecb08
extern undefined DAT_004ecb45;   // 0x004ecb45
extern undefined DAT_004ece89;   // 0x004ece89
namespace IntroductionViewWindows { extern undefined __entries; }   // 0x004ecf4c  DAT_004ecf4c
namespace IntroductionViewWindows { extern undefined * vftable; }   // 0x004ed04c  PTR_FUN_004ed04c
extern pointer PTR_LAB_004ed114;   // 0x004ed114
extern pointer PTR_LAB_004ed120;   // 0x004ed120
extern undefined * PTR_LAB_004ed12c;   // 0x004ed12c
extern uint DAT_004ed250;   // 0x004ed250
extern undefined2 DAT_004ed254;   // 0x004ed254
extern undefined4 DAT_004ed280;   // 0x004ed280
extern undefined DAT_004ed2ba;   // 0x004ed2ba
extern undefined DAT_004ed2ea;   // 0x004ed2ea
extern undefined DAT_004ed32e;   // 0x004ed32e
extern undefined DAT_004ed376;   // 0x004ed376
extern undefined DAT_004ed378;   // 0x004ed378
namespace PropertiesViewWindows { extern undefined __entries; }   // 0x004ed37c  DAT_004ed37c
namespace PVWPushButton { extern undefined __entries; }   // 0x004ee0b0  DAT_004ee0b0
namespace PVWRadioButton { extern undefined __entries; }   // 0x004ee158  DAT_004ee158
namespace PVWCheckBox { extern undefined __entries; }   // 0x004ee218  DAT_004ee218
namespace PVWColourButton { extern undefined __entries; }   // 0x004ee2c0  DAT_004ee2c0
extern undefined DAT_004ee30c;   // 0x004ee30c
namespace PVWFontButton { extern undefined __entries; }   // 0x004ee50c  DAT_004ee50c
namespace PVWRichEdit { extern undefined __entries; }   // 0x004ee6fc  DAT_004ee6fc
namespace PVWEdit { extern undefined __entries; }   // 0x004ee9f8  DAT_004ee9f8
namespace PVWStatic { extern undefined __entries; }   // 0x004eeb8c  DAT_004eeb8c
namespace PVWUpDown { extern undefined __entries; }   // 0x004eec94  DAT_004eec94
namespace PVWEnumeration { extern undefined __entries; }   // 0x004eed0c  DAT_004eed0c
namespace PVWCombo { extern undefined __entries; }   // 0x004eedd0  DAT_004eedd0
namespace PVWURL { extern undefined __entries; }   // 0x004ef11c  DAT_004ef11c
namespace PVWTabs { extern undefined __entries; }   // 0x004ef4a4  DAT_004ef4a4
namespace PVWPathListBox { extern undefined __entries; }   // 0x004ef534  DAT_004ef534
namespace PVWPathListBox { extern undefined * vftable; }   // 0x004efde0  PTR_FUN_004efde0
extern pointer PTR_LAB_004efe68;   // 0x004efe68
extern pointer PTR_LAB_004efe74;   // 0x004efe74
extern undefined * PTR_LAB_004efe80;   // 0x004efe80
namespace PVWTabs { extern undefined * vftable; }   // 0x004eff14  PTR_FUN_004eff14
extern pointer PTR_LAB_004eff48;   // 0x004eff48
extern pointer PTR_LAB_004eff54;   // 0x004eff54
extern undefined * PTR_LAB_004eff60;   // 0x004eff60
namespace PVWURL { extern undefined * vftable; }   // 0x004efff4  PTR_FUN_004efff4
extern pointer PTR_LAB_004f0064;   // 0x004f0064
extern pointer PTR_LAB_004f0070;   // 0x004f0070
extern undefined * PTR_LAB_004f007c;   // 0x004f007c
namespace PVWCombo { extern undefined * vftable; }   // 0x004f0110  PTR_FUN_004f0110
extern pointer PTR_LAB_004f01a8;   // 0x004f01a8
extern pointer PTR_LAB_004f01b4;   // 0x004f01b4
extern undefined * PTR_LAB_004f01c0;   // 0x004f01c0
namespace PVWEnumeration { extern undefined * vftable; }   // 0x004f0254  PTR_FUN_004f0254
extern pointer PTR_LAB_004f02e8;   // 0x004f02e8
extern pointer PTR_LAB_004f02f4;   // 0x004f02f4
extern undefined * PTR_LAB_004f0300;   // 0x004f0300
namespace PVWUpDown { extern undefined * vftable; }   // 0x004f0394  PTR_FUN_004f0394
extern pointer PTR_LAB_004f03cc;   // 0x004f03cc
extern pointer PTR_LAB_004f03d8;   // 0x004f03d8
extern undefined * PTR_LAB_004f03e4;   // 0x004f03e4
namespace PVWStatic { extern undefined * vftable; }   // 0x004f0478  PTR_FUN_004f0478
extern pointer PTR_LAB_004f04b0;   // 0x004f04b0
extern pointer PTR_LAB_004f04bc;   // 0x004f04bc
extern undefined * PTR_LAB_004f04c8;   // 0x004f04c8
namespace PVWEdit { extern undefined * vftable; }   // 0x004f055c  PTR_FUN_004f055c
extern pointer PTR_LAB_004f05c0;   // 0x004f05c0
extern pointer PTR_LAB_004f05cc;   // 0x004f05cc
extern undefined * PTR_LAB_004f05d8;   // 0x004f05d8
namespace PVWRichEdit { extern undefined * vftable; }   // 0x004f066c  PTR_FUN_004f066c
extern pointer PTR_LAB_004f06f8;   // 0x004f06f8
extern pointer PTR_LAB_004f0704;   // 0x004f0704
extern undefined * PTR_LAB_004f0710;   // 0x004f0710
namespace PVWFontButton { extern undefined * vftable; }   // 0x004f07a4  PTR_FUN_004f07a4
extern pointer PTR_LAB_004f07dc;   // 0x004f07dc
extern pointer PTR_LAB_004f07e8;   // 0x004f07e8
extern undefined * PTR_LAB_004f07f4;   // 0x004f07f4
namespace PVWColourButton { extern undefined * vftable; }   // 0x004f0888  PTR_FUN_004f0888
extern pointer PTR_LAB_004f08c0;   // 0x004f08c0
extern pointer PTR_LAB_004f08cc;   // 0x004f08cc
extern undefined * PTR_LAB_004f08d8;   // 0x004f08d8
namespace PVWCheckBox { extern undefined * vftable; }   // 0x004f096c  PTR_FUN_004f096c
extern pointer PTR_LAB_004f09a4;   // 0x004f09a4
extern pointer PTR_LAB_004f09b0;   // 0x004f09b0
extern undefined * PTR_LAB_004f09bc;   // 0x004f09bc
namespace PVWRadioButton { extern undefined * vftable; }   // 0x004f0a50  PTR_FUN_004f0a50
extern pointer PTR_LAB_004f0a90;   // 0x004f0a90
extern pointer PTR_LAB_004f0a9c;   // 0x004f0a9c
extern undefined * PTR_LAB_004f0aa8;   // 0x004f0aa8
namespace PVWPushButton { extern undefined * vftable; }   // 0x004f0b3c  PTR_FUN_004f0b3c
extern pointer PTR_LAB_004f0b74;   // 0x004f0b74
extern pointer PTR_LAB_004f0b80;   // 0x004f0b80
extern undefined * PTR_LAB_004f0b8c;   // 0x004f0b8c
namespace PropertiesViewWindows { extern undefined * vftable; }   // 0x004f0c20  PTR_FUN_004f0c20
extern pointer PTR_LAB_004f0ce8;   // 0x004f0ce8
extern pointer PTR_LAB_004f0cf4;   // 0x004f0cf4
extern undefined * PTR_LAB_004f0d00;   // 0x004f0d00
extern char DAT_004f0d98;   // 0x004f0d98
extern undefined * PTR_PTR_004f0df0;   // 0x004f0df0
extern undefined DAT_004f0e46;   // 0x004f0e46
extern undefined DAT_004f0e48;   // 0x004f0e48
extern undefined DAT_004f0e54;   // 0x004f0e54
extern undefined DAT_004f10d8;   // 0x004f10d8
namespace PrintPreviewWindow { extern undefined __entries; }   // 0x004f1984  DAT_004f1984
namespace PrintPreviewWindow { extern undefined * vftable; }   // 0x004f1ee4  PTR_FUN_004f1ee4
extern undefined * PTR_LAB_004f1f44;   // 0x004f1f44
extern pointer PTR_LAB_004f1f5c;   // 0x004f1f5c
extern pointer PTR_LAB_004f1f68;   // 0x004f1f68
extern undefined * PTR_LAB_004f1f74;   // 0x004f1f74
extern undefined * PTR_LAB_004f2004;   // 0x004f2004
extern undefined DAT_004f2070;   // 0x004f2070
namespace MatchListLabelWindows { extern undefined * vftable; }   // 0x004f2138  PTR_FUN_004f2138
extern pointer PTR_LAB_004f2170;   // 0x004f2170
extern pointer PTR_LAB_004f217c;   // 0x004f217c
extern undefined * PTR_LAB_004f2188;   // 0x004f2188
extern undefined DAT_004f223c;   // 0x004f223c
namespace MatchListWindows { extern undefined __entries; }   // 0x004f2240  DAT_004f2240
namespace MatchListWindows { extern undefined * vftable; }   // 0x004f2c28  PTR_FUN_004f2c28
extern pointer PTR_LAB_004f2c68;   // 0x004f2c68
extern pointer PTR_LAB_004f2c74;   // 0x004f2c74
extern undefined * PTR_LAB_004f2c80;   // 0x004f2c80
extern undefined * PTR_s_ptr_004f2d24;   // 0x004f2d24
extern undefined4 DAT_004f2d28;   // 0x004f2d28
extern undefined1 DAT_004f2d2c;   // 0x004f2d2c
namespace GridAboutBoxViewWindows { extern undefined * vftable; }   // 0x004f3248  PTR_FUN_004f3248
extern pointer PTR_LAB_004f3310;   // 0x004f3310
extern pointer PTR_LAB_004f331c;   // 0x004f331c
extern undefined * PTR_LAB_004f3328;   // 0x004f3328
extern pointer PTR_DAT_004f33b0;   // 0x004f33b0
extern undefined * PTR_DAT_004f33b8;   // 0x004f33b8
extern undefined * PTR_DAT_004f33bc;   // 0x004f33bc
extern int DAT_004f3434;   // 0x004f3434
extern undefined DAT_004f357c;   // 0x004f357c
extern undefined DAT_004f357d;   // 0x004f357d
extern undefined DAT_004f357f;   // 0x004f357f
extern undefined DAT_004f3581;   // 0x004f3581
extern undefined DAT_004f360f;   // 0x004f360f
extern pointer PTR_s_OutputLower_004f3d78;   // 0x004f3d78
extern pointer PTR_s_1913_Webster_s_Unabridged_004f3d88;   // 0x004f3d88
namespace PrintPreviewWindowTEA { extern undefined __entries; }   // 0x004f4bf8  DAT_004f4bf8
namespace PrintPreviewWindowTEA { extern undefined * vftable; }   // 0x004f4cac  PTR_FUN_004f4cac
extern undefined * PTR_LAB_004f4d0c;   // 0x004f4d0c
extern pointer PTR_LAB_004f4d24;   // 0x004f4d24
extern pointer PTR_LAB_004f4d30;   // 0x004f4d30
extern undefined * PTR_LAB_004f4d3c;   // 0x004f4d3c
extern undefined * PTR_LAB_004f4dcc;   // 0x004f4dcc
namespace TEAPrintoutFeeder { extern undefined * vftable; }   // 0x004f4ec0  PTR_FUN_004f4ec0
extern undefined1 DAT_004f50d8;   // 0x004f50d8
namespace TSDictionarySaveTEADialog { extern undefined * vftable; }   // 0x004f5280  PTR_FUN_004f5280
extern undefined * PTR_LAB_004f5358;   // 0x004f5358
extern pointer PTR_LAB_004f5374;   // 0x004f5374
extern pointer PTR_LAB_004f5380;   // 0x004f5380
extern undefined * PTR_LAB_004f538c;   // 0x004f538c
namespace TSDictionarySaveDialog { extern undefined __entries; }   // 0x004f551c  DAT_004f551c
namespace TSDictionarySaveDialog { extern undefined * vftable; }   // 0x004f5990  PTR_FUN_004f5990
extern undefined * PTR_LAB_004f5a68;   // 0x004f5a68
extern pointer PTR_LAB_004f5a84;   // 0x004f5a84
extern pointer PTR_LAB_004f5a90;   // 0x004f5a90
extern undefined * PTR_LAB_004f5a9c;   // 0x004f5a9c
extern int DAT_004f5b2c;   // 0x004f5b2c
extern undefined4 DAT_004f5b30;   // 0x004f5b30
extern undefined2 DAT_004f5b34;   // 0x004f5b34
extern undefined1 DAT_004f5b36;   // 0x004f5b36
extern undefined DAT_004f5d58;   // 0x004f5d58
extern undefined DAT_004f5d5c;   // 0x004f5d5c
extern undefined DAT_004f5d5e;   // 0x004f5d5e
extern undefined DAT_004f5d62;   // 0x004f5d62
extern undefined DAT_004f5d9f;   // 0x004f5d9f
extern undefined DAT_004f5e6d;   // 0x004f5e6d
extern undefined DAT_004f5ed3;   // 0x004f5ed3
namespace DictionaryMaintainer { extern undefined * vftable; }   // 0x004f7330  PTR_FUN_004f7330
extern undefined * PTR_DAT_004f735c;   // 0x004f735c
extern DWORD DAT_004f74f8;   // 0x004f74f8
namespace MyScroller { extern undefined * vftable; }   // 0x004f752c  PTR_FUN_004f752c
extern undefined DAT_004f75c4;   // 0x004f75c4
extern DWORD DAT_004f75d4;   // 0x004f75d4
extern undefined DAT_004f75f3;   // 0x004f75f3
extern undefined DAT_004f76b2;   // 0x004f76b2
extern undefined DAT_004f770c;   // 0x004f770c
extern undefined DAT_004f775a;   // 0x004f775a
extern undefined DAT_004f7826;   // 0x004f7826
extern undefined DAT_004f782b;   // 0x004f782b
namespace TEAViewWindows { extern undefined __entries; }   // 0x004f7a04  DAT_004f7a04
namespace TEAViewWindows { extern undefined * vftable; }   // 0x004f9fac  PTR_FUN_004f9fac
extern pointer PTR_LAB_004fa094;   // 0x004fa094
extern pointer PTR_LAB_004fa0a0;   // 0x004fa0a0
extern undefined * PTR_LAB_004fa0ac;   // 0x004fa0ac
namespace SearchModeButton { extern undefined * vftable; }   // 0x004fa140  PTR_FUN_004fa140
extern pointer PTR_LAB_004fa17c;   // 0x004fa17c
extern pointer PTR_LAB_004fa188;   // 0x004fa188
extern undefined * PTR_LAB_004fa194;   // 0x004fa194
namespace TEAProgressBar { extern undefined * vftable; }   // 0x004fa228  PTR_FUN_004fa228
extern pointer PTR_LAB_004fa260;   // 0x004fa260
extern pointer PTR_LAB_004fa26c;   // 0x004fa26c
extern undefined * PTR_LAB_004fa278;   // 0x004fa278
extern undefined * PTR_FUN_004fa308;   // 0x004fa308
namespace LookupPropertiesViewWindows { extern undefined * vftable; }   // 0x004fb100  PTR_FUN_004fb100
extern pointer PTR_LAB_004fb1c8;   // 0x004fb1c8
extern pointer PTR_LAB_004fb1d4;   // 0x004fb1d4
extern undefined * PTR_LAB_004fb1e0;   // 0x004fb1e0
extern undefined DAT_004fb288;   // 0x004fb288
extern undefined4 DAT_004fb350;   // 0x004fb350
extern undefined DAT_004fb4e9;   // 0x004fb4e9
namespace TEAQuickReferenceViewWindows { extern undefined * vftable; }   // 0x004fc6fc  PTR_FUN_004fc6fc
extern pointer PTR_LAB_004fc7c4;   // 0x004fc7c4
extern pointer PTR_LAB_004fc7d0;   // 0x004fc7d0
extern undefined * PTR_LAB_004fc7dc;   // 0x004fc7dc
namespace TabbyPropertiesViewWindows { extern undefined __entries; }   // 0x004fc888  DAT_004fc888
namespace TabbyPropertiesViewWindows { extern undefined * vftable; }   // 0x004fca18  PTR_FUN_004fca18
extern pointer PTR_LAB_004fcae4;   // 0x004fcae4
extern pointer PTR_LAB_004fcaf0;   // 0x004fcaf0
extern undefined * PTR_LAB_004fcafc;   // 0x004fcafc
extern int DAT_004fcb84;   // 0x004fcb84
extern char DAT_004fcb88;   // 0x004fcb88
extern undefined DAT_004fcb8c;   // 0x004fcb8c
extern undefined4 DAT_004fcbe8;   // 0x004fcbe8
extern char DAT_004fcbec;   // 0x004fcbec
namespace OWL::TRichEdit { extern undefined __entries; }   // 0x004fcc28  DAT_004fcc28
namespace OWL::TRichEditModule { extern undefined * vftable; }   // 0x004fcfe8  PTR_FUN_004fcfe8
namespace OWL::TEditSearch { extern undefined * vftable; }   // 0x004fcffc  PTR_FUN_004fcffc
extern pointer PTR_LAB_004fd05c;   // 0x004fd05c
extern pointer PTR_LAB_004fd068;   // 0x004fd068
extern undefined * PTR_LAB_004fd074;   // 0x004fd074
namespace OWL::TEditFile { extern undefined * vftable; }   // 0x004fd108  PTR_FUN_004fd108
extern pointer PTR_LAB_004fd188;   // 0x004fd188
extern pointer PTR_LAB_004fd194;   // 0x004fd194
extern undefined * PTR_LAB_004fd1a0;   // 0x004fd1a0
namespace OWL::TRichEdit { extern undefined * vftable; }   // 0x004fd234  PTR_FUN_004fd234
extern pointer PTR_LAB_004fd2b4;   // 0x004fd2b4
extern pointer PTR_LAB_004fd2c0;   // 0x004fd2c0
extern undefined * PTR_LAB_004fd2cc;   // 0x004fd2cc
extern undefined4 DAT_004fd35c;   // 0x004fd35c
extern undefined DAT_004fd390;   // 0x004fd390
extern undefined DAT_004fd3d1;   // 0x004fd3d1
namespace DefinitionRichEdit { extern undefined __entries; }   // 0x004fd440  DAT_004fd440
namespace DefinitionViewWindows { extern undefined __entries; }   // 0x004fd4b8  DAT_004fd4b8
namespace DefinitionViewFrame { extern undefined * vftable; }   // 0x004feef0  PTR_FUN_004feef0
extern undefined * PTR_LAB_004fef38;   // 0x004fef38
extern pointer PTR_LAB_004fef50;   // 0x004fef50
extern pointer PTR_LAB_004fef5c;   // 0x004fef5c
extern undefined * PTR_LAB_004fef68;   // 0x004fef68
extern undefined * PTR_LAB_004feff8;   // 0x004feff8
namespace DefinitionViewWindows { extern undefined * vftable; }   // 0x004ff050  PTR_FUN_004ff050
extern pointer PTR_LAB_004ff124;   // 0x004ff124
extern pointer PTR_LAB_004ff130;   // 0x004ff130
extern undefined * PTR_LAB_004ff13c;   // 0x004ff13c
namespace DefinitionRichEdit { extern undefined * vftable; }   // 0x004ff1d0  PTR_FUN_004ff1d0
extern pointer PTR_LAB_004ff25c;   // 0x004ff25c
extern pointer PTR_LAB_004ff268;   // 0x004ff268
extern undefined * PTR_LAB_004ff274;   // 0x004ff274
extern undefined4 DAT_004ff36c;   // 0x004ff36c
extern undefined DAT_004ff3d1;   // 0x004ff3d1
extern undefined DAT_004ff3d5;   // 0x004ff3d5
extern undefined DAT_004ff3f8;   // 0x004ff3f8
namespace TEAFrameWindow { extern undefined __entries; }   // 0x004ff434  DAT_004ff434
namespace TEAAppWindows { extern undefined * vftable; }   // 0x004ffc48  PTR_FUN_004ffc48
extern pointer PTR_LAB_004ffc9c;   // 0x004ffc9c
extern undefined * PTR_LAB_004ffcac;   // 0x004ffcac
extern pointer PTR_LAB_004ffccc;   // 0x004ffccc
namespace TEAFrameWindow { extern undefined * vftable; }   // 0x004ffcdc  PTR_FUN_004ffcdc
extern undefined * PTR_LAB_004ffd28;   // 0x004ffd28
extern pointer PTR_LAB_004ffd40;   // 0x004ffd40
extern pointer PTR_LAB_004ffd4c;   // 0x004ffd4c
extern undefined * PTR_LAB_004ffd58;   // 0x004ffd58
extern undefined * PTR_LAB_004ffde8;   // 0x004ffde8
extern undefined DAT_004ffe56;   // 0x004ffe56
namespace ExternalLookupViewWindows { extern undefined * vftable; }   // 0x00500064  PTR_FUN_00500064
extern pointer PTR_LAB_0050012c;   // 0x0050012c
extern pointer PTR_LAB_00500138;   // 0x00500138
extern undefined * PTR_LAB_00500144;   // 0x00500144
namespace DictionaryListViewWindows { extern undefined __entries; }   // 0x00500270  DAT_00500270
namespace DictionaryListViewWindows { extern undefined * vftable; }   // 0x0050067c  PTR_FUN_0050067c
extern pointer PTR_LAB_00500744;   // 0x00500744
extern pointer PTR_LAB_00500750;   // 0x00500750
extern undefined * PTR_LAB_0050075c;   // 0x0050075c
extern undefined DAT_005007e4;   // 0x005007e4
namespace TEAStartupTipsViewWindows { extern undefined * vftable; }   // 0x00501188  PTR_FUN_00501188
extern pointer PTR_LAB_00501250;   // 0x00501250
extern pointer PTR_LAB_0050125c;   // 0x0050125c
extern undefined * PTR_LAB_00501268;   // 0x00501268
namespace std::locale::facet { extern pointer vftable; }   // 0x00501320  PTR_FUN_00501320
extern undefined * PTR_s_DictionaryFolder_00501420;   // 0x00501420
extern undefined * PTR_s_ClueDatabaseFolder_00501424;   // 0x00501424
namespace GripBar { extern undefined * vftable; }   // 0x005014a8  PTR_FUN_005014a8
extern undefined * PTR_LAB_00501520;   // 0x00501520
extern pointer PTR_LAB_00501540;   // 0x00501540
extern pointer PTR_LAB_0050154c;   // 0x0050154c
extern undefined * PTR_LAB_00501558;   // 0x00501558
extern pointer PTR_DAT_005015e0;   // 0x005015e0
extern undefined * PTR_s_sbknone_00501658;   // 0x00501658
extern int _DAT_00501710;   // 0x00501710
extern undefined4 DAT_0050171c;   // 0x0050171c
extern undefined4 DAT_005017a0;   // 0x005017a0
extern undefined * PTR_DAT_005017a4;   // 0x005017a4
extern undefined * PTR_s_refamp_00501810;   // 0x00501810
extern undefined * PTR_DAT_00501820;   // 0x00501820
extern pointer PTR_s_refeuro_00501830;   // 0x00501830
extern undefined DAT_00501ad1;   // 0x00501ad1
extern undefined DAT_00501c94;   // 0x00501c94
extern undefined DAT_00501c98;   // 0x00501c98
extern undefined DAT_00501c9b;   // 0x00501c9b
extern undefined DAT_00501ce8;   // 0x00501ce8
extern undefined DAT_00501cf2;   // 0x00501cf2
extern undefined DAT_00501cfe;   // 0x00501cfe
extern undefined DAT_00501d63;   // 0x00501d63
extern undefined DAT_00501ddc;   // 0x00501ddc
extern undefined DAT_00501de7;   // 0x00501de7
extern undefined DAT_00501dea;   // 0x00501dea
extern undefined DAT_00501e72;   // 0x00501e72
extern undefined DAT_00501e8e;   // 0x00501e8e
extern undefined DAT_005022c6;   // 0x005022c6
namespace std::ios_base::failure { extern undefined * vftable; }   // 0x005036dc  PTR_FUN_005036dc
extern char DAT_005038ac;   // 0x005038ac
extern undefined DAT_00503a88;   // 0x00503a88
extern undefined * PTR_s_TEAWIN_00503a90;   // 0x00503a90
namespace LicenseViewWindows { extern undefined * vftable; }   // 0x00503bb8  PTR_FUN_00503bb8
extern pointer PTR_LAB_00503c80;   // 0x00503c80
extern pointer PTR_LAB_00503c8c;   // 0x00503c8c
extern undefined * PTR_LAB_00503c98;   // 0x00503c98
extern char DAT_00503d24;   // 0x00503d24
namespace OWL::TRichEdit::Streamer { extern undefined * vftable; }   // 0x00503e64  PTR_FUN_00503e64
namespace OWL::TStreamer { extern undefined * vftable; }   // 0x00503e80  PTR_FUN_00503e80
namespace OWL::TNewStreamer { extern undefined * vftable; }   // 0x00503e9c  PTR_FUN_00503e9c
extern char DAT_00503eb9;   // 0x00503eb9
extern FARPROC DAT_00503ec4;   // 0x00503ec4
extern char DAT_00503ec8;   // 0x00503ec8
extern char DAT_00503eea;   // 0x00503eea
extern char DAT_00503ef2;   // 0x00503ef2
extern char DAT_00503ef8;   // 0x00503ef8
extern char DAT_00503f03;   // 0x00503f03
namespace OWL::TXOwl { extern undefined * vftable; }   // 0x005044cc  PTR_FUN_005044cc
namespace OWL::TXCommCtrl { extern undefined * vftable; }   // 0x005044ec  PTR_FUN_005044ec
namespace OWL::TCommCtrlDll { extern pointer vftable; }   // 0x0050450c  PTR_FUN_0050450c
extern char DAT_00504514;   // 0x00504514
extern undefined1 DAT_00504516;   // 0x00504516
extern char DAT_00504517;   // 0x00504517
extern undefined1 DAT_0050451a;   // 0x0050451a
extern char DAT_0050451b;   // 0x0050451b
extern char DAT_0050452c;   // 0x0050452c
extern char DAT_0050452d;   // 0x0050452d
extern char DAT_0050452e;   // 0x0050452e
extern char DAT_0050452f;   // 0x0050452f
extern char DAT_00504530;   // 0x00504530
extern char DAT_00504531;   // 0x00504531
extern char DAT_00504532;   // 0x00504532
extern char DAT_00504533;   // 0x00504533
extern char DAT_005046d4;   // 0x005046d4
namespace OWL::TAppDictPidImp { extern undefined * vftable; }   // 0x00504860  PTR_FUN_00504860
namespace OWL::TAppDictImp { extern undefined * vftable; }   // 0x00504888  PTR_FUN_00504888
namespace OWL::TAppDictInstImp { extern undefined * vftable; }   // 0x005048b0  PTR_FUN_005048b0
extern char DAT_00504ab0;   // 0x00504ab0
namespace OWL::TButtonGadgetEnabler { extern undefined * vftable; }   // 0x00504cc8  PTR_FUN_00504cc8
namespace OWL::TButtonGadget { extern undefined * vftable; }   // 0x00504ce0  PTR_FUN_00504ce0
namespace OWL::TCelArray { extern pointer vftable; }   // 0x00504fbc  PTR_FUN_00504fbc
extern char DAT_00504fc8;   // 0x00504fc8
extern char DAT_00504fc9;   // 0x00504fc9
extern char DAT_00504fca;   // 0x00504fca
extern char DAT_00504fcb;   // 0x00504fcb
extern char DAT_00504fcc;   // 0x00504fcc
extern char DAT_00504fcd;   // 0x00504fcd
extern char DAT_00504fce;   // 0x00504fce
extern undefined4 DAT_00504fd3;   // 0x00504fd3
extern undefined DAT_00505117;   // 0x00505117
extern undefined DAT_00505298;   // 0x00505298
extern int DAT_005053ac;   // 0x005053ac
namespace OWL::TDiagBase { extern undefined * vftable; }   // 0x0050540c  PTR_FUN_0050540c
namespace OWL::TDiagGroupDef { extern pointer vftable; }   // 0x00505420  PTR_FUN_00505420
extern UINT DAT_00505444;   // 0x00505444
extern undefined DAT_00505448;   // 0x00505448
namespace OWL::TChooseColorDialog { extern undefined * vftable; }   // 0x005054b4  PTR_FUN_005054b4
extern pointer PTR_LAB_005054f8;   // 0x005054f8
extern pointer PTR_LAB_00505504;   // 0x00505504
extern undefined * PTR_LAB_00505510;   // 0x00505510
extern undefined DAT_00505598;   // 0x00505598
namespace OWL::TChooseFontDialog { extern undefined * vftable; }   // 0x00505604  PTR_FUN_00505604
extern pointer PTR_LAB_00505648;   // 0x00505648
extern pointer PTR_LAB_00505654;   // 0x00505654
extern undefined * PTR_LAB_00505660;   // 0x00505660
namespace OWL::TXClipboard { extern undefined * vftable; }   // 0x005057c0  PTR_FUN_005057c0
extern char DAT_005057d4;   // 0x005057d4
extern char DAT_005057d5;   // 0x005057d5
extern char DAT_005057d6;   // 0x005057d6
extern char DAT_005057d7;   // 0x005057d7
extern char DAT_005057d8;   // 0x005057d8
extern char DAT_005057d9;   // 0x005057d9
extern char DAT_005057da;   // 0x005057da
extern char DAT_005057db;   // 0x005057db
extern char DAT_005057dc;   // 0x005057dc
extern char DAT_005057dd;   // 0x005057dd
extern char DAT_005057de;   // 0x005057de
extern char DAT_005057df;   // 0x005057df
namespace OWL::TCommonDialog { extern undefined __entries; }   // 0x005058b4  DAT_005058b4
namespace OWL::TCommonDialog { extern undefined * vftable; }   // 0x00505968  PTR_FUN_00505968
extern pointer PTR_LAB_005059ac;   // 0x005059ac
extern pointer PTR_LAB_005059b8;   // 0x005059b8
extern undefined * PTR_LAB_005059c4;   // 0x005059c4
namespace OWL::TFile { extern pointer vftable; }   // 0x00505a90  PTR_FUN_00505a90
extern undefined * PTR_FUN_00505a98;   // 0x00505a98
namespace OWL::TControlBar { extern undefined * vftable; }   // 0x00505b90  PTR_FUN_00505b90
extern undefined * PTR_LAB_00505c04;   // 0x00505c04
extern pointer PTR_LAB_00505c24;   // 0x00505c24
extern pointer PTR_LAB_00505c30;   // 0x00505c30
extern undefined * PTR_LAB_00505c3c;   // 0x00505c3c
namespace OWL::TCreatedDC { extern undefined * vftable; }   // 0x00505d60  PTR_FUN_00505d60
extern undefined DAT_00505ec7;   // 0x00505ec7
namespace OWL::TDC { extern undefined * vftable; }   // 0x005060a0  PTR_FUN_005060a0
extern int _DAT_00506100;   // 0x00506100
namespace OWL::TXBase { extern undefined * vftable; }   // 0x00506248  PTR_FUN_00506248
extern undefined * PTR_s_Unhandled_Exception_00506258;   // 0x00506258
namespace OWL::TXOutOfMemory { extern undefined * vftable; }   // 0x0050664c  PTR_FUN_0050664c
namespace OWL::TSizeGripGadget { extern undefined * vftable; }   // 0x005069a0  PTR_FUN_005069a0
namespace OWL::TSeparatorGadget { extern undefined * vftable; }   // 0x00506a00  PTR_FUN_00506a00
namespace OWL::TGadget { extern undefined * vftable; }   // 0x00506a60  PTR_FUN_00506a60
namespace OWL::TGadgetList { extern undefined * vftable; }   // 0x00506b1c  PTR_FUN_00506b1c
extern undefined * PTR_FUN_00506b34;   // 0x00506b34
extern undefined * PTR_FUN_00506b40;   // 0x00506b40
extern undefined * PTR_FUN_00506b4c;   // 0x00506b4c
namespace OWL::TGadgetWindow { extern undefined __entries; }   // 0x00506b58  DAT_00506b58
extern byte DAT_00506c48;   // 0x00506c48
namespace OWL::TGadgetWindow { extern undefined * vftable; }   // 0x00506f88  PTR_FUN_00506f88
extern undefined * PTR_LAB_00506ffc;   // 0x00506ffc
extern pointer PTR_LAB_0050701c;   // 0x0050701c
extern pointer PTR_LAB_00507028;   // 0x00507028
extern undefined * PTR_LAB_00507034;   // 0x00507034
namespace OWL::TXGdi { extern undefined * vftable; }   // 0x005071bc  PTR_FUN_005071bc
extern int DAT_005071d0;   // 0x005071d0
extern undefined4 _DAT_005071d4;   // 0x005071d4
extern undefined DAT_005071d4;   // 0x005071d4
extern undefined4 _DAT_0050722c;   // 0x0050722c
extern undefined DAT_0050722c;   // 0x0050722c
namespace OWL::TLayoutWindow { extern undefined __entries; }   // 0x005074a8  DAT_005074a8
namespace OWL::TLayoutWindow::Streamer { extern undefined * vftable; }   // 0x005076a4  PTR_FUN_005076a4
namespace OWL::TLayoutWindow { extern undefined * vftable; }   // 0x005076c0  PTR_FUN_005076c0
extern pointer PTR_LAB_005076d8;   // 0x005076d8
extern pointer PTR_LAB_005076e4;   // 0x005076e4
extern undefined * PTR_LAB_005076f0;   // 0x005076f0
extern char DAT_0050777c;   // 0x0050777c
extern ushort DAT_005077ac;   // 0x005077ac
extern ushort DAT_005077b4;   // 0x005077b4
extern HMODULE DAT_005077bc;   // 0x005077bc
extern FARPROC DAT_00507874;   // 0x00507874
extern char DAT_00507878;   // 0x00507878
extern ushort DAT_00507894;   // 0x00507894
extern char DAT_0050789c;   // 0x0050789c
extern undefined4 DAT_005078c4;   // 0x005078c4
extern undefined DAT_0050798c;   // 0x0050798c
extern char DAT_00507c3c;   // 0x00507c3c
namespace OWL::TMemoryDC { extern undefined * vftable; }   // 0x00507d2c  PTR_FUN_00507d2c
namespace OWL::TXMenu { extern undefined * vftable; }   // 0x0050803c  PTR_FUN_0050803c
namespace OWL::TPopupMenu { extern undefined * vftable; }   // 0x0050805c  PTR_FUN_0050805c
namespace OWL::TMenu { extern undefined * vftable; }   // 0x00508078  PTR_FUN_00508078
namespace OWL::TMessageBar { extern undefined * vftable; }   // 0x00508134  PTR_FUN_00508134
extern undefined * PTR_LAB_005081ac;   // 0x005081ac
extern pointer PTR_LAB_005081cc;   // 0x005081cc
extern pointer PTR_LAB_005081d8;   // 0x005081d8
extern undefined * PTR_LAB_005081e4;   // 0x005081e4
namespace OWL::TModeGadget { extern undefined * vftable; }   // 0x0050829c  PTR_FUN_0050829c
namespace OWL::TMsgThread { extern undefined * vftable; }   // 0x0050838c  PTR_FUN_0050838c
extern int * DAT_005083e8;   // 0x005083e8
extern undefined DAT_00508794;   // 0x00508794
extern char DAT_00508798;   // 0x00508798
namespace OWL::TPaintDC { extern undefined * vftable; }   // 0x005088b0  PTR_FUN_005088b0
namespace OWL::TPickListPopup { extern undefined * vftable; }   // 0x00508a10  PTR_FUN_00508a10
extern pointer PTR_LAB_00508aa0;   // 0x00508aa0
extern pointer PTR_LAB_00508aac;   // 0x00508aac
namespace OWL::TPreviewPage { extern undefined __entries; }   // 0x00508bc0  DAT_00508bc0
namespace OWL::TPreviewPage { extern undefined * vftable; }   // 0x00508c6c  PTR_FUN_00508c6c
extern pointer PTR_LAB_00508cfc;   // 0x00508cfc
extern pointer PTR_LAB_00508d08;   // 0x00508d08
namespace OWL::TPrintPreviewDC { extern undefined * vftable; }   // 0x00508d18  PTR_FUN_00508d18
namespace OWL::TPreviewDCBase { extern undefined * vftable; }   // 0x00508d90  PTR_FUN_00508d90
extern undefined DAT_00508df8;   // 0x00508df8
namespace OWL::TPrintDC { extern undefined * vftable; }   // 0x00508e50  PTR_FUN_00508e50
extern undefined DAT_00508efc;   // 0x00508efc
namespace OWL::TRegLink { extern pointer vftable; }   // 0x00508fb8  PTR_FUN_00508fb8
extern char DAT_00508fd6;   // 0x00508fd6
extern undefined4 DAT_00508ffc;   // 0x00508ffc
extern undefined4 DAT_00509014;   // 0x00509014
namespace OWL::TStatusBar { extern undefined __entries; }   // 0x005090b0  DAT_005090b0
namespace OWL::TStatusBar { extern undefined * vftable; }   // 0x00509210  PTR_FUN_00509210
extern undefined * PTR_LAB_00509288;   // 0x00509288
extern pointer PTR_LAB_005092a8;   // 0x005092a8
extern pointer PTR_LAB_005092b4;   // 0x005092b4
extern undefined * PTR_LAB_005092c0;   // 0x005092c0
extern char DAT_00509348;   // 0x00509348
extern char DAT_00509349;   // 0x00509349
namespace OWL::TWindow { extern undefined * vftable; }   // 0x005093fc  PTR_FUN_005093fc
extern pointer PTR_LAB_0050948c;   // 0x0050948c
extern pointer PTR_LAB_00509498;   // 0x00509498
namespace OWL::TWindow::Streamer { extern undefined * vftable; }   // 0x005094a8  PTR_FUN_005094a8
namespace OWL::TTabControl { extern undefined __entries; }   // 0x005094d0  DAT_005094d0
namespace OWL::TTabControl { extern undefined * vftable; }   // 0x0050956c  PTR_FUN_0050956c
extern pointer PTR_LAB_005095a0;   // 0x005095a0
extern pointer PTR_LAB_005095ac;   // 0x005095ac
extern undefined * PTR_LAB_005095b8;   // 0x005095b8
extern uint DAT_00509640;   // 0x00509640
extern undefined4 DAT_00509644;   // 0x00509644
extern undefined4 DAT_00509648;   // 0x00509648
namespace OWL::TTextGadget { extern undefined * vftable; }   // 0x005096c8  PTR_FUN_005096c8
extern undefined DAT_00509730;   // 0x00509730
namespace OWL::TTooltip { extern undefined * vftable; }   // 0x0050980c  PTR_FUN_0050980c
extern pointer PTR_LAB_0050983c;   // 0x0050983c
extern pointer PTR_LAB_00509848;   // 0x00509848
extern undefined * PTR_LAB_00509854;   // 0x00509854
namespace OWL::TTooltipEnabler { extern undefined * vftable; }   // 0x005098e8  PTR_FUN_005098e8
extern undefined DAT_005098f4;   // 0x005098f4
extern undefined DAT_005098f8;   // 0x005098f8
extern int DAT_0050994c;   // 0x0050994c
extern undefined4 _DAT_00509950;   // 0x00509950
extern undefined DAT_00509950;   // 0x00509950
extern undefined4 _DAT_00509954;   // 0x00509954
extern undefined4 _DAT_00509958;   // 0x00509958
extern undefined4 _DAT_0050995c;   // 0x0050995c
extern char DAT_00509960;   // 0x00509960
extern undefined4 _DAT_00509961;   // 0x00509961
extern undefined DAT_00509961;   // 0x00509961
extern undefined4 _DAT_00509965;   // 0x00509965
extern undefined4 _DAT_00509969;   // 0x00509969
extern undefined4 _DAT_0050996d;   // 0x0050996d
extern char DAT_00509971;   // 0x00509971
extern undefined4 _DAT_00509972;   // 0x00509972
extern undefined DAT_00509972;   // 0x00509972
extern undefined4 _DAT_00509976;   // 0x00509976
extern undefined4 _DAT_0050997a;   // 0x0050997a
extern undefined4 _DAT_0050997e;   // 0x0050997e
extern char DAT_00509982;   // 0x00509982
extern undefined4 _DAT_00509983;   // 0x00509983
extern undefined DAT_00509983;   // 0x00509983
extern undefined4 _DAT_00509987;   // 0x00509987
extern undefined4 _DAT_0050998b;   // 0x0050998b
extern undefined4 _DAT_0050998f;   // 0x0050998f
extern char DAT_00509993;   // 0x00509993
extern char DAT_00509acc;   // 0x00509acc
extern undefined4 _DAT_00509dc0;   // 0x00509dc0
extern char DAT_00509dc4;   // 0x00509dc4
extern undefined4 _DAT_00509dc8;   // 0x00509dc8
extern char DAT_00509dcc;   // 0x00509dcc
extern undefined4 _DAT_00509dd0;   // 0x00509dd0
extern char DAT_00509dd4;   // 0x00509dd4
extern undefined4 _DAT_00509dd8;   // 0x00509dd8
extern char DAT_00509ddc;   // 0x00509ddc
extern undefined4 _DAT_00509de0;   // 0x00509de0
extern char DAT_00509de4;   // 0x00509de4
extern int DAT_00509de8;   // 0x00509de8
extern char DAT_00509dec;   // 0x00509dec
extern int DAT_00509df0;   // 0x00509df0
extern char DAT_00509df4;   // 0x00509df4
extern int DAT_00509df8;   // 0x00509df8
extern char DAT_00509dfc;   // 0x00509dfc
extern int DAT_00509e00;   // 0x00509e00
extern char DAT_00509e04;   // 0x00509e04
extern undefined4 _DAT_00509e08;   // 0x00509e08
extern char DAT_00509e0c;   // 0x00509e0c
extern undefined4 _DAT_00509e10;   // 0x00509e10
extern char DAT_00509e14;   // 0x00509e14
extern undefined4 _DAT_00509e18;   // 0x00509e18
extern char DAT_00509e1c;   // 0x00509e1c
extern undefined4 _DAT_00509e20;   // 0x00509e20
extern char DAT_00509e24;   // 0x00509e24
extern undefined4 _DAT_00509e28;   // 0x00509e28
extern char DAT_00509e2c;   // 0x00509e2c
extern undefined4 _DAT_00509e30;   // 0x00509e30
extern char DAT_00509e34;   // 0x00509e34
extern undefined4 _DAT_00509e38;   // 0x00509e38
extern char DAT_00509e3c;   // 0x00509e3c
extern undefined4 _DAT_00509e40;   // 0x00509e40
extern char DAT_00509e44;   // 0x00509e44
extern undefined4 _DAT_00509e48;   // 0x00509e48
extern char DAT_00509e4c;   // 0x00509e4c
extern undefined4 _DAT_00509e50;   // 0x00509e50
extern char DAT_00509e54;   // 0x00509e54
extern undefined4 _DAT_00509e58;   // 0x00509e58
extern char DAT_00509e5c;   // 0x00509e5c
extern int DAT_00509e60;   // 0x00509e60
extern char DAT_00509e64;   // 0x00509e64
extern int DAT_00509e68;   // 0x00509e68
extern char DAT_00509e6c;   // 0x00509e6c
extern undefined4 _DAT_00509e70;   // 0x00509e70
extern char DAT_00509e74;   // 0x00509e74
extern undefined4 _DAT_00509e78;   // 0x00509e78
extern char DAT_00509e7c;   // 0x00509e7c
extern undefined4 _DAT_00509e80;   // 0x00509e80
extern char DAT_00509e84;   // 0x00509e84
extern undefined4 _DAT_00509e88;   // 0x00509e88
extern char DAT_00509e8c;   // 0x00509e8c
extern undefined4 _DAT_00509e90;   // 0x00509e90
extern char DAT_00509e94;   // 0x00509e94
extern undefined4 _DAT_00509e98;   // 0x00509e98
extern char DAT_00509e9c;   // 0x00509e9c
extern undefined4 _DAT_00509ea0;   // 0x00509ea0
extern char DAT_00509ea4;   // 0x00509ea4
extern undefined4 _DAT_00509ea8;   // 0x00509ea8
extern char DAT_00509eac;   // 0x00509eac
extern undefined4 _DAT_00509eb0;   // 0x00509eb0
extern char DAT_00509eb4;   // 0x00509eb4
extern undefined4 _DAT_00509eb8;   // 0x00509eb8
extern char DAT_00509ebc;   // 0x00509ebc
extern int DAT_00509ec0;   // 0x00509ec0
extern char DAT_00509ec4;   // 0x00509ec4
extern int DAT_00509ec8;   // 0x00509ec8
extern char DAT_00509ecc;   // 0x00509ecc
extern undefined4 _DAT_00509ed0;   // 0x00509ed0
extern char DAT_00509ed4;   // 0x00509ed4
extern undefined4 _DAT_00509ed8;   // 0x00509ed8
extern char DAT_00509edc;   // 0x00509edc
extern undefined4 _DAT_00509ee0;   // 0x00509ee0
extern char DAT_00509ee4;   // 0x00509ee4
extern undefined4 _DAT_00509ee8;   // 0x00509ee8
extern char DAT_00509eec;   // 0x00509eec
extern undefined4 _DAT_00509ef0;   // 0x00509ef0
extern char DAT_00509ef4;   // 0x00509ef4
extern undefined4 _DAT_00509ef8;   // 0x00509ef8
extern char DAT_00509efc;   // 0x00509efc
extern undefined4 _DAT_00509f00;   // 0x00509f00
extern char DAT_00509f04;   // 0x00509f04
extern undefined4 _DAT_00509f08;   // 0x00509f08
extern char DAT_00509f0c;   // 0x00509f0c
extern undefined4 _DAT_00509f10;   // 0x00509f10
extern char DAT_00509f14;   // 0x00509f14
extern undefined4 _DAT_00509f18;   // 0x00509f18
extern char DAT_00509f1c;   // 0x00509f1c
extern undefined4 _DAT_00509f20;   // 0x00509f20
extern char DAT_00509f24;   // 0x00509f24
extern undefined4 _DAT_00509f28;   // 0x00509f28
extern char DAT_00509f2c;   // 0x00509f2c
extern undefined4 _DAT_00509f30;   // 0x00509f30
extern char DAT_00509f34;   // 0x00509f34
extern undefined4 _DAT_00509f38;   // 0x00509f38
extern char DAT_00509f3c;   // 0x00509f3c
extern undefined4 _DAT_00509f40;   // 0x00509f40
extern char DAT_00509f44;   // 0x00509f44
extern int DAT_00509f48;   // 0x00509f48
extern char DAT_00509f4c;   // 0x00509f4c
extern int DAT_00509f50;   // 0x00509f50
extern char DAT_00509f54;   // 0x00509f54
extern undefined4 _DAT_00509f58;   // 0x00509f58
extern char DAT_00509f5c;   // 0x00509f5c
extern undefined4 _DAT_00509f60;   // 0x00509f60
extern char DAT_00509f64;   // 0x00509f64
extern undefined4 _DAT_00509f68;   // 0x00509f68
extern char DAT_00509f6c;   // 0x00509f6c
extern undefined4 _DAT_00509f70;   // 0x00509f70
extern char DAT_00509f74;   // 0x00509f74
extern undefined4 _DAT_00509f78;   // 0x00509f78
extern char DAT_00509f7c;   // 0x00509f7c
extern undefined4 _DAT_00509f80;   // 0x00509f80
extern char DAT_00509f84;   // 0x00509f84
extern undefined4 _DAT_00509f88;   // 0x00509f88
extern char DAT_00509f8c;   // 0x00509f8c
extern undefined4 _DAT_00509f90;   // 0x00509f90
extern char DAT_00509f94;   // 0x00509f94
extern undefined4 _DAT_00509f98;   // 0x00509f98
extern char DAT_00509f9c;   // 0x00509f9c
extern undefined4 _DAT_00509fa0;   // 0x00509fa0
extern char DAT_00509fa4;   // 0x00509fa4
extern undefined4 _DAT_00509fa8;   // 0x00509fa8
extern char DAT_00509fac;   // 0x00509fac
extern undefined4 _DAT_00509fb0;   // 0x00509fb0
extern char DAT_00509fb4;   // 0x00509fb4
extern undefined4 _DAT_00509fb8;   // 0x00509fb8
extern char DAT_00509fbc;   // 0x00509fbc
extern undefined4 _DAT_00509fc0;   // 0x00509fc0
extern char DAT_00509fc4;   // 0x00509fc4
extern undefined4 _DAT_00509fc8;   // 0x00509fc8
extern char DAT_00509fcc;   // 0x00509fcc
extern undefined4 _DAT_00509fd0;   // 0x00509fd0
extern char DAT_00509fd4;   // 0x00509fd4
extern undefined4 _DAT_00509fd8;   // 0x00509fd8
extern char DAT_00509fdc;   // 0x00509fdc
extern undefined4 _DAT_00509fe0;   // 0x00509fe0
extern char DAT_00509fe4;   // 0x00509fe4
extern undefined4 _DAT_00509fe8;   // 0x00509fe8
extern char DAT_00509fec;   // 0x00509fec
extern undefined4 _DAT_00509ff0;   // 0x00509ff0
extern char DAT_00509ff4;   // 0x00509ff4
extern undefined4 _DAT_00509ff8;   // 0x00509ff8
extern char DAT_00509ffc;   // 0x00509ffc
extern undefined4 _DAT_0050a000;   // 0x0050a000
extern char DAT_0050a004;   // 0x0050a004
extern undefined4 _DAT_0050a008;   // 0x0050a008
extern char DAT_0050a00c;   // 0x0050a00c
extern undefined4 _DAT_0050a010;   // 0x0050a010
extern char DAT_0050a014;   // 0x0050a014
extern undefined4 _DAT_0050a018;   // 0x0050a018
extern char DAT_0050a01c;   // 0x0050a01c
extern undefined4 _DAT_0050a020;   // 0x0050a020
extern char DAT_0050a024;   // 0x0050a024
extern undefined4 _DAT_0050a028;   // 0x0050a028
extern char DAT_0050a02c;   // 0x0050a02c
extern undefined4 _DAT_0050a030;   // 0x0050a030
extern char DAT_0050a034;   // 0x0050a034
extern undefined4 _DAT_0050a038;   // 0x0050a038
extern char DAT_0050a03c;   // 0x0050a03c
extern undefined4 _DAT_0050a040;   // 0x0050a040
extern char DAT_0050a044;   // 0x0050a044
extern undefined4 _DAT_0050a048;   // 0x0050a048
extern char DAT_0050a04c;   // 0x0050a04c
extern undefined4 _DAT_0050a050;   // 0x0050a050
extern char DAT_0050a054;   // 0x0050a054
extern char DAT_0050a058;   // 0x0050a058
namespace OWL::TUpDown { extern undefined __entries; }   // 0x0050a078  DAT_0050a078
namespace OWL::TUpDown { extern undefined * vftable; }   // 0x0050a0f8  PTR_FUN_0050a0f8
extern pointer PTR_LAB_0050a12c;   // 0x0050a12c
extern pointer PTR_LAB_0050a138;   // 0x0050a138
extern undefined * PTR_LAB_0050a144;   // 0x0050a144
extern undefined DAT_0050a21e;   // 0x0050a21e
extern undefined DAT_0050a237;   // 0x0050a237
extern undefined DAT_0050a23c;   // 0x0050a23c
extern undefined DAT_0050a262;   // 0x0050a262
namespace OWL::TUrlLink { extern undefined __entries; }   // 0x0050a264  DAT_0050a264
namespace OWL::TUrlLink::Streamer { extern undefined * vftable; }   // 0x0050aa48  PTR_FUN_0050aa48
namespace OWL::TUrlLink { extern undefined * vftable; }   // 0x0050aa64  PTR_FUN_0050aa64
extern pointer PTR_LAB_0050aac0;   // 0x0050aac0
extern pointer PTR_LAB_0050aacc;   // 0x0050aacc
extern undefined * PTR_LAB_0050aad8;   // 0x0050aad8
extern char DAT_0050ab90;   // 0x0050ab90
extern UINT DAT_0050ab94;   // 0x0050ab94
extern char DAT_0050abc8;   // 0x0050abc8
extern char DAT_0050abed;   // 0x0050abed
extern char DAT_0050abee;   // 0x0050abee
extern char DAT_0050abef;   // 0x0050abef
extern char DAT_0050abf0;   // 0x0050abf0
extern uint DAT_0050abf4;   // 0x0050abf4
extern UINT DAT_0050abf8;   // 0x0050abf8
extern short DAT_0050abfc;   // 0x0050abfc
extern char DAT_0050ac35;   // 0x0050ac35
extern char DAT_0050ac36;   // 0x0050ac36
extern undefined * PTR_FUN_0050ac37;   // 0x0050ac37
namespace OWL::TWindow { extern undefined __entries; }   // 0x0050ad04  DAT_0050ad04
extern UINT _DAT_0050b01c;   // 0x0050b01c
extern char DAT_0050b04c;   // 0x0050b04c
namespace OWL::TXWindow { extern undefined * vftable; }   // 0x0050b3c0  PTR_FUN_0050b3c0
namespace OWL::TMenuItemEnabler { extern undefined * vftable; }   // 0x0050b3e0  PTR_FUN_0050b3e0
namespace OWL::TCommandEnabler { extern undefined * vftable; }   // 0x0050b3f8  PTR_FUN_0050b3f8
namespace OWL::TScreenDC { extern undefined * vftable; }   // 0x0050b47c  PTR_FUN_0050b47c
namespace OWL::TWindowDC { extern undefined * vftable; }   // 0x0050b4e8  PTR_FUN_0050b4e8
extern char DAT_0050b548;   // 0x0050b548
extern char DAT_0050b549;   // 0x0050b549
extern char DAT_0050b5c0;   // 0x0050b5c0
extern int DAT_0050b5c4;   // 0x0050b5c4
namespace OWL::TApplication { extern undefined * vftable; }   // 0x0050b660  PTR_FUN_0050b660
extern pointer PTR_LAB_0050b6b4;   // 0x0050b6b4
extern undefined * PTR_LAB_0050b6c4;   // 0x0050b6c4
extern pointer PTR_LAB_0050b6e4;   // 0x0050b6e4
extern HWND DAT_0050bc80;   // 0x0050bc80
extern char DAT_0050bc84;   // 0x0050bc84
namespace OWL::TApplication { extern undefined __entries; }   // 0x0050bce8  DAT_0050bce8
namespace OWL::TXInvalidMainWindow { extern undefined * vftable; }   // 0x0050be1c  PTR_FUN_0050be1c
extern undefined4 DAT_0050be30;   // 0x0050be30
extern char DAT_0050be74;   // 0x0050be74
namespace OWL::TButton { extern undefined __entries; }   // 0x0050bfc4  DAT_0050bfc4
namespace OWL::TButton { extern undefined * vftable; }   // 0x0050c018  PTR_FUN_0050c018
extern pointer PTR_LAB_0050c04c;   // 0x0050c04c
extern pointer PTR_LAB_0050c058;   // 0x0050c058
extern undefined * PTR_LAB_0050c064;   // 0x0050c064
namespace OWL::TButton::Streamer { extern undefined * vftable; }   // 0x0050c1f4  PTR_FUN_0050c1f4
extern undefined DAT_0050c204;   // 0x0050c204
namespace OWL::TCheckBox { extern undefined * vftable; }   // 0x0050c258  PTR_FUN_0050c258
extern pointer PTR_LAB_0050c290;   // 0x0050c290
extern pointer PTR_LAB_0050c29c;   // 0x0050c29c
extern undefined * PTR_LAB_0050c2a8;   // 0x0050c2a8
extern undefined DAT_0050c388;   // 0x0050c388
namespace OWL::TComboBox { extern undefined * vftable; }   // 0x0050c420  PTR_FUN_0050c420
extern pointer PTR_LAB_0050c4b4;   // 0x0050c4b4
extern pointer PTR_LAB_0050c4c0;   // 0x0050c4c0
extern undefined * PTR_LAB_0050c4cc;   // 0x0050c4cc
extern undefined DAT_0050c59c;   // 0x0050c59c
namespace OWL::TComboBox::Streamer { extern undefined * vftable; }   // 0x0050c790  PTR_FUN_0050c790
extern undefined DAT_0050c7a0;   // 0x0050c7a0
namespace OWL::TControl { extern undefined * vftable; }   // 0x0050c860  PTR_FUN_0050c860
extern pointer PTR_LAB_0050c88c;   // 0x0050c88c
extern pointer PTR_LAB_0050c898;   // 0x0050c898
extern undefined * PTR_LAB_0050c8a4;   // 0x0050c8a4
namespace OWL::TControl::Streamer { extern undefined * vftable; }   // 0x0050ca24  PTR_FUN_0050ca24
extern undefined DAT_0050ca80;   // 0x0050ca80
namespace OWL::TDecoratedFrame { extern undefined __entries; }   // 0x0050ca84  DAT_0050ca84
namespace OWL::TDecoratedFrame { extern undefined * vftable; }   // 0x0050cc2c  PTR_FUN_0050cc2c
extern undefined * PTR_LAB_0050cc70;   // 0x0050cc70
extern pointer PTR_LAB_0050cc88;   // 0x0050cc88
extern pointer PTR_LAB_0050cc94;   // 0x0050cc94
extern undefined * PTR_LAB_0050cca0;   // 0x0050cca0
extern undefined * PTR_LAB_0050cd30;   // 0x0050cd30
extern int * DAT_0050cd7c;   // 0x0050cd7c
extern undefined DAT_0050cd80;   // 0x0050cd80
namespace OWL::TDialog { extern undefined * vftable; }   // 0x0050cea0  PTR_FUN_0050cea0
extern pointer PTR_LAB_0050cee4;   // 0x0050cee4
extern pointer PTR_LAB_0050cef0;   // 0x0050cef0
extern undefined * PTR_LAB_0050cefc;   // 0x0050cefc
namespace OWL::TControlEnabler { extern undefined * vftable; }   // 0x0050d004  PTR_FUN_0050d004
namespace OWL::TDib { extern undefined * vftable; }   // 0x0050d01c  PTR_FUN_0050d01c
extern undefined DAT_0050d0b8;   // 0x0050d0b8
extern undefined1 DAT_0050d0ba;   // 0x0050d0ba
extern undefined DAT_0050d0bb;   // 0x0050d0bb
extern undefined DAT_0050d0bc;   // 0x0050d0bc
namespace OWL::TDocManager { extern undefined __entries; }   // 0x0050d15c  DAT_0050d15c
namespace OWL::TDocument { extern undefined * vftable; }   // 0x0050d9bc  PTR_FUN_0050d9bc
namespace OWL::TDocManager { extern undefined * vftable; }   // 0x0050da2c  PTR_FUN_0050da2c
extern pointer PTR_LAB_0050daa4;   // 0x0050daa4
extern pointer PTR_LAB_0050dab0;   // 0x0050dab0
namespace OWL::TDvFileSaveDialog { extern undefined * vftable; }   // 0x0050dac0  PTR_FUN_0050dac0
extern pointer PTR_LAB_0050db08;   // 0x0050db08
extern pointer PTR_LAB_0050db14;   // 0x0050db14
extern undefined * PTR_LAB_0050db20;   // 0x0050db20
namespace OWL::TDvFileOpenDialog { extern undefined * vftable; }   // 0x0050dbb4  PTR_FUN_0050dbb4
extern pointer PTR_LAB_0050dbfc;   // 0x0050dbfc
extern pointer PTR_LAB_0050dc08;   // 0x0050dc08
extern undefined * PTR_LAB_0050dc14;   // 0x0050dc14
namespace OWL::TDocTemplate { extern undefined * vftable; }   // 0x0050dd08  PTR_FUN_0050dd08
extern pointer PTR_LAB_0050dd2c;   // 0x0050dd2c
extern pointer PTR_s_Document_Class_0050dd30;   // 0x0050dd30
extern pointer PTR_s_Document_Title_0050dd40;   // 0x0050dd40
extern undefined DAT_0050dea0;   // 0x0050dea0
extern undefined DAT_0050dfc1;   // 0x0050dfc1
extern int * DAT_0050dfc8;   // 0x0050dfc8
namespace OWL::TEdit { extern undefined __entries; }   // 0x0050dfcc  DAT_0050dfcc
namespace OWL::TEdit { extern undefined * vftable; }   // 0x0050e344  PTR_FUN_0050e344
extern pointer PTR_LAB_0050e3a4;   // 0x0050e3a4
extern pointer PTR_LAB_0050e3b0;   // 0x0050e3b0
extern undefined * PTR_LAB_0050e3bc;   // 0x0050e3bc
namespace OWL::TEdit::Streamer { extern undefined * vftable; }   // 0x0050e4f4  PTR_FUN_0050e4f4
extern undefined DAT_0050e504;   // 0x0050e504
extern undefined DAT_0050e9b8;   // 0x0050e9b8
namespace OWL::TEditFile::Streamer { extern undefined * vftable; }   // 0x0050ea40  PTR_FUN_0050ea40
namespace OWL::TEditSearch { extern undefined __entries; }   // 0x0050ea64  DAT_0050ea64
namespace OWL::TEditSearch::Streamer { extern undefined * vftable; }   // 0x0050ed8c  PTR_FUN_0050ed8c
namespace OWL::TXBadFormat { extern undefined * vftable; }   // 0x0050edfc  PTR_FUN_0050edfc
namespace OWL::TDiskFileHandle { extern undefined * vftable; }   // 0x0050eea8  PTR_FUN_0050eea8
namespace OWL::TFileHandle { extern undefined * vftable; }   // 0x0050ef10  PTR_FUN_0050ef10
extern undefined DAT_0050f0c8;   // 0x0050f0c8
extern undefined * PTR_DAT_0050f218;   // 0x0050f218
extern undefined DAT_0050f238;   // 0x0050f238
extern char DAT_0050f23b;   // 0x0050f23b
extern undefined DAT_0050f23c;   // 0x0050f23c
extern undefined DAT_0050f23e;   // 0x0050f23e
extern undefined DAT_0050f241;   // 0x0050f241
extern char DAT_0050f243;   // 0x0050f243
extern undefined DAT_0050f246;   // 0x0050f246
extern undefined DAT_0050f43c;   // 0x0050f43c
namespace OWL::TFindReplaceDialog { extern undefined __entries; }   // 0x0050f464  DAT_0050f464
namespace OWL::TReplaceDialog { extern undefined * vftable; }   // 0x0050f50c  PTR_FUN_0050f50c
extern pointer PTR_LAB_0050f550;   // 0x0050f550
extern pointer PTR_LAB_0050f55c;   // 0x0050f55c
extern undefined * PTR_LAB_0050f568;   // 0x0050f568
namespace OWL::TFindDialog { extern undefined * vftable; }   // 0x0050f5fc  PTR_FUN_0050f5fc
extern pointer PTR_LAB_0050f640;   // 0x0050f640
extern pointer PTR_LAB_0050f64c;   // 0x0050f64c
extern undefined * PTR_LAB_0050f658;   // 0x0050f658
namespace OWL::TFindReplaceDialog { extern undefined * vftable; }   // 0x0050f6ec  PTR_FUN_0050f6ec
extern pointer PTR_LAB_0050f730;   // 0x0050f730
extern pointer PTR_LAB_0050f73c;   // 0x0050f73c
extern undefined * PTR_LAB_0050f748;   // 0x0050f748
extern HICON DAT_0050f7d0;   // 0x0050f7d0
extern undefined DAT_0050f7e9;   // 0x0050f7e9
extern undefined DAT_0050f7ed;   // 0x0050f7ed
namespace OWL::TFrameWindow { extern undefined __entries; }   // 0x0050f7f0  DAT_0050f7f0
namespace OWL::TFrameWindow { extern undefined * vftable; }   // 0x0050fa80  PTR_FUN_0050fa80
extern pointer PTR_LAB_0050fad4;   // 0x0050fad4
extern pointer PTR_LAB_0050fae0;   // 0x0050fae0
extern undefined * PTR_LAB_0050faec;   // 0x0050faec
namespace OWL::TGroupBox { extern undefined * vftable; }   // 0x0050fc1c  PTR_FUN_0050fc1c
extern pointer PTR_LAB_0050fc50;   // 0x0050fc50
extern pointer PTR_LAB_0050fc5c;   // 0x0050fc5c
extern undefined * PTR_LAB_0050fc68;   // 0x0050fc68
namespace OWL::TListBox { extern undefined * vftable; }   // 0x0050fdd0  PTR_FUN_0050fdd0
extern pointer PTR_LAB_0050fe54;   // 0x0050fe54
extern pointer PTR_LAB_0050fe60;   // 0x0050fe60
extern undefined * PTR_LAB_0050fe6c;   // 0x0050fe6c
namespace OWL::TListBox::Streamer { extern undefined * vftable; }   // 0x0050ffa4  PTR_FUN_0050ffa4
namespace OWL::TMenuDescr { extern undefined * vftable; }   // 0x0050ffe4  PTR_FUN_0050ffe4
extern char DAT_00510005;   // 0x00510005
extern char DAT_00510006;   // 0x00510006
extern char DAT_00510007;   // 0x00510007
extern char DAT_00510008;   // 0x00510008
extern char DAT_00510009;   // 0x00510009
extern char DAT_0051000b;   // 0x0051000b
extern char DAT_00510010;   // 0x00510010
extern char DAT_00510012;   // 0x00510012
extern int DAT_005101d0;   // 0x005101d0
namespace OWL::TXInvalidModule { extern undefined * vftable; }   // 0x00510750  PTR_FUN_00510750
namespace OWL::TModule { extern pointer vftable; }   // 0x00510770  PTR_FUN_00510770
namespace OWL::TModule::Streamer { extern undefined * vftable; }   // 0x0051083c  PTR_FUN_0051083c
extern undefined DAT_00510888;   // 0x00510888
extern int DAT_005108a0;   // 0x005108a0
namespace OWL::TFileSaveDialog { extern undefined * vftable; }   // 0x0051091c  PTR_FUN_0051091c
extern pointer PTR_LAB_00510964;   // 0x00510964
extern pointer PTR_LAB_00510970;   // 0x00510970
extern undefined * PTR_LAB_0051097c;   // 0x0051097c
namespace OWL::TFileOpenDialog { extern undefined * vftable; }   // 0x00510a10  PTR_FUN_00510a10
extern pointer PTR_LAB_00510a58;   // 0x00510a58
extern pointer PTR_LAB_00510a64;   // 0x00510a64
extern undefined * PTR_LAB_00510a70;   // 0x00510a70
namespace OWL::TOpenSaveDialog { extern undefined * vftable; }   // 0x00510b04  PTR_FUN_00510b04
extern pointer PTR_LAB_00510b4c;   // 0x00510b4c
extern pointer PTR_LAB_00510b58;   // 0x00510b58
extern undefined * PTR_LAB_00510b64;   // 0x00510b64
extern undefined DAT_00510bf4;   // 0x00510bf4
namespace OWL::TPrintDialog { extern undefined * vftable; }   // 0x00510c90  PTR_FUN_00510c90
extern pointer PTR_LAB_00510cd4;   // 0x00510cd4
extern pointer PTR_LAB_00510ce0;   // 0x00510ce0
extern undefined * PTR_LAB_00510cec;   // 0x00510cec
extern undefined DAT_00510d7c;   // 0x00510d7c
namespace OWL::TNumericStatic { extern undefined __entries; }   // 0x00510e14  DAT_00510e14
namespace OWL::TPrinterAbortDlg { extern undefined __entries; }   // 0x00510eb4  DAT_00510eb4
extern int DAT_00510fdc;   // 0x00510fdc
namespace OWL::TXPrinter { extern undefined * vftable; }   // 0x005112f0  PTR_FUN_005112f0
namespace OWL::TPrinter { extern undefined * vftable; }   // 0x00511310  PTR_FUN_00511310
namespace OWL::TPrinterAbortDlg { extern undefined * vftable; }   // 0x00511348  PTR_FUN_00511348
extern pointer PTR_LAB_0051138c;   // 0x0051138c
extern pointer PTR_LAB_00511398;   // 0x00511398
extern undefined * PTR_LAB_005113a4;   // 0x005113a4
namespace OWL::TNumericStatic { extern undefined * vftable; }   // 0x00511438  PTR_FUN_00511438
extern pointer PTR_LAB_00511470;   // 0x00511470
extern pointer PTR_LAB_0051147c;   // 0x0051147c
extern undefined * PTR_LAB_00511488;   // 0x00511488
namespace OWL::TFormattedStatic { extern undefined * vftable; }   // 0x0051151c  PTR_FUN_0051151c
extern pointer PTR_LAB_00511558;   // 0x00511558
extern pointer PTR_LAB_00511564;   // 0x00511564
extern undefined * PTR_LAB_00511570;   // 0x00511570
namespace OWL::TPrintout { extern undefined * vftable; }   // 0x00511674  PTR_FUN_00511674
namespace OWL::TRadioButton { extern undefined __entries; }   // 0x005116a8  DAT_005116a8
namespace OWL::TRadioButton { extern undefined * vftable; }   // 0x00511708  PTR_FUN_00511708
extern pointer PTR_LAB_00511740;   // 0x00511740
extern pointer PTR_LAB_0051174c;   // 0x0051174c
extern undefined * PTR_LAB_00511758;   // 0x00511758
namespace OWL::TScroller { extern undefined * vftable; }   // 0x00511834  PTR_FUN_00511834
namespace OWL::TScroller::Streamer { extern undefined * vftable; }   // 0x0051193c  PTR_FUN_0051193c
namespace OWL::TStatic { extern undefined __entries; }   // 0x00511960  DAT_00511960
namespace OWL::TStatic { extern undefined * vftable; }   // 0x005119e4  PTR_FUN_005119e4
extern pointer PTR_LAB_00511a1c;   // 0x00511a1c
extern pointer PTR_LAB_00511a28;   // 0x00511a28
extern undefined * PTR_LAB_00511a34;   // 0x00511a34
namespace OWL::TStatic::Streamer { extern undefined * vftable; }   // 0x00511b6c  PTR_FUN_00511b6c
extern undefined DAT_00511b7c;   // 0x00511b7c
namespace OWL::TTinyCaption { extern undefined * vftable; }   // 0x00511e14  PTR_FUN_00511e14
extern pointer PTR_LAB_00511e28;   // 0x00511e28
extern pointer PTR_LAB_00511e34;   // 0x00511e34
extern undefined * PTR_LAB_00511e40;   // 0x00511e40
namespace OWL::TValidator { extern undefined * vftable; }   // 0x00511ef8  PTR_FUN_00511ef8
namespace OWL::TValidator::Streamer { extern undefined * vftable; }   // 0x00511fc0  PTR_FUN_00511fc0
extern pointer PTR_FUN_00511fcc;   // 0x00511fcc
extern pointer PTR_s_View_Class_00511fd0;   // 0x00511fd0
extern pointer PTR_s_View_Name_00511fd4;   // 0x00511fd4
extern uint DAT_00511ff8;   // 0x00511ff8
namespace OWL::TView { extern undefined * vftable; }   // 0x005120a4  PTR_FUN_005120a4
extern pointer PTR_FUN_005120dc;   // 0x005120dc
extern pointer PTR_LAB_005120e8;   // 0x005120e8
namespace OWL::TBarDescr { extern undefined * vftable; }   // 0x00512280  PTR_FUN_00512280
extern char DAT_005122f4;   // 0x005122f4
extern char DAT_005122f5;   // 0x005122f5
extern char DAT_005122f6;   // 0x005122f6
extern char DAT_005122f7;   // 0x005122f7
extern char DAT_00512303;   // 0x00512303
namespace OWL::TTreeWindow::Streamer { extern undefined * vftable; }   // 0x005128dc  PTR_FUN_005128dc
namespace OWL::TTreeWindow { extern undefined * vftable; }   // 0x005128f8  PTR_FUN_005128f8
extern pointer PTR_LAB_0051297c;   // 0x0051297c
extern pointer PTR_LAB_00512988;   // 0x00512988
extern undefined * PTR_LAB_00512994;   // 0x00512994
extern int DAT_00512a1c;   // 0x00512a1c
extern undefined DAT_00512a20;   // 0x00512a20
extern char DAT_00512a24;   // 0x00512a24
extern undefined DAT_00512a2d;   // 0x00512a2d
extern int DAT_00512c18;   // 0x00512c18
extern undefined4 _DAT_00512cbc;   // 0x00512cbc
extern undefined4 _DAT_00512cc0;   // 0x00512cc0
extern undefined * PTR_FUN_00512cc4;   // 0x00512cc4
extern undefined * PTR_FUN_00512cc8;   // 0x00512cc8
extern undefined * PTR_FUN_00512ccc;   // 0x00512ccc
extern undefined * PTR_LAB_00512cd0;   // 0x00512cd0
extern uint DAT_00512cd4;   // 0x00512cd4
extern int DAT_00512cd8;   // 0x00512cd8
extern int DAT_00512cdc;   // 0x00512cdc
extern uint DAT_00512ce4;   // 0x00512ce4
extern uint DAT_00512ce8;   // 0x00512ce8
extern uint DAT_00512cec;   // 0x00512cec
extern uint * DAT_00512cf0;   // 0x00512cf0
extern uint * _DAT_00512cf4;   // 0x00512cf4
extern int DAT_00512cf8;   // 0x00512cf8
extern undefined4 DAT_00512cfc;   // 0x00512cfc
extern undefined * PTR_DAT_00512d00;   // 0x00512d00
extern undefined * PTR_DAT_00512d08;   // 0x00512d08
extern uint DAT_00512d0c;   // 0x00512d0c
extern uint DAT_00512d10;   // 0x00512d10
extern undefined DAT_0051303d;   // 0x0051303d
extern undefined DAT_00513040;   // 0x00513040
extern int DAT_00513d58;   // 0x00513d58
extern undefined DAT_00513d64;   // 0x00513d64
extern undefined DAT_00513dc4;   // 0x00513dc4
extern uint DAT_005140ac;   // 0x005140ac
extern undefined DAT_005140f8;   // 0x005140f8
extern undefined DAT_00514d20;   // 0x00514d20
namespace __rwstd::ref_counted { extern pointer vftable; }   // 0x0051587c  PTR_FUN_0051587c
namespace __rwstd::facet_imp { extern undefined * vftable; }   // 0x0051588c  PTR_FUN_0051588c
extern undefined * PTR_FUN_005158a0;   // 0x005158a0
namespace std::num_put_char_std_ostreambuf_iterator_char { extern undefined * vftable; }   // 0x005158d0  PTR_FUN_005158d0
namespace std::basic_ofstream_char { extern pointer vftable; }   // 0x00515914  PTR_FUN_00515914
extern pointer PTR_LAB_00515920;   // 0x00515920
namespace std::basic_ifstream_char { extern pointer vftable; }   // 0x00515930  PTR_FUN_00515930
extern pointer PTR_LAB_0051593c;   // 0x0051593c
namespace std::basic_ios_char { extern pointer vftable; }   // 0x0051594c  PTR_FUN_0051594c
namespace std::basic_ostream_char { extern pointer vftable; }   // 0x0051595c  PTR_FUN_0051595c
extern pointer PTR_LAB_00515968;   // 0x00515968
namespace std::basic_istream_char { extern pointer vftable; }   // 0x00515978  PTR_FUN_00515978
extern pointer PTR_LAB_00515984;   // 0x00515984
namespace std::basic_streambuf_char { extern undefined * vftable; }   // 0x00515994  PTR_FUN_00515994
namespace std::basic_filebuf_char { extern undefined * vftable; }   // 0x005159d4  PTR_FUN_005159d4
extern undefined * PTR_FUN_00515a14;   // 0x00515a14
extern undefined * PTR_FUN_00515a3c;   // 0x00515a3c
extern undefined DAT_00515a78;   // 0x00515a78
extern undefined * PTR_s_iostream_object_has_failbit_set_00515af8;   // 0x00515af8
extern undefined * PTR_s_iostream_object_has_badbit_set_00515afc;   // 0x00515afc
extern undefined * PTR_s_iostream_object_has_eofbit_set_00515b00;   // 0x00515b00
extern char DAT_00515b64;   // 0x00515b64
namespace std::ios_base { extern pointer vftable; }   // 0x00515c80  PTR_FUN_00515c80
extern undefined DAT_00515d08;   // 0x00515d08
extern uint DAT_00515d13;   // 0x00515d13
extern undefined1 DAT_00515d17;   // 0x00515d17
namespace std::domain_error { extern pointer vftable; }   // 0x00515de8  PTR_FUN_00515de8
extern uint DAT_00515dfc;   // 0x00515dfc
extern undefined DAT_00515e04;   // 0x00515e04
extern undefined DAT_005162a4;   // 0x005162a4
extern undefined * PTR_FUN_005162c0;   // 0x005162c0
extern undefined1 DAT_005162e8;   // 0x005162e8
extern undefined * PTR_FUN_005163bc;   // 0x005163bc
extern undefined DAT_005163e4;   // 0x005163e4
extern undefined * PTR_s_locale_initid_called_twice_005165c8;   // 0x005165c8
extern undefined * PTR_s_Error_constructing_locale_name_005165d4;   // 0x005165d4
extern char DAT_0051664c;   // 0x0051664c
extern undefined DAT_00516765;   // 0x00516765
extern undefined DAT_00516766;   // 0x00516766
extern undefined DAT_00516767;   // 0x00516767
extern undefined DAT_00516775;   // 0x00516775
extern undefined DAT_00516ab8;   // 0x00516ab8
namespace std::runtime_error { extern undefined * vftable; }   // 0x00516b14  PTR_FUN_00516b14
namespace __rwstd::locale_imp { extern pointer vftable; }   // 0x00516b28  PTR_FUN_00516b28
extern undefined DAT_00516b51;   // 0x00516b51
extern undefined DAT_00516b54;   // 0x00516b54
extern undefined DAT_00516b56;   // 0x00516b56
extern undefined DAT_00516b58;   // 0x00516b58
extern undefined DAT_00516b59;   // 0x00516b59
extern undefined DAT_00516b5a;   // 0x00516b5a
extern undefined DAT_00516b5c;   // 0x00516b5c
extern undefined DAT_00516b5e;   // 0x00516b5e
extern undefined DAT_00516b60;   // 0x00516b60
extern undefined * PTR_s_no_named_exception_thrown_00516bb0;   // 0x00516bb0
extern undefined * PTR_s_bad_alloc_exception_thrown_00516bb8;   // 0x00516bb8
extern undefined * PTR_s_Error_00516bbc;   // 0x00516bbc
extern int * DAT_00516bc0;   // 0x00516bc0
extern undefined * PTR_s_invalid_string_size_parameter_in_00516d20;   // 0x00516d20
extern undefined * PTR_s_position_beyond_end_of_string_in_00516d24;   // 0x00516d24
extern undefined * PTR_s_resulting_length_is_invalid_in_f_00516d28;   // 0x00516d28
extern undefined * PTR_s_string_index_out_of_range_in_fun_00516d2c;   // 0x00516d2c
extern undefined * PTR_s_unexpected_NULL_pointer_in_funct_00516d30;   // 0x00516d30
extern undefined DAT_00516ee7;   // 0x00516ee7
extern undefined DAT_00516ef6;   // 0x00516ef6
extern undefined DAT_00517151;   // 0x00517151
namespace type_info_hash { extern pointer vftable; }   // 0x005171ec  PTR_FUN_005171ec
namespace std::type_info { extern pointer vftable; }   // 0x005171fc  PTR_FUN_005171fc
extern undefined * DAT_00517200;   // 0x00517200
extern undefined * DAT_00517204;   // 0x00517204
extern undefined DAT_0051723c;   // 0x0051723c
extern int _DAT_00517250;   // 0x00517250
extern int DAT_00517320;   // 0x00517320
extern undefined * PTR_FUN_00517334;   // 0x00517334
extern uint _DAT_00517338;   // 0x00517338
extern undefined4 _DAT_0051733c;   // 0x0051733c
extern undefined4 DAT_00517340;   // 0x00517340
extern undefined DAT_00517358;   // 0x00517358
extern undefined DAT_00517370;   // 0x00517370
extern uint DAT_005177f0;   // 0x005177f0
extern undefined4 DAT_005177f4;   // 0x005177f4
extern undefined * PTR_DAT_005178c0;   // 0x005178c0
extern undefined DAT_005178c4;   // 0x005178c4
extern undefined DAT_005179f0;   // 0x005179f0
extern undefined DAT_005179f4;   // 0x005179f4
extern int DAT_00517ac0;   // 0x00517ac0
extern undefined DAT_00517e78;   // 0x00517e78
extern undefined2 DAT_00517ef8;   // 0x00517ef8
extern undefined1 DAT_00517f04;   // 0x00517f04
extern undefined DAT_00517f12;   // 0x00517f12
extern undefined DAT_00517f76;   // 0x00517f76
extern pointer PTR_DAT_00518178;   // 0x00518178
extern undefined * PTR_DAT_0051817c;   // 0x0051817c
extern undefined * PTR_DAT_00518180;   // 0x00518180
extern undefined * PTR_DAT_00518184;   // 0x00518184
extern undefined * PTR_DAT_00518188;   // 0x00518188
extern undefined * PTR_DAT_0051818c;   // 0x0051818c
extern undefined * PTR_DAT_00518190;   // 0x00518190
extern undefined * PTR_DAT_00518194;   // 0x00518194
extern undefined * PTR_DAT_00518198;   // 0x00518198
extern undefined * PTR_DAT_0051819c;   // 0x0051819c
extern undefined1 DAT_005181a0;   // 0x005181a0
extern undefined1 DAT_005181a1;   // 0x005181a1
extern undefined1 DAT_005181a2;   // 0x005181a2
extern undefined1 DAT_005181a3;   // 0x005181a3
extern undefined1 DAT_005181a4;   // 0x005181a4
extern undefined1 DAT_005181a5;   // 0x005181a5
extern undefined1 DAT_005181a6;   // 0x005181a6
extern undefined1 DAT_005181a7;   // 0x005181a7
extern undefined DAT_005181b4;   // 0x005181b4
extern undefined DAT_005181b7;   // 0x005181b7
extern undefined DAT_005181bc;   // 0x005181bc
extern undefined DAT_005181bf;   // 0x005181bf
extern undefined DAT_005181c4;   // 0x005181c4
extern undefined DAT_005181c7;   // 0x005181c7
extern undefined DAT_005181cc;   // 0x005181cc
extern undefined DAT_005181cf;   // 0x005181cf
extern undefined DAT_005181d4;   // 0x005181d4
extern undefined DAT_005181d7;   // 0x005181d7
extern undefined DAT_005181da;   // 0x005181da
extern undefined DAT_005181dd;   // 0x005181dd
extern undefined DAT_005181e2;   // 0x005181e2
extern undefined DAT_005181e5;   // 0x005181e5
extern undefined DAT_005181e8;   // 0x005181e8
extern undefined DAT_005181eb;   // 0x005181eb
extern undefined DAT_005181f0;   // 0x005181f0
extern undefined DAT_005181f3;   // 0x005181f3
extern undefined DAT_005181f6;   // 0x005181f6
extern undefined DAT_005181f9;   // 0x005181f9
extern undefined DAT_005181fe;   // 0x005181fe
extern undefined DAT_00518204;   // 0x00518204
extern undefined DAT_00518304;   // 0x00518304
extern int DAT_00518404;   // 0x00518404
extern undefined4 DAT_0051840c;   // 0x0051840c
extern undefined4 DAT_0051844c;   // 0x0051844c
extern undefined4 DAT_00518489;   // 0x00518489
extern undefined4 DAT_00518493;   // 0x00518493
extern undefined4 DAT_0051849d;   // 0x0051849d
extern undefined4 DAT_005184a7;   // 0x005184a7
extern undefined1 DAT_005184ab;   // 0x005184ab
extern undefined DAT_00518513;   // 0x00518513
extern undefined DAT_00518515;   // 0x00518515
extern undefined DAT_00518517;   // 0x00518517
extern undefined DAT_00518519;   // 0x00518519
extern undefined1 DAT_0051851c;   // 0x0051851c
extern pointer PTR_DAT_00518550;   // 0x00518550
extern undefined * PTR_DAT_00518568;   // 0x00518568
extern undefined4 DAT_0051862c;   // 0x0051862c
extern undefined * PTR_DAT_00518658;   // 0x00518658
extern pointer PTR_DAT_0051877c;   // 0x0051877c
extern undefined * _DAT_005188b4;   // 0x005188b4
extern undefined * _DAT_005188b8;   // 0x005188b8
extern undefined * _DAT_005188bc;   // 0x005188bc
extern undefined * _DAT_005188c0;   // 0x005188c0
extern undefined4 DAT_00518984;   // 0x00518984
extern float _DAT_00518988;   // 0x00518988
extern longdouble _DAT_0051898c;   // 0x0051898c
extern double _DAT_005189b8;   // 0x005189b8
extern undefined4 DAT_005189b8;   // 0x005189b8
extern undefined4 DAT_00518a38;   // 0x00518a38
extern undefined DAT_00518a40;   // 0x00518a40
extern undefined * PTR_FUN_00518a44;   // 0x00518a44
extern undefined * PTR_FUN_00518a48;   // 0x00518a48
extern undefined4 DAT_00518a90;   // 0x00518a90
extern undefined4 DAT_00518a98;   // 0x00518a98
extern undefined4 DAT_00518aa0;   // 0x00518aa0
extern undefined DAT_00518aa8;   // 0x00518aa8
extern uint DAT_00518aac;   // 0x00518aac
extern undefined4 _DAT_00518ab0;   // 0x00518ab0
extern undefined1 DAT_00518ab4;   // 0x00518ab4
extern undefined1 DAT_00518ab9;   // 0x00518ab9
extern undefined1 DAT_00518abe;   // 0x00518abe
extern undefined1 DAT_00518ac3;   // 0x00518ac3
extern undefined4 DAT_00518af0;   // 0x00518af0
extern undefined4 DAT_00518af4;   // 0x00518af4
extern undefined2 DAT_00518af8;   // 0x00518af8
extern undefined4 DAT_00518afa;   // 0x00518afa
extern undefined4 DAT_00518afe;   // 0x00518afe
extern undefined2 DAT_00518b02;   // 0x00518b02
extern undefined4 DAT_00518b04;   // 0x00518b04
extern undefined4 DAT_00518b08;   // 0x00518b08
extern undefined2 DAT_00518b0c;   // 0x00518b0c
extern undefined4 DAT_00518b0e;   // 0x00518b0e
extern undefined4 DAT_00518b12;   // 0x00518b12
extern undefined2 DAT_00518b16;   // 0x00518b16
extern undefined4 DAT_00518b18;   // 0x00518b18
extern undefined4 DAT_00518b1c;   // 0x00518b1c
extern undefined2 DAT_00518b20;   // 0x00518b20
extern undefined4 DAT_00518b22;   // 0x00518b22
extern undefined4 DAT_00518b26;   // 0x00518b26
extern undefined2 DAT_00518b2a;   // 0x00518b2a
extern undefined4 DAT_00518b2c;   // 0x00518b2c
extern undefined4 DAT_00518b30;   // 0x00518b30
extern undefined2 DAT_00518b34;   // 0x00518b34
extern undefined4 DAT_00518b36;   // 0x00518b36
extern undefined4 DAT_00518b3a;   // 0x00518b3a
extern undefined2 DAT_00518b3e;   // 0x00518b3e
extern byte DAT_00518b40;   // 0x00518b40
extern byte DAT_00518b41;   // 0x00518b41
extern byte DAT_00518b42;   // 0x00518b42
extern byte DAT_00518b43;   // 0x00518b43
extern undefined4 _DAT_00518bd0;   // 0x00518bd0
extern undefined * DAT_00518bd4;   // 0x00518bd4
extern LPCSTR DAT_00518bd8;   // 0x00518bd8
extern undefined DAT_00518bdc;   // 0x00518bdc
extern undefined DAT_00518bdf;   // 0x00518bdf
extern undefined * DAT_00518c4c;   // 0x00518c4c
extern undefined * PTR_FUN_00518c50;   // 0x00518c50
extern undefined * PTR_FUN_00518c54;   // 0x00518c54
extern undefined * PTR_FUN_00518c58;   // 0x00518c58
extern undefined * PTR_FUN_00518c5c;   // 0x00518c5c
extern undefined * PTR_LAB_00518c60;   // 0x00518c60
extern undefined * PTR_FUN_00518c64;   // 0x00518c64
extern undefined * PTR_LAB_00518c68;   // 0x00518c68
extern int DAT_00518cc0;   // 0x00518cc0
extern undefined * PTR_FUN_00518d0c;   // 0x00518d0c
extern undefined * PTR_FUN_00518d10;   // 0x00518d10
extern char DAT_00518d88;   // 0x00518d88
extern undefined DAT_00518d8c;   // 0x00518d8c
extern undefined4 DAT_00518db4;   // 0x00518db4
extern undefined DAT_00518ddc;   // 0x00518ddc
extern int DAT_00518de8;   // 0x00518de8
extern int DAT_00518dec;   // 0x00518dec
extern undefined DAT_00518e90;   // 0x00518e90
extern undefined4 DAT_00518e98;   // 0x00518e98
extern undefined4 DAT_00518e9c;   // 0x00518e9c
extern int iRam00518ea8;   // 0x00518ea8
extern int DAT_00518fb4;   // 0x00518fb4
extern int DAT_00518fb8;   // 0x00518fb8
extern undefined * PTR_DAT_00518fbc;   // 0x00518fbc
extern undefined * PTR_DAT_00518fc0;   // 0x00518fc0
extern undefined DAT_00518fc4;   // 0x00518fc4
extern undefined1 DAT_00518fc7;   // 0x00518fc7
extern undefined1 DAT_00518fc8;   // 0x00518fc8
extern undefined DAT_005191e4;   // 0x005191e4
extern undefined DAT_00519845;   // 0x00519845
extern undefined DAT_00519858;   // 0x00519858
extern undefined DAT_00519900;   // 0x00519900
extern int _DAT_00519938;   // 0x00519938
extern uint DAT_0051993c;   // 0x0051993c
extern byte DAT_00519d3c;   // 0x00519d3c
extern undefined4 DAT_00519e3c;   // 0x00519e3c
extern short DAT_0051a23c;   // 0x0051a23c
extern short DAT_0051a23e;   // 0x0051a23e
extern undefined2 DAT_0051a240;   // 0x0051a240
extern undefined4 DAT_0051a440;   // 0x0051a440
extern int DAT_0051a848;   // 0x0051a848
extern int DAT_0051a858;   // 0x0051a858
extern undefined4 DAT_0051a860;   // 0x0051a860
extern int DAT_0051ac60;   // 0x0051ac60
extern undefined4 DAT_0051ac64;   // 0x0051ac64
extern undefined1 DAT_0051ac68;   // 0x0051ac68
extern undefined DAT_0051ac72;   // 0x0051ac72
extern undefined DAT_0051ac74;   // 0x0051ac74
extern UINT DAT_0051ac78;   // 0x0051ac78
extern HHOOK DAT_0051ac7c;   // 0x0051ac7c
extern undefined4 DAT_0051ac80;   // 0x0051ac80
extern int DAT_0051ac84;   // 0x0051ac84
extern undefined4 DAT_0051ac88;   // 0x0051ac88
extern HWND DAT_0051ac8c;   // 0x0051ac8c
extern undefined1 DAT_0051ac90;   // 0x0051ac90
extern undefined DAT_0051aea4;   // 0x0051aea4
extern undefined * DAT_0051aea8;   // 0x0051aea8
extern undefined4 _DAT_0051aeb0;   // 0x0051aeb0
extern undefined DAT_0051aeb0;   // 0x0051aeb0
extern uint DAT_0051aeb4;   // 0x0051aeb4
extern undefined DAT_0051aeb9;   // 0x0051aeb9
extern undefined4 DAT_0051aecc;   // 0x0051aecc
extern undefined4 DAT_0051af54;   // 0x0051af54
extern undefined4 DAT_0051af74;   // 0x0051af74
extern undefined4 DAT_0051af8c;   // 0x0051af8c
extern undefined DAT_0051afb8;   // 0x0051afb8
extern undefined4 _DAT_0051afcc;   // 0x0051afcc
extern undefined DAT_0051afcc;   // 0x0051afcc
extern undefined DAT_0051b084;   // 0x0051b084
extern undefined DAT_0051b095;   // 0x0051b095
extern undefined DAT_0051b0a6;   // 0x0051b0a6
extern undefined DAT_0051b0b7;   // 0x0051b0b7
extern undefined DAT_0051b0c8;   // 0x0051b0c8
extern undefined DAT_0051b0d9;   // 0x0051b0d9
extern undefined DAT_0051b0ea;   // 0x0051b0ea
extern undefined DAT_0051b0fb;   // 0x0051b0fb
extern undefined DAT_0051b10c;   // 0x0051b10c
extern undefined DAT_0051b110;   // 0x0051b110
extern uint DAT_0051b118;   // 0x0051b118
extern undefined DAT_0051b11d;   // 0x0051b11d
extern undefined DAT_0051b121;   // 0x0051b121
extern undefined DAT_0051b125;   // 0x0051b125
extern undefined DAT_0051b12c;   // 0x0051b12c
extern undefined DAT_0051b13d;   // 0x0051b13d
extern undefined4 DAT_0051b14a;   // 0x0051b14a
extern undefined4 DAT_0051b14e;   // 0x0051b14e
extern undefined4 DAT_0051b152;   // 0x0051b152
extern undefined4 DAT_0051b156;   // 0x0051b156
extern undefined4 DAT_0051b15a;   // 0x0051b15a
extern undefined4 DAT_0051b15e;   // 0x0051b15e
extern uint DAT_0051b174;   // 0x0051b174
extern undefined DAT_0051b178;   // 0x0051b178
extern undefined DAT_0051b17c;   // 0x0051b17c
extern undefined DAT_0051b188;   // 0x0051b188
extern undefined DAT_0051b190;   // 0x0051b190
extern int DAT_0051b198;   // 0x0051b198
extern int DAT_0051b19c;   // 0x0051b19c
extern int DAT_0051b1a0;   // 0x0051b1a0
extern undefined DAT_0051b1b8;   // 0x0051b1b8
extern undefined DAT_0051b1bc;   // 0x0051b1bc
extern undefined4 DAT_0051b1d4;   // 0x0051b1d4
extern undefined4 DAT_0051b1e0;   // 0x0051b1e0
extern undefined4 DAT_0051b1e4;   // 0x0051b1e4
extern undefined4 DAT_0051b1e8;   // 0x0051b1e8
extern undefined4 DAT_0051b1ec;   // 0x0051b1ec
extern int DAT_0051b1f4;   // 0x0051b1f4
extern undefined4 DAT_0051b1f8;   // 0x0051b1f8
extern undefined4 DAT_0051b1fc;   // 0x0051b1fc
extern undefined DAT_0051b208;   // 0x0051b208
extern undefined4 DAT_0051b215;   // 0x0051b215
extern undefined4 DAT_0051b219;   // 0x0051b219
extern undefined4 DAT_0051b21d;   // 0x0051b21d
extern undefined4 DAT_0051b221;   // 0x0051b221
extern undefined4 DAT_0051b225;   // 0x0051b225
extern undefined4 DAT_0051b229;   // 0x0051b229
extern undefined4 DAT_0051b22d;   // 0x0051b22d
extern undefined4 DAT_0051b231;   // 0x0051b231
extern undefined4 DAT_0051b235;   // 0x0051b235
extern undefined4 DAT_0051b239;   // 0x0051b239
extern undefined4 DAT_0051b23d;   // 0x0051b23d
extern undefined DAT_0051b244;   // 0x0051b244
extern undefined4 _DAT_0051b254;   // 0x0051b254
extern undefined DAT_0051b254;   // 0x0051b254
extern undefined DAT_0051b258;   // 0x0051b258
extern undefined DAT_0051b3b4;   // 0x0051b3b4
extern HANDLE DAT_0051b404;   // 0x0051b404
extern undefined4 _DAT_0051b408;   // 0x0051b408
extern undefined DAT_0051b408;   // 0x0051b408
extern undefined4 DAT_0051b40c;   // 0x0051b40c
extern undefined4 DAT_0051b410;   // 0x0051b410
extern undefined DAT_0051b414;   // 0x0051b414
extern int _DAT_0051b425;   // 0x0051b425
extern undefined DAT_0051b430;   // 0x0051b430
extern undefined4 _DAT_0051b435;   // 0x0051b435
extern undefined4 _DAT_0051b439;   // 0x0051b439
extern undefined4 _DAT_0051b43d;   // 0x0051b43d
extern uint * DAT_0051b441;   // 0x0051b441
extern undefined DAT_0051b448;   // 0x0051b448
extern undefined DAT_0051b458;   // 0x0051b458
extern undefined1 DAT_0051b648;   // 0x0051b648
extern undefined4 _DAT_0051b649;   // 0x0051b649
extern undefined4 _DAT_0051b64d;   // 0x0051b64d
extern undefined4 _DAT_0051b651;   // 0x0051b651
extern HWND DAT_0051b655;   // 0x0051b655
extern undefined DAT_0051b659;   // 0x0051b659
extern int DAT_0051b674;   // 0x0051b674
extern undefined DAT_0051b678;   // 0x0051b678
extern undefined DAT_0051b77c;   // 0x0051b77c
extern undefined4 _DAT_0051b780;   // 0x0051b780
extern undefined DAT_0051b780;   // 0x0051b780
extern undefined4 _DAT_0051b784;   // 0x0051b784
extern undefined4 _DAT_0051b788;   // 0x0051b788
extern HMODULE DAT_0051b78c;   // 0x0051b78c
extern undefined4 DAT_0051b790;   // 0x0051b790
extern undefined4 DAT_0051b794;   // 0x0051b794
extern undefined DAT_0051b798;   // 0x0051b798
extern int DAT_0051b7a0;   // 0x0051b7a0
extern undefined DAT_0051b7a8;   // 0x0051b7a8
extern undefined DAT_0051b86c;   // 0x0051b86c
extern undefined DAT_0051b87c;   // 0x0051b87c
extern undefined DAT_0051b88c;   // 0x0051b88c
extern undefined DAT_0051b89c;   // 0x0051b89c
extern undefined DAT_0051b8ac;   // 0x0051b8ac
extern undefined DAT_0051b8bc;   // 0x0051b8bc
extern undefined DAT_0051b8cc;   // 0x0051b8cc
extern undefined DAT_0051b8dc;   // 0x0051b8dc
extern undefined4 DAT_0051b8e9;   // 0x0051b8e9
extern undefined4 DAT_0051b8ed;   // 0x0051b8ed
extern undefined4 DAT_0051b8f1;   // 0x0051b8f1
extern undefined4 DAT_0051b8f5;   // 0x0051b8f5
extern undefined DAT_0051b8fd;   // 0x0051b8fd
extern undefined DAT_0051b91a;   // 0x0051b91a
extern undefined DAT_0051b92b;   // 0x0051b92b
extern undefined DAT_0051b944;   // 0x0051b944
extern undefined DAT_0051b954;   // 0x0051b954
extern undefined DAT_0051b964;   // 0x0051b964
extern undefined DAT_0051b974;   // 0x0051b974
extern undefined DAT_0051b984;   // 0x0051b984
extern undefined4 DAT_0051b991;   // 0x0051b991
extern undefined4 DAT_0051b995;   // 0x0051b995
extern undefined4 DAT_0051b999;   // 0x0051b999
extern undefined4 DAT_0051b9c9;   // 0x0051b9c9
extern undefined DAT_0051b9d4;   // 0x0051b9d4
extern undefined DAT_0051b9e4;   // 0x0051b9e4
extern undefined * DAT_0051b9f4;   // 0x0051b9f4
extern undefined * * _DAT_0051b9f8;   // 0x0051b9f8
extern undefined DAT_0051b9f8;   // 0x0051b9f8
extern undefined DAT_0051ba14;   // 0x0051ba14
extern undefined DAT_0051ba58;   // 0x0051ba58
extern undefined DAT_0051ba9c;   // 0x0051ba9c
extern int DAT_0051bae0;   // 0x0051bae0
extern undefined DAT_0051bb24;   // 0x0051bb24
extern int DAT_0051bb64;   // 0x0051bb64
extern int DAT_0051bba4;   // 0x0051bba4
extern undefined DAT_0051bbe4;   // 0x0051bbe4
extern int DAT_0051bbec;   // 0x0051bbec
extern int DAT_0051bbf0;   // 0x0051bbf0
extern uint DAT_0051bbf4;   // 0x0051bbf4
extern undefined4 * DAT_0051bbf8;   // 0x0051bbf8
extern int DAT_0051bbfc;   // 0x0051bbfc
extern undefined4 * DAT_0051bc00;   // 0x0051bc00
extern undefined4 * DAT_0051bc04;   // 0x0051bc04
extern int DAT_0051bc08;   // 0x0051bc08
extern char * DAT_0051bc0c;   // 0x0051bc0c
extern undefined DAT_0051bc10;   // 0x0051bc10
extern undefined4 DAT_0051bc18;   // 0x0051bc18
extern undefined DAT_0051c018;   // 0x0051c018
extern int * DAT_0051c024;   // 0x0051c024
extern undefined * DAT_0051c028;   // 0x0051c028
extern undefined * DAT_0051c02c;   // 0x0051c02c
extern HANDLE _DAT_0051c0f8;   // 0x0051c0f8
extern undefined DAT_0051c0f8;   // 0x0051c0f8
extern HANDLE DAT_0051c0fc;   // 0x0051c0fc
extern HANDLE _DAT_0051c100;   // 0x0051c100
extern int _DAT_0051c1c0;   // 0x0051c1c0
extern byte DAT_0051c1c4;   // 0x0051c1c4
extern undefined DAT_0051c1c8;   // 0x0051c1c8
extern undefined DAT_0051c1ca;   // 0x0051c1ca
extern undefined1 DAT_0051c1d8;   // 0x0051c1d8
extern undefined1 DAT_0051c1d9;   // 0x0051c1d9
extern undefined1 DAT_0051c1da;   // 0x0051c1da
extern UINT _DAT_0051c2dc;   // 0x0051c2dc
extern undefined DAT_0051c2e0;   // 0x0051c2e0
extern undefined DAT_0051c3e0;   // 0x0051c3e0
extern int DAT_0051c3fc;   // 0x0051c3fc
extern undefined * DAT_0051c400;   // 0x0051c400
extern uint DAT_0051c404;   // 0x0051c404
extern int DAT_0051c408;   // 0x0051c408
extern int DAT_0051c40c;   // 0x0051c40c
extern undefined1 * DAT_0051c414;   // 0x0051c414
extern undefined2 * DAT_0051c418;   // 0x0051c418
extern int * DAT_0051c41c;   // 0x0051c41c
extern uint * DAT_0051c420;   // 0x0051c420
extern int _DAT_0051c424;   // 0x0051c424
extern char * DAT_0051c438;   // 0x0051c438
extern LPCH DAT_0051c43c;   // 0x0051c43c
extern int DAT_0051c440;   // 0x0051c440
extern undefined DAT_0051c444;   // 0x0051c444
extern undefined1 * DAT_0051c44c;   // 0x0051c44c
extern undefined4 _DAT_0051c460;   // 0x0051c460
extern undefined DAT_0051c460;   // 0x0051c460
extern int _DAT_0051c464;   // 0x0051c464
extern undefined4 DAT_0051c474;   // 0x0051c474
extern int * DAT_0051c478;   // 0x0051c478
extern undefined4 _DAT_0051c47c;   // 0x0051c47c
extern undefined4 _DAT_0051c480;   // 0x0051c480
extern undefined4 uRam632c7261;   // 0x632c7261
extern undefined4 uRam732c7261;   // 0x732c7261

} // namespace tea
