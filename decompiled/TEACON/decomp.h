// TEACON.exe — declarations for the decompiled program. Generated; do not edit.
// One prototype per function (as Ghidra has it after its signatures were committed) and one
// declaration per global the pseudocode names. Class names appear as namespaces: the binary has no
// type information from which real class definitions could be rebuilt.
#pragma once
#include "../ghidra.h"

namespace tea {

// ---- functions (825) ----
void __stdcall entry(void);
void __stdcall FUN_00401012(void);
void __cdecl __GetExceptDLLinfo(undefined4 *param_1);
undefined4 __stdcall FUN_00401140(void);
void __stdcall FUN_00401150(void);
void __stdcall FUN_004011a8(void);
undefined4 __stdcall main_(int param_1,int param_2);
void __cdecl FUN_0040483c(undefined4 param_1,int param_2,int param_3);
void __cdecl FUN_004048f4(int param_1,int param_2,int param_3);
int __cdecl FUN_00404d2c(int param_1,int param_2,int param_3);
int __cdecl FUN_00404d5c(int param_1,int param_2,int param_3);
void __cdecl FUN_00404ea8(int param_1,int param_2);
namespace std::exception { undefined * __stdcall vf1(void); }
namespace std::bad_alloc { undefined * __stdcall vf1(void); }
namespace std::string { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::vector_std_string { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::vector_MatchEngine_ptr { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_004050b4(undefined4 param_1,int param_2,int param_3);
void __stdcall FUN_004050cc(void);
void __stdcall FUN_00405164(void);
undefined4 * __cdecl FUN_004051bc(undefined4 *param_1,uint *param_2);
namespace TSDictionaryList { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_004052f4(undefined4 param_1,int param_2,int param_3);
undefined4 * __cdecl FUN_0040530c(uint *param_1);
void __cdecl FUN_004061d0(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_004063a8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_004063cc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_0040644c(int param_1,int param_2);
namespace TSDictionaryList { void __cdecl ReleaseDictionaries(int param_1); }
int * __cdecl FUN_00406564(int *param_1,int *param_2,int *param_3);
undefined4 * __cdecl FUN_00406584(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
namespace TSDictionaryList { int __cdecl GetCount(int param_1); }
undefined4 __cdecl FUN_004065c8(int param_1);
undefined1 __cdecl FUN_00406600(int param_1,int param_2);
undefined4 __cdecl FUN_004066fc(int param_1,int param_2);
undefined4 __cdecl FUN_00406720(int param_1,int param_2);
namespace TSDictionaryList { undefined2 __cdecl GetNumLengths(int param_1,int param_2); }
namespace TSDictionaryList { undefined4 __cdecl GetWordStreamOffset(int param_1,int param_2,int param_3); }
undefined4 __cdecl FUN_00406780(int param_1,int param_2,int param_3);
int __cdecl FUN_004067a0(int param_1,int param_2);
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
namespace MatchEngine { void __cdecl _dtor(int param_1,byte param_2); }
namespace std::logic_error { undefined4 __cdecl vf1(int param_1); }
namespace std::vector_TSDictionaryList_Dictionary_ptr { void __cdecl _dtor(int param_1,byte param_2); }
int __cdecl FUN_00407ae0(int param_1,int param_2);
char * __cdecl FUN_00408894(char *param_1,char param_2,int param_3);
int __cdecl FUN_004088c0(int param_1,int param_2,int param_3);
int __cdecl FUN_00408b40(int param_1,int param_2);
int __cdecl GetFileTitleString(int param_1,int param_2);
bool __cdecl FUN_00409000(int param_1);
int __cdecl GetProgramDirectory(int param_1);
int __cdecl FUN_00409208(int param_1,int param_2);
bool __cdecl ReadFileTime(int param_1,char param_2,LPFILETIME param_3);
namespace std::locale { void __cdecl _dtor(int *param_1,byte param_2); }
namespace InputEngine { undefined4 * __cdecl InputEngine(undefined4 *param_1,int param_2,int param_3); }
namespace InputEngine { void __cdecl _dtor(int param_1,byte param_2); }
namespace InputEngine { bool __cdecl StartLength(int param_1,int param_2); }
namespace InputEngine { char * __cdecl NextMatch(int param_1,int param_2); }
namespace MatchEngineSet { uint __cdecl EvalLogic(char param_1,int param_2,int param_3,byte *param_4,int *param_5); }
namespace InputEngine { bool __cdecl OpenFile(int param_1); }
namespace InputEngine { char * __cdecl GetAnnotation(int param_1); }
undefined4 __cdecl FUN_0040a360(int param_1,undefined4 param_2);
namespace MatchEngine { int __cdecl CompilePattern(int *param_1,int *param_2,int param_3,int *param_4,int *param_5,int *param_6); }
namespace MatchEngine { int __cdecl CompileTemplate(int param_1,int *param_2,int param_3,int *param_4,int *param_5,undefined4 *param_6); }
namespace MatchEngine { int __cdecl CompileAnagram(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4,int param_5); }
namespace MatchEngine { void __cdecl Compile(int *param_1,int param_2,int param_3,uint *param_4,int param_5); }
namespace MatchEngine { undefined4 __cdecl IsValid(int param_1); }
namespace MatchEngine { undefined1 __cdecl GetStatus(int param_1); }
namespace MatchEngine { undefined4 * __cdecl MatchEngine(undefined4 *param_1); }
namespace MatchEngine { void __cdecl SetShortest(int param_1,int param_2); }
namespace MatchEngine { void __cdecl SetLongest(int param_1,int param_2); }
namespace MatchEngine { void __cdecl SetWordLength(int param_1,int param_2); }
namespace MatchEngine { bool __cdecl MatchWord(int param_1,int param_2); }
namespace MatchEngine { void __cdecl FormatBalance(int param_1,int param_2); }
namespace MatchEngine { int __cdecl GetMinLength(int param_1); }
namespace MatchEngine { int __cdecl GetMaxLength(int param_1); }
namespace VariableValues { bool __cdecl Bind(int param_1,char param_2); }
namespace VariableValues { undefined1 * __cdecl Get(int param_1); }
namespace VariableValues { undefined4 __cdecl IsLetterBound(char param_1); }
namespace VariableValues { void __stdcall Clear(void); }
namespace VariableValues { void __cdecl Save(undefined1 *param_1); }
namespace VariableValues { void __cdecl Restore(undefined1 *param_1); }
namespace MatchEngine { void __stdcall ResetMatchState(void); }
int __cdecl FUN_0040da88(int param_1);
namespace Pattern { undefined4 * __cdecl Pattern(undefined4 *param_1); }
namespace Pattern { void __cdecl _dtor(int param_1,byte param_2); }
namespace Pattern { int __cdecl Add(int *param_1,int param_2); }
namespace Pattern { void __cdecl Clear(undefined4 *param_1); }
namespace Pattern { int __cdecl At(int param_1,byte param_2); }
namespace MatchEngine { byte * MatchFixedTemplate(undefined4 param_1,int param_2,int param_3); }
namespace MatchEngine { byte * MatchDistinctAnagram(undefined4 param_1,int param_2,byte *param_3); }
namespace MatchEngine { byte * MatchMultiAnagram(undefined4 param_1,int param_2,byte *param_3); }
namespace MatchEngine { byte * RunTemplateVM(int param_1,byte *param_2,byte *param_3,int param_4,int param_5); }
namespace MatchEngine { byte * AnagramSingleLetters(undefined4 param_1,byte *param_2,int param_3,int param_4); }
namespace MatchEngine { byte * AnagramMultiLetters(undefined4 param_1,byte *param_2,int param_3,int param_4); }
int FUN_0040e474(undefined4 param_1,int param_2);
namespace MatchEngine { int AnagramChoiceLists(undefined4 param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6, int param_7,undefined4 param_8); }
namespace MatchEngine { void AnagramChoiceListsOp(int param_1,byte *param_2,int param_3,int param_4,int param_5); }
namespace MatchEngine { int AnagramVariables(undefined4 param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6); }
int FUN_0040e700(undefined4 param_1,byte *param_2,byte *param_3,int param_4,int param_5);
namespace MatchEngine { int AnagramSubPattern(int param_1,byte *param_2,int param_3,char param_4,int param_5,int param_6, int param_7,uint param_8,int param_9,undefined4 param_10); }
namespace MatchEngine { byte * RunAnagramVM(int param_1,byte *param_2,byte *param_3,undefined4 param_4,uint param_5, int param_6,undefined4 param_7); }
namespace MatchEngine { void ComputeBalance(char *param_1,byte *param_2,int param_3); }
namespace MatchEngine { byte * MatchGeneral(int param_1,char *param_2,byte *param_3,int param_4,int param_5,int param_6); }
namespace VariableValues { void __cdecl _dtor(char *param_1,byte param_2); }
int __cdecl FilterWordByCaseMode(int param_1,int param_2,char param_3);
namespace TEAViewProfileWindows { int __cdecl Load(int param_1,int param_2); }
namespace TEAViewProfileWindows { void __cdecl _dtor(int param_1,byte param_2); }
int __cdecl ExpandQueryMacros(int param_1,int param_2,int param_3);
void __cdecl LoadPatternOptions(int param_1,int param_2);
int __stdcall FUN_00411910(void);
namespace Persist { char * __cdecl Persist(char *param_1,int param_2,char param_3,char param_4); }
namespace Persist { void __cdecl _dtor(int param_1,byte param_2); }
namespace Persist { undefined4 __cdecl QueryValueSized(int param_1,int param_2,int param_3); }
namespace Persist { undefined4 __cdecl QueryValue(int param_1,int param_2,undefined4 *param_3); }
undefined4 __cdecl FUN_00411b14(int param_1,int param_2,int param_3,uint *param_4);
uint __cdecl FUN_00411c80(int param_1,int param_2,uint *param_3);
uint * __cdecl FUN_00411d78(char *param_1,uint *param_2);
void __cdecl FUN_00411dd8(char *param_1,uint *param_2);
undefined4 * __cdecl FUN_00411e94(undefined4 *param_1);
namespace MatchEngineSet { void __cdecl _dtor(int param_1,byte param_2); }
namespace MatchEngineSet { undefined1 __cdecl Compile(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7); }
undefined4 * __cdecl FUN_004133f0(undefined4 *param_1,int param_2);
void __cdecl FUN_004134dc(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_004136b4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_004136d8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_00413758(int param_1,int param_2);
undefined4 __cdecl FUN_00413770(int param_1,int param_2);
void __cdecl FUN_00413804(int param_1,int param_2,int param_3);
void __cdecl FUN_00413da4(int param_1,int *param_2,int *param_3);
void __cdecl FUN_00413e18(int param_1);
void __cdecl FUN_00414468(int param_1,uint param_2);
undefined4 __cdecl FUN_00414508(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void __cdecl FUN_004147b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_004147d0(undefined4 *param_1,int param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_0041484c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 __cdecl FUN_00414870(byte *param_1,char *param_2);
bool __cdecl FUN_00414888(byte *param_1,char *param_2);
void __cdecl FUN_00414a00(byte param_1,byte *param_2,byte *param_3);
undefined4 __cdecl FUN_00414a84(byte *param_1,char *param_2);
undefined4 __cdecl FUN_00414a9c(byte *param_1,char *param_2);
int __cdecl FUN_00414ab4(int param_1,int param_2);
namespace Common { void __cdecl _dtor(int param_1,byte param_2); }
undefined4 __cdecl FUN_00414ea8(int param_1,int param_2,int param_3);
undefined4 * __cdecl calloc(int param_1,int param_2);
void __stdcall operator_delete(void);
void __stdcall operator_delete_array(void);
undefined4 __cdecl set_new_handler(undefined4 param_1);
int __stdcall operator_new(void);
int __stdcall operator_new_array(void);
void __stdcall FUN_0041504c(void);
void __stdcall FUN_004150ac(void);
void __stdcall FUN_004150ec(void);
void __cdecl _vector_delete_ldtc_(int param_1,int param_2,int param_3,uint param_4,undefined *param_5);
int __cdecl FUN_00415144(int param_1,int param_2,int param_3,uint param_4,undefined *param_5);
int * __cdecl _vector_new_ldtc_(int *param_1,int param_2,int param_3,uint param_4,undefined *param_5);
bool FUN_0041543c(int param_1,undefined4 *param_2,uint *param_3);
bool FUN_004154a8(undefined4 *param_1,SIZE_T param_2);
undefined4 FUN_004154d0(LPVOID param_1,int param_2);
undefined4 FUN_0041551c(LPVOID param_1,SIZE_T param_2);
undefined4 FUN_00415534(LPVOID param_1);
undefined4 __cdecl FUN_00415570(int *param_1,int *param_2,int *param_3);
undefined4 __stdcall FUN_004155ec(void);
undefined4 __stdcall malloc(void);
void __stdcall free(void);
undefined4 __stdcall FUN_00415610(void);
void __cdecl FUN_00415628(undefined4 param_1);
void __cdecl FUN_00415670(undefined4 param_1);
void __cdecl FUN_00415688(undefined4 param_1);
void __cdecl FUN_004156a0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_004156e0(void);
void __stdcall FUN_004156e4(void);
undefined4 __cdecl FUN_00415724(uint *param_1,uint param_2,uint param_3);
undefined4 __cdecl FUN_00415824(uint *param_1,uint param_2);
undefined4 __cdecl FUN_00415910(int param_1);
undefined4 __cdecl FUN_00415bd4(uint *param_1);
void __cdecl FUN_00415cc8(int param_1);
void __cdecl FUN_00415cf4(int param_1);
int * __cdecl FUN_00415dfc(int param_1);
uint * __cdecl FUN_00415e38(uint param_1);
uint * __cdecl FUN_00415e60(uint param_1);
SIZE_T __stdcall FUN_00416038(void);
void __stdcall FUN_00416050(void);
int __cdecl FUN_004160b0(int param_1,uint param_2);
uint * __cdecl FUN_004161d8(uint *param_1,uint param_2);
uint * __cdecl FUN_00416290(uint *param_1,uint param_2);
uint __cdecl FUN_00416328(int param_1);
void __stdcall FUN_00416344(void);
void __stdcall FUN_00416348(void);
void __cdecl FUN_0041662c(int param_1);
void __cdecl FUN_00416664(int param_1);
void __cdecl FUN_0041669c(int param_1);
undefined4 __cdecl FUN_00416734(int param_1);
int __cdecl FUN_00416740(int param_1);
int __cdecl FUN_00416754(int *param_1);
int __cdecl FUN_00416760(int *param_1);
undefined4 * __stdcall FUN_00416784(void);
undefined4 * __cdecl FUN_0041678c(undefined4 *param_1);
undefined4 * __cdecl FUN_004167c0(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_004167f4(int *param_1);
undefined4 __cdecl FUN_00416814(undefined4 param_1);
void __stdcall FUN_0041683c(void);
void __stdcall FUN_0041684c(void);
undefined4 __cdecl FUN_00416854(undefined4 param_1);
undefined4 __cdecl FUN_0041687c(int param_1);
void __stdcall FUN_00416890(void);
int __cdecl FUN_004168a0(int param_1,int param_2,undefined4 *param_3);
int __cdecl FUN_004168c4(int param_1,int param_2);
undefined4 __cdecl FUN_004168f8(undefined4 param_1);
int * __cdecl FUN_00416920(int *param_1);
undefined4 __cdecl FUN_0041695c(undefined4 *param_1);
undefined4 __cdecl FUN_00416968(int *param_1,uint param_2);
void __cdecl FUN_00416980(int param_1,uint *param_2,undefined4 param_3);
undefined4 * __stdcall FUN_004169b8(void);
undefined4 * __cdecl FUN_00416a0c(undefined4 *param_1);
undefined4 * __cdecl FUN_00416a38(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
int * __cdecl FUN_00416a80(int *param_1,int param_2);
undefined4 __cdecl FUN_00416b00(int param_1);
int __cdecl FUN_00416b0c(int *param_1,int param_2);
int * __cdecl FUN_00416b20(int *param_1,int param_2,undefined4 *param_3);
namespace __rwstd::locale_vector_rwstd_facet_imp_ptr { void __cdecl _dtor(int *param_1,byte param_2); }
int __cdecl FUN_00416bd0(int param_1,int param_2);
void __cdecl FUN_00416c40(int *param_1);
undefined4 __cdecl FUN_00416c58(int param_1);
int __cdecl FUN_00416c68(int param_1,uint *param_2);
undefined4 __cdecl FUN_00416de0(undefined4 param_1);
undefined4 * __cdecl FUN_00416de8(undefined4 *param_1,int param_2);
bool __cdecl FUN_00416e3c(char *param_1,char *param_2);
void __cdecl FUN_00416e54(undefined1 *param_1,undefined1 *param_2);
char * __cdecl FUN_00416e64(uint *param_1);
namespace std::string { int __cdecl string_from_cstr(int param_1,uint *param_2); }
undefined4 * __cdecl FUN_00416fa4(undefined4 *param_1,undefined4 *param_2,uint param_3);
int __cdecl FUN_00416fc4(int param_1,undefined4 param_2);
namespace std::string { int * __cdecl __getRep(undefined4 param_1,uint param_2,uint param_3); }
int __stdcall FUN_004170bc(void);
undefined4 * __cdecl FUN_00417128(undefined4 *param_1);
undefined4 * __cdecl FUN_00417168(undefined4 *param_1,int param_2);
void __cdecl FUN_0041719c(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void __cdecl FUN_004171b4(undefined4 param_1,undefined4 *param_2);
undefined4 __cdecl FUN_00417204(undefined4 param_1,undefined4 param_2);
undefined4 * __cdecl FUN_00417264(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_00417298(undefined4 param_1,undefined4 param_2,undefined1 *param_3);
void __cdecl FUN_004172b0(undefined4 param_1,undefined1 *param_2);
void __cdecl FUN_004172cc(int *param_1,int param_2);
undefined4 __stdcall FUN_004172e8(void);
int __cdecl FUN_004172ec(int param_1);
int __cdecl FUN_004172f8(int param_1,uint param_2,uint param_3,uint param_4,uint param_5);
int __cdecl FUN_00417320(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6, uint param_7);
undefined4 * __cdecl FUN_00417718(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_00417760(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_004177a8(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 __cdecl FUN_004177c8(int param_1);
undefined4 __cdecl FUN_004177e0(int param_1);
undefined4 __cdecl FUN_004177ec(int param_1);
namespace __rwstd::locale_vector_std_string { void __cdecl _dtor(int *param_1,byte param_2); }
namespace std::wstring { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_0041790c(int param_1);
undefined4 __cdecl FUN_004179a4(int param_1);
int __cdecl FUN_004179b0(int param_1);
int __cdecl FUN_004179c4(int *param_1);
int __cdecl FUN_004179d0(int *param_1);
undefined * __stdcall FUN_004179f4(void);
undefined4 * __cdecl FUN_004179fc(undefined4 *param_1);
undefined4 * __cdecl FUN_00417a34(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_00417a68(int *param_1);
undefined4 __cdecl FUN_00417a88(undefined4 param_1);
void __stdcall FUN_00417ab0(void);
void __stdcall FUN_00417ac0(void);
undefined4 __cdecl FUN_00417ac8(undefined4 param_1);
void __stdcall FUN_00417af0(void);
int __cdecl FUN_00417b00(int param_1,int param_2,undefined4 *param_3);
int __cdecl FUN_00417b24(int param_1,int param_2);
undefined4 __cdecl FUN_00417b58(undefined4 param_1);
undefined4 __cdecl FUN_00417b80(int param_1);
int __cdecl FUN_00417b94(int param_1);
int __cdecl FUN_00417c04(int param_1,undefined4 *param_2);
int __cdecl FUN_00417c40(int param_1);
int __cdecl FUN_00417ccc(int param_1,undefined4 *param_2);
int __cdecl FUN_00417d08(int param_1);
void __cdecl FUN_00417d14(int *param_1);
namespace std::locale::facet { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 * __cdecl FUN_00417d8c(undefined4 *param_1,undefined4 param_2);
undefined4 * __cdecl FUN_00417df4(undefined4 *param_1);
int * __cdecl FUN_00417e44(int *param_1);
void __cdecl FUN_00417eac(int param_1,char param_2);
undefined4 __stdcall FUN_00417ee0(void);
undefined4 * __cdecl FUN_00417ee8(undefined4 *param_1,int param_2);
namespace std::basic_filebuf_char { void __cdecl _dtor(int *param_1,byte param_2); }
int * __cdecl FUN_00418080(int *param_1);
undefined4 __stdcall FUN_004181e8(void);
bool __cdecl FUN_004181ec(undefined4 param_1,int param_2);
undefined4 __cdecl FUN_004181fc(undefined4 param_1,uint param_2);
namespace std::basic_streambuf_char { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined4 * __cdecl FUN_004182a4(undefined4 *param_1);
void __cdecl FUN_0041830c(int param_1,undefined4 param_2);
undefined4 __cdecl FUN_0041835c(int param_1);
undefined4 __cdecl FUN_004183c0(int *param_1);
void __cdecl FUN_004183d8(int param_1,uint param_2);
void __cdecl FUN_004183f0(int param_1,uint param_2);
undefined4 __cdecl FUN_00418730(int param_1);
undefined4 __cdecl FUN_0041873c(int param_1);
DWORD __cdecl FUN_00418748(undefined4 param_1,uint param_2,LONG param_3,int param_4);
void __cdecl FUN_00418764(int param_1,uint param_2);
namespace std::basic_ostream_char { void __cdecl _dtor(undefined4 *param_1,uint param_2); }
namespace std::basic_istream_char { void __cdecl _dtor(undefined4 *param_1,uint param_2); }
namespace std::basic_ios_char { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
int * __cdecl FUN_004188cc(int *param_1,int param_2,int param_3);
undefined4 __cdecl FUN_0041897c(int param_1);
int * __cdecl FUN_00418988(int *param_1,int param_2,int param_3);
undefined4 * __cdecl FUN_00418a30(undefined4 *param_1,int *param_2,char param_3);
undefined4 __cdecl FUN_00418bb4(int param_1);
bool __cdecl FUN_00418bc0(int *param_1,int *param_2);
bool __cdecl FUN_00418bd8(int param_1,uint param_2,byte param_3);
bool __cdecl FUN_00418c18(int param_1);
undefined4 __cdecl FUN_00418c2c(int param_1);
int * __cdecl FUN_00418c38(int *param_1);
undefined4 __cdecl FUN_00418c74(int *param_1);
undefined4 __cdecl FUN_00418c84(int param_1);
undefined4 __cdecl FUN_00418c90(int *param_1);
undefined1 __cdecl FUN_00418cc8(undefined1 *param_1);
undefined4 __cdecl FUN_00418cd4(int param_1);
undefined4 __cdecl FUN_00418ce0(int param_1);
void __cdecl FUN_00418cec(int *param_1);
undefined4 __cdecl FUN_00418d30(int *param_1);
void __cdecl FUN_00418d7c(int param_1,int param_2);
namespace std::basic_istream_char::sentry { void __cdecl _dtor(int param_1,byte param_2); }
void __cdecl FUN_00418da8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_00418dc4(int param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_00418ddc(int param_1,int param_2);
int __cdecl FUN_00418dec(int param_1,undefined4 *param_2,uint param_3);
undefined4 * __cdecl FUN_00418fc0(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_00419008(int param_1,int param_2);
int __cdecl FUN_004190ec(int *param_1,uint param_2,undefined4 param_3);
void __cdecl FUN_00419170(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __stdcall FUN_004191a8(void);
void __stdcall FUN_00419230(void);
undefined4 * __cdecl FUN_00419248(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined1 __cdecl FUN_0041929c(undefined1 *param_1);
namespace std::basic_filebuf_char { void __cdecl vf9(int *param_1); }
undefined4 __cdecl FUN_00419738(int *param_1);
undefined4 * __cdecl FUN_00419748(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_0041975c(int *param_1);
int __cdecl FUN_0041978c(int *param_1);
undefined4 __cdecl FUN_004197a4(int param_1);
undefined4 __cdecl FUN_004197b0(int param_1);
undefined4 __cdecl FUN_004197bc(int param_1);
undefined4 __cdecl FUN_004197c8(int param_1);
undefined4 __cdecl FUN_004197d4(int *param_1,undefined1 param_2);
int * __cdecl FUN_00419820(int *param_1,int param_2);
int * __cdecl FUN_00419864(int *param_1,int *param_2);
int * __cdecl FUN_004198b8(int *param_1);
bool __cdecl FUN_004198f4(undefined4 param_1,uint param_2,char *param_3,int param_4,int param_5);
namespace std::basic_filebuf_char { int __cdecl vf10(int param_1,int param_2); }
namespace std::basic_filebuf_char { undefined4 __cdecl vf12(int *param_1); }
int * __cdecl FUN_00419cd8(int *param_1,int param_2);
undefined4 * __cdecl FUN_00419d2c(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_00419d58(undefined4 *param_1);
bool __cdecl FUN_00419d64(int *param_1,int *param_2);
undefined4 * __cdecl FUN_00419d7c(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_00419dcc(int *param_1,int *param_2);
bool __cdecl FUN_00419e18(int *param_1,int *param_2);
namespace std::basic_filebuf_char { void __cdecl vf7(int *param_1); }
undefined4 __cdecl FUN_0041a274(int *param_1);
void __cdecl FUN_0041a2a4(undefined4 *param_1,undefined4 param_2);
char * __cdecl FUN_0041a2b4(undefined4 param_1,uint param_2,char *param_3,int param_4,int param_5);
int __cdecl FUN_0041a2dc(int param_1,char *param_2,char *param_3);
namespace std::basic_streambuf_char { void __stdcall vf9(void); }
namespace std::basic_streambuf_char { void __stdcall vf10(void); }
namespace std::basic_streambuf_char { undefined4 __stdcall vf12(void); }
namespace std::basic_streambuf_char { void __cdecl vf8(int *param_1); }
namespace std::basic_streambuf_char { void __stdcall vf7(void); }
namespace std::basic_filebuf_char { int __cdecl vf5(int param_1); }
namespace std::basic_filebuf_char { int __cdecl vf11(int *param_1,undefined1 *param_2,int param_3); }
int __cdecl FUN_0041a5b0(int *param_1);
undefined1 __cdecl FUN_0041a664(int param_1);
namespace std::basic_streambuf_char { int __cdecl vf5(int param_1); }
namespace std::basic_streambuf_char { uint __cdecl vf6(int *param_1,undefined4 *param_2,uint param_3); }
namespace std::basic_streambuf_char { int __cdecl vf11(int *param_1,undefined1 *param_2,int param_3); }
void __cdecl FUN_0041a7fc(int param_1);
int * __cdecl FUN_0041a86c(int *param_1,undefined1 *param_2,int param_3,char param_4);
undefined4 __cdecl FUN_0041aa58(int param_1,undefined4 param_2);
namespace std::basic_filebuf_char { int * __cdecl vf2(int *param_1,int param_2,int param_3); }
namespace std::basic_streambuf_char { undefined4 __cdecl vf2(undefined4 param_1); }
namespace std::string { int __cdecl append(int param_1,int param_2); }
namespace std::string { void __cdecl assign(int param_1,int param_2); }
int __cdecl FUN_0041aca0(int param_1,uint param_2,uint param_3,int param_4);
void __cdecl FUN_0041acdc(int param_1,uint param_2,int param_3);
namespace std::string { int __cdecl replace_fill(int param_1,uint param_2,uint param_3,uint param_4,undefined1 param_5); }
undefined4 * __cdecl FUN_0041b214(undefined4 *param_1,uint param_2,undefined1 param_3);
int __cdecl FUN_0041b234(int *param_1,uint param_2);
int __cdecl FUN_0041b368(int param_1,int param_2,uint param_3,uint param_4);
void __cdecl FUN_0041b484(int param_1,uint param_2);
namespace std::basic_filebuf_char { int * __cdecl vf3(int *param_1,int *param_2,int param_3,int param_4); }
undefined4 __cdecl FUN_0041bbc8(int *param_1);
undefined4 * __cdecl FUN_0041bbd8(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_0041bc08(int *param_1,int param_2);
void __cdecl FUN_0041bc18(int *param_1,int param_2);
namespace std::basic_filebuf_char { int * __cdecl vf4(int *param_1,int *param_2); }
undefined4 * __cdecl FUN_0041be10(undefined4 *param_1,int param_2);
namespace std::basic_streambuf_char { int * __cdecl vf3(int *param_1); }
namespace std::basic_streambuf_char { int * __cdecl vf4(int *param_1); }
namespace std::basic_streambuf_char { void __cdecl vf1(int param_1,int *param_2); }
undefined4 __cdecl FUN_0041bed0(int param_1,uint param_2);
undefined4 * __stdcall FUN_0041bf00(void);
undefined4 * __cdecl FUN_0041bf74(undefined4 param_1,uint *param_2,undefined4 param_3);
undefined4 * __cdecl FUN_0041bff4(undefined4 *param_1);
undefined4 * __cdecl FUN_0041c020(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __cdecl FUN_0041c098(undefined4 *param_1);
undefined4 * __cdecl FUN_0041c0e8(undefined4 *param_1);
void __cdecl FUN_0041c158(int param_1);
undefined4 * __cdecl FUN_0041c164(undefined4 *param_1,undefined4 param_2);
namespace __rwstd::facet_imp { byte * vf2(int *param_1,byte *param_2,char *param_3,ushort param_4,undefined4 param_5, char *param_6,byte *param_7,char *param_8,byte *param_9,undefined4 *param_10, undefined4 *param_11,char *param_12,ushort param_13,undefined4 param_14, char *param_15,byte *param_16,char *param_17,byte *param_18); }
namespace __rwstd::facet_imp { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace __rwstd::facet_imp { void __stdcall vf1(void); }
undefined4 * __cdecl FUN_0041c778(undefined4 *param_1,int param_2);
namespace std::ios_base::failure { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::ios_base::failure { undefined4 __cdecl vf1(int param_1); }
undefined4 __cdecl FUN_0041c970(undefined4 param_1);
namespace std::ios_base::Init { void __cdecl _dtor(int param_1,byte param_2); }
undefined4 * __cdecl FUN_0041ca64(undefined4 *param_1);
namespace std::ios_base { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __stdcall FUN_0041cc28(void);
void __stdcall FUN_0041ccf4(void);
undefined4 * __cdecl FUN_0041cdc4(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4);
void __cdecl FUN_0041cffc(int param_1,int *param_2);
void __cdecl FUN_0041d1d8(undefined4 *param_1,byte param_2);
uint __cdecl FUN_0041d26c(int param_1,uint param_2);
void __cdecl FUN_0041d2a0(int param_1,byte *param_2,byte *param_3);
uint __cdecl FUN_0041d2dc(int param_1,uint param_2);
void __cdecl FUN_0041d310(int param_1,byte *param_2,byte *param_3);
undefined1 __cdecl FUN_0041d34c(undefined4 param_1,undefined1 param_2);
int __cdecl FUN_0041d354(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
undefined1 __cdecl FUN_0041d378(undefined4 param_1,undefined1 param_2);
int __cdecl FUN_0041d380(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4, undefined4 *param_5);
undefined4 __cdecl FUN_0041d3a4(char *param_1);
undefined4 * __cdecl FUN_0041d404(undefined4 *param_1,uint *param_2,undefined4 param_3);
void __cdecl FUN_0041d5c4(undefined4 *param_1,byte param_2);
uint * __cdecl FUN_0041d624(uint *param_1);
void __stdcall FUN_0041d7a8(void);
int __cdecl FUN_0041d818(int param_1);
namespace __rwstd::ref_counted { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
int * __cdecl FUN_0041d890(int *param_1);
undefined4 * __cdecl FUN_0041d8b0(undefined4 *param_1,int param_2,undefined4 param_3);
namespace __rwstd::locale_imp { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
undefined * __cdecl FUN_0041db58(int param_1,uint param_2);
int * __cdecl FUN_0041db8c(int *param_1,uint *param_2,int param_3);
namespace __rwstd::use_Clib_locale { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
void __stdcall FUN_0041dd4c(void);
int * __cdecl FUN_0041e168(int *param_1,int *param_2);
int __cdecl FUN_0041e1dc(int param_1,int *param_2);
int * __cdecl FUN_0041e54c(int *param_1,uint *param_2,char param_3,uint param_4,undefined *param_5);
void __cdecl FUN_0041e6ec(int *param_1,int *param_2,uint *param_3);
void __cdecl FUN_0041e7ac(undefined4 *param_1,byte param_2);
undefined4 __cdecl FUN_0041e810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8);
undefined4 __cdecl FUN_0041e82c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8);
undefined4 __stdcall FUN_0041e848(void);
undefined1 __stdcall FUN_0041e854(void);
undefined4 __stdcall FUN_0041e85c(void);
uint __cdecl FUN_0041e868(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5);
undefined4 __stdcall FUN_0041e87c(void);
namespace std::runtime_error { undefined4 __cdecl vf1(int param_1); }
undefined4 __cdecl FUN_0041e908(int param_1,int *param_2);
undefined1 * __cdecl FUN_0041ea4c(undefined1 *param_1,byte *param_2);
namespace std::exception { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::bad_alloc { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::logic_error { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::length_error { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::out_of_range { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
namespace std::runtime_error { void __cdecl _dtor(undefined4 *param_1,byte param_2); }
char * __cdecl memchr(char *param_1,char param_2,int param_3);
short * __cdecl FUN_0041edbc(short *param_1,short param_2,int param_3);
undefined4 * __cdecl memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 * __cdecl FUN_0041ee00(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 * __cdecl memset(undefined4 *param_1,undefined1 param_2,uint param_3);
undefined2 * __cdecl FUN_0041eed8(undefined2 *param_1,undefined2 param_2,int param_3);
char * __cdecl FUN_0041eef0(char *param_1,char *param_2);
char * __cdecl FUN_0041ef2c(char *param_1,char param_2);
char * __cdecl strlen(uint *param_1);
char * __cdecl FUN_0041efdc(char *param_1,char *param_2,uint param_3);
uint __cdecl FUN_0041f04c(byte *param_1,byte *param_2,int param_3);
char * __cdecl thunk_memchr(char *param_1,char param_2,int param_3);
char * __cdecl thunk_memchr_41f079(char *param_1,char param_2,int param_3);
char * __cdecl thunk_FUN_0041ef2c(char *param_1,char param_2);
char * __cdecl thunk_FUN_0041ef2c_41f08d(char *param_1,char param_2);
uint * __cdecl thunk_strrchr(uint *param_1,char param_2);
char * __cdecl thunk_FUN_0041f2b0(char *param_1,char *param_2);
int __cdecl FUN_0041f0ac(byte *param_1,byte *param_2,int param_3);
int __cdecl FUN_0041f118(char *param_1,char *param_2);
undefined4 * __cdecl FUN_0041f144(uint *param_1);
int __cdecl FUN_0041f178(char *param_1,char *param_2);
undefined4 * __cdecl FUN_0041f1c0(undefined4 *param_1,uint *param_2,char *param_3);
int __cdecl FUN_0041f210(char *param_1,char *param_2,int param_3);
uint * __cdecl strrchr(uint *param_1,char param_2);
char * __cdecl FUN_0041f2b0(char *param_1,char *param_2);
char * __cdecl FUN_0041f304(char *param_1,char *param_2);
char * __cdecl FUN_0041f36c(char *param_1,char *param_2);
int __cdecl FUN_0041f3a4(short *param_1);
short * __cdecl FUN_0041f3bc(short *param_1,short *param_2);
void __InitExceptBlockLDTC(int param_1);
undefined4 __cdecl FUN_0041f46c(int param_1,int *param_2,undefined4 param_3,int param_4);
void __stdcall FUN_0041f5c3(void);
undefined4 * __cdecl FUN_0041f616(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5,int *param_6, uint *param_7,int param_8);
undefined4 __cdecl FUN_0041f87d(undefined4 *param_1,int param_2,int *param_3,int *param_4);
char * __cdecl FUN_0041f920(int param_1);
undefined4 __cdecl FUN_0041f958(int *param_1,int *param_2);
undefined4 __cdecl FUN_0041fa34(int *param_1,int *param_2,int param_3,undefined4 param_4);
int __cdecl FUN_0041fb44(int param_1,int param_2,int *param_3);
void __stdcall FUN_0041fbc0(void);
void __stdcall FUN_0041fbe8(void);
void __stdcall FUN_0041fc8c(void);
void __stdcall FUN_0041fd00(void);
void __cdecl FUN_0041fd38(undefined4 *param_1);
void __cdecl FUN_0041fd84(undefined4 *param_1);
undefined4 __stdcall FUN_0041fdac(void);
LONG __cdecl FUN_0041fdb8(PEXCEPTION_RECORD param_1,PVOID param_2,PCONTEXT param_3);
void __cdecl FUN_0041fea8(undefined4 *param_1);
void __cdecl FUN_0041fec4(undefined4 *param_1);
undefined4 __cdecl FUN_0041fed4(undefined4 param_1);
void __stdcall FUN_0041ff20(void);
void __cdecl FUN_0041ff34(undefined4 *param_1);
void __cdecl FUN_0041ff49(undefined4 *param_1);
void FUN_0041ff82(PVOID param_1,PEXCEPTION_RECORD param_2);
undefined4 __stdcall FUN_0041ff97(void);
undefined4 __cdecl FUN_0041ffa0(LPCSTR param_1,byte param_2);
undefined4 __cdecl FUN_0041ffdc(uint param_1);
uint __cdecl FUN_0042003c(uint param_1);
bool __cdecl FUN_004200c4(uint param_1);
bool __cdecl FUN_004200f4(HANDLE param_1);
DWORD __cdecl FUN_0042010c(uint param_1,LONG param_2,int param_3);
int __cdecl FUN_00420184(LPCSTR param_1,uint param_2,uint param_3);
char * __cdecl FUN_00420380(char *param_1,int param_2);
char * __cdecl FUN_004203ec(uint param_1,char *param_2,char *param_3);
int __cdecl FUN_0042051c(uint param_1,char *param_2,uint param_3);
undefined4 __cdecl FUN_00420638(undefined1 *param_1);
int __stdcall FUN_0042064c(void);
void __cdecl FUN_00420684(byte param_1,int *param_2);
undefined4 __cdecl FUN_004206a4(uint param_1,LPVOID param_2,DWORD param_3);
void __cdecl FUN_004206ec(uint param_1,char *param_2,char *param_3);
undefined4 __cdecl FUN_00420708(uint param_1,LPCVOID param_2,DWORD param_3);
void __cdecl FUN_00420750(uint param_1,char *param_2,uint param_3);
undefined4 __cdecl thunk_FUN_0041ffa0(LPCSTR param_1,byte param_2);
undefined4 __cdecl FUN_00420774(int *param_1,int param_2,int param_3,int param_4);
undefined4 __cdecl thunk_FUN_0041ffdc(uint param_1);
undefined4 __cdecl FUN_004207fc(int *param_1);
undefined4 __cdecl FUN_0042088c(int *param_1);
int __stdcall FUN_0042090c(void);
void __cdecl FUN_00420968(undefined *param_1);
void __cdecl FUN_00420978(undefined4 *param_1);
uint __cdecl FUN_0042098c(char *param_1,uint *param_2,undefined4 *param_3);
int * __cdecl FUN_00420a68(int *param_1,LPCSTR param_2,char *param_3,uint param_4);
undefined4 * __stdcall FUN_00420b14(void);
int * __cdecl fopen(LPCSTR param_1,char *param_2);
void __cdecl FUN_00420b6c(undefined4 param_1,byte *param_2);
uint __cdecl FUN_00420b90(byte *param_1,uint param_2,int *param_3);
char * __cdecl FUN_00420c6c(char *param_1,char *param_2,int *param_3);
uint __cdecl FUN_00420d9c(char *param_1,int param_2,int param_3,int *param_4);
int __cdecl FUN_00420dd0(undefined4 *param_1);
undefined4 __cdecl fseek(int *param_1,LONG param_2,int param_3);
DWORD __cdecl FUN_00420e90(undefined4 *param_1);
int __cdecl FUN_00420f10(undefined4 param_1,undefined4 param_2);
uint __cdecl FUN_00420f50(uint param_1,uint param_2,undefined4 param_3);
void __cdecl FUN_00420fb8(uint param_1);
int __cdecl FUN_00420fd4(int *param_1);
void __stdcall FUN_00421070(void);
undefined4 __cdecl FUN_004211cc(int param_1);
undefined4 __stdcall FUN_00421230(void);
void __stdcall FUN_00421244(void);
undefined4 __cdecl FUN_00421278(undefined4 *param_1);
uint __cdecl FUN_004212e4(int *param_1);
uint __cdecl FUN_004212fc(int *param_1);
uint __cdecl FUN_004213e4(byte param_1,int *param_2);
DWORD __cdecl thunk_FUN_0042010c(uint param_1,LONG param_2,int param_3);
char * __cdecl FUN_004214fc(char *param_1,char *param_2,ushort param_3);
char * __cdecl FUN_0042154c(char *param_1,ushort *param_2);
undefined4 __cdecl FUN_00421590(uint *param_1);
char * __cdecl thunk_FUN_004203ec(uint param_1,char *param_2,char *param_3);
undefined4 __cdecl setvbuf(int *param_1,int param_2,int param_3,uint param_4);
uint __cdecl FUN_00421638(undefined4 *param_1,uint param_2,int *param_3);
void __cdecl FUN_00421660(undefined1 *param_1,byte *param_2);
void __cdecl FUN_00421688(undefined1 *param_1,byte *param_2,uint *param_3);
undefined4 __cdecl FUN_004217c8(LPCSTR param_1);
void __cdecl FUN_004217e4(int param_1);
void __cdecl FUN_0042182c(undefined1 param_1,int param_2);
void __cdecl FUN_00421860(uint param_1,int param_2);
uint __cdecl FUN_00421894(undefined4 param_1,undefined4 param_2,byte *param_3,int param_4,undefined4 param_5, uint *param_6);
int __cdecl thunk_FUN_0042051c(uint param_1,char *param_2,uint param_3);
char * __cdecl FUN_00422230(char *param_1,char *param_2,uint param_3);
undefined4 __cdecl FUN_004224f4(int param_1);
undefined4 __cdecl FUN_00422548(uint param_1);
bool __cdecl FUN_00422560(uint param_1);
undefined4 __cdecl FUN_00422574(uint param_1);
undefined4 __cdecl FUN_0042258c(uint param_1);
undefined4 __cdecl FUN_004225a0(uint param_1);
undefined4 __cdecl FUN_004225b4(uint param_1);
undefined4 __cdecl FUN_004225cc(uint param_1);
undefined4 __cdecl FUN_004225e0(uint param_1);
undefined4 __cdecl FUN_004225f8(uint param_1);
undefined4 __cdecl FUN_0042260c(uint param_1);
undefined4 __cdecl FUN_00422620(uint param_1);
undefined4 __cdecl FUN_00422634(uint param_1);
void __cdecl FUN_0042264c(ushort param_1);
bool __cdecl FUN_00422664(ushort param_1);
void __cdecl FUN_00422678(ushort param_1);
void __cdecl FUN_00422690(ushort param_1);
void __cdecl FUN_004226a4(ushort param_1);
void __cdecl FUN_004226b8(ushort param_1);
void __cdecl FUN_004226d0(ushort param_1);
void __cdecl FUN_004226e4(ushort param_1);
void __cdecl FUN_004226fc(ushort param_1);
uint __cdecl FUN_00422710(ushort param_1);
void __cdecl FUN_00422724(ushort param_1);
void __cdecl FUN_00422738(ushort param_1);
ushort __cdecl FUN_00422750(uint param_1,ushort param_2);
uint __cdecl FUN_00422794(WCHAR param_1,uint param_2);
undefined4 __cdecl FUN_004227ec(ushort param_1,LPCWSTR param_2);
undefined4 __cdecl FUN_0042289c(ushort param_1,uint *param_2);
uint __cdecl FUN_00422dec(int *param_1,byte *param_2);
int __cdecl FUN_00423044(uint *param_1,ushort param_2);
void __cdecl FUN_00423200(int param_1);
undefined4 __cdecl FUN_004235ac(int *param_1,char *param_2);
undefined4 __cdecl FUN_004237cc(uint *param_1,uint *param_2);
undefined4 __cdecl FUN_0042396c(LCID param_1,LCTYPE param_2,undefined4 *param_3);
undefined4 __cdecl FUN_004239c8(LCID param_1,LCTYPE param_2,undefined2 *param_3,int param_4);
undefined4 __cdecl FUN_00423a24(LCID param_1,UINT param_2,undefined4 *param_3);
bool __cdecl FUN_00423b0c(LCID param_1,undefined2 *param_2);
bool __cdecl FUN_00423c8c(LCID param_1,undefined4 *param_2);
bool __cdecl FUN_004240e8(LCID param_1,undefined4 *param_2);
undefined4 __stdcall FUN_00424170(void);
undefined ** __stdcall FUN_0042417c(void);
byte * __cdecl FUN_00424214(byte *param_1);
uint __cdecl FUN_00424238(uint param_1);
uint __cdecl FUN_0042428c(uint param_1);
undefined4 __cdecl FUN_004242e0(byte *param_1,int param_2);
undefined4 __cdecl FUN_0042435c(LPWSTR param_1,byte *param_2,int param_3);
int __cdecl FUN_00424430(LPSTR param_1,ushort param_2);
char * __cdecl FUN_004244a4(LPWSTR param_1,uint *param_2,char *param_3);
int __cdecl FUN_004245d0(short *param_1,int param_2);
uint __cdecl FUN_0042460c(LPSTR param_1,LPCWSTR param_2,uint param_3);
undefined4 __cdecl FUN_004247b0(ushort param_1,uint *param_2);
int FUN_00424863(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5);
uint FUN_00424926(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5);
void __cdecl thunk_FUN_00424f88(uint param_1,char *param_2,uint param_3);
void __stdcall FUN_004249d0(void);
int __cdecl FUN_00424b58(char *param_1);
void __cdecl FUN_00424bc0(char *param_1);
undefined2 __stdcall FUN_00424bd0(void);
uint __cdecl FUN_00424be4(uint param_1,int param_2);
undefined4 __stdcall thunk_FUN_00424c2c(void);
undefined4 __stdcall thunk_FUN_00424c2c_424c1a(void);
undefined4 __stdcall FUN_00424c2c(void);
void __stdcall FUN_00424c5c(void);
void __cdecl FUN_00424c74(int param_1);
void __cdecl FUN_00424ca4(longlong *param_1,longdouble *param_2);
ushort __cdecl FUN_00424cc8(longdouble *param_1);
char * __cdecl FUN_00424cdc(int param_1,uint param_2,char *param_3,uint param_4,char param_5,char param_6);
void __cdecl FUN_00424d90(int param_1,undefined4 param_2,undefined4 param_3,ushort param_4);
char * __cdecl FUN_00424ea8(uint param_1,char *param_2,uint param_3,char param_4,char param_5);
void __cdecl FUN_00424f1c(uint param_1,char *param_2);
void __cdecl FUN_00424f38(uint param_1,char *param_2,uint param_3);
void __cdecl FUN_00424f68(uint param_1,char *param_2,uint param_3);
void __cdecl FUN_00424f88(uint param_1,char *param_2,uint param_3);
undefined4 __cdecl FUN_00424fb0(int *param_1);
undefined4 __cdecl FUN_00424fdc(int *param_1);
void __cdecl FUN_0042500c(undefined *param_1,undefined *param_2);
undefined4 __cdecl FUN_00425024(undefined4 *param_1);
undefined4 __cdecl FUN_0042504c(uint *param_1,uint param_2);
uint __cdecl FUN_0042507c(char param_1,uint param_2,uint param_3);
byte * __cdecl FUN_004250c0(longdouble *param_1,uint param_2,byte *param_3,byte param_4,char param_5,int param_6);
int __cdecl FUN_00425348(int param_1,int param_2);
uint __cdecl FUN_00425378(short param_1,uint param_2,uint param_3);
void __cdecl FUN_004253c4(longdouble *param_1,int param_2,ushort *param_3,ushort param_4,short param_5, int param_6);
int __cdecl FUN_0042567c(int param_1,int param_2);
void __cdecl FUN_004256ac(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5, int *param_6,undefined4 *param_7);
void __cdecl FUN_00425af8(float *param_1,double *param_2,uint param_3);
void __cdecl FUN_00425b90(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5, int *param_6,undefined4 *param_7);
void __cdecl FUN_00425fd8(float *param_1,double *param_2,uint param_3);
int __cdecl FUN_00426070(longdouble *param_1,uint param_2,uint *param_3,undefined4 *param_4,int param_5);
int __cdecl FUN_00426344(longdouble *param_1,int param_2,uint *param_3,undefined2 *param_4,int param_5);
undefined4 __cdecl FUN_00426638(UINT param_1);
undefined4 __cdecl FUN_00426774(uint param_1);
byte * __cdecl FUN_00426790(byte *param_1,uint param_2);
void __cdecl FUN_004267e8(uint *param_1,int param_2);
void __cdecl FUN_00426830(undefined4 param_1,undefined4 param_2,uint param_3);
undefined * __stdcall FUN_00426890(void);
void __cdecl FUN_004268e0(LPCSTR param_1,uint *param_2);
undefined4 __stdcall FUN_00426948(undefined4 param_1,undefined4 *param_2);
undefined4 __stdcall FUN_0042695c(void);
void __cdecl FUN_004269a0(uint *param_1);
void __cdecl FUN_00426abc(uint *param_1);
void __cdecl FUN_00426acc(uint *param_1);
void __stdcall FUN_00426b70(void);
void __stdcall FUN_00426b84(void);
void __stdcall FUN_00426b94(void);
void __cdecl FUN_00426b98(int param_1,int param_2,UINT param_3);
void __cdecl FUN_00426bec(UINT param_1);
void __cdecl FUN_00426c04(UINT param_1);
void __cdecl FUN_00426c3c(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_00426c58(undefined4 param_1,undefined *param_2);
void __cdecl FUN_00426c6c(undefined4 param_1,undefined *param_2);
void __cdecl FUN_00426c80(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4);
void __cdecl FUN_00426d64(uint *param_1,int param_2);
undefined4 __cdecl FUN_00426e14(undefined4 param_1,uint *param_2,undefined *param_3);
void __cdecl FUN_00426f88(int *param_1,int *param_2);
undefined4 __cdecl FUN_00426ffc(undefined4 param_1,short *param_2,undefined *param_3);
void __cdecl FUN_004271ac(int *param_1,int *param_2);
undefined4 __stdcall FUN_004272a0(void);
int __cdecl FUN_0042740c(int param_1);
undefined4 __cdecl FUN_0042742c(int *param_1,undefined4 param_2,int param_3);
undefined4 __stdcall FUN_0042760c(int param_1);
undefined4 __cdecl FUN_00427634(int param_1,undefined4 param_2);
undefined4 __cdecl FUN_00427694(int param_1);
void __stdcall FUN_00427704(UINT param_1);
undefined4 __stdcall FUN_00427714(void);
undefined4 __stdcall FUN_00427718(void);
void __cdecl FUN_0042771c(int *param_1,int param_2);
void __stdcall FUN_004277f0(void);
void __cdecl FUN_0042785c(int param_1);
WORD __stdcall FUN_004279e0(void);
void __stdcall FUN_00427a08(DWORD param_1);
void __stdcall FUN_00427a18(DWORD param_1);
void __stdcall FUN_00427a28(DWORD param_1,LPVOID param_2);
void __stdcall FUN_00427a3c(void);
void __stdcall FUN_00427a44(void);
void FUN_00427a7b(undefined *UNRECOVERED_JUMPTABLE);
int __cdecl FUN_00427a82(uint param_1);
void __cdecl FUN_00427acc(int param_1);
undefined4 __cdecl FUN_00427af9(int *param_1,undefined4 param_2,int *param_3,byte param_4);
void __cdecl FUN_00427bbf(undefined4 param_1,undefined4 param_2,undefined *param_3,uint param_4);
int __cdecl FUN_00427ccd(char *param_1);
void __cdecl FUN_00427ce5(undefined4 param_1,int param_2);
void __cdecl FUN_00427d02(undefined4 param_1,int param_2,byte param_3,undefined *param_4,uint param_5,int param_6 );
void __cdecl FUN_00427dd2(undefined4 param_1,undefined *param_2,uint param_3);
void __cdecl FUN_00427e50(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4,uint param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9);
void __cdecl FUN_004280a0(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4,uint param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8);
void __cdecl FUN_004280d5(undefined4 param_1,undefined4 param_2);
void __cdecl FUN_00428140(PVOID param_1,PEXCEPTION_RECORD param_2);
void __cdecl FUN_0042817f(undefined4 param_1,int param_2,undefined *param_3,uint param_4);
void __cdecl FUN_004281f4(int param_1);
void __stdcall FUN_0042827c(void);
void __cdecl FUN_0042836d(int param_1,int param_2,int param_3,int *param_4,int param_5);
void __cdecl FUN_00428641(int param_1);
void __cdecl FUN_004287ac(int param_1);
void __cdecl FUN_004287bf(undefined4 *param_1);
int * __cdecl FUN_004287db(int param_1,int param_2);
undefined4 __cdecl FUN_00428820(int *param_1,undefined4 *param_2);
void __cdecl FUN_00428b7d(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5);
void __cdecl FUN_00428c74(int param_1,uint param_2,int *param_3,int *param_4);
void __cdecl FUN_00428cbf(int param_1,int param_2,uint param_3,uint param_4,int param_5,undefined4 param_6, int param_7);
void __cdecl FUN_00428f6f(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5);
int __cdecl FUN_00429093(int param_1,int *param_2,int param_3);
undefined4 __cdecl FUN_0042911a(int *param_1,int param_2,int param_3,int param_4);
uint __cdecl FUN_0042959e(int param_1);
LSTATUS __stdcall import_RegCloseKey(HKEY hKey);
LSTATUS __stdcall import_RegCreateKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD Reserved,LPSTR lpClass,DWORD dwOptions, REGSAM samDesired,LPSECURITY_ATTRIBUTES lpSecurityAttributes,PHKEY phkResult, LPDWORD lpdwDisposition);
LSTATUS __stdcall import_RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult);
LSTATUS __stdcall import_RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData, LPDWORD lpcbData);
BOOL __stdcall import_CloseHandle(HANDLE hObject);
HANDLE __stdcall import_CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes,HANDLE hTemplateFile);
BOOL __stdcall import_DeleteFileA(LPCSTR lpFileName);
void __stdcall import_ExitProcess(UINT uExitCode);
BOOL __stdcall import_FileTimeToLocalFileTime(FILETIME *lpFileTime,LPFILETIME lpLocalFileTime);
BOOL __stdcall import_FileTimeToSystemTime(FILETIME *lpFileTime,LPSYSTEMTIME lpSystemTime);
BOOL __stdcall import_FindClose(HANDLE hFindFile);
HANDLE __stdcall import_FindFirstFileA(LPCSTR lpFileName,LPWIN32_FIND_DATAA lpFindFileData);
UINT __stdcall import_GetACP(void);
BOOL __stdcall import_GetCPInfo(UINT CodePage,LPCPINFO lpCPInfo);
LPSTR __stdcall import_GetCommandLineA(void);
DWORD __stdcall import_GetCurrentThreadId(void);
int __stdcall import_GetDateFormatA(LCID Locale,DWORD dwFlags,SYSTEMTIME *lpDate,LPCSTR lpFormat,LPSTR lpDateStr, int cchDate);
LPCH __stdcall import_GetEnvironmentStrings(void);
DWORD __stdcall import_GetFileAttributesA(LPCSTR lpFileName);
BOOL __stdcall import_GetFileTime(HANDLE hFile,LPFILETIME lpCreationTime,LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime);
DWORD __stdcall import_GetFileType(HANDLE hFile);
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
int __stdcall import_GetTimeFormatA(LCID Locale,DWORD dwFlags,SYSTEMTIME *lpTime,LPCSTR lpFormat,LPSTR lpTimeStr, int cchTime);
LCID __stdcall import_GetUserDefaultLCID(void);
DWORD __stdcall import_GetVersion(void);
void __stdcall import_GlobalMemoryStatus(LPMEMORYSTATUS lpBuffer);
BOOL __stdcall import_IsValidLocale(LCID Locale,DWORD dwFlags);
int __stdcall import_LCMapStringA(LCID Locale,DWORD dwMapFlags,LPCSTR lpSrcStr,int cchSrc,LPSTR lpDestStr,int cchDest);
int __stdcall import_MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte, LPWSTR lpWideCharStr,int cchWideChar);
void __stdcall import_RaiseException(DWORD dwExceptionCode,DWORD dwExceptionFlags,DWORD nNumberOfArguments, ULONG_PTR *lpArguments);
BOOL __stdcall import_ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped);
void __stdcall import_RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue);
BOOL __stdcall import_SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine,BOOL Add);
DWORD __stdcall import_SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod);
UINT __stdcall import_SetHandleCount(UINT uNumber);
void __stdcall import_SetLastError(DWORD dwErrCode);
BOOL __stdcall import_SetThreadLocale(LCID Locale);
BOOL __stdcall import_TlsFree(DWORD dwTlsIndex);
LPVOID __stdcall import_TlsGetValue(DWORD dwTlsIndex);
BOOL __stdcall import_TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue);
LONG __stdcall import_UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo);
LPVOID __stdcall import_VirtualAlloc(LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect);
BOOL __stdcall import_VirtualFree(LPVOID lpAddress,SIZE_T dwSize,DWORD dwFreeType);
int __stdcall import_WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar, LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar);
BOOL __stdcall import_WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);
short __stdcall import_GetFileTitleA(LPCSTR param_1,LPSTR Buf,WORD cchSize);
int __stdcall import_SHGetFolderPathA(...);
BOOL __stdcall import_EnumThreadWindows(DWORD dwThreadId,WNDENUMPROC lpfn,LPARAM lParam);
int __stdcall import_MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType);
int __cdecl import_wsprintfA(LPSTR param_1,LPCSTR param_2,...);

// ---- globals (342) ----
extern undefined DAT_00404c94;   // 0x00404c94
extern undefined LAB_00404cec;   // 0x00404cec
extern undefined DAT_00405ef4;   // 0x00405ef4
extern undefined LAB_00405f50;   // 0x00405f50
extern undefined DAT_0040604c;   // 0x0040604c
extern undefined LAB_004060a8;   // 0x004060a8
extern undefined DAT_004079c4;   // 0x004079c4
extern undefined DAT_0041634c;   // 0x0041634c
extern undefined DAT_00418670;   // 0x00418670
extern undefined LAB_004186d8;   // 0x004186d8
extern undefined DAT_0041e018;   // 0x0041e018
extern undefined LAB_0041e07c;   // 0x0041e07c
extern undefined LAB_0041f443;   // 0x0041f443
extern undefined LAB_0041fc38;   // 0x0041fc38
extern undefined LAB_004221d8;   // 0x004221d8
extern undefined LAB_00422208;   // 0x00422208
extern undefined * PTR_DAT_0042a114;   // 0x0042a114
extern int _tls_index;   // 0x0042a16b
extern int _DAT_0042a16f;   // 0x0042a16f
extern HMODULE _DAT_0042a173;   // 0x0042a173
extern undefined DAT_0042ab76;   // 0x0042ab76
extern undefined DAT_0042ab78;   // 0x0042ab78
extern undefined DAT_0042ab7c;   // 0x0042ab7c
extern undefined DAT_0042ab80;   // 0x0042ab80
extern undefined DAT_0042ab84;   // 0x0042ab84
extern undefined DAT_0042ab88;   // 0x0042ab88
extern undefined DAT_0042ab8c;   // 0x0042ab8c
extern undefined DAT_0042ab90;   // 0x0042ab90
extern undefined DAT_0042ab94;   // 0x0042ab94
extern undefined DAT_0042ab98;   // 0x0042ab98
extern undefined DAT_0042ab9c;   // 0x0042ab9c
extern undefined DAT_0042aba0;   // 0x0042aba0
namespace std::exception { extern undefined * vftable; }   // 0x0042b388  PTR_FUN_0042b388
namespace std::bad_alloc { extern undefined * vftable; }   // 0x0042b39c  PTR_FUN_0042b39c
extern undefined DAT_0042b445;   // 0x0042b445
extern undefined4 _DAT_0042b5e4;   // 0x0042b5e4
extern undefined DAT_0042b5e4;   // 0x0042b5e4
extern int DAT_0042b5e8;   // 0x0042b5e8
extern int DAT_0042b5ec;   // 0x0042b5ec
extern undefined4 DAT_0042b5fc;   // 0x0042b5fc
extern char DAT_0042b604;   // 0x0042b604
extern undefined4 _DAT_0042b608;   // 0x0042b608
extern undefined4 _DAT_0042b60c;   // 0x0042b60c
extern char DAT_0042b610;   // 0x0042b610
namespace TSDictionaryList::Dictionary { extern undefined * vftable; }   // 0x0042bbb8  PTR_FUN_0042bbb8
namespace std::out_of_range { extern undefined * vftable; }   // 0x0042bbf0  PTR_FUN_0042bbf0
namespace std::logic_error { extern undefined * vftable; }   // 0x0042bc04  PTR_FUN_0042bc04
namespace std::length_error { extern pointer vftable; }   // 0x0042bc18  PTR_FUN_0042bc18
extern undefined DAT_0042bc20;   // 0x0042bc20
extern undefined * PTR_DAT_0042bc44;   // 0x0042bc44
extern undefined DAT_0042be01;   // 0x0042be01
extern undefined4 * DAT_0042c484;   // 0x0042c484
extern undefined4 * DAT_0042c488;   // 0x0042c488
extern undefined * PTR_s_ptr_0042c4bc;   // 0x0042c4bc
extern undefined4 DAT_0042c4c0;   // 0x0042c4c0
extern undefined1 DAT_0042c4c4;   // 0x0042c4c4
extern int DAT_0042c930;   // 0x0042c930
extern undefined * PTR_FUN_0042c990;   // 0x0042c990
extern undefined DAT_0042ce84;   // 0x0042ce84
extern pointer PTR_s_OutputLower_0042d554;   // 0x0042d554
extern pointer PTR_s_1913_Webster_s_Unabridged_0042d698;   // 0x0042d698
extern undefined * PTR_DAT_0042def8;   // 0x0042def8
extern undefined DAT_0042defe;   // 0x0042defe
extern undefined DAT_0042e040;   // 0x0042e040
extern undefined DAT_0042e700;   // 0x0042e700
extern undefined * PTR_s_TEAWIN_0042e708;   // 0x0042e708
extern undefined DAT_0042e763;   // 0x0042e763
extern undefined DAT_0042e764;   // 0x0042e764
extern int DAT_0042e9b4;   // 0x0042e9b4
extern undefined4 _DAT_0042ea58;   // 0x0042ea58
extern undefined4 _DAT_0042ea5c;   // 0x0042ea5c
extern undefined * PTR_FUN_0042ea60;   // 0x0042ea60
extern undefined * PTR_FUN_0042ea64;   // 0x0042ea64
extern undefined * PTR_FUN_0042ea68;   // 0x0042ea68
extern undefined * PTR_LAB_0042ea6c;   // 0x0042ea6c
extern uint DAT_0042ea70;   // 0x0042ea70
extern int DAT_0042ea74;   // 0x0042ea74
extern int DAT_0042ea78;   // 0x0042ea78
extern uint DAT_0042ea80;   // 0x0042ea80
extern uint DAT_0042ea84;   // 0x0042ea84
extern uint DAT_0042ea88;   // 0x0042ea88
extern uint * DAT_0042ea8c;   // 0x0042ea8c
extern uint * _DAT_0042ea90;   // 0x0042ea90
extern int DAT_0042ea94;   // 0x0042ea94
extern undefined4 DAT_0042ea98;   // 0x0042ea98
extern undefined * PTR_DAT_0042ea9c;   // 0x0042ea9c
extern undefined * PTR_DAT_0042eaa4;   // 0x0042eaa4
extern uint DAT_0042eaa8;   // 0x0042eaa8
extern uint DAT_0042eaac;   // 0x0042eaac
extern undefined DAT_0042edd9;   // 0x0042edd9
extern int DAT_0042fab4;   // 0x0042fab4
extern undefined1 DAT_0042fac0;   // 0x0042fac0
extern int DAT_0042fce8;   // 0x0042fce8
extern undefined DAT_0042fd34;   // 0x0042fd34
namespace __rwstd::ref_counted { extern pointer vftable; }   // 0x00430a68  PTR_FUN_00430a68
namespace __rwstd::facet_imp { extern undefined * vftable; }   // 0x00430a78  PTR_FUN_00430a78
extern undefined * PTR_FUN_00430a8c;   // 0x00430a8c
namespace std::ios_base::failure { extern undefined * vftable; }   // 0x00430abc  PTR_FUN_00430abc
namespace std::locale::facet { extern undefined * vftable; }   // 0x00430ad0  PTR_FUN_00430ad0
namespace std::basic_ios_char { extern pointer vftable; }   // 0x00430ae4  PTR_FUN_00430ae4
namespace std::basic_ostream_char { extern pointer vftable; }   // 0x00430af4  PTR_FUN_00430af4
extern pointer PTR_LAB_00430b00;   // 0x00430b00
namespace std::basic_istream_char { extern pointer vftable; }   // 0x00430b10  PTR_FUN_00430b10
extern pointer PTR_LAB_00430b1c;   // 0x00430b1c
namespace std::basic_streambuf_char { extern undefined * vftable; }   // 0x00430b2c  PTR_FUN_00430b2c
namespace std::basic_filebuf_char { extern undefined * vftable; }   // 0x00430b6c  PTR_FUN_00430b6c
extern undefined * PTR_s_iostream_object_has_failbit_set_00430ba8;   // 0x00430ba8
extern undefined * PTR_s_iostream_object_has_badbit_set_00430bac;   // 0x00430bac
extern undefined * PTR_s_iostream_object_has_eofbit_set_00430bb0;   // 0x00430bb0
namespace std::ios_base { extern pointer vftable; }   // 0x00430d2c  PTR_FUN_00430d2c
extern undefined DAT_00430db0;   // 0x00430db0
extern undefined DAT_00430db8;   // 0x00430db8
extern undefined * PTR_FUN_00431264;   // 0x00431264
extern undefined1 DAT_0043128c;   // 0x0043128c
extern undefined * PTR_FUN_00431360;   // 0x00431360
extern undefined * PTR_s_locale_initid_called_twice_0043138c;   // 0x0043138c
extern undefined * PTR_s_Error_constructing_locale_name_00431398;   // 0x00431398
extern char DAT_00431410;   // 0x00431410
extern undefined DAT_00431529;   // 0x00431529
extern undefined DAT_0043152a;   // 0x0043152a
extern undefined DAT_0043152b;   // 0x0043152b
extern undefined DAT_00431539;   // 0x00431539
extern undefined DAT_0043187c;   // 0x0043187c
namespace std::runtime_error { extern undefined * vftable; }   // 0x004318d0  PTR_FUN_004318d0
namespace __rwstd::locale_imp { extern pointer vftable; }   // 0x004318e4  PTR_FUN_004318e4
extern undefined * PTR_s_no_named_exception_thrown_00431934;   // 0x00431934
extern undefined * PTR_s_bad_alloc_exception_thrown_0043193c;   // 0x0043193c
extern undefined * PTR_s_invalid_string_size_parameter_in_00431a78;   // 0x00431a78
extern undefined * PTR_s_position_beyond_end_of_string_in_00431a7c;   // 0x00431a7c
extern undefined * PTR_s_resulting_length_is_invalid_in_f_00431a80;   // 0x00431a80
extern undefined * PTR_s_string_index_out_of_range_in_fun_00431a84;   // 0x00431a84
extern undefined * PTR_s_unexpected_NULL_pointer_in_funct_00431a88;   // 0x00431a88
extern undefined DAT_00431c3f;   // 0x00431c3f
extern undefined DAT_00431c4e;   // 0x00431c4e
extern undefined DAT_00431ea9;   // 0x00431ea9
extern undefined * DAT_00431f38;   // 0x00431f38
extern undefined * DAT_00431f3c;   // 0x00431f3c
extern undefined DAT_00431f74;   // 0x00431f74
extern int _DAT_00431f88;   // 0x00431f88
extern int DAT_00432058;   // 0x00432058
extern undefined * PTR_FUN_0043206c;   // 0x0043206c
extern uint _DAT_00432070;   // 0x00432070
extern undefined4 _DAT_00432074;   // 0x00432074
extern undefined4 DAT_00432078;   // 0x00432078
extern undefined1 * DAT_00432090;   // 0x00432090
extern int DAT_00432098;   // 0x00432098
extern undefined DAT_004320a8;   // 0x004320a8
extern uint DAT_00432528;   // 0x00432528
extern undefined4 DAT_0043252c;   // 0x0043252c
extern undefined * PTR_DAT_004325f8;   // 0x004325f8
extern undefined DAT_004325fc;   // 0x004325fc
extern undefined DAT_00432728;   // 0x00432728
extern undefined DAT_0043272c;   // 0x0043272c
extern int DAT_004327f8;   // 0x004327f8
extern undefined1 DAT_00432bb8;   // 0x00432bb8
extern undefined DAT_00432bc6;   // 0x00432bc6
extern undefined DAT_00432c2a;   // 0x00432c2a
extern pointer PTR_DAT_00432e2c;   // 0x00432e2c
extern undefined * PTR_DAT_00432e30;   // 0x00432e30
extern undefined * PTR_DAT_00432e34;   // 0x00432e34
extern undefined * PTR_DAT_00432e38;   // 0x00432e38
extern undefined * PTR_DAT_00432e3c;   // 0x00432e3c
extern undefined * PTR_DAT_00432e40;   // 0x00432e40
extern undefined * PTR_DAT_00432e44;   // 0x00432e44
extern undefined * PTR_DAT_00432e48;   // 0x00432e48
extern undefined * PTR_DAT_00432e4c;   // 0x00432e4c
extern undefined * PTR_DAT_00432e50;   // 0x00432e50
extern undefined1 DAT_00432e54;   // 0x00432e54
extern undefined1 DAT_00432e55;   // 0x00432e55
extern undefined1 DAT_00432e56;   // 0x00432e56
extern undefined1 DAT_00432e57;   // 0x00432e57
extern undefined1 DAT_00432e58;   // 0x00432e58
extern undefined1 DAT_00432e59;   // 0x00432e59
extern undefined1 DAT_00432e5a;   // 0x00432e5a
extern undefined1 DAT_00432e5b;   // 0x00432e5b
extern undefined DAT_00432e68;   // 0x00432e68
extern undefined DAT_00432e6b;   // 0x00432e6b
extern undefined DAT_00432e70;   // 0x00432e70
extern undefined DAT_00432e73;   // 0x00432e73
extern undefined DAT_00432e78;   // 0x00432e78
extern undefined DAT_00432e7b;   // 0x00432e7b
extern undefined DAT_00432e80;   // 0x00432e80
extern undefined DAT_00432e83;   // 0x00432e83
extern undefined DAT_00432e88;   // 0x00432e88
extern undefined DAT_00432e8b;   // 0x00432e8b
extern undefined DAT_00432e8e;   // 0x00432e8e
extern undefined DAT_00432e91;   // 0x00432e91
extern undefined DAT_00432e96;   // 0x00432e96
extern undefined DAT_00432e99;   // 0x00432e99
extern undefined DAT_00432e9c;   // 0x00432e9c
extern undefined DAT_00432e9f;   // 0x00432e9f
extern undefined DAT_00432ea4;   // 0x00432ea4
extern undefined DAT_00432ea7;   // 0x00432ea7
extern undefined DAT_00432eaa;   // 0x00432eaa
extern undefined DAT_00432ead;   // 0x00432ead
extern undefined DAT_00432eb2;   // 0x00432eb2
extern undefined DAT_00432eb8;   // 0x00432eb8
extern undefined DAT_00432fb8;   // 0x00432fb8
extern UINT _DAT_004330b8;   // 0x004330b8
extern undefined4 DAT_004330c0;   // 0x004330c0
extern undefined4 DAT_00433100;   // 0x00433100
extern undefined4 DAT_0043313d;   // 0x0043313d
extern undefined4 DAT_00433147;   // 0x00433147
extern undefined4 DAT_00433151;   // 0x00433151
extern undefined4 DAT_0043315b;   // 0x0043315b
extern undefined1 DAT_0043315f;   // 0x0043315f
extern undefined DAT_004331c7;   // 0x004331c7
extern undefined DAT_004331c9;   // 0x004331c9
extern undefined DAT_004331cb;   // 0x004331cb
extern undefined DAT_004331cd;   // 0x004331cd
extern undefined1 DAT_004331d0;   // 0x004331d0
extern pointer PTR_DAT_00433204;   // 0x00433204
extern undefined * PTR_DAT_0043321c;   // 0x0043321c
extern undefined4 DAT_004332e0;   // 0x004332e0
extern undefined * PTR_DAT_0043330c;   // 0x0043330c
extern pointer PTR_DAT_00433430;   // 0x00433430
extern undefined * _DAT_00433558;   // 0x00433558
extern undefined * PTR_FUN_0043355c;   // 0x0043355c
extern undefined4 DAT_00433628;   // 0x00433628
extern undefined * PTR_FUN_004336b0;   // 0x004336b0
extern undefined * PTR_FUN_004336b4;   // 0x004336b4
extern undefined1 DAT_004336b8;   // 0x004336b8
extern undefined1 DAT_004336bd;   // 0x004336bd
extern undefined1 DAT_004336c2;   // 0x004336c2
extern undefined1 DAT_004336c7;   // 0x004336c7
extern undefined4 DAT_004336f4;   // 0x004336f4
extern undefined4 DAT_004336f8;   // 0x004336f8
extern undefined2 DAT_004336fc;   // 0x004336fc
extern undefined4 DAT_004336fe;   // 0x004336fe
extern undefined4 DAT_00433702;   // 0x00433702
extern undefined2 DAT_00433706;   // 0x00433706
extern undefined4 DAT_00433708;   // 0x00433708
extern undefined4 DAT_0043370c;   // 0x0043370c
extern undefined2 DAT_00433710;   // 0x00433710
extern undefined4 DAT_00433712;   // 0x00433712
extern undefined4 DAT_00433716;   // 0x00433716
extern undefined2 DAT_0043371a;   // 0x0043371a
extern undefined4 DAT_0043371c;   // 0x0043371c
extern undefined4 DAT_00433720;   // 0x00433720
extern undefined2 DAT_00433724;   // 0x00433724
extern undefined4 DAT_00433726;   // 0x00433726
extern undefined4 DAT_0043372a;   // 0x0043372a
extern undefined2 DAT_0043372e;   // 0x0043372e
extern undefined4 DAT_00433730;   // 0x00433730
extern undefined4 DAT_00433734;   // 0x00433734
extern undefined2 DAT_00433738;   // 0x00433738
extern undefined4 DAT_0043373a;   // 0x0043373a
extern undefined4 DAT_0043373e;   // 0x0043373e
extern undefined2 DAT_00433742;   // 0x00433742
extern byte DAT_00433744;   // 0x00433744
extern byte DAT_00433745;   // 0x00433745
extern byte DAT_00433746;   // 0x00433746
extern byte DAT_00433747;   // 0x00433747
extern undefined4 _DAT_004337d4;   // 0x004337d4
extern undefined * DAT_004337d8;   // 0x004337d8
extern LPCSTR DAT_004337dc;   // 0x004337dc
extern undefined DAT_004337e0;   // 0x004337e0
extern undefined DAT_004337e3;   // 0x004337e3
extern undefined * DAT_00433830;   // 0x00433830
extern undefined * PTR_FUN_00433834;   // 0x00433834
extern undefined * PTR_FUN_00433838;   // 0x00433838
extern undefined * PTR_FUN_0043383c;   // 0x0043383c
extern undefined * PTR_FUN_00433840;   // 0x00433840
extern undefined * PTR_LAB_00433844;   // 0x00433844
extern undefined * PTR_FUN_00433848;   // 0x00433848
extern undefined * PTR_LAB_0043384c;   // 0x0043384c
extern int DAT_004338a4;   // 0x004338a4
extern undefined * PTR_FUN_004338f0;   // 0x004338f0
extern undefined * PTR_FUN_004338f4;   // 0x004338f4
extern char DAT_0043396c;   // 0x0043396c
extern undefined DAT_00433970;   // 0x00433970
extern undefined4 DAT_00433998;   // 0x00433998
extern undefined DAT_004339c0;   // 0x004339c0
extern int DAT_004339cc;   // 0x004339cc
extern int DAT_004339d0;   // 0x004339d0
extern undefined DAT_00433bec;   // 0x00433bec
extern undefined DAT_0043424d;   // 0x0043424d
extern int DAT_00434268;   // 0x00434268
extern int DAT_00434278;   // 0x00434278
extern undefined4 DAT_00434280;   // 0x00434280
extern int DAT_00434680;   // 0x00434680
extern undefined1 DAT_00434684;   // 0x00434684
extern undefined1 DAT_00434688;   // 0x00434688
extern undefined DAT_00434692;   // 0x00434692
extern undefined4 _DAT_00434694;   // 0x00434694
extern undefined DAT_00434694;   // 0x00434694
extern uint DAT_00434698;   // 0x00434698
extern undefined * DAT_0043469c;   // 0x0043469c
extern undefined * * _DAT_004346a0;   // 0x004346a0
extern undefined DAT_004346a0;   // 0x004346a0
extern undefined DAT_004346bc;   // 0x004346bc
extern undefined DAT_00434700;   // 0x00434700
extern undefined DAT_00434744;   // 0x00434744
extern int DAT_00434788;   // 0x00434788
extern undefined DAT_004347cc;   // 0x004347cc
extern int DAT_0043480c;   // 0x0043480c
extern int DAT_0043484c;   // 0x0043484c
extern undefined DAT_0043488c;   // 0x0043488c
extern int DAT_00434894;   // 0x00434894
extern undefined4 * DAT_00434898;   // 0x00434898
extern int DAT_0043489c;   // 0x0043489c
extern undefined4 * DAT_004348a0;   // 0x004348a0
extern undefined4 * DAT_004348a4;   // 0x004348a4
extern int DAT_004348a8;   // 0x004348a8
extern char * DAT_004348ac;   // 0x004348ac
extern undefined4 DAT_004348b8;   // 0x004348b8
extern int * DAT_00434cc4;   // 0x00434cc4
extern undefined * DAT_00434cc8;   // 0x00434cc8
extern undefined * DAT_00434ccc;   // 0x00434ccc
extern HANDLE _DAT_00434d98;   // 0x00434d98
extern undefined DAT_00434d98;   // 0x00434d98
extern HANDLE DAT_00434d9c;   // 0x00434d9c
extern HANDLE _DAT_00434da0;   // 0x00434da0
extern int _DAT_00434e60;   // 0x00434e60
extern byte DAT_00434e64;   // 0x00434e64
extern undefined DAT_00434e6a;   // 0x00434e6a
extern undefined1 DAT_00434e78;   // 0x00434e78
extern undefined1 DAT_00434e79;   // 0x00434e79
extern undefined1 DAT_00434e7a;   // 0x00434e7a
extern UINT _DAT_00434f7c;   // 0x00434f7c
extern undefined DAT_00434f80;   // 0x00434f80
extern undefined DAT_00435080;   // 0x00435080
extern int DAT_0043509c;   // 0x0043509c
extern int DAT_004350a0;   // 0x004350a0
extern int DAT_004350a4;   // 0x004350a4
extern undefined1 * DAT_004350ac;   // 0x004350ac
extern undefined2 * DAT_004350b0;   // 0x004350b0
extern undefined4 * DAT_004350b4;   // 0x004350b4
extern uint * DAT_004350b8;   // 0x004350b8
extern int _DAT_004350bc;   // 0x004350bc
extern char * DAT_004350d0;   // 0x004350d0
extern LPCH DAT_004350d4;   // 0x004350d4
extern int DAT_004350d8;   // 0x004350d8
extern undefined DAT_004350dc;   // 0x004350dc
extern undefined1 * DAT_004350e4;   // 0x004350e4
extern undefined4 _DAT_004350f8;   // 0x004350f8
extern undefined DAT_004350f8;   // 0x004350f8
extern int _DAT_004350fc;   // 0x004350fc
extern undefined4 DAT_00435104;   // 0x00435104
extern int * DAT_00435108;   // 0x00435108
extern undefined4 _DAT_0043510c;   // 0x0043510c
extern undefined4 _DAT_00435110;   // 0x00435110

} // namespace tea
