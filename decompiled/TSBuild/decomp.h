// TSBuild.exe — declarations for the decompiled program. Generated; do not edit.
// One prototype per function (as Ghidra has it after its signatures were committed) and one
// declaration per global the pseudocode names. Class names appear as namespaces: the binary has no
// type information from which real class definitions could be rebuilt.
#pragma once
#include "../ghidra.h"

namespace tea {

// ---- functions (3032) ----
void __stdcall entry(void);
void __stdcall __startup(void);
void __cdecl __GetExceptDLLinfo(undefined4 *info);
undefined4 __stdcall __getTlsBlock(void);
void __stdcall InitStaticStrings(void);
void __stdcall DestroyStaticStrings(void);
namespace DMDialog { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace DMDialog { int * __cdecl DMDialog(int *self,int vbasesBuilt,undefined4 param_3,uint *param_4); }
namespace DMDialog { bool __cdecl vf15(int self); }
namespace DMDialog { void __cdecl vf9(int *self,INT_PTR result); }
namespace DMDialog { void __cdecl vf11(int *self); }
namespace DMDialog { void __cdecl EvClose(int *self); }
namespace DMDialog { bool __cdecl PumpMessages(int *self,int unused); }
namespace DMDialog { undefined4 __cdecl vf16(int *self,undefined4 *param_2,int param_3,uint param_4,int param_5); }
namespace DMDialog { void __cdecl vf17(int self); }
namespace DMDialog { void __cdecl vf18(int self,byte *format); }
namespace DMDialog { void __cdecl vf19(int self); }
namespace DMDialog { int __cdecl Cmd101(int *self); }
namespace DMDialog { void __cdecl Cmd106(int *self); }
namespace DMDialog { void __cdecl Cmd114(undefined4 *self); }
namespace DMDialog { void __cdecl GetControlText(undefined4 self,int *edit,int out); }
namespace DMDialog { void __cdecl UpdateControls(int self); }
namespace DMDialog { void __cdecl Cmd112(int *self); }
namespace DMDialog { void __cdecl Cmd104(int *self); }
namespace DMDialog { void __cdecl Cmd120(undefined4 *self); }
namespace DMDialog { void __cdecl ReadOptions(int self); }
namespace DMDialog { void __cdecl Cmd108(int self); }
namespace DMDialog { void __cdecl Child108_Notify1(int self); }
namespace DMDialog { void __cdecl Cmd110(int self); }
namespace DMDialog { void __cdecl Child110_Notify1(int self); }
namespace DMDialog { void __cdecl Cmd119(int self); }
namespace DMDialog { void __cdecl Child119_Notify1(int self); }
namespace DMDialog { void __cdecl ClampLengthEdit(undefined4 self,int *edit); }
namespace DMDialog { void __cdecl SetIntText(undefined4 self,int *edit); }
namespace DMDialog { int __cdecl GetIntText(undefined4 self,int *edit); }
namespace DMDialog { void __cdecl SetWordListFile(int self,uint *fileName); }
namespace DMApplication { void __cdecl vf17(int self); }
undefined4 __stdcall OwlMain(void);
namespace DMApplication { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TFileSaveDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TFileOpenDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TApplication { void __stdcall vf9(void); }
namespace OWL::TApplication { undefined4 __cdecl vf13(int self); }
namespace std::logic_error { undefined4 __cdecl vf1(int self); }
namespace std::exception { undefined * __stdcall vf1(void); }
namespace DMDialog { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace OWL::TWindow { undefined4 __cdecl GetTooltip(int self); }
namespace OWL::TWindow { bool __cdecl EnableWindow(int self,byte enable); }
namespace OWL::TWindow { void __cdecl Invalidate(int self,byte erase); }
namespace OWL::TWindow { void __cdecl InvalidateRect(int self,RECT *pRect,byte erase); }
namespace std::string { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TOpenSaveDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TScrollBar { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TStatic { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace std::locale { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace BitWriter { void __cdecl FlushWord(int *file); }
namespace BitWriter { void __cdecl BitWriter(undefined4 *self,undefined4 file); }
namespace BitWriter { void __cdecl WriteBits(undefined4 *self,int nbits,uint code_); }
namespace BitWriter { void __cdecl WriteBytes(undefined4 *self,byte *bytes,int count); }
namespace BitWriter { void __cdecl AlignToWord(undefined4 *self); }
namespace BitWriter { void __cdecl Flush(undefined4 *self); }
undefined4 __cdecl ScaleFrequency(uint count,uint total,uint range);
void __stdcall ReverseHuffmanCodes(void);
undefined4 __cdecl HuffmanNodeLess(int *a,int *b);
void __cdecl AddBitToSubtree(int *node,int bit);
void __cdecl StoreCodesAndFree(int *node);
int __stdcall BuildHuffmanCodes(void);
int __cdecl ParseDefinitionLine(int out,uint *line2);
int __cdecl ParseMappingLine(int mapping,char *line);
uint __cdecl WriteDefinitionRecord(int *writer,int definition);
bool __cdecl DefinitionRecordLess(int a,int b);
namespace DictionaryMaintainer { undefined4 * __cdecl DictionaryMaintainer(undefined4 *self); }
namespace DictionaryMaintainer { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OccurrenceListCache { void __cdecl _dtor(int self,byte dtorFlags); }
namespace __rwstd::__rb_tree::iterator { void __cdecl increment(int it); }
namespace std { void __cdecl _Destroy_range_ptr(undefined4 vec,int first,int last); }
namespace std { void __cdecl _Destroy_range_WordMap(undefined4 vec,int first,int last); }
namespace WordMap { undefined4 * __cdecl erase_range(undefined4 *result,int tree,undefined4 firstLo,undefined4 firstHi,int firstNode); }
namespace WordMap { void __cdecl __erase(int tree,int node); }
namespace WordMap { undefined4 * __cdecl erase(undefined4 *result,int tree,undefined4 itLo,undefined4 itHi,int itNode); }
namespace __rwstd::__rb_tree { void __cdecl __set_node_406e78(undefined4 *dest,undefined4 node); }
namespace __rwstd::__rb_tree { int __cdecl __minimum(int node); }
namespace __rwstd::__rb_tree { int __cdecl __maximum(int node); }
namespace __rwstd::__rb_tree { void __cdecl __deallocate_buffers(int tree); }
uint __stdcall WriteTsdDictionary(int *self,int wordLists,LPCSTR fileName,uint *description,int shortest,int longest, int progressTotal,int options);
namespace std::vector_WordMap { void __cdecl vector(undefined4 *self,int n,int value); }
namespace std { void __cdecl uninitialized_fill_n_WordMap(int *dest,int n,int value); }
namespace WordMap { undefined4 * __cdecl __copy(int *tree,undefined4 *src,undefined4 *parent); }
namespace WordMap { undefined4 * __cdecl __get_node(int *tree,int value); }
namespace __rwstd::__rb_tree { int __cdecl __minimum_40eff4(int node); }
namespace __rwstd::__rb_tree { int __cdecl __maximum_40f014(int node); }
namespace std { void __cdecl _Destroy_range(int first,int last); }
namespace WordListMap { void __cdecl AllocateNode(int *param_1); }
namespace WordMap2 { undefined4 * __cdecl erase_range(undefined4 *result,int tree,undefined4 firstLo,undefined4 firstHi,int firstNode); }
namespace WordMap2 { void __cdecl __erase(int tree,int node); }
namespace WordMap2 { undefined4 * __cdecl erase(undefined4 *result,int tree,undefined4 itLo,undefined4 itHi,int itNode); }
namespace __rwstd::__rb_tree { void __cdecl __set_node_40fd40(undefined4 *dest,undefined4 node); }
namespace __rwstd::__rb_tree::iterator { void __cdecl increment_40fd50(int it); }
namespace __rwstd::__rb_tree { void __cdecl __deallocate_buffers_40fdb4(int tree); }
namespace std::vector_WordMap2 { void __cdecl vector(undefined4 *self,int n,int value); }
namespace std { void __cdecl uninitialized_fill_n_WordMap2(int *dest,int n,int value); }
namespace WordMap2 { undefined4 * __cdecl __copy(int *tree,undefined4 *src,undefined4 *parent); }
namespace WordMap2 { undefined4 * __cdecl __get_node(int *tree,int value); }
namespace std { void __cdecl _Destroy_range_410318(int first,int last); }
namespace WordListMap { void __cdecl AllocateNode_410330(int *param_1); }
namespace std::vector_int { void __cdecl vector(undefined4 *self,int n,undefined4 *value); }
namespace std { void __cdecl fill_n_ptr(undefined4 *first,int n,undefined4 *value); }
namespace std { void __cdecl _Destroy_range_ptr_410608(int first,int last); }
namespace std { void __cdecl _Destroy_range_WordMap2(undefined4 vec,int first,int last); }
namespace WordMap { undefined4 * __cdecl insert_hint(undefined4 *result,int *tree,undefined4 hintLo,undefined4 hintHi,int hintNode, undefined4 unused,int value); }
namespace WordMap { int __cdecl __insert(int result,int *tree,int forceLeft,int parent,int value); }
namespace WordMap { undefined4 * __cdecl insert_unique(undefined4 *result,int *tree,int value); }
namespace __rwstd::__rb_tree::iterator { int __cdecl decrement(int it); }
namespace std::vector_MatchEngine_ptr { void __cdecl resize(int vec,uint n); }
namespace std::vector_MatchEngine_ptr { undefined4 __cdecl insert_fill(int vec,undefined4 *first,uint n,undefined4 *value); }
namespace std { undefined4 * __cdecl copy_ptr(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace std { undefined4 * __cdecl copy_backward_ptr(undefined4 *first,undefined4 *last,undefined4 *destEnd); }
namespace std { void __cdecl fill_ptr(undefined4 *first,undefined4 *last,undefined4 *value); }
namespace std { undefined4 * __cdecl copy_ptr_411574(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace WordMap2 { undefined4 * __cdecl lower_bound(undefined4 *result,int tree,int key); }
namespace WordMap2 { undefined4 * __cdecl insert_unique(undefined4 *result,int *tree,int value); }
namespace WordMap2 { int __cdecl __insert(int result,int *tree,int forceLeft,int parent,int value); }
namespace __rwstd::__rb_tree::iterator { void __cdecl decrement_411c1c(int it); }
namespace std::vector_ptr { void __cdecl insert_aux_411c88(int vec,undefined4 *pos,undefined4 *value); }
namespace __rwstd::__rb_tree::iterator { int __cdecl increment_411e60(int it); }
namespace WordListMap { void __cdecl AllocateNode_411ec4(int *param_1); }
namespace WordMap3 { undefined4 * __cdecl erase_range(undefined4 *result,int tree,undefined4 firstLo,undefined4 firstHi,int firstNode); }
namespace WordMap3 { void __cdecl __erase(int tree,int node); }
namespace __rwstd::__rb_tree { void __cdecl __deallocate_buffers_41221c(int tree); }
namespace std::vector_string { void __cdecl insert_aux(int vec,int pos,int value); }
namespace std { int __cdecl copy_backward_string(int first,int last,int destEnd); }
namespace std { int __cdecl uninitialized_copy_string(int first,int last,int dest); }
namespace std { void __cdecl _Destroy_range_16(int first,int last); }
namespace WordMap3 { undefined4 * __cdecl lower_bound(undefined4 *result,int tree,int key); }
namespace __rwstd::__rb_tree::iterator { void __cdecl increment_41288c(int it); }
namespace WordMap3 { undefined4 * __cdecl erase(undefined4 *result,int tree,undefined4 itLo,undefined4 itHi,int itNode); }
namespace __rwstd::__rb_tree { void __cdecl __set_node_41328c(undefined4 *dest,undefined4 node); }
namespace __rwstd::__rb_tree { int __cdecl __minimum_41329c(int node); }
namespace __rwstd::__rb_tree { int __cdecl __maximum_4132bc(int node); }
namespace WordMap3 { undefined4 * __cdecl insert_unique(undefined4 *result,int *tree,int value); }
namespace WordMap3 { int __cdecl __insert(int result,int *tree,int forceLeft,int parent,int value); }
namespace WordMap3 { undefined4 * __cdecl __get_node(int *tree,int value); }
namespace __rwstd::__rb_tree::iterator { void __cdecl decrement_413a0c(int it); }
namespace std::vector_string { void __cdecl resize(int vec,uint n); }
namespace std::vector_string { undefined4 __cdecl insert_fill(int vec,int pos,uint n,int value); }
namespace std { void __cdecl fill_string(int first,int last,int value); }
namespace std { void __cdecl uninitialized_fill_n_string(int dest,int n,int value); }
namespace std { int __cdecl copy_string(int first,int last,int dest); }
namespace std { void __cdecl _Destroy_range_string(undefined4 vec,int first,int last); }
namespace std::vector_16 { void __cdecl reserve(int vec,uint n); }
namespace std { undefined4 * __cdecl uninitialized_copy_16(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace std { void __cdecl _Destroy_range_16_4144b8(int first,int last); }
namespace std::vector_16 { void __cdecl insert_aux(int vec,undefined4 *pos,undefined4 *value); }
namespace std { undefined4 * __cdecl copy_backward_16(undefined4 *first,undefined4 *last,undefined4 *destEnd); }
namespace std { void __cdecl __final_insertion_sort(undefined4 *first,undefined4 *last,undefined *less); }
namespace std { void __cdecl __insertion_sort(undefined4 *first,undefined4 *last,undefined *less); }
namespace std { void __cdecl __unguarded_linear_insert(undefined4 *last); }
namespace std { void __cdecl __unguarded_insertion_sort(undefined4 *first,undefined4 *last); }
namespace std { void __cdecl __introsort_loop(undefined4 *first,undefined4 *last,undefined4 depthLimit,undefined *less); }
namespace std { undefined4 * __cdecl __unguarded_partition(undefined4 *first,undefined4 *last); }
namespace std { void __cdecl _Destroy_range_16_414a7c(undefined4 vec,int first,int last); }
namespace DictionaryMaintainer { void __stdcall vf3(void); }
namespace DictionaryMaintainer { void __stdcall vf4(void); }
namespace std::map_std_string_long_std_less_std_string { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::pair_const_std_string_std_vector_long_ptr { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::pair_const_std_string_long { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::pair_std_string_long { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::map_std_string_std_vector_long_ptr_std_less_std_string_std_allocator_std_pair_const_std_string_std_vector_long_ptr { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::multimap_std_string_long_WordListMapComparator { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::bad_alloc { undefined * __stdcall vf1(void); }
namespace std::vector_16 { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::vector_std_string { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::vector_long { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::vector_WordMap2 { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::vector_WordMap { void __cdecl _dtor(int self,byte dtorFlags); }
namespace WordMap2 { void __cdecl _dtor(int self,byte dtorFlags); }
namespace WordMap { void __cdecl _dtor(int self,byte dtorFlags); }
namespace WordMap3 { void __cdecl _dtor(int self,byte dtorFlags); }
void __stdcall InitRegistryPaths(void);
void __stdcall DestroyRegistryPaths(void);
namespace TSBuildProfile { int __cdecl TSBuildProfile(int self); }
namespace TSBuildProfile { void __cdecl _dtor(int self,byte dtorFlags); }
namespace TSBuildProfile { void __cdecl Load(int self,int keyPath); }
int __cdecl ResolveDataPath(int result,int dir,uint *fileName);
namespace TSBuildProfile { void __cdecl Save(int self); }
namespace TSDictionaryBuilderProgressBar { int * __cdecl TSDictionaryBuilderProgressBar(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4); }
namespace TSDictionaryBuilderProgressBar { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace DMDialog { void __cdecl SetAbort(int *self,int abort); }
namespace TSDictionaryBuilderProgressBar { void __cdecl vf5(int self,int param_2); }
int __cdecl CollationCompare(byte *param_1,int param_2,byte *param_3,int param_4);
int __cdecl ExpandLongPathName(int result,int path);
char * __cdecl memrchr(char *p,char ch,int n);
namespace std { int __cdecl operator_plus(int result,int lhs,int rhs); }
int __cdecl AppendChar(int result,int str);
bool __cdecl IsRelativePath(int path);
int __cdecl GetProgramDirectory(int result);
int __cdecl GetMyDocumentsDirectory(int result);
int __cdecl ResolveRelativePath(int result,int path);
undefined4 __cdecl IsAnsiTextFile(LPCSTR fileName);
undefined4 __cdecl ReadDescriptionLine(LPCSTR fileName,char *buf,uint bufSize,int *lineLen);
namespace Persist { int * __cdecl Persist(int *self,int param_2,int create,int tryLocalMachine); }
namespace Persist { void __cdecl _dtor(int self,byte dtorFlags); }
namespace Persist { undefined4 __cdecl QueryString(int self,int valueName,int out); }
namespace Persist { undefined4 __cdecl QueryDword(int self,int valueName,undefined4 *out); }
namespace Persist { void __cdecl SetString(int self,int valueName,int value); }
namespace Persist { void __cdecl SetDword(int self,int valueName); }
void __stdcall DestroyRichEditLoader(void);
undefined4 __cdecl ShowHtmlHelp(HWND hWnd);
undefined4 * __cdecl LoadHtmlHelp(undefined4 *result);
namespace Help { void __cdecl _dtor(int *self,byte dtorFlags); }
undefined4 __stdcall GetRichEditVersion(void);
void __stdcall InitRichEditStreamer(void);
void __stdcall DestroyRichEditStreamer(void);
namespace OWL::TRichEdit { undefined4 __stdcall GetModule(void); }
namespace OWL::TRichEdit { undefined * __stdcall GetModuleInstance(void); }
namespace OWL::TRichEdit { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TRichEdit { void __cdecl Cmd24322(int *self); }
namespace OWL::TRichEdit { void __cdecl Cmd24323(int *self); }
namespace OWL::TRichEdit { void __cdecl Cmd24324(int self); }
namespace OWL::TRichEdit { void __cdecl Cmd24325(int *self); }
namespace OWL::TRichEdit { void __cdecl Cmd24326(int self); }
namespace OWL::TRichEdit { void __cdecl Cmd24321(int *self); }
void __cdecl FUN_00419fa4(int param_1,byte param_2);
namespace OWL::TRichEdit { void __cdecl GetSelection(int *self,undefined4 *param_2,undefined4 *param_3); }
void __cdecl FUN_0041a074(int *param_1,LPARAM lParam);
namespace OWL::TRichEdit { bool __cdecl SetSelection(int *self,undefined4 param_2,undefined4 param_3); }
namespace OWL::TRichEdit { undefined4 __cdecl SetSelection_46924c(int *self,LPARAM range); }
namespace OWL::TRichEdit { void __cdecl GetTextRange(int *self,LPARAM textRange); }
namespace OWL::TRichEdit { void __cdecl GetSubText(int *self,undefined4 param_2,undefined4 param_3,undefined4 param_4); }
undefined4 __cdecl FUN_0041a128(int *param_1,WPARAM wParam,LPARAM lParam);
namespace OWL::TRichEdit { int __cdecl vf16(int *self,int param_2,uint *param_3,char param_4,char param_5,char param_6); }
namespace OWL::TRichEdit { void __cdecl Paste(int *self); }
void __cdecl FUN_0041a220(int *param_1,WPARAM wParam,LPARAM lParam);
void __cdecl FUN_0041a240(int *param_1,WPARAM wParam,LPARAM lParam);
namespace OWL::TRichEdit { void __cdecl EvGetDlgCode(int *self); }
namespace OWL::TRichEdit { void __cdecl EvChar(int *self); }
namespace OWL::TRichEdit { void __cdecl EvKeyDown(int *self); }
namespace OWL::TRichEdit { void __cdecl EvKillFocus(int *self); }
namespace OWL::TRichEdit { void __cdecl EvSetFocus(int *self); }
namespace OWL::TRichEdit { void __cdecl CeShared_41a2bc(int self,undefined4 *commandEnabler); }
namespace OWL::TRichEdit { void __cdecl CeCmd24324(int *self,undefined4 *commandEnabler); }
namespace OWL::TRichEdit { void __cdecl CeCmd24326(int *self,undefined4 *commandEnabler); }
namespace OWL::TRichEdit { void __cdecl CeCmd24321(int *self,undefined4 *commandEnabler); }
namespace OWL::TRichEdit { char * __stdcall vf11(void); }
namespace OWL::TRichEdit { void __cdecl vf20(int *self); }
undefined4 __stdcall FUN_0041a568(int *param_1,undefined1 *param_2,int param_3,undefined4 *param_4);
undefined4 __stdcall FUN_0041a5ac(int *param_1,int param_2,int param_3,int *param_4);
namespace OWL::TRichEdit { undefined4 __stdcall vf10(void); }
bool __cdecl FUN_0041a644(int *param_1,undefined4 param_2,WPARAM wParam);
bool __cdecl FUN_0041a680(int *param_1,undefined4 param_2,WPARAM wParam);
namespace OWL::TRichEdit { undefined4 __cdecl ReadFromFile(int *self,LPCSTR fileName); }
namespace OWL::TRichEdit { undefined4 __cdecl WriteToFile(int *self,LPCSTR fileName); }
namespace OWL::TRichEdit::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TRichEdit { int * __cdecl TRichEdit(int *self,int vbasesBuilt); }
namespace OWL::TRichEdit::Streamer { undefined4 __cdecl vf1(int self,int *param_2); }
void __cdecl FUN_0041aba0(int param_1,int *param_2);
namespace OWL::TRichEdit::Streamer { void __cdecl vf2(int self,int *param_2); }
void __cdecl FUN_0041ac10(int param_1,int *param_2);
namespace OWL::TRichEdit { undefined4 __cdecl UseRichEdit2(char load); }
undefined4 * __cdecl FUN_0041ace0(int *param_1);
namespace OWL::TErrorMode { void __cdecl _dtor(UINT *self,byte dtorFlags); }
namespace OWL::TRichEdit { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TRichEditModule { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TNewStreamer { void __cdecl vf0(int self); }
namespace OWL::TRichEdit::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TEdit { void __cdecl GetSelection(int *self,WPARAM wParam,LPARAM lParam); }
namespace OWL::TEdit { undefined4 __cdecl vf14(int self); }
namespace OWL::TEdit { bool __cdecl SetSelection(int *self,WPARAM wParam,LPARAM lParam); }
namespace OWL::TEdit { void __cdecl Paste(int *self); }
namespace OWL::TEdit { void __cdecl CharFromPos(int *self,undefined2 param_2,undefined2 param_3); }
namespace OWL::TEdit { void __cdecl PosFromChar(int *self,WPARAM wParam); }
namespace OWL::TRichEdit { void __cdecl CharFromPos(int *self,short param_2,short param_3); }
namespace OWL::TRichEdit { undefined4 __cdecl PosFromChar(int *self,WPARAM wParam); }
void __stdcall FUN_0041b534(void);
namespace OWL::TCommCtrlDll { undefined4 * __cdecl TCommCtrlDll(undefined4 *self); }
void __cdecl FUN_0041b630(int param_1);
bool __cdecl FUN_0041b660(int param_1,int param_2);
undefined * __stdcall FUN_0041b6c8(void);
undefined * __stdcall FUN_0041b770(void);
bool __stdcall FUN_0041b778(void);
namespace OWL::TCommCtrlDll { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TPopupMenu { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined * __stdcall FUN_0041b958(void);
undefined1 __stdcall FUN_0041b984(void);
undefined1 __stdcall FUN_0041b9b4(void);
bool __stdcall FUN_0041b9e4(void);
void __stdcall FUN_0041b9fc(void);
undefined * __stdcall FUN_0041bb2c(void);
PHKEY __cdecl FUN_0041bbd0(PHKEY phkResult,HKEY hKey,uint *param_3,REGSAM samDesired,int param_5);
undefined4 * __cdecl FUN_0041bca8(undefined4 *param_1,undefined4 param_2,undefined1 param_3,uint *param_4);
namespace OWL::TRegKey { void __cdecl _dtor(int *self,byte dtorFlags); }
LSTATUS __cdecl FUN_0041bda0(undefined4 *param_1,LPSTR class_,LPDWORD lpcchClass,LPDWORD subKeys,LPDWORD maxSubKeyLen, DWORD *maxClassLen,DWORD *values,LPDWORD maxValueNameLen,LPDWORD maxValueLen,LPDWORD securityDescriptor, PFILETIME lpftLastWriteTime);
undefined4 * __cdecl FUN_0041be50(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
namespace OWL::TRegValue { void __cdecl _dtor(int self,byte dtorFlags); }
void __cdecl FUN_0041c204(undefined4 *param_1);
namespace OWL::TAPointer_char { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::locale::facet { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace __rwstd::facet_imp { void __stdcall vf1(void); }
namespace __rwstd::facet_imp { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __cdecl FUN_0041c404(int *param_1);
void __stdcall DestroyRichEditLoader_41c460(void);
undefined * __stdcall FUN_0041c4a0(void);
undefined4 * __cdecl FUN_0041c53c(undefined4 *param_1);
namespace OWL::TAppDictionary { void __cdecl _dtor(int *self,byte dtorFlags); }
undefined4 __cdecl FUN_0041c6e8(undefined4 *param_1,int param_2);
void __cdecl FUN_0041c718(undefined4 *param_1,undefined4 param_2,int param_3);
void __cdecl FUN_0041c740(undefined4 *param_1);
bool __cdecl FUN_0041c78c(undefined4 *param_1);
namespace OWL::TAppDictPidImp { undefined4 * __cdecl TAppDictPidImp(undefined4 *self); }
namespace OWL::TAppDictPidImp { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TAppDictPidImp { void __cdecl vf1(int self,int param_2,int param_3); }
namespace OWL::TAppDictPidImp { void __cdecl vf2(int *self); }
namespace OWL::TAppDictPidImp { int * __cdecl vf3(int self,int param_2); }
namespace OWL::TAppDictPidImp { uint __cdecl vf4(int self,int param_2); }
namespace OWL::TAppDictPidImp { void vf5(undefined4 self,undefined4 param_2,uint param_3,int param_4,undefined *param_5); }
namespace OWL::TAppDictPidImp { int __cdecl vf6(int self); }
undefined4 * __cdecl FUN_0041c994(int param_1);
void __stdcall FUN_0041c9c0(void);
int __cdecl FUN_0041c9d0(int param_1);
int * __cdecl FUN_0041ca18(int param_1);
namespace OWL::TAppDictImp { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TAppDictInstImp { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TAppDictInstImp { void __cdecl vf1(int self,undefined4 param_2,undefined4 param_3); }
namespace OWL::TAppDictInstImp { void __cdecl vf2(int self); }
namespace OWL::TAppDictInstImp { int __cdecl vf3(int self); }
namespace OWL::TAppDictInstImp { int __cdecl vf4(int self); }
namespace OWL::TAppDictInstImp { void __cdecl vf5(undefined4 self,undefined *param_2); }
namespace OWL::TAppDictInstImp { bool __cdecl vf6(int self); }
uint * __cdecl FUN_0041cc9c(uint *param_1,undefined4 param_2,int param_3);
uint * __cdecl FUN_0041cd0c(uint *param_1,int width,int height,byte planes,byte bitCount,void *bits);
uint * __cdecl FUN_0041cd80(uint *param_1,undefined4 *param_2,int cx,int cy,char param_5);
uint * __cdecl FUN_0041ce0c(uint *param_1,uint *param_2);
uint * __cdecl FUN_0041cf04(uint *param_1,int param_2,uint *param_3);
namespace OWL::TBitmap { void __cdecl _dtor(uint *self,byte dtorFlags); }
undefined4 __cdecl FUN_0041d038(undefined4 *param_1);
undefined4 __cdecl FUN_0041d060(undefined4 *param_1);
undefined4 * __cdecl FUN_0041d088(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_0041d0c0(uint *param_1,int param_2,uint *param_3);
void __cdecl FUN_0041d164(uint *param_1,uint *param_2);
namespace OWL::TPalette { void __cdecl _dtor(uint *self,byte dtorFlags); }
namespace OWL::TScreenDC { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace OWL::TButtonGadget { void vf28(byte *self); }
namespace OWL::TXOutOfMemory { int vf5(...); }   // not decompiled
namespace OWL::TFont { void __cdecl _dtor(uint *self,byte dtorFlags); }
void __stdcall FUN_0041d8e0(void);
void __stdcall FUN_0041d920(void);
namespace OWL::TButtonGadgetEnabler { void __cdecl vf0(int self); }
namespace OWL::TButtonGadgetEnabler { void __stdcall vf1(void); }
namespace OWL::TButtonGadgetEnabler { void __cdecl vf2(int self,int param_2); }
namespace OWL::TButtonGadget { int * __cdecl TButtonGadget(int *self,uint *param_2,undefined4 param_3,char param_4,undefined4 param_5, byte param_6,char param_7); }
namespace OWL::TButtonGadget { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __cdecl FUN_0041dbbc(int param_1,byte param_2);
namespace OWL::TButtonGadget { void __cdecl vf5(int self); }
namespace OWL::TButtonGadget { void __cdecl vf6(int *self); }
void __cdecl FUN_0041dcdc(int *param_1);
void __cdecl FUN_0041de2c(int *param_1,int param_2);
namespace OWL::TButtonGadget { void __cdecl vf3(int *self,int *param_2); }
namespace OWL::TButtonGadget { void __cdecl vf2(int *self,int *param_2); }
namespace OWL::TButtonGadget { int * __cdecl vf22(int self); }
namespace OWL::TDib { void vf3(char *self,int param_2,char param_3); }
namespace OWL::TButtonGadget { void __cdecl vf23(undefined4 self,int param_2); }
namespace OWL::TButtonGadget { void __cdecl vf24(int *self); }
void __cdecl FUN_0041e2d0(int param_1,undefined4 param_2);
namespace OWL::TButtonGadget { void __cdecl vf12(int *self); }
namespace OWL::TButtonGadget { void __cdecl vf13(int self,undefined4 *param_2); }
undefined * __stdcall FUN_0041e4bc(void);
namespace OWL::TButtonGadget { void __cdecl vf21(int self,int *param_2,int *param_3); }
namespace OWL::TButtonGadget { void __cdecl vf25(int self); }
namespace OWL::TButtonGadget { void __cdecl vf26(int self,undefined4 param_2,undefined1 param_3); }
namespace OWL::TButtonGadget { void __cdecl vf27(int *self); }
namespace OWL::TButtonGadget { void __cdecl vf17(int *self); }
namespace OWL::TButtonGadget { void __cdecl vf14(int self); }
namespace OWL::TButtonGadget { void __cdecl vf15(int *self); }
namespace OWL::TButtonGadget { void __cdecl vf16(int self); }
namespace OWL::TButtonGadget { void __cdecl vf19(int *self); }
namespace OWL::TStreamableBase { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TCelArray { undefined4 * __cdecl TCelArray(undefined4 *self,int param_2,int param_3,int param_4); }
namespace OWL::TCelArray { undefined4 * __cdecl TCelArray_41eb38(undefined4 *self,undefined4 *param_2,undefined4 param_3,int param_4, undefined4 param_5,int param_6); }
namespace OWL::TCelArray { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
int * __cdecl FUN_0041ec8c(int *param_1,int param_2,int param_3,int param_4);
int * __cdecl FUN_0041ecc8(int *param_1,int param_2,int param_3,int param_4);
undefined4 __cdecl FUN_0041ed44(int param_1,uint *param_2);
undefined4 __cdecl FUN_0041eddc(int param_1,int param_2,int param_3);
undefined4 __cdecl FUN_0041ee7c(int param_1,int param_2);
undefined4 __cdecl FUN_0041ef8c(int param_1,int param_2,uint *param_3);
uint __cdecl FUN_0041effc(uint *param_1,uint *param_2,int *param_3,int *param_4,int x1,int y1);
undefined4 __cdecl FUN_0041f10c(int param_1,int param_2);
undefined4 __cdecl FUN_0041f14c(int param_1,int param_2);
void __stdcall FUN_0041f35c(void);
HMODULE __stdcall FUN_0041f371(HANDLE hProcess,LPCVOID address);
undefined4 __cdecl FUN_0041f418(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void __stdcall FUN_0041f5d3(void);
void __stdcall FUN_0041f611(void);
namespace OWL::TDiagGroupDef { undefined4 * __cdecl TDiagGroupDef(undefined4 *self,undefined4 param_2,byte param_3,char param_4); }
namespace OWL::TDiagGroupDef { undefined4 __stdcall vf0(void); }
namespace OWL::TDiagBase { undefined4 * __cdecl TDiagBase(undefined4 *self,undefined4 param_2,byte param_3,char param_4); }
namespace OWL::TDiagBase { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __cdecl FUN_0041f7ac(undefined4 param_1);
void __cdecl FUN_0041f7d8(int param_1);
undefined * __stdcall FUN_0041f808(void);
void __stdcall FUN_0041f860(void);
undefined4 __stdcall FUN_0041f8a0(void);
void __stdcall FUN_0041f8e4(void);
undefined4 __stdcall FUN_0041f948(void);
undefined4 __stdcall FUN_0041f998(void);
undefined4 __stdcall FUN_0041f9e8(void);
namespace OWL::TDiagGroupDef { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __stdcall FUN_0041fb18(void);
void __stdcall FUN_0041fb28(void);
namespace OWL::TTmpBuffer_char { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
char * __cdecl FUN_0041fcdc(char *param_1,HWND hWnd,char param_3);
namespace OWL::TClipboard { void __cdecl _dtor(char *self,byte dtorFlags); }
void __cdecl FUN_0041fe58(undefined4 param_1,HWND hWnd);
namespace OWL::TXClipboard { undefined4 * __cdecl TXClipboard(undefined4 *self,uint param_2); }
namespace OWL::TXClipboard { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXClipboard { void __cdecl vf3(int *self); }
namespace OWL::TXClipboard { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __stdcall FUN_00420050(void);
int __cdecl FUN_004202d8(short param_1);
undefined4 __cdecl FUN_00420318(int param_1);
uint __cdecl FUN_00420364(uint *param_1);
uint __cdecl FUN_00420398(uint *param_1);
int __cdecl FUN_004203ac(uint *param_1);
uint __cdecl FUN_004203c4(uint *param_1);
void __stdcall FUN_004203d8(void);
undefined * __stdcall FUN_0042041c(void);
undefined4 __stdcall FUN_00420474(void);
undefined4 __stdcall FUN_004204a4(void);
undefined4 __stdcall FUN_004204dc(void);
undefined4 __stdcall FUN_00420524(void);
undefined4 __stdcall FUN_0042055c(void);
undefined4 __stdcall FUN_00420594(void);
namespace OWL::TCommonDialog { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TCommonDialog { void __cdecl EvClose(int *self); }
namespace OWL::TCommonDialog { void __cdecl CmRange1to2(int *self); }
namespace OWL::TCommonDialog { int * __cdecl TCommonDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5); }
namespace OWL::TCommonDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TCommonDialog { void __cdecl SetupWindow(int *self); }
namespace OWL::TCommonDialog { void __stdcall PerformCreate(void); }
namespace OWL::TCommonDialog { undefined4 __stdcall DoExecute(void); }
void __cdecl FUN_004209d0(int param_1,uint param_2);
int __cdecl FUN_00420a1c(int param_1,uint param_2);
undefined4 __stdcall FUN_00420a68(int param_1);
undefined4 __stdcall FUN_00420a6e(void);
namespace OWL::TFile { undefined4 __cdecl vf1(int self); }
namespace OWL::TFile { void __cdecl vf4(int self); }
namespace OWL::TFile { void __cdecl vf5(int self); }
namespace OWL::TFile { void __cdecl vf6(int self); }
namespace OWL::TFile { void __cdecl vf7(int self); }
namespace OWL::TFile { void __cdecl vf8(int self); }
namespace OWL::TFile { void __cdecl vf9(int self); }
namespace OWL::TFile { void __cdecl vf10(int self); }
namespace OWL::TFile { void __cdecl vf11(int self); }
namespace OWL::TFile { void __cdecl vf12(int self); }
namespace OWL::TFile { void __cdecl vf13(int self); }
namespace OWL::TFile { void __cdecl vf17(int self); }
namespace OWL::TFile { void __cdecl vf18(int self); }
namespace OWL::TFile { undefined4 __cdecl vf25(int *self,undefined4 param_2); }
namespace OWL::TFile { void __cdecl vf32(int *self,uint *param_2); }
void __stdcall FUN_00420d58(void);
namespace OWL::TMBlockList_TStandardAllocator { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TMMemBlocks_TStandardAllocator { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TMMemStack_TStandardAllocator { void __cdecl _dtor(int self,byte dtorFlags); }
void __cdecl FUN_00420f5c(int param_1,byte param_2);
namespace OWL::TControlBar { int * __cdecl TControlBar(int *self,int vbasesBuilt,undefined4 param_3,undefined1 param_4,uint *param_5, int param_6); }
namespace OWL::TControl::Streamer { int vf4(...); }   // not decompiled
namespace OWL::TControlBar { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TGadgetWindow { undefined4 __cdecl GetTooltip(int self); }
void __cdecl FUN_004215b8(int param_1,byte param_2);
undefined4 * __cdecl FUN_00421638(undefined4 *param_1);
namespace OWL::TCreatedDC { void __cdecl _dtor(int *self,byte dtorFlags); }
int * __cdecl FUN_00421718(int *param_1,int param_2,int param_3);
int * __cdecl FUN_00421768(int *param_1,uint param_2,uint param_3,uint param_4);
int * __cdecl FUN_004217a0(int *param_1,ushort *param_2);
bool __cdecl FUN_004217e4(uint param_1,uint param_2,uint param_3);
int __cdecl FUN_00421838(uint param_1,uint param_2,uint param_3);
undefined4 __cdecl FUN_004218bc(uint param_1);
void __cdecl FUN_004218f4(int *param_1,uint *param_2,uint *param_3,uint *param_4);
uint __cdecl FUN_004219a4(int *param_1);
int * __cdecl FUN_004219cc(int *param_1,int *param_2,int param_3);
int __cdecl FUN_00421a08(int *param_1,uint param_2);
uint __cdecl FUN_00421a58(int *param_1);
void __cdecl FUN_00421a80(int *param_1,int *param_2,int param_3);
namespace std::ios_base::failure { undefined4 * __stdcall failure(undefined4 *self,int param_2); }
undefined4 * __stdcall FUN_00421b02(void);
void __cdecl FUN_00421be4(int param_1);
undefined4 * __cdecl FUN_00421c0c(undefined4 *param_1,undefined4 param_2);
namespace std::ios_base::failure { void vf2(char *self,byte *param_2,undefined4 param_3); }
undefined4 * __cdecl FUN_00421c70(undefined4 *param_1);
namespace OWL::TDC { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace OWL::TDC { undefined4 __cdecl vf23(undefined4 *self); }
void __cdecl FUN_00421cec(undefined4 *param_1,uint *param_2);
namespace OWL::TDC { void __cdecl vf5(undefined4 *self,uint *param_2); }
void __cdecl FUN_00421d74(undefined4 *param_1,uint *param_2,byte forceBkgd);
namespace OWL::TDC { void __cdecl vf6(undefined4 *self,int i); }
void __cdecl FUN_00421dec(undefined4 *param_1);
void __cdecl FUN_00421e18(undefined4 *param_1);
namespace OWL::TDC { void __cdecl vf7(undefined4 *self); }
void __cdecl FUN_00421e70(undefined4 *param_1);
void __cdecl FUN_00421e9c(undefined4 *param_1);
void __cdecl FUN_00421ec8(undefined4 *param_1);
void __cdecl FUN_00421ef4(int *param_1);
void __cdecl FUN_00421f30(undefined4 *param_1,uint *param_2,int *param_3,int w2,int h2,DWORD rop);
namespace OWL::TDC { void __cdecl vf1(undefined4 *self); }
namespace OWL::TDC { bool __cdecl vf2(undefined4 *self,int savedDC); }
namespace OWL::TDC { void __cdecl vf3(int self,int index); }
namespace OWL::TDC { bool __cdecl vf4(undefined4 *self,DEVMODEA *lpdm); }
namespace OWL::TDC { COLORREF * __cdecl vf8(COLORREF *self,int *param_2,uint *param_3); }
namespace OWL::TDC { COLORREF * __cdecl vf9(COLORREF *self,int *param_2,uint *param_3); }
namespace OWL::TDC { void __cdecl vf10(int *self,int mode); }
namespace OWL::TDC { bool __cdecl vf11(int *self,int *param_2,LPPOINT lppt); }
namespace OWL::TDC { bool __cdecl vf12(int *self,int *param_2,LPPOINT lppt); }
namespace OWL::TDC { bool __cdecl vf13(int *self,int *param_2,LPSIZE lpsz); }
namespace OWL::TDC { bool __cdecl vf14(int *self,int xn,int dx,int yn,int yd,LPSIZE lpsz); }
namespace OWL::TDC { bool __cdecl vf15(int *self,int *param_2,LPSIZE lpsz); }
namespace OWL::TDC { bool __cdecl vf16(int *self,int xn,int xd,int yn,int yd,LPSIZE lpsz); }
namespace OWL::TDC { bool __cdecl vf17(undefined4 *self,int x,int y,uint *string_,char *len); }
namespace OWL::TDC { bool __cdecl vf18(undefined4 *self,int x,int y,ushort options,RECT *pRect,uint *string_, char *len,INT *dx); }
namespace OWL::TDC { undefined4 __cdecl vf19(undefined4 *self,int *param_2,uint *string_,char *len,int tabPositions,INT *lpnTabStopPositions, int tabOrigin,uint *param_8); }
namespace OWL::TDC { void __cdecl vf20(undefined4 *self,LPCSTR text,int text2,LPRECT lprc,ushort format); }
namespace OWL::TDC { void __cdecl vf21(undefined4 *self,LPSTR text,int text2,LPRECT lprc,UINT format, LPDRAWTEXTPARAMS lpdtp); }
namespace OWL::TDC { bool __cdecl vf22(undefined4 *self,undefined4 *param_2,GRAYSTRINGPROC outputFunc,LPARAM lParam, int count,int *param_6); }
namespace OWL::TMemoryDC { void __cdecl vf5(undefined4 *self,uint *param_2); }
void __cdecl FUN_004224f0(undefined4 param_1,undefined *param_2);
undefined1 __cdecl FUN_00422518(undefined4 param_1,undefined *param_2);
undefined1 __cdecl FUN_00422548(undefined4 param_1,undefined *param_2);
void __cdecl FUN_00422580(undefined4 param_1,undefined *param_2);
void __cdecl FUN_004225ac(undefined4 param_1,undefined *param_2);
void __cdecl FUN_004225d0(undefined4 param_1,undefined *param_2);
undefined1 __cdecl FUN_004225f4(undefined4 param_1,undefined *param_2);
bool __cdecl FUN_0042261c(undefined4 param_1,undefined *param_2);
void __cdecl FUN_0042264c(undefined4 param_1,undefined *param_2);
void __cdecl FUN_00422674(undefined4 param_1,undefined *param_2);
undefined1 __cdecl FUN_004226b4(undefined4 param_1,undefined *param_2);
void __cdecl FUN_00422710(undefined4 param_1,undefined *param_2);
undefined1 __cdecl FUN_0042274c(undefined4 param_1,undefined *param_2);
void __cdecl FUN_0042278c(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_004227c0(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_004227e4(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0042280c(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0042284c(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_00422874(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_004228b8(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_004228e4(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_00422918(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_0042294c(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_00422984(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_004229bc(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_004229fc(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_00422a24(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_00422a60(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_00422a8c(undefined4 param_1,undefined *param_2);
undefined4 __cdecl FUN_00422ac4(undefined4 param_1,undefined *param_2,undefined4 param_3,int param_4,ushort param_5);
namespace OWL::TEventHandler { undefined4 __stdcall vf0(void); }
undefined4 __cdecl FUN_00422b40(undefined4 param_1,int param_2);
undefined4 __cdecl FUN_00422b68(undefined4 param_1,int *param_2,int *param_3,undefined *param_4);
namespace OWL::TXBase { undefined4 * __cdecl TXBase(undefined4 *self,int param_2); }
namespace OWL::TXBase { undefined4 * __cdecl TXBase_422cfc(undefined4 *self,int *param_2); }
namespace OWL::TXBase { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TXBase { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXBase { void __cdecl vf3(int *self); }
namespace OWL::TXBase { undefined4 __cdecl vf1(int self); }
undefined4 __stdcall FUN_00422f44(void);
undefined4 __stdcall FUN_00422f98(undefined4 param_1,undefined1 *param_2);
undefined4 __cdecl FUN_00422fa8(int *param_1,LPCSTR caption,char *param_3);
namespace OWL::TXOwl { undefined4 * __cdecl TXOwl(undefined4 *self,int param_2,undefined4 param_3); }
namespace OWL::TXOwl { undefined4 * __cdecl TXOwl_4230f0(undefined4 *self,uint param_2,int param_3); }
namespace OWL::TXOwl { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TXOwl { void __cdecl vf4(undefined4 self,int *param_2); }
namespace OWL::TXOwl { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXOwl { void __cdecl vf3(int *self); }
namespace OWL::TXOwl { undefined4 * __cdecl TXOwl_42333c(undefined4 *self,int *param_2); }
void __cdecl FUN_00423384(int param_1,undefined4 param_2);
int __cdecl FUN_004233d8(int param_1,char *param_2,uint param_3,int param_4);
int __cdecl FUN_004235b8(int str,uint param_2,undefined4 param_3,int param_4);
int __cdecl FUN_004236bc(int str,uint param_2,undefined4 param_3,int param_4);
namespace OWL::TXOutOfMemory { undefined4 * __cdecl TXOutOfMemory(undefined4 *self); }
namespace OWL::TXOutOfMemory { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXOutOfMemory { void __cdecl vf3(int *self); }
void __stdcall FUN_004239d4(void);
namespace OWL::TXOutOfMemory { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
uint * __cdecl FUN_00423a68(uint *param_1,undefined4 param_2,int param_3);
uint * __cdecl FUN_00423abc(uint *param_1,LPCSTR faceName,int cHeight,int cWidth,int cEscapement,int cOrientation, int cWeight,byte pitchAndFamily,byte italic,byte underline,byte strikeOut,byte charSet, byte outPrecision,byte clipPrecision,byte quality);
uint * __cdecl FUN_00423b5c(uint *param_1,LOGFONTA *pLogFont);
void __cdecl FUN_00423bbc(undefined4 param_1,LPTEXTMETRICA lptm,int param_3);
void __cdecl FUN_00423bf8(undefined4 param_1,LPTEXTMETRICA lptm);
LONG * __cdecl FUN_00423c5c(LONG *param_1,undefined4 param_2);
LONG * __cdecl FUN_00423ce0(LONG *param_1,undefined4 param_2,uint *string_);
LONG * __cdecl FUN_00423d4c(LONG *param_1,undefined4 param_2,int param_3,uint *string_);
int __cdecl FUN_00423dc8(int str,undefined4 *param_2);
undefined1 __cdecl FUN_00423e24(undefined4 *param_1);
uint * __cdecl FUN_00423e4c(uint *param_1);
namespace OWL::TDefaultGUIFont { void __cdecl _dtor(uint *self,byte dtorFlags); }
int __cdecl FUN_00423f6c(int param_1,int param_2);
undefined4 __cdecl FUN_00423f84(int param_1);
void __cdecl FUN_00423fac(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6);
namespace OWL::TGadget { undefined4 * __stdcall TGadget(undefined4 *self,undefined4 param_2); }
int __stdcall FUN_004240d6(void);
namespace OWL::TGadget { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TGadget { undefined4 __cdecl vf4(int *self,int param_2); }
namespace OWL::TGadget { void __stdcall vf5(void); }
namespace OWL::TGadget { void __stdcall vf6(void); }
namespace OWL::TGadget { void __cdecl vf1(int self,char param_2); }
namespace OWL::TGadget { void __cdecl vf3(int *self,int *param_2); }
void __cdecl FUN_00424310(int param_1,undefined4 *param_2);
void __cdecl FUN_00424340(int param_1,undefined4 param_2);
namespace OWL::TGadget { undefined4 __cdecl vf11(int self,int *param_2); }
namespace OWL::TGadget { void __cdecl vf7(int self); }
namespace OWL::TGadget { void __stdcall vf8(void); }
namespace OWL::TGadget { void __cdecl vf10(int self); }
namespace OWL::TGadget { void __cdecl vf9(int self); }
void __cdecl FUN_0042471c(int param_1);
void __cdecl FUN_0042477c(int param_1);
void __cdecl FUN_004247c8(int param_1);
namespace OWL::TGadget { void __cdecl vf13(int self,undefined4 *param_2); }
namespace OWL::TGadget { void __cdecl vf12(int *self); }
namespace OWL::TGadget { void __cdecl vf2(int self,int *param_2); }
void __cdecl FUN_004249ac(int param_1,int *param_2,int *param_3,int *param_4,int *param_5);
void __cdecl FUN_00424a64(int param_1,int *param_2);
namespace OWL::TGadget { void __cdecl vf14(int self); }
namespace OWL::TGadget { void __stdcall vf15(void); }
namespace OWL::TGadget { void __cdecl vf16(int self); }
namespace OWL::TGadget { void __cdecl vf17(int self); }
namespace OWL::TGadget { void __cdecl vf19(int self); }
namespace OWL::TGadget { void __stdcall vf18(void); }
namespace OWL::TGadget { void __stdcall vf20(void); }
namespace OWL::TSeparatorGadget { int * __cdecl TSeparatorGadget(int *self,int vbasesBuilt,undefined4 param_3,undefined1 param_4); }
namespace OWL::TSeparatorGadget { void __cdecl vf8(int self); }
namespace OWL::TSeparatorGadget { void __cdecl vf12(int *self,undefined4 *param_2); }
namespace OWL::TSeparatorGadget { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TGadgetList { undefined4 * __cdecl TGadgetList(undefined4 *self); }
namespace OWL::TGadgetList { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
int * __cdecl FUN_0042503c(int param_1);
namespace OWL::TGadgetList { void __cdecl vf1(int *self,int param_2,int param_3,int param_4); }
namespace OWL::TGadgetList { void vf2(int self,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5, int param_6,int param_7); }
namespace OWL::TGadgetList { int __cdecl vf3(int *self,int param_2); }
namespace OWL::TGadgetList { void __stdcall vf4(void); }
namespace OWL::TGadgetList { void __stdcall vf5(void); }
namespace OWL::TGadgetWindow { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
uint * __cdecl FUN_00425224(uint *param_1,int param_2,char param_3,byte italic);
namespace OWL::TGadgetWindow { int * __cdecl TGadgetWindow(int *self,int vbasesBuilt,undefined4 param_3,undefined1 param_4,uint *param_5, int param_6); }
namespace OWL::TGadgetWindow { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TGadgetWindow { void EvSysColorChange(undefined4 self,undefined4 param_2,int *param_3,int param_4); }
namespace OWL::TGadgetWindow { void __cdecl IdleAction(int *self,int param_2); }
uint __cdecl FUN_0042590c(int *param_1);
undefined4 __cdecl FUN_00425950(int *param_1,int param_2);
void __cdecl FUN_00425974(int param_1,int param_2);
void __cdecl FUN_00425990(int *param_1,int param_2);
namespace OWL::TGadgetWindow { void __cdecl vf13(int *self); }
namespace OWL::TGadgetWindow { void __cdecl vf14(int *self,undefined4 *param_2); }
undefined4 * __cdecl FUN_00425b54(undefined4 *param_1);
int __cdecl FUN_00425bf0(int *param_1);
namespace OWL::TGadgetWindow { void __cdecl Create(int *self); }
namespace OWL::TGadgetWindow { void __cdecl vf2(int *self,int param_2); }
namespace OWL::TGadgetWindow { void __cdecl vf16(int *self,int *param_2); }
namespace OWL::TGadgetWindow { void __cdecl vf20(int self,int param_2,int param_3,int *param_4); }
namespace OWL::TGadgetWindow { int * __cdecl vf18(int *self,int param_2); }
void __cdecl FUN_00425f74(int param_1,int *param_2);
void __cdecl FUN_00426244(int param_1,int *param_2);
void __cdecl FUN_0042645c(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6, int *param_7);
void __cdecl FUN_0042652c(int param_1,int *param_2);
namespace OWL::TGadgetWindow { void __cdecl vf17(int self,int param_2,int *param_3); }
void __cdecl FUN_004268bc(int param_1);
namespace OWL::TGadgetWindow { void __cdecl vf5(int *self,int param_2,int param_3,int param_4); }
namespace OWL::TGadgetWindow { void vf6(undefined4 self,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5 ,int param_6,int param_7); }
namespace OWL::TGadgetWindow { void __cdecl vf8(int *self,int *param_2); }
namespace OWL::TGadgetWindow { int __cdecl vf7(int self,int param_2); }
namespace OWL::TGadgetWindow { void __cdecl vf9(int self,int *param_2); }
namespace OWL::TGadgetWindow { void __cdecl vf10(int self,undefined4 param_2); }
namespace OWL::TGadgetWindow { undefined4 __cdecl vf11(int self,int param_2,int param_3); }
namespace OWL::TGadgetWindow { bool __cdecl SetupWindow(int *self); }
namespace OWL::TGadgetWindow { void __cdecl CleanupWindow(int *self); }
namespace OWL::TGadgetWindow { void __cdecl PreProcessMsg(int *self,LPMSG lParam); }
namespace OWL::TGadgetWindow { void __cdecl EvMsg_7ef2(int self); }
namespace OWL::TGadgetWindow { void __cdecl EvWindowPosChanging(int *self,int windowPos); }
namespace OWL::TGadgetWindow { void __cdecl vf15(int self,undefined4 *param_2,undefined4 param_3,int *param_4); }
namespace OWL::TGadgetWindow { void __cdecl Paint(int self,int param_2); }
namespace OWL::TGadgetWindow { void __cdecl EvLButtonDown(int *self); }
namespace OWL::TGadgetWindow { void __cdecl EvLButtonUp(int *self); }
namespace OWL::TGadgetWindow { void __cdecl EvLButtonDblClk(int *self); }
namespace OWL::TGadgetWindow { void __cdecl EvRButtonDown(int *self); }
namespace OWL::TGadgetWindow { void __cdecl EvRButtonUp(int *self); }
namespace OWL::TGadgetWindow { void __cdecl EvMouseMove(int *self); }
namespace OWL::TGadgetList { void __stdcall vf6(int *self); }
void __stdcall FUN_00427260(int *param_1);
void __stdcall FUN_0042726c(int *param_1);
namespace OWL::TGadgetWindow { void __cdecl EnableTooltip(int *self,byte wParam); }
void __cdecl FUN_00427348(int *param_1,undefined4 param_2);
namespace OWL::TGadgetWindow { undefined4 __cdecl EvCommand(int *self,int param_2,HWND hWnd,undefined4 param_4); }
namespace OWL::TGadgetWindow { void __cdecl EvCommandEnable(int *self,int param_2); }
namespace OWL::TGadgetWindow::TLayoutInfo { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TGadgetWindowFont { void __cdecl _dtor(uint *self,byte dtorFlags); }
void __cdecl FUN_004278dc(undefined4 *param_1);
namespace OWL::TAPointer_OWL_TRect { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined4 * __cdecl FUN_0042790c(undefined4 *param_1);
undefined4 * __cdecl FUN_0042793c(undefined4 *param_1,undefined4 param_2,int param_3);
void __cdecl FUN_00427974(int *param_1,uint param_2);
void __cdecl FUN_0042798c(int param_1,uint param_2);
namespace OWL::TXGdi { undefined4 * __cdecl TXGdi(undefined4 *self,uint param_2,undefined4 param_3); }
namespace OWL::TXGdi { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXGdi { void __cdecl vf3(int *self); }
void __cdecl FUN_00427c44(uint param_1,undefined4 param_2);
namespace OWL::TXGdi { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined4 __stdcall FUN_00427ce0(void);
LONG __stdcall FUN_00427dd2(void);
void __cdecl FUN_00427ed8(int param_1);
undefined4 __cdecl FUN_00427f24(uint param_1);
uint __cdecl FUN_00427ff0(int param_1,uint *param_2);
void __cdecl FUN_00428078(uint param_1,undefined1 param_2);
int __stdcall FUN_00428104(int param_1,uint *param_2);
int __stdcall FUN_0042810a(void);
void __cdecl FUN_00428230(int param_1,int param_2);
void __cdecl FUN_004282cc(uint param_1);
uint __cdecl FUN_004282f8(uint param_1);
undefined4 * __cdecl FUN_00428420(undefined4 *param_1);
undefined4 * __cdecl FUN_00428470(undefined4 *param_1,undefined4 param_2,int param_3);
namespace OWL::TGdiObject { void __cdecl _dtor(uint *self,byte dtorFlags); }
namespace OWL::TObjInfo { void __cdecl _dtor(int self,byte dtorFlags); }
void __cdecl FUN_004285e8(int param_1,byte param_2);
void __cdecl FUN_00428704(int param_1,byte param_2);
void __cdecl FUN_004287d4(int param_1,byte param_2);
void __cdecl FUN_00428898(int *param_1,int param_2,int param_3);
int * __cdecl FUN_004288b4(int *param_1,int param_2,int param_3);
void __cdecl FUN_004288d0(int *param_1,int *param_2);
void __cdecl FUN_00428984(int *param_1,int *param_2);
undefined4 __cdecl FUN_00428a30(int param_1);
int __cdecl FUN_00428a4a(int param_1,int param_2);
void __cdecl FUN_00428a65(int param_1,int param_2,int param_3);
void __stdcall InitRichEditStreamer_428c58(void);
void __stdcall FUN_00428cae(void);
undefined4 * __cdecl FUN_00428cde(undefined4 *param_1);
undefined4 * __cdecl FUN_00428d08(undefined4 *param_1,int numWindows);
bool __cdecl FUN_00428d68(int *param_1,HWND hWnd,HWND hWnd2,int x,int y,int cx,int cy, UINT flags);
undefined4 __cdecl FUN_00428d9c(undefined4 *param_1);
namespace OWL::TDeferWinPos { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace OWL::TLayoutWindow { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
undefined4 * __cdecl FUN_00428e2c(undefined4 *param_1);
namespace OWL::TLayoutWindow { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TLayoutWindow { void __cdecl vf1(int *self); }
void __cdecl FUN_0042918c(int param_1,int param_2,undefined4 *param_3);
undefined4 __cdecl FUN_0042925c(int param_1,int param_2,undefined4 *param_3);
undefined4 __cdecl FUN_00429290(int param_1,int param_2);
namespace OWL::TLayoutWindow { void __cdecl EvSize(int *self,int sizeType,int *size); }
namespace OWL::TLayoutWindow { void __cdecl RemoveChild(int *self,int param_2); }
int __cdecl FUN_004294bc(int param_1,int param_2);
void __cdecl FUN_004294dc(int param_1);
void __cdecl FUN_00429500(int param_1);
void __cdecl FUN_00429538(int *param_1);
void __cdecl FUN_0042962c(int *param_1,int param_2,int *param_3,int param_4);
void __cdecl FUN_00429ac8(int param_1,undefined1 *param_2);
void __cdecl FUN_00429b3c(int *param_1,char *param_2);
int __cdecl FUN_00429d28(int param_1,int param_2);
void __cdecl FUN_00429d48(int *param_1);
namespace OWL::TLayoutWindow::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TLayoutWindow { int * __cdecl TLayoutWindow(int *self,int vbasesBuilt); }
namespace OWL::TLayoutWindow::Streamer { undefined4 __cdecl vf1(int self); }
namespace OWL::TLayoutWindow::Streamer { void __stdcall vf2(void); }
undefined1 * __cdecl FUN_00429f64(undefined1 *param_1,undefined4 param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_0042a024(undefined4 *param_1);
undefined4 __cdecl FUN_0042a08c(int *param_1);
int __cdecl FUN_0042a0c8(int *param_1);
int __cdecl FUN_0042a13c(int param_1);
undefined4 * __cdecl FUN_0042a154(undefined4 *param_1);
undefined4 * __cdecl FUN_0042a24c(int *param_1);
namespace OWL::TLayoutWindow::Streamer { undefined4 __stdcall vf3(void); }
undefined * __stdcall FUN_0042a440(void);
void __stdcall DestroyRichEditLoader_42a4d7(void);
undefined4 * __cdecl FUN_0042a56c(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
int __stdcall FUN_0042a5b0(void);
undefined4 * __cdecl FUN_0042a5c4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
uint * __cdecl FUN_0042a644(undefined4 *param_1,char *param_2);
int __cdecl FUN_0042a898(int param_1,ushort param_2);
namespace OWL::_TLocaleCacheList { void __cdecl _dtor(int *self,byte dtorFlags); }
void __cdecl FUN_0042aa7c(int *param_1,int param_2);
int __cdecl FUN_0042aa90(int *param_1,ushort param_2);
undefined4 __cdecl FUN_0042ab74(ushort param_1);
namespace OWL::_TLocaleCache { void __cdecl _dtor(int self,byte dtorFlags); }
int __cdecl FUN_0042ac6c(char *s1,char *s2);
undefined * __stdcall FUN_0042acec(void);
void __stdcall FUN_0042ad37(void);
char * __cdecl FUN_0042aea0(uint *param_1);
undefined4 * __cdecl FUN_0042aee8(undefined4 *param_1);
int * __cdecl FUN_0042b3f0(int *param_1,int param_2);
namespace OWL::TTmpBufferBase { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::__TFixedAlloc { void __cdecl _dtor(int self,byte dtorFlags); }
undefined * __stdcall FUN_0042b6a4(void);
void __stdcall DestroyRichEditLoader_42b6ed(void);
int __cdecl FUN_0042b780(int param_1);
namespace OWL::TMemDCCache { void __cdecl _dtor(int self,byte dtorFlags); }
undefined4 __cdecl FUN_0042b824(int param_1);
void __cdecl FUN_0042b87c(int param_1,int param_2);
int * __cdecl FUN_0042b8b0(int *param_1);
int * __cdecl FUN_0042b918(int *param_1,undefined4 *param_2);
int * __cdecl FUN_0042b980(int *param_1,uint *param_2);
void __cdecl FUN_0042b9d8(int *param_1);
void __cdecl FUN_0042ba18(undefined4 *param_1,uint *param_2);
void __cdecl FUN_0042ba5c(undefined4 *param_1);
namespace OWL::TMemoryDC { int * __cdecl _dtor(int *self,byte dtorFlags); }
namespace OWL::TMenu { undefined4 * __cdecl TMenu(undefined4 *self,int param_2); }
namespace OWL::TMemoryDC { undefined4 vf24(byte *self,undefined **menu,undefined4 *param_3); }
namespace OWL::TMenu { undefined4 * __cdecl TMenu_42bb94(undefined4 *self,int *param_2,int param_3); }
namespace OWL::TMenu { undefined4 * __cdecl TMenu_42bc04(undefined4 *self,undefined4 param_2,int param_3); }
namespace OWL::TMenu { undefined4 * __cdecl TMenu_42bc50(undefined4 *self,HWND hWnd,int param_3); }
namespace OWL::TMenu { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
UINT __cdecl FUN_0042bce8(int param_1,int pos);
void __cdecl FUN_0042bd98(int param_1,uint param_2);
namespace OWL::TMenu { void __stdcall vf2(void); }
namespace OWL::TMenu { void __stdcall vf3(void); }
int * __cdecl FUN_0042bdc0(int param_1,int *param_2,int param_3,int param_4);
namespace OWL::TPopupMenu { undefined4 * __cdecl TPopupMenu(undefined4 *self,int param_2); }
namespace OWL::TXMenu { undefined4 * __cdecl TXMenu(undefined4 *self,uint param_2); }
namespace OWL::TXMenu { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXMenu { void __cdecl vf3(int *self); }
void __cdecl FUN_0042c1c4(uint param_1);
namespace OWL::TXMenu { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TMenu { undefined4 __cdecl vf1(int self); }
namespace OWL::TMenu { void vf4(char *self,byte *param_2,char param_3); }
namespace OWL::TMessageBar { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TMessageBar { void vf15(undefined4 self,undefined4 param_2,undefined4 param_3,int *gadgetWindow, undefined4 *param_5,undefined1 param_6,int *param_7); }
namespace OWL::TMessageBar { void __cdecl vf16(int *self,int *param_2); }
namespace OWL::TMessageBar { void __cdecl vf14(int *self,undefined4 *param_2); }
namespace OWL::TMessageBar { void __cdecl vf27(int *self,uint *param_2); }
namespace OWL::TSystemMessage { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TMsgThread { undefined4 * __cdecl TMsgThread(undefined4 *self); }
namespace OWL::TMsgThread { undefined4 __cdecl vf0(int *self); }
namespace OWL::TMsgThread { undefined4 __stdcall vf1(void); }
namespace OWL::TMsgThread { undefined4 __cdecl vf2(undefined4 self,MSG *pMsg); }
undefined4 __cdecl FUN_0042c95c(int *param_1);
void __stdcall FUN_0042c9b8(void);
namespace OWL::TMsgThread { void __cdecl vf3(int *self); }
namespace OWL::TMsgThread { undefined4 __stdcall vf4(void); }
namespace OWL::TMsgThread { undefined4 __cdecl vf5(undefined4 self,undefined4 param_2); }
void __cdecl FUN_0042cabc(undefined4 param_1,int param_2);
void __cdecl FUN_0042cad8(undefined4 param_1,int param_2);
undefined4 __cdecl FUN_0042caf4(undefined4 param_1,uint *param_2);
void __stdcall FUN_0042cb10(void);
void __stdcall FUN_0042cb8c(void);
int __cdecl FUN_0042cbc4(int param_1,int param_2);
void __cdecl FUN_0042cc74(int param_1,int param_2);
uint __cdecl FUN_0042cd10(int param_1,int param_2);
undefined4 * __cdecl FUN_0042ce68(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int param_5);
namespace OWL::TStreamableClass { void __cdecl _dtor(int self,byte dtorFlags); }
int * __cdecl FUN_0042cf30(int *param_1);
namespace OWL::TStreamableTypes { void __cdecl _dtor(int *self,byte dtorFlags); }
void __cdecl FUN_0042d068(int param_1,char param_2);
void __cdecl FUN_0042d0b4(int *param_1,undefined4 param_2,int param_3);
void __cdecl FUN_0042d0cc(int *param_1,undefined4 param_2,int param_3);
undefined4 __cdecl FUN_0042d138(int *param_1,undefined4 param_2,uint *param_3);
void __cdecl FUN_0042d5b8(int *param_1,undefined4 param_2);
void __cdecl FUN_0042d5ec(int param_1,int param_2);
undefined4 __cdecl FUN_0042d688(int *param_1,uint param_2);
void __cdecl FUN_0042d6a8(int param_1,int param_2);
void __cdecl FUN_0042d744(int *param_1,int param_2);
int __stdcall FUN_0042d770(int param_1,uint *param_2);
int __stdcall FUN_0042d776(void);
undefined4 __cdecl FUN_0042d878(int param_1,int param_2);
uint __cdecl FUN_0042d8bc(int param_1,uint *param_2);
void __stdcall FUN_0042d944(void);
uint __cdecl FUN_0042d94c(int *param_1);
void __cdecl FUN_0042d9a0(int *param_1,undefined4 param_2,int param_3);
void __cdecl FUN_0042d9ec(int *param_1,undefined4 *dest,uint param_3);
uint __cdecl FUN_0042da9c(int *param_1);
uint __cdecl FUN_0042dac0(int *param_1);
undefined4 __cdecl FUN_0042db04(int *param_1);
uint __cdecl FUN_0042db48(int *param_1);
int __cdecl FUN_0042db7c(int *param_1,int param_2,int param_3);
undefined4 * __cdecl FUN_0042dbc4(int *param_1);
int __cdecl FUN_0042dc10(int *param_1,undefined4 param_2);
void __cdecl FUN_0042dc94(int *param_1,undefined4 *param_2,int *param_3);
void __cdecl FUN_0042dd80(int *param_1);
int __cdecl FUN_0042ddb0(int *param_1,int *param_2,undefined4 param_3);
void __cdecl FUN_0042de38(int *param_1,byte param_2);
void __cdecl FUN_0042de94(int *param_1,undefined4 param_2,int param_3);
void __cdecl FUN_0042dee0(int *param_1);
void __cdecl FUN_0042df1c(int *param_1);
void __cdecl FUN_0042df58(int *param_1,undefined4 *src,uint param_3);
void __cdecl FUN_0042dfc4(int *param_1,uint *param_2);
void __cdecl FUN_0042e00c(int *param_1,uint *src);
void __cdecl FUN_0042e054(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_0042e090(int *param_1,int *param_2,undefined4 param_3);
void __cdecl FUN_0042e108(int *param_1,int *param_2);
void __cdecl FUN_0042e154(int *param_1,int *param_2,undefined4 param_3);
void __cdecl FUN_0042e358(undefined4 *param_1);
namespace OWL::TPointer_OWL_TStreamer { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __cdecl FUN_0042e388(int param_1,byte param_2);
void __cdecl FUN_0042e4dc(int param_1,byte param_2);
void __cdecl FUN_0042e62c(int param_1,byte param_2);
void __cdecl FUN_0042e728(int param_1,byte param_2);
void __cdecl FUN_0042e7e8(int param_1,byte param_2);
FARPROC __stdcall FUN_0042e818(void);
void __stdcall FUN_0042e82e(void);
undefined4 __stdcall FUN_0042e86c(void);
undefined * __stdcall FUN_0042e874(void);
void __cdecl FUN_0042e87c(undefined4 param_1);
void __stdcall FUN_0042e88c(HWND hWnd,UINT msg,WPARAM wParam,LPARAM lParam);
undefined1 * __cdecl FUN_0042e8f4(undefined4 param_1);
undefined4 * __stdcall FUN_0042e9bc(void);
void __stdcall FUN_0042ea74(void);
void __cdecl FUN_0042ea7c(int param_1);
void FUN_0042eaa4(int param_1);
namespace TThunkAllocator { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __cdecl FUN_0042eb68(LPVOID mem);
int * __cdecl FUN_0042eb8c(int *param_1,HWND hWnd);
namespace OWL::TPaintDC { void __cdecl _dtor(int *self,byte dtorFlags); }
uint * __cdecl FUN_0042ecec(uint *param_1,undefined4 param_2,int param_3);
namespace OWL::TPaintDC { void vf24(char *self,undefined4 param_2,char param_3); }
uint * __cdecl FUN_0042ed5c(uint *param_1,int param_2,BYTE param_3);
void __cdecl FUN_0042eda4(uint *param_1,int param_2,BYTE param_3);
namespace OWL::TFileName { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TPickListPopup { int * __cdecl TPickListPopup(int *self,int vbasesBuilt,undefined4 param_3,uint param_4); }
undefined4 __cdecl FUN_0042f460(int param_1,LPCSTR newItem);
namespace OWL::TPickListPopup { undefined4 __cdecl Execute(int self); }
namespace OWL::TPickListPopup { undefined4 __cdecl EvCommand(int self,undefined4 param_2); }
namespace OWL::TPickListPopup { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TView { undefined4 __cdecl vf1(int self); }
namespace OWL::TView { undefined4 __cdecl vf2(int self); }
namespace OWL::TView { undefined4 __stdcall vf6(void); }
namespace OWL::TView { undefined4 __stdcall vf11(void); }
namespace OWL::TToolbarRes { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TResource_OWL_TOOLBARTEMPLATE_241 { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined4 __cdecl FUN_0042f7fc(int param_1);
undefined4 __cdecl FUN_0042f80c(int param_1);
undefined4 __cdecl FUN_0042f818(int param_1);
undefined2 __cdecl FUN_0042f824(int param_1);
int __cdecl FUN_0042f83c(int param_1);
undefined2 __cdecl FUN_0042f850(int param_1);
undefined2 __cdecl FUN_0042f868(int param_1);
undefined * __cdecl FUN_0042f944(undefined4 *param_1,char *param_2,ushort param_3);
int * __cdecl FUN_0042f998(int *param_1);
namespace OWL::TRegion { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TRegLink { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __stdcall InitRichEditStreamer_42facc(void);
void __stdcall FUN_0042fb22(void);
namespace OWL::TWindow::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TWindow { int * __cdecl TWindow(int *self,int vbasesBuilt); }
int * __cdecl FUN_0042fc7c(int *param_1,undefined4 *param_2);
int * __cdecl FUN_0042fccc(int *param_1,int param_2);
namespace OWL::TWindow::Streamer { int __cdecl vf1(int self,int *param_2,int param_3); }
namespace OWL::TWindow::Streamer { void __cdecl vf2(int self,int *param_2); }
undefined4 * __cdecl FUN_004302e4(int *param_1);
namespace OWL::TWindow::Streamer { undefined4 __stdcall vf3(void); }
void __cdecl FUN_0043044c(int *param_1,int *param_2,int param_3);
int * __cdecl FUN_00430478(int *param_1,uint param_2);
int * __cdecl FUN_00430568(int *param_1,uint param_2);
uint * __cdecl FUN_004305b0(uint *param_1,int *param_2,int param_3,int param_4,int param_5);
uint * __cdecl FUN_00430650(uint *param_1,FILETIME *pFileTime);
undefined4 __cdecl FUN_004306b4(uint *param_1);
undefined4 * __cdecl FUN_00430728(undefined4 *param_1,char param_2);
undefined4 * __cdecl FUN_004307c8(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4, uint *param_5);
void __cdecl FUN_0043084c(int param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_00430864(int param_1,uint *param_2,char param_3);
void __cdecl FUN_004308b8(int param_1,uint *src);
namespace OWL::TTooltipEnabler { undefined4 * __cdecl TTooltipEnabler(undefined4 *self,int param_2,undefined4 param_3); }
namespace OWL::TTooltipEnabler { void __cdecl vf1(int self,uint *src); }
namespace OWL::TTooltipEnabler { void __stdcall vf2(void); }
namespace OWL::TTooltip { int * __cdecl TTooltip(int *self,int vbasesBuilt,undefined4 param_3,char param_4,int param_5); }
namespace OWL::TTooltip { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TTooltip { char * __stdcall GetClassName(void); }
namespace OWL::TFrameWindow { undefined4 __stdcall vf4(void); }
namespace OWL::TFrameWindow { undefined4 __stdcall vf5(void); }
undefined4 * __cdecl FUN_00430cac(undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4);
undefined4 * __cdecl FUN_00430d0c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_00430d5c(LPRECT qrc,undefined4 *param_2);
undefined4 __cdecl FUN_00430d78(undefined4 *param_1,LPRECT qrc,uint edge,uint grfFlags);
void __cdecl FUN_004311cc(undefined4 *param_1,int *param_2,uint param_3,uint *param_4,uint *param_5);
undefined * __stdcall FUN_00431398(void);
void __stdcall FUN_0043141d(void);
uint * __cdecl FUN_004314f0(uint *param_1);
undefined4 __cdecl FUN_00431534(int param_1,int *param_2);
uint * __stdcall FUN_004315f0(void);
undefined4 __cdecl FUN_00431600(int *param_1);
void __cdecl FUN_00431618(undefined4 *param_1,int *param_2,int *param_3,undefined4 *param_4,int *param_5, int *param_6);
void __cdecl FUN_004316e8(undefined4 *param_1,undefined4 *param_2,int *param_3,uint *param_4);
void __cdecl FUN_00431798(undefined4 *param_1,undefined4 *param_2,int *param_3);
undefined4 __cdecl FUN_004317b4(int *param_1);
void __cdecl FUN_004318b4(uint *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5,int param_6, char param_7,char param_8,int *param_9,uint *param_10);
void __cdecl FUN_00431ecc(undefined4 *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5, int param_6,char param_7,char param_8,int *param_9,uint *param_10);
void __cdecl FUN_00431f80(undefined4 param_1,int *param_2,int *param_3,int *param_4,int param_5,char param_6, char param_7,COLORREF *param_8,ushort param_9);
void __cdecl FUN_00432478(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int param_5,char param_6, char param_7);
namespace OWL::TUIFaceData { void __cdecl _dtor(uint *self,byte dtorFlags); }
namespace OWL::THatch8x8Brush { void __cdecl _dtor(uint *self,byte dtorFlags); }
void __cdecl FUN_00432700(undefined4 *param_1);
namespace OWL::TPointer_OWL_TBitmap { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __stdcall FUN_00432764(void);
void __stdcall InitRichEditStreamer_43300c(void);
void __stdcall FUN_00433062(void);
namespace OWL::TUrlLink { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TUrlLink { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TUrlLink { char * __stdcall GetClassName(void); }
namespace OWL::TUrlLink { void __cdecl SetupWindow(int *self); }
namespace OWL::TUrlLink { void __cdecl EnableTooltip(int *self,byte wParam); }
void __cdecl FUN_00433660(int *param_1,int param_2);
namespace OWL::TUrlLink { void __cdecl PreProcessMsg(int *self,LPMSG lParam); }
LRESULT __stdcall FUN_00433844(HWND hWnd,UINT msg,WPARAM wParam,LPARAM lParam);
namespace OWL::TUrlLink { void __cdecl GetWindowClass(int *self,LPWNDCLASSA wndClass); }
namespace OWL::TUrlLink { void __cdecl Paint(int *self,int param_2); }
namespace OWL::TUrlLink { void __cdecl EvPaint(int *self); }
namespace OWL::TUrlLink { uint __cdecl EvMsg_19(int *self,HDC hdc,undefined4 param_3,int param_4); }
namespace OWL::TUrlLink { void __cdecl EvLButtonDown(int *self); }
namespace OWL::TUrlLink { void __cdecl EvMouseMove(int *self,undefined4 modKeys,int *point); }
namespace OWL::TUrlLink { undefined4 __cdecl EvGetfont(int self); }
namespace OWL::TUrlLink { void __cdecl EvSetfont(int *self,undefined4 param_2,char param_3); }
namespace OWL::TUrlLink { undefined4 __stdcall EvGetDlgCode(void); }
namespace OWL::TUrlLink { void __cdecl vf18(int *self); }
void __cdecl FUN_00433fdc(int *param_1,undefined1 param_2);
void __cdecl FUN_00434000(int *param_1);
namespace OWL::TUrlLink { uint __cdecl vf19(undefined4 self,uint *param_2,UINT cmdShow); }
namespace OWL::TUrlLink { void __cdecl vf20(int *self,undefined4 param_2); }
namespace OWL::TUrlLink::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TUrlLink { int * __cdecl TUrlLink(int *self,int vbasesBuilt); }
namespace OWL::TUrlLink::Streamer { undefined4 __cdecl vf1(int self,int *param_2); }
void __cdecl FUN_00435210(int param_1,int *param_2);
namespace OWL::TUrlLink::Streamer { void __cdecl vf2(int self,int *param_2); }
void __cdecl FUN_00435324(int param_1,int *param_2);
undefined4 * __cdecl FUN_00435378(int *param_1);
namespace OWL::TUrlLink::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TUrlLink { undefined4 __cdecl GetTooltip(int self); }
void __cdecl FUN_004355c0(undefined4 *param_1);
namespace OWL::TPointer_OWL_TFont { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __cdecl FUN_00435630(int param_1);
undefined4 __cdecl FUN_0043568a(int *param_1,int *param_2);
undefined * __stdcall FUN_004356b3(void);
uint __stdcall FUN_00435718(void);
void __cdecl FUN_004358a8(int param_1,int *param_2);
undefined4 __cdecl FUN_004358d8(int param_1);
undefined4 __cdecl FUN_004358fd(int param_1);
bool __cdecl FUN_00435986(int param_1,int param_2);
bool __cdecl FUN_0043599d(int param_1,int *param_2);
undefined * __cdecl FUN_004359b3(int param_1);
void __stdcall FUN_00435ae8(void);
void __stdcall FUN_00435b5b(void);
namespace OWL::TWindow { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TCommandEnabler { undefined4 * __cdecl TCommandEnabler(undefined4 *self,undefined4 param_2,undefined4 param_3); }
namespace OWL::TCommandEnabler { void __cdecl vf0(int self); }
void __cdecl FUN_00435bfc(int param_1);
namespace OWL::TWindow { int * __cdecl TWindow_435c28(int *self,int vbasesBuilt,undefined4 param_3,uint *param_4,int param_5); }
namespace OWL::TWindow { int * __cdecl TWindow_435d18(int *self,int vbasesBuilt); }
void __cdecl FUN_00435df4(int param_1,undefined4 param_2,uint *param_3,int param_4);
void __cdecl FUN_00435e48(int param_1,undefined4 param_2,int param_3);
namespace OWL::TWindow { void __cdecl _dtor(undefined4 *self,uint dtorFlags); }
namespace OWL::TWindow { bool __cdecl PreProcessMsg(int self,LPMSG lParam); }
namespace OWL::TWindow { undefined4 __cdecl IdleAction(int self,int param_2); }
namespace OWL::TWindow { void __cdecl EvSysColorChange(int self); }
namespace OWL::TWindow { void __cdecl RemoveChild(int self,int param_2); }
namespace OWL::TWindow { void __cdecl SetParent(int self,int param_2); }
namespace OWL::TWindow { undefined4 __cdecl SetDocTitle(int self); }
void __cdecl FUN_004363ac(int param_1,undefined4 param_2);
undefined4 __cdecl FUN_00436428(int param_1);
namespace OWL::TWindow { undefined4 __cdecl EvCommand(undefined4 *self,int param_2,HWND hWnd,undefined4 param_4); }
namespace OWL::TWindow { undefined4 __cdecl EvNotify(undefined4 *self,int param_2,undefined4 *param_3); }
namespace OWL::TWindow { void __cdecl EvCommandEnable(undefined4 *self,int param_2); }
void __cdecl FUN_00436810(undefined4 *window,HWND hWnd2,undefined4 *param_3);
namespace OWL::TWindow { void __cdecl DefWindowProc(int self,UINT msg,WPARAM wParam,LPARAM lParam); }
undefined4 * __cdecl FUN_004369a0(undefined4 *param_1);
void __cdecl FUN_00436a28(int param_1,int param_2);
void __cdecl FUN_00436a54(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, undefined4 param_6);
undefined4 __cdecl FUN_00436a84(int param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_00436ac4(int param_1);
void __cdecl FUN_00436adc(int param_1);
namespace OWL::TWindow { undefined4 __cdecl WindowProc(undefined4 *self,uint param_2,undefined4 param_3); }
undefined4 __cdecl FUN_00436d48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int __cdecl FUN_00436db0(int param_1,int param_2,undefined4 param_3,int param_4);
LRESULT __cdecl FUN_00436e00(HWND hWnd,LPARAM lParam);
namespace OWL::TWindow { void __cdecl EvCreate(int self); }
namespace OWL::TWindow { undefined4 __stdcall HoldFocusHWnd(void); }
namespace OWL::TWindow { void __cdecl EvKillFocus(int self); }
namespace OWL::TWindow { void __cdecl EvSize(int self,int param_2); }
namespace OWL::TWindow { void __cdecl EvMove(int self); }
namespace OWL::TWindow { void __cdecl EvCompareitem(int self,undefined4 param_2,int param_3); }
namespace OWL::TWindow { void __cdecl EvDeleteitem(int self,undefined4 param_2,int param_3); }
namespace OWL::TWindow { void __cdecl EvDrawItem(int self,undefined4 ctrlId,int *drawInfo); }
namespace OWL::TWindow { void __cdecl EvMeasureItem(undefined4 *self,WPARAM ctrlId,int *measureInfo); }
namespace OWL::TWindow { void __cdecl EvShared_4371cc(int self); }
void __cdecl FUN_00437270(int param_1,int param_2,undefined4 param_3,HWND hWnd);
namespace OWL::TWindow { LRESULT __cdecl EvRegisteredMsg_4372e8(int self,int param_2,LPARAM lParam); }
namespace OWL::TWindow { bool __cdecl EvMouseWheel(int self,byte param_2,int param_3); }
namespace OWL::TWindow { void __cdecl EvHScroll(int self,int scrollCode,undefined4 thumbPos,HWND hWndCtl); }
namespace OWL::TWindow { void __cdecl EvVScroll(int self,int scrollCode,undefined4 thumbPos,HWND hWndCtl); }
namespace OWL::TWindow { bool __cdecl EvEraseBkgnd(int self,undefined4 hdc); }
namespace OWL::TWindow { uint __cdecl EvMsg_19(int self,HDC hdc,undefined4 param_3,int param_4); }
namespace OWL::TWindow { void __cdecl EvPaint(int self); }
namespace OWL::TWindow { void __stdcall Paint(void); }
namespace OWL::TWindow { bool __cdecl EvSetCursor(int self,int param_2,int param_3); }
namespace OWL::TWindow { void __cdecl EvLButtonDown(int self); }
void __cdecl FUN_00437880(int param_1);
namespace OWL::TWindow { void __cdecl Destroy(int self,undefined4 param_2); }
namespace OWL::TWindow { void __cdecl GetWindowClass(int self,undefined4 *param_2); }
namespace OWL::TWindow { char * __cdecl GetClassName(int self); }
void __cdecl FUN_00437a30(int param_1);
namespace OWL::TWindow { void __cdecl PerformCreate(int self,HMENU hMenu); }
namespace OWL::TWindow { undefined4 __cdecl Create(int self); }
namespace OWL::TWindow { void __cdecl Execute(int self); }
namespace OWL::TWindow { undefined4 __cdecl DoExecute(int self); }
namespace OWL::TWindow { void __cdecl SetupWindow(int self); }
namespace OWL::TWindow { void __stdcall CleanupWindow(void); }
namespace OWL::TWindow { undefined4 __cdecl Transfer(int self,int param_2); }
namespace OWL::TWindow { void __cdecl TransferData(int self); }
void __cdecl FUN_00437d74(int param_1);
namespace OWL::TWindow { bool __cdecl Register(int self); }
namespace OWL::TWindow { bool __cdecl CanClose(int self); }
namespace OWL::TWindow { void __cdecl CloseWindow(int self,undefined4 param_2); }
namespace OWL::TWindow { void __cdecl EvClose(int self); }
namespace OWL::TWindow { void __cdecl EvDestroy(int self); }
namespace OWL::TWindow { void __cdecl EvNCDestroy(int self); }
namespace OWL::TWindow { uint __cdecl EvQueryEndSession(int self); }
namespace OWL::TWindow { void __cdecl EvEndSession(int self,char param_2); }
namespace OWL::TWindow { void __cdecl EvChildinvalid(undefined4 self,HWND hWnd); }
int __cdecl FUN_004380cc(int param_1);
void __cdecl FUN_004380e4(int param_1);
bool __cdecl FUN_0043814c(undefined4 param_1,int param_2,uint *param_3);
undefined4 __cdecl FUN_00438164(int param_1);
void __cdecl FUN_004381f0(int param_1,int param_2);
int __cdecl FUN_00438220(int param_1,undefined *param_2);
void __cdecl FUN_00438260(int param_1,undefined *param_2);
int __cdecl FUN_00438294(int param_1,undefined *param_2);
undefined4 __cdecl FUN_004382e8(int param_1);
int __cdecl FUN_0043831c(int param_1);
LRESULT __cdecl FUN_00438338(int param_1,UINT msg,WPARAM wParam,LPARAM lParam);
LRESULT __cdecl FUN_00438354(int param_1,HWND hWnd,char param_3);
undefined4 __cdecl FUN_00438398(int param_1,char param_2);
void __cdecl FUN_004383d0(int param_1,UINT msg,WPARAM wParam,LPARAM lParam);
BOOL __cdecl FUN_00438410(int param_1,uint *param_2);
void __cdecl FUN_00438458(int param_1);
LONG __cdecl FUN_004384cc(int param_1,char param_2);
LONG __cdecl FUN_00438580(int param_1);
LONG __cdecl FUN_004385a0(int param_1,LONG newLong);
LONG __cdecl FUN_004385cc(int param_1);
LONG __cdecl FUN_004385ec(int param_1,LONG newLong);
undefined4 __cdecl FUN_00438618(int param_1,uint param_2,uint param_3,uint param_4);
undefined4 __cdecl FUN_00438670(int param_1,uint param_2,uint param_3,uint param_4);
void __cdecl FUN_004386c0(int param_1,LPRECT rect);
void __cdecl FUN_004386fc(int param_1,LPRECT rect);
bool __cdecl FUN_00438730(int param_1,HWND hWnd,int x,int y,int cx,int cy,uint flags);
namespace OWL::TWindow { bool __cdecl ShowWindow(int self,int cmdShow); }
undefined4 __cdecl FUN_0043888c(int param_1,int param_2,int param_3);
namespace OWL::TWindow { void __cdecl EvInitMenuPopup(int self,HMENU hPopupMenu,undefined4 index,char sysMenu); }
namespace OWL::TWindow { void __cdecl EvContextMenu(int self,undefined4 hWndChild,int x,int y); }
namespace OWL::TWindow { void __cdecl EvEnteridle(int self,int param_2,HWND hWnd); }
int __cdecl FUN_00438bd0(int param_1,int bar);
int __cdecl FUN_00438c10(int param_1,int bar,int param_3,byte redraw);
void __cdecl FUN_00438c6c(int param_1,int bar,int *param_3,int *param_4);
void __cdecl FUN_00438cbc(int param_1,int bar,int param_3,int param_4,byte redraw);
void __cdecl FUN_00438d0c(int param_1,int bar,UINT param_3,byte redraw);
UINT __cdecl FUN_00438d54(int param_1,int bar);
namespace OWL::TWindow { void __cdecl EnableTooltip(int self,byte wParam); }
void __cdecl FUN_00438e2c(int param_1,undefined4 param_2);
void __cdecl FUN_00438ed4(int param_1,int bar,LPCSCROLLINFO lpsi,byte redraw);
void __cdecl FUN_00438ef0(int param_1,int bar,LPSCROLLINFO lpsi);
undefined4 * __cdecl FUN_00438f08(undefined4 *lp);
namespace OWL::TXWindow { undefined4 * __cdecl TXWindow(undefined4 *self,int param_2,uint param_3); }
namespace OWL::TXWindow { undefined4 * __cdecl TXWindow_439068(undefined4 *self,int *param_2); }
namespace OWL::TXWindow { void __cdecl vf4(int self,int *param_2); }
namespace OWL::TXWindow { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXWindow { void __cdecl vf3(int *self); }
void __cdecl FUN_004391f0(int param_1,uint param_2);
namespace OWL::TXWindow { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TCacheEntryStr { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TCommandEnabler { undefined4 vf3(char *self,byte *param_2,undefined4 param_3); }
int * __cdecl FUN_00439340(int *param_1,undefined4 param_2);
namespace OWL::TWindowDC { int * __cdecl _dtor(int *self,byte dtorFlags); }
int * __cdecl FUN_0043942c(int *param_1);
int * __cdecl FUN_00439490(int *param_1,undefined4 *param_2);
int * __cdecl FUN_004394f4(int *param_1,undefined4 *param_2);
void __cdecl FUN_0043955c(HWND hWnd,LPCSTR text,LPCSTR caption,UINT type);
void __stdcall FUN_0043958f(void);
undefined4 * __cdecl FUN_004395e4(undefined4 *param_1);
namespace OWL::TApplicatData { void __cdecl _dtor(int self,byte dtorFlags); }
undefined * __stdcall FUN_00439654(void);
undefined * __stdcall FUN_004396f0(void);
namespace OWL::TEnumInfoStr { void __cdecl _dtor(int self,byte dtorFlags); }
void __stdcall FUN_004397b4(void);
undefined * __stdcall FUN_0043986c(void);
int * __cdecl FUN_004398dc(int *param_1,int param_2,uint *param_3,undefined4 *param_4,undefined *param_5);
namespace OWL::TApplication { void __cdecl _dtor(undefined4 *self,uint dtorFlags); }
namespace OWL::TBwccDll { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TCtl3dDll { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TDocument::TList { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace OWL::TApplication { undefined4 __cdecl vf12(int self); }
namespace OWL::TApplication { void __stdcall vf15(void); }
namespace OWL::TApplication { void __cdecl vf16(int self); }
namespace OWL::TApplication { void __cdecl vf17(int self); }
namespace OWL::TApplication { void __cdecl vf18(int self,undefined4 param_2); }
undefined4 __cdecl FUN_0043a224(int param_1,undefined4 param_2);
int __cdecl FUN_0043a314(int str,undefined4 param_2,uint *s);
namespace OWL::TApplication { void __cdecl vf2(int self); }
namespace OWL::TApplication { undefined4 __cdecl vf3(int self); }
namespace OWL::TApplication { undefined4 __cdecl vf4(int self); }
namespace OWL::TApplication { undefined4 __cdecl vf5(int self); }
namespace OWL::TApplication { undefined4 __cdecl vf6(undefined4 *self,MSG *pMsg); }
namespace OWL::TApplication { undefined4 __cdecl vf7(int self,int *lParam); }
namespace OWL::TApplication { void __cdecl vf8(int self,int param_2,char param_3); }
namespace OWL::TApplication { void __cdecl vf14(int self,byte wParam); }
void __cdecl FUN_0043b838(int param_1,undefined4 param_2);
namespace OWL::TApplication { void __cdecl EvActivateApp(int self,char param_2); }
namespace OWL::TApplication { void __cdecl Cmd24310(int self); }
namespace OWL::TApplication { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TApplication { undefined4 __cdecl vf1(int self); }
namespace OWL::TApplication { void __cdecl vf10(int self); }
void __cdecl FUN_0043babc(int param_1,int param_2);
void __cdecl FUN_0043bafc(int param_1,int param_2);
void __cdecl FUN_0043bb40(int param_1);
namespace OWL::TXInvalidMainWindow { undefined4 * __cdecl TXInvalidMainWindow(undefined4 *self); }
namespace OWL::TXInvalidMainWindow { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXInvalidMainWindow { void __cdecl vf3(int *self); }
void __stdcall FUN_0043bdc8(void);
namespace OWL::TXInvalidMainWindow { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined4 __stdcall FUN_0043be5c(HWND hWnd,int *param_2);
void __cdecl FUN_0043bea9(int *param_1);
undefined4 __cdecl FUN_0043bf00(int param_1,int param_2,uint param_3);
void __cdecl FUN_0043c050(int param_1,undefined4 param_2);
void __cdecl FUN_0043c074(int param_1,char param_2);
void __stdcall DestroyRichEditLoader_43c0c8(void);
undefined * __stdcall FUN_0043c108(void);
undefined4 * __cdecl FUN_0043c1a4(undefined4 *param_1);
namespace OWL::TBrushCache { void __cdecl _dtor(int self,byte dtorFlags); }
void __cdecl FUN_0043c26c(undefined4 *param_1,int param_2);
undefined1 __cdecl FUN_0043c2bc(uint *param_1,uint param_2,uint param_3);
void __cdecl FUN_0043c378(int param_1,int param_2);
undefined4 __cdecl FUN_0043c3b0(int param_1,int param_2);
undefined4 __cdecl FUN_0043c3ec(undefined4 *param_1,int param_2);
uint * __cdecl FUN_0043c430(uint *param_1,undefined4 param_2,int param_3);
uint * __cdecl FUN_0043c4b4(uint *param_1,uint *param_2,char param_3);
namespace OWL::TBrush { undefined4 __cdecl _dtor(uint *self,byte dtorFlags); }
uint * __cdecl FUN_0043c628(uint *param_1,int param_2,uint *param_3,uint *param_4);
void __cdecl FUN_0043c698(uint *param_1,int param_2,uint *param_3,uint *param_4);
HBRUSH __cdecl FUN_0043c6d4(int param_1,uint *param_2,uint *param_3);
namespace OWL::TButton { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TButton { int * __cdecl TButton(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5); }
namespace OWL::TButton { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TButton { char * __cdecl GetClassName(int *self); }
namespace OWL::TButton { void __cdecl SetupWindow(int *self); }
namespace OWL::TButton { undefined4 __cdecl EvGetDlgCode(int *self); }
namespace OWL::TButton { undefined4 __cdecl EvMsg_f4(int *self,int param_2); }
void __stdcall InitRichEditStreamer_43cb8c(void);
void __stdcall FUN_0043cbe2(void);
namespace OWL::TButton::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TButton { int * __cdecl TButton_43cc7c(int *self,int vbasesBuilt); }
undefined4 __cdecl EvRegisteredMsg_43cd98_43cd98(int param_1,int *param_2);
void __cdecl FUN_0043cdd0(int param_1,int *param_2);
namespace OWL::TButton::Streamer { void __cdecl vf2(int self,int *param_2); }
void __cdecl FUN_0043ce5c(int param_1,int *param_2);
undefined4 * __cdecl FUN_0043ceb0(int *param_1);
namespace OWL::TButton::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TCheckBox { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
void __cdecl EvGetDlgCode_43d010(int *param_1);
namespace OWL::TCheckBox { int * __cdecl TCheckBox(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,undefined4 param_5, int param_6); }
namespace OWL::TCheckBox { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TCheckBox { char * __cdecl GetClassName(int *self); }
namespace OWL::TCheckBox { undefined4 __cdecl Transfer(int *self,ushort *param_2,int param_3); }
void __cdecl FUN_0043d358(int *param_1,WPARAM wParam);
void __cdecl BNClicked_43d390(int *param_1);
namespace OWL::TControl { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TControl { int * __cdecl TControl(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10 ); }
namespace OWL::TControl { int * __cdecl TControl_43d5a8(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5); }
namespace OWL::TControl { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TControl { void __cdecl EvPaint(int *self); }
namespace OWL::TControl { void __cdecl EvCompareitem(int self); }
namespace OWL::TControl { undefined4 __cdecl vf1(int *self,int param_2); }
namespace OWL::TControl { void __cdecl EvDeleteitem(int self); }
namespace OWL::TControl { void __stdcall vf2(void); }
namespace OWL::TControl { void __cdecl EvMeasureItem(int self); }
namespace OWL::TControl { void __cdecl vf3(undefined4 self,int param_2); }
namespace OWL::TControl { void __cdecl EvDrawItem(int self); }
namespace OWL::TControl { void __cdecl vf4(int self,int param_2); }
namespace OWL::TControl { void __cdecl vf5(undefined4 self,int param_2); }
namespace OWL::TControl { void __cdecl vf6(undefined4 self,int param_2); }
namespace OWL::TControl { void __cdecl vf7(undefined4 self,int param_2); }
void __stdcall InitRichEditStreamer_43d988(void);
void __stdcall FUN_0043d9de(void);
namespace OWL::TControl::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TControl { int * __cdecl TControl_43da78(int *self,int vbasesBuilt); }
namespace OWL::TControl::Streamer { int * __cdecl vf1(int self,int *param_2,uint param_3); }
void __cdecl FUN_0043dbac(int param_1,int *param_2);
namespace OWL::TControl::Streamer { void __cdecl vf2(int self,int *param_2); }
void __cdecl FUN_0043dc3c(int param_1,int *param_2);
undefined4 * __cdecl FUN_0043dc90(int *param_1);
namespace OWL::TControl::Streamer { undefined4 __stdcall vf3(void); }
int * __cdecl FUN_0043dda8(undefined4 param_1);
undefined4 __cdecl FUN_0043de35(int param_1,int *param_2);
undefined4 __cdecl FUN_0043de8b(int param_1,int *param_2);
undefined4 __cdecl FUN_0043deb4(int param_1);
namespace OWL::TDecoratedFrame { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TDecoratedFrame { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TDecoratedFrame { void __cdecl TFrameWindow_vf16(int *self); }
namespace OWL::TDecoratedFrame { void __cdecl TFrameWindow_vf17(int *self); }
namespace OWL::TDecoratedFrame { int __cdecl TFrameWindow_vf7(int *self,int *window); }
namespace OWL::TDecoratedFrame { void __cdecl TFrameWindow_vf8(int *self,int param_2); }
namespace OWL::TDecoratedFrame { undefined4 __cdecl TFrameWindow_vf10(int *self,LPMSG lParam); }
namespace OWL::TDecoratedFrame { char * __cdecl vf2(int *self,uint param_2,uint *multiByteStr,char *multiByte,int param_5); }
namespace OWL::TDecoratedFrame { void __cdecl EvMenuSelect(int self,int menuItemId,uint flags,int hMenu); }
namespace OWL::TDecoratedFrame { void __cdecl EvSize(undefined4 *self,WPARAM sizeType,int *size); }
namespace OWL::TDecoratedFrame { void __cdecl EvEnteridle(undefined4 *self,int param_2,HWND hWnd); }
namespace OWL::TDecoratedFrame { undefined4 __cdecl TFrameWindow_vf14(int *self,int param_2,HWND hWnd,undefined4 param_4); }
namespace OWL::TDecoratedFrame { void __cdecl TFrameWindow_vf15(undefined4 *self,int *param_2); }
void __cdecl FUN_0043e9b0(int param_1,int param_2,int param_3);
void __cdecl FUN_0043eb34(int *param_1,int param_2,int param_3);
void __cdecl FUN_0043ecf8(int *param_1,int param_2,int param_3);
void __cdecl FUN_0043ef34(int *param_1,int param_2,int param_3);
namespace OWL::TDecoratedFrame { void __cdecl vf1(int *self,int param_2,int param_3); }
namespace OWL::TDecoratedFrame { undefined4 * __cdecl vf5(int self); }
namespace OWL::TDecoratedFrame { undefined4 __cdecl vf8(int *self); }
namespace OWL::TDecoratedFrame { undefined4 __cdecl TFrameWindow_vf4(int *self); }
namespace OWL::TDecoratedFrame { undefined4 __cdecl TFrameWindow_vf5(int *self); }
void __cdecl Child4453411_Notify4453432_43f3f9(int param_1);
void __cdecl FUN_0043f40e(int param_1);
void __cdecl FUN_0043f44d(int param_1,LPMSG lParam);
void __cdecl Child4514932_Notify4510180_43f48c(int param_1);
void __cdecl FUN_0043f4a1(int param_1);
namespace OWL::TDialog { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TDialog { int * __cdecl TDialog(int *self,int vbasesBuilt,undefined4 param_3,uint *param_4,int param_5); }
bool __cdecl FUN_0043f87c(int param_1);
void __cdecl FUN_0043f898(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
namespace OWL::TDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TDialog { bool __cdecl PreProcessMsg(int *self,LPMSG lParam); }
namespace OWL::TDialog { char * __cdecl GetClassName(int *self); }
namespace OWL::TDialog { void __cdecl GetWindowClass(int *self,int param_2); }
void __cdecl EvSetfont_43fbc4(int *param_1);
void __cdecl EvPaint_43fbe8(int *param_1);
void __cdecl EvMsg_19_43fbf8(int *param_1,HDC hdc,undefined4 param_3,int param_4);
void __cdecl EvMsg_400_43fc58(int *param_1);
bool __cdecl EvMsg_401_43fc6c(int *param_1);
void __cdecl EvMsg_402_43fc88(int *param_1);
namespace OWL::TDialog { bool __cdecl vf1(int *self,int param_2,undefined4 param_3); }
undefined1 __stdcall FUN_0043fd80(HWND hWnd,int param_2);
void __cdecl FUN_0043fe3c(int *param_1);
namespace OWL::TDialog { undefined4 __cdecl Create(int *self); }
namespace OWL::TDialog { void __cdecl PerformCreate(int *self,LPCDLGTEMPLATEA templateName); }
namespace OWL::TDialog { int __cdecl Execute(int *self); }
namespace OWL::TDialog { void __cdecl DoExecute(int *self); }
char __cdecl FUN_00440054(int *param_1);
namespace OWL::TDialog { undefined4 __cdecl vf2(int *self); }
namespace OWL::TDialog { void __cdecl SetupWindow(int *self); }
namespace OWL::TDialog { void __cdecl CloseWindow(int *self,undefined4 param_2); }
namespace OWL::TDialog { void __cdecl Destroy(int *self,INT_PTR result); }
void __cdecl FUN_004402b8(int *param_1,uint *param_2);
void __cdecl Cmd1_4402e0(int *param_1);
void __cdecl Cmd2_440334(int *param_1);
void __cdecl EvClose_440344(int *param_1);
namespace OWL::TControlEnabler { undefined4 * __cdecl TControlEnabler(undefined4 *self,undefined4 param_2,undefined4 param_3); }
namespace OWL::TControlEnabler { void __cdecl vf0(int self,byte enable); }
namespace OWL::TControlEnabler { void __cdecl vf1(int self,char *string_); }
namespace OWL::TControlEnabler { void __cdecl vf2(int self,WPARAM wParam); }
namespace OWL::TDialog { undefined4 __cdecl IdleAction(int *self,int param_2); }
void __cdecl FUN_00440590(int *param_1,undefined4 *param_2);
void __cdecl FUN_004405f8(undefined4 *param_1);
void __cdecl FUN_004406b0(undefined4 *param_1);
namespace OWL::TDib { void __cdecl _dtor(int *self,byte dtorFlags); }
void __cdecl FUN_00440750(int param_1,int param_2,uint *param_3);
int __cdecl FUN_004407a4(int param_1,uint *param_2,uint *param_3,char param_4);
void __cdecl FUN_00440850(int param_1,uint param_2,uint *param_3);
namespace OWL::TDib { undefined4 __cdecl vf1(int *self,int *param_2,char param_3); }
int * __cdecl FUN_00440b78(int *param_1,HMODULE hModule,LPCSTR name);
bool __cdecl FUN_00440c0c(int *param_1,HMODULE hModule,LPCSTR name);
namespace OWL::TDib { bool __cdecl vf2(undefined4 *self,undefined4 *param_2,char param_3); }
int * __cdecl FUN_00440cd0(int *param_1,int param_2,int param_3,uint cEntries,undefined2 param_5);
namespace OWL::TFloatingSlip { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TFloatingFrame { void __cdecl _dtor(int *self,uint dtorFlags); }
void __cdecl FUN_0044123c(int *param_1,int *param_2,int param_3);
undefined4 __cdecl FUN_0044127a(uint *param_1,uint *param_2);
uint * __cdecl FUN_004412fc(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6, uint param_7,uint param_8);
undefined4 * __cdecl FUN_0044137c(undefined4 *param_1,undefined4 param_2);
namespace OWL::TDvFileOpenDialog { int * __cdecl TDvFileOpenDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5); }
namespace OWL::TDvFileOpenDialog { void __cdecl vf1(int *self,int param_2,undefined4 param_3); }
namespace OWL::TDvFileSaveDialog { int * __cdecl TDvFileSaveDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5); }
namespace OWL::TDvFileSaveDialog { void __cdecl vf1(int *self,int param_2,undefined4 param_3); }
namespace OWL::TDocManager { void __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TDocManager { void __cdecl Cmd24331(int self); }
namespace OWL::TDocManager { void __cdecl Cmd24332(int self); }
namespace OWL::TDocManager { void __cdecl Cmd24333(int self); }
namespace OWL::TDocManager { void __cdecl Cmd24334(int self); }
namespace OWL::TDocManager { void __cdecl Cmd24335(int self); }
namespace OWL::TDocManager { void __cdecl Cmd24339(int self); }
namespace OWL::TDocManager { void __cdecl Cmd24341(int self); }
namespace OWL::TDocManager { void __cdecl _dtor(undefined4 *self,uint dtorFlags); }
int __cdecl FUN_004419a0(int param_1,int param_2,int param_3);
namespace OWL::TDocManager { int __cdecl vf1(int self,int param_2,undefined4 param_3,char param_4); }
namespace OWL::TDocManager { int __cdecl vf2(int self,int param_2,undefined4 param_3,undefined4 param_4,char param_5); }
namespace OWL::TDocManager { int __cdecl vf3(int self,int param_2,undefined4 param_3,int param_4); }
namespace OWL::TDocManager { char * __cdecl vf4(undefined4 self,int param_2,int param_3,uint *param_4); }
namespace OWL::TDocManager { undefined4 __cdecl vf5(int self,char *param_2,uint param_3); }
namespace OWL::TDocManager { int * __cdecl vf6(int self,int *param_2,int param_3,int param_4,uint param_5); }
int * __cdecl FUN_00441ff4(int param_1,int *param_2,int param_3,uint param_4);
namespace OWL::TDocManager { undefined4 __cdecl vf7(int self,int param_2); }
int __cdecl FUN_0044238c(undefined4 param_1,int param_2,int *param_3);
namespace OWL::TDocManager { undefined4 __cdecl vf8(int self,int *param_2); }
namespace OWL::TDocManager { undefined4 __cdecl vf9(int self,int *param_2); }
namespace OWL::TDocManager { int __cdecl vf10(int self,uint *param_2); }
undefined4 __cdecl FUN_00442690(uint *param_1,uint *param_2);
namespace OWL::TDocManager { int * __cdecl vf11(int self); }
int __cdecl FUN_004431f8(int param_1,char *param_2);
namespace OWL::TDocManager { void __cdecl vf19(int self,int param_2,uint param_3,uint param_4); }
namespace OWL::TDocManager { void __cdecl vf20(int self,WPARAM wParam,LPARAM lParam); }
namespace OWL::TDocManager { void __cdecl vf21(int self,WPARAM wParam,LPARAM lParam); }
namespace OWL::TDocManager { int __cdecl vf23(int self,int *param_2,int param_3); }
namespace OWL::TDocManager { undefined4 __cdecl vf24(int self,uint param_2,uint param_3,uint *param_4,char *n,uint param_6, char param_7,int param_8); }
namespace OWL::TDocManager { int __cdecl vf25(int self,undefined4 *param_2,int param_3); }
namespace OWL::TDocManager { undefined4 __cdecl vf26(int self); }
namespace OWL::TDocManager { void __cdecl vf22(int self,int param_2); }
namespace OWL::TDocManager { undefined4 __cdecl EvOwlcanclose(int self); }
namespace OWL::TDocManager { void __cdecl EvOwlpreprocmenu(int self,undefined4 param_2); }
namespace OWL::TDocManager { void __cdecl EvMsg_7ef6(int self); }
namespace OWL::TDocManager { void __cdecl CeCmd24331(undefined4 self,undefined4 *commandEnabler); }
namespace OWL::TDocManager { void __cdecl vf13(int self); }
namespace OWL::TDocManager { void __cdecl CeCmd24332(undefined4 self,undefined4 *commandEnabler); }
namespace OWL::TDocManager { void __cdecl vf12(int self); }
namespace OWL::TDocManager { void __cdecl CeCmd24339(int self,undefined4 *commandEnabler); }
namespace OWL::TDocManager { void __cdecl vf14(int self); }
namespace OWL::TDocManager { void __cdecl CeCmd24334(int self,undefined4 *commandEnabler); }
namespace OWL::TDocManager { void __cdecl vf16(int self); }
namespace OWL::TDocManager { void __cdecl CeCmd24333(int self,undefined4 *commandEnabler); }
namespace OWL::TDocManager { void __cdecl vf15(int self); }
namespace OWL::TDocManager { void __cdecl CeCmd24335(int self,undefined4 *commandEnabler); }
namespace OWL::TDocManager { void __cdecl vf17(int self); }
namespace OWL::TDocManager { void __cdecl CeCmd24341(int self,undefined4 *commandEnabler); }
namespace OWL::TDocManager { void __cdecl vf18(int self); }
namespace OWL::TDvFileOpenDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TDvFileSaveDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TDvOpenSaveData { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TDocument { undefined4 __stdcall vf1(void); }
namespace OWL::TDocument { undefined4 __stdcall vf2(void); }
namespace OWL::TDocument { undefined1 __stdcall vf3(void); }
namespace OWL::TDocument { bool __cdecl vf11(int self); }
namespace OWL::TDocument { undefined4 __stdcall vf16(void); }
namespace OWL::TDocument { undefined1 __stdcall vf22(void); }
void __cdecl FUN_0044474c(undefined4 *param_1);
namespace OWL::TAPointer_OWL_TDocTemplate_ptr { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __cdecl FUN_004447e4(int param_1,uint param_2);
void __cdecl FUN_004447f4(int param_1,uint param_2);
undefined * __cdecl FUN_00444804(int param_1);
namespace OWL::TDocTemplate { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined * __cdecl FUN_004448c8(int param_1);
undefined * __cdecl FUN_004448e8(int param_1);
undefined * __cdecl FUN_00444908(int param_1);
namespace OWL::TDocument { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace OWL::TDocument { undefined * __cdecl vf19(undefined4 self,int param_2); }
namespace OWL::TDocument { undefined * __cdecl vf18(undefined4 self,int param_2); }
namespace OWL::TDocument { int __cdecl vf17(undefined4 self,char *param_2); }
namespace OWL::TDocument { char * __cdecl vf20(int *self,undefined4 param_2,int *param_3,char *param_4); }
namespace OWL::TDocument { undefined4 __cdecl vf21(int *self,int param_2); }
namespace OWL::TDocument { void __cdecl vf7(int self); }
namespace OWL::TDocument { undefined4 __cdecl vf8(int *self,uint *param_2); }
namespace OWL::TDocument { void __cdecl vf9(int self,uint *param_2); }
undefined4 __cdecl FUN_00444da8(int param_1,int param_2);
void __cdecl FUN_00444e18(int param_1);
namespace OWL::TDocument { void __cdecl vf23(int self,int param_2); }
namespace OWL::TDocument { void __cdecl vf24(int self,int param_2); }
undefined4 __cdecl FUN_00444ee8(int param_1,int param_2);
int __cdecl FUN_00444f04(int param_1,int param_2);
undefined4 __cdecl FUN_00444fe0(int *param_1,int param_2);
namespace OWL::TDocument { char __cdecl vf5(int self,uint param_2); }
namespace OWL::TDocument { char __cdecl vf6(int self,uint param_2); }
char __cdecl FUN_00445124(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
undefined4 * __cdecl FUN_004451dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
namespace OWL::TDocument { bool __cdecl vf10(int self); }
namespace OWL::TDocument { bool __cdecl vf13(int *self); }
namespace OWL::TDocument { int * __cdecl vf14(int *self,undefined4 param_2); }
namespace OWL::TDocument { undefined4 __cdecl vf12(int self); }
namespace OWL::TDocument { undefined4 __cdecl vf4(int self); }
namespace OWL::TDocument { void __cdecl vf15(int self); }
undefined4 __cdecl FUN_004453d4(undefined4 *param_1,int param_2);
undefined4 __cdecl FUN_004453ec(int *param_1,int param_2);
void __cdecl FUN_00445414(int *param_1);
uint * __cdecl FUN_00445488(uint *param_1,uint *param_2,char param_3);
char * __cdecl FUN_00445516(char *param_1,int param_2,uint *param_3,char param_4);
namespace OWL::TEdit { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TEdit { void __cdecl Cmd24322(int *self); }
namespace OWL::TEdit { void __cdecl Cmd24323(int *self); }
namespace OWL::TEdit { void __cdecl Cmd24324(int self); }
namespace OWL::TEdit { void __cdecl Cmd24325(int *self); }
namespace OWL::TEdit { void __cdecl Cmd24326(int self); }
namespace OWL::TEdit { void __cdecl Cmd24321(int *self); }
namespace OWL::TEdit { int * __cdecl TEdit(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5,int param_6); }
namespace OWL::TEdit { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TEdit { void __cdecl NotifyAtChild_1280(int *self); }
namespace OWL::TEdit { uint __cdecl EvGetDlgCode(int *self); }
namespace OWL::TEdit { void __cdecl EvChar(int *self,int param_2); }
namespace OWL::TEdit { void __cdecl EvKeyDown(int *self,int param_2); }
namespace OWL::TEdit { void __cdecl EvKillFocus(int *self,HWND hWndGetFocus); }
namespace OWL::TEdit { void __cdecl EvSetFocus(int *self); }
namespace OWL::TEdit { undefined4 __cdecl NotifyAtChild_m722(int *self); }
namespace OWL::TEdit { void __cdecl EvChildinvalid(int *self); }
void __cdecl FUN_00445e1c(int *param_1);
namespace OWL::TEdit { void __cdecl vf9(int *self); }
namespace OWL::TEdit { bool __cdecl CanClose(int *self); }
namespace OWL::TEdit { void __cdecl CeShared_445ec0(int self,undefined4 *commandEnabler); }
namespace OWL::TEdit { void __cdecl CeCmd24324(int *self,undefined4 *commandEnabler); }
namespace OWL::TEdit { void __cdecl CeCmd24326(int *self,undefined4 *commandEnabler); }
namespace OWL::TEdit { void __cdecl CeCmd24321(int *self,undefined4 *commandEnabler); }
undefined4 __cdecl FUN_00445fe4(int *param_1,WPARAM wParam);
bool __cdecl FUN_00446028(int *param_1,undefined2 *lParam,uint param_3,WPARAM wParam);
LPSTR __cdecl FUN_0044609c(int *param_1,SIZE_T param_2);
void __cdecl FUN_00446158(int *param_1,LPCSTR param_2,char param_3);
namespace OWL::TEdit { int __cdecl vf16(int *self,int param_2,uint *param_3,char param_4,char param_5,char param_6); }
bool __cdecl FUN_0044634c(int *param_1);
bool __cdecl FUN_00446390(int *param_1);
namespace OWL::TEdit { void __cdecl GetSubText(int *self,int param_2,uint wParam4,uint wParam5); }
namespace OWL::TEdit { undefined * __stdcall GetClassName(void); }
namespace OWL::TEdit { void __cdecl SetupWindow(int *self); }
undefined1 __cdecl FUN_0044655c(int *param_1,char param_2);
void __cdecl FUN_004465dc(int param_1,undefined4 param_2);
namespace OWL::TEdit { int __cdecl Transfer(int *self,LPSTR string_,int param_3); }
void __stdcall InitRichEditStreamer_4467cc(void);
void __stdcall FUN_00446822(void);
namespace OWL::TEdit::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TEdit { int * __cdecl TEdit_4468bc(int *self,int vbasesBuilt); }
undefined4 __cdecl EvRegisteredMsg_4469d8_4469d8(int param_1,int *param_2);
namespace OWL::TEdit::Streamer { void __cdecl vf2(int self,int *param_2); }
undefined4 * __cdecl FUN_00446a38(int *param_1);
namespace OWL::TEdit::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TEditFile { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
void __cdecl Cmd24333_446b94(int param_1);
void __cdecl Cmd24334_446ba4(int param_1);
namespace OWL::TEditFile { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TEditFile { void __cdecl SetupWindow(int *self); }
int __cdecl FUN_00447024(int *param_1,uint *param_2);
namespace OWL::TEditFile { void __cdecl vf23(int *self); }
namespace OWL::TEditFile { void __cdecl vf26(int *self,uint *param_2); }
namespace OWL::TEditFile { void __cdecl vf24(undefined4 *self); }
namespace OWL::TEditFile { uint __cdecl vf25(int *self,int param_2); }
namespace OWL::TEditFile { undefined4 __cdecl vf27(int *self); }
namespace OWL::TEditFile { undefined4 __cdecl vf28(int *self); }
void __cdecl CeCmd24333_447dcc(int *param_1,undefined4 *param_2);
namespace OWL::TEditFile { undefined4 __cdecl vf29(int *self,int param_2); }
namespace OWL::TEditFile { uint __cdecl vf22(int *self); }
namespace OWL::TEditFile { void __cdecl CanClose(int self); }
void __stdcall InitRichEditStreamer_448418(void);
void __stdcall FUN_0044846e(void);
namespace OWL::TEditFile::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TEditFile { int * __cdecl TEditFile(int *self,int vbasesBuilt); }
namespace OWL::TEditFile::Streamer { int __cdecl vf1(int self,int *param_2); }
void __cdecl FUN_00448684(int param_1,int *param_2);
namespace OWL::TEditFile::Streamer { void __cdecl vf2(int self,int *param_2); }
void __cdecl FUN_00448714(int param_1,int *param_2);
undefined4 * __cdecl FUN_00448768(int *param_1);
namespace OWL::TEditFile::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TEditSearch { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TEditSearch { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TEditSearch { void __cdecl SetupWindow(int *self); }
void __cdecl FUN_00448ab4(int *param_1);
namespace OWL::TEditSearch { void __cdecl Cmd24351(undefined4 *self); }
namespace OWL::TEditSearch { void __cdecl Cmd24352(undefined4 *self); }
namespace OWL::TEditSearch { void __cdecl CeRange24351to24352(undefined4 self,undefined4 *commandEnabler); }
namespace OWL::TEditSearch { void __cdecl Cmd24353(int *self); }
namespace OWL::TEditSearch { void __cdecl CeCmd24353(int self,undefined4 *commandEnabler); }
namespace OWL::TEditSearch { undefined4 __cdecl EvRegisteredMsg_448fbc(int *self,undefined4 param_2,int param_3); }
namespace OWL::TFindDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TReplaceDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TFindReplaceDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
void __stdcall InitRichEditStreamer_44938c(void);
void __stdcall FUN_004493e2(void);
namespace OWL::TEditSearch::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TEditSearch { int * __cdecl TEditSearch(int *self,int vbasesBuilt); }
namespace OWL::TEditSearch::Streamer { undefined4 __cdecl vf1(int self,int *param_2); }
void __cdecl FUN_004495f4(int param_1,int *param_2);
namespace OWL::TEditSearch::Streamer { void __cdecl vf2(int self,int *param_2); }
void __cdecl FUN_0044968c(int param_1,int *param_2);
undefined4 * __cdecl FUN_004496e0(int *param_1);
namespace OWL::TEditSearch::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TXBadFormat { undefined4 * __cdecl TXBadFormat(undefined4 *self); }
int vshared_4498f4(...);   // not decompiled
void __stdcall FUN_00449914(void);
namespace OWL::TXBadFormat { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TXBadFormat { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXBadFormat { void __cdecl vf3(int *self); }
namespace OWL::TXBadFormat { undefined4 * __cdecl TXBadFormat_449af8(undefined4 *self,int *param_2); }
void __cdecl FUN_00449b4c(uint *param_1,uint *param_2,uint *param_3,uint param_4);
namespace OWL::TDiskFileHandle { undefined4 * __cdecl TDiskFileHandle(undefined4 *self,uint *s,undefined4 param_3); }
namespace OWL::TDiskFileHandle { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf1(int self); }
namespace OWL::TDiskFileHandle { int __cdecl vf2(int self,int param_2); }
namespace OWL::TDiskFileHandle { bool __cdecl vf4(int self); }
namespace OWL::TFileHandle { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TDiskFileHandle { undefined4 * __cdecl TDiskFileHandle_449f38(undefined4 *self,undefined4 param_2,uint *s,undefined4 param_4); }
namespace OWL::TDiskFileHandle { undefined4 * __cdecl vf5(int self); }
namespace OWL::TDiskFileHandle { void __stdcall vf3(void); }
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf6(int self); }
namespace OWL::TDiskFileHandle { DWORD __cdecl vf7(int self,LPVOID buffer,DWORD numberOfBytesToRead); }
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf8(int self,LPCVOID buffer,DWORD numberOfBytesToWrite); }
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf9(int *self); }
namespace OWL::TDiskFileHandle { DWORD __cdecl vf10(int self); }
namespace OWL::TDiskFileHandle { DWORD __cdecl vf11(int self); }
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf12(int *self); }
namespace OWL::TDiskFileHandle { DWORD __cdecl vf13(int self); }
namespace OWL::TDiskFileHandle { DWORD __cdecl vf14(int self); }
namespace OWL::TDiskFileHandle { DWORD __cdecl vf15(int self,LONG lDistanceToMove,LONG param_3,DWORD moveMethod); }
namespace OWL::TDiskFileHandle { DWORD __cdecl vf16(int self,LONG lDistanceToMove,DWORD moveMethod); }
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf17(int self); }
namespace OWL::TDiskFileHandle { bool __cdecl vf18(int self,DWORD fileOffsetLow,DWORD numberOfBytesToLockLow); }
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf19(int self,DWORD fileOffsetLow,DWORD numberOfBytesToUnlockLow); }
namespace OWL::TDiskFileHandle { bool __cdecl vf20(int self,DWORD fileOffsetLow,DWORD fileOffsetHigh,DWORD numberOfBytesToLockLow,DWORD numberOfBytesToLockHigh); }
namespace OWL::TDiskFileHandle { bool __cdecl vf21(int self,DWORD fileOffsetLow,DWORD fileOffsetHigh,DWORD numberOfBytesToUnlockLow,DWORD numberOfBytesToUnlockHigh); }
uint __cdecl FUN_0044a2f4(uint param_1);
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf22(int *self,uint *param_2); }
namespace OWL::TFile { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace OWL::TFile { bool __cdecl vf2(int self,uint *s,undefined4 param_3); }
namespace OWL::TFile { undefined4 __cdecl vf3(int self); }
namespace OWL::TFile { void __cdecl vf14(int self); }
namespace OWL::TFile { void __cdecl vf15(int self); }
namespace OWL::TFile { void __cdecl vf16(int self); }
int __cdecl FUN_0044a684(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_0044a6c6(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_0044a731(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
undefined4 __stdcall FUN_0044a79c(void);
int __cdecl FUN_0044a7a3(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_0044a857(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_0044a899(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_0044a904(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
undefined4 __stdcall FUN_0044a96f(void);
int __cdecl FUN_0044a976(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_0044aa2c(undefined4 *src,undefined4 *dest,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_0044aa54(undefined4 *src,undefined4 *dest,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_0044aa7c(int param_1);
int __cdecl FUN_0044aa9c(int *param_1,undefined4 param_2,int *param_3,int param_4);
undefined1 __cdecl FUN_0044abd4(int *param_1,undefined4 param_2,int *param_3,int param_4);
void __cdecl FUN_0044ad18(int *param_1,undefined4 param_2,int param_3,int param_4);
void __cdecl FUN_0044ad3c(int *param_1,undefined4 param_2,int param_3,int param_4);
namespace OWL::TFile { uint __cdecl vf19(int *self); }
namespace OWL::TFile { undefined2 __cdecl vf20(int *self); }
namespace OWL::TFile { undefined4 __cdecl vf21(int *self); }
namespace OWL::TFile { undefined4 __cdecl vf22(int *self); }
namespace OWL::TFile { void __cdecl vf23(int *self); }
namespace OWL::TFile { void __cdecl vf24(int *self); }
namespace OWL::TFile { void __cdecl vf26(int *self); }
namespace OWL::TFile { void __cdecl vf27(int *self); }
namespace OWL::TFile { void __cdecl vf28(int *self); }
namespace OWL::TFile { void __cdecl vf29(int *self); }
namespace OWL::TFile { void __cdecl vf30(int *self); }
namespace OWL::TFile { void __cdecl vf31(int *self); }
char * __cdecl FUN_0044aec8(char *param_1);
char * __cdecl FUN_0044aed8(char *param_1,char *param_2,int param_3);
char * __cdecl FUN_0044aef6(char *param_1,char *param_2,uint *param_3);
char * __cdecl FUN_0044af2e(char *param_1,char *param_2,int param_3);
char * __cdecl FUN_0044af4c(char *param_1,char *param_2,uint *param_3);
char * __cdecl FUN_0044af84(char *param_1,char *param_2,char *param_3);
undefined4 __cdecl FUN_0044afa8(int str,uint *param_2,char param_3);
int __cdecl FUN_0044bb88(int str,uint *param_2,char param_3);
void __cdecl FUN_0044bc98(int param_1);
int __cdecl FUN_0044bd08(int param_1,uint param_2);
bool __cdecl FUN_0044be7c(int param_1,uint param_2);
undefined4 * __cdecl FUN_0044beec(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
namespace OWL::TFindReplaceDialog::TData { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TFindReplaceDialog { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
void __cdecl FUN_0044c00c(int *param_1,int param_2);
namespace OWL::TFindReplaceDialog { int * __cdecl TFindReplaceDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7); }
namespace OWL::TFindReplaceDialog { void __stdcall vf4(void); }
namespace OWL::TFindReplaceDialog { void __cdecl vf1(int *self,int param_2,undefined4 param_3); }
namespace OWL::TFindReplaceDialog { void __cdecl EvNCDestroy(int *self); }
void __cdecl FUN_0044c224(int param_1,int param_2);
namespace OWL::TFindDialog { int * __cdecl TFindDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7); }
namespace OWL::TFindDialog { void __cdecl vf4(int *self); }
namespace OWL::TReplaceDialog { int * __cdecl TReplaceDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7); }
namespace OWL::TReplaceDialog { void __cdecl vf4(int *self); }
void __cdecl FUN_0044c80c(int param_1,int *param_2);
void __cdecl FUN_0044c88c(undefined4 *param_1,int *param_2);
uint __cdecl FUN_0044c8e4(HMENU hMenu,int param_2);
HICON __stdcall FUN_0044c928(void);
int __cdecl FUN_0044c9cb(int param_1);
bool __cdecl FUN_0044ca34(int param_1);
namespace OWL::TFrameWindow { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TMenuItemEnabler { void __cdecl vf0(int self,char param_2); }
namespace OWL::TMenuItemEnabler { void __cdecl vf1(int self,LPCSTR newItem); }
namespace OWL::TMenuItemEnabler { void __cdecl vf2(int self,int param_2); }
namespace OWL::TFrameWindow { int * __cdecl TFrameWindow(int *self,int vbasesBuilt,undefined4 param_3,uint *param_4,int param_5,char param_6, int param_7); }
void __cdecl FUN_0044cc70(int *param_1,int param_2,char param_3);
void __cdecl FUN_0044ccc0(int *param_1,undefined4 param_2);
namespace OWL::TFrameWindow { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TFrameWindow { void __cdecl EvInitMenuPopup(int *self,HMENU hPopupMenu,undefined4 index,char sysMenu); }
void __cdecl Child4509768_Notify4453474_44cfcc(int *param_1,int param_2);
namespace OWL::TFrameWindow { HWND __cdecl vf9(int *self); }
namespace OWL::TFrameWindow { undefined4 __cdecl EvCommand(int *self,int param_2,HWND hWnd2,undefined4 param_4); }
namespace OWL::TFrameWindow { void __cdecl EvCommandEnable(undefined4 *self,undefined4 *param_2); }
namespace OWL::TFrameWindow { undefined4 __cdecl PreProcessMsg(int *self,LPMSG lParam); }
namespace OWL::TFrameWindow { bool __cdecl vf2(int *self,HMENU hMenu); }
namespace OWL::TFrameWindow { undefined4 __cdecl vf1(int *self,uint *param_2); }
undefined4 __cdecl FUN_0044d2f0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 __cdecl FUN_0044d37c(int *param_1,undefined4 param_2,HANDLE param_3);
namespace OWL::TFrameWindow { undefined4 __cdecl vf6(int self); }
namespace OWL::TFrameWindow { int __cdecl vf7(int *self,undefined4 param_2); }
namespace OWL::TFrameWindow { void __cdecl RemoveChild(int *self,int param_2); }
namespace OWL::TFrameWindow { undefined4 __cdecl SetDocTitle(int *self,uint *param_2,uint param_3); }
namespace OWL::TFrameWindow { void __cdecl EvPaint(int *self); }
namespace OWL::TFrameWindow { bool __cdecl EvEraseBkgnd(int *self,undefined4 hdc); }
namespace OWL::TFrameWindow { HICON __cdecl EvQuerydragicon(int *self); }
int __cdecl FUN_0044d8dc(int *param_1);
namespace OWL::TFrameWindow { bool __cdecl HoldFocusHWnd(int *self,HWND hWnd,HWND hWnd2); }
namespace OWL::TFrameWindow { void __cdecl EvSetFocus(int *self); }
namespace OWL::TFrameWindow { void __cdecl EvParentNotify(int *self,int param_2,HWND hWnd); }
namespace OWL::TFrameWindow { bool __cdecl EvQuerynewpalette(int *self); }
namespace OWL::TFrameWindow { void __cdecl EvPalettechanged(int *self); }
undefined4 __cdecl FUN_0044daec(int *param_1,char param_2);
namespace OWL::TFrameWindow { void __cdecl SetupWindow(int *self); }
namespace OWL::TFrameWindow { void __cdecl CleanupWindow(int *self); }
void __cdecl FUN_0044e228(int *param_1,WPARAM wParam,LPARAM lParam);
namespace OWL::TFrameWindow { void __stdcall EvSize(int self,int sizeType,int *size); }
void __stdcall FUN_0044e25a(void);
namespace OWL::TFrameWindow { undefined4 __cdecl vf3(int *self,int *param_2); }
namespace OWL::TMenuDescr { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined4 __cdecl FUN_0044e630(int *param_1,int *param_2,int param_3);
namespace OWL::TMenuDescr { undefined4 __cdecl vf1(int self); }
void __stdcall FUN_0044e6b8(void);
DWORD * __cdecl FUN_0044e764(DWORD *param_1);
void __cdecl FUN_0044e7f8(DWORD *param_1,ushort languageId);
undefined4 __cdecl FUN_0044e870(int param_1);
void __cdecl FUN_0044e93c(int param_1,undefined4 param_2,uint param_3);
void __cdecl FUN_0044e9dc(int param_1,int param_2);
uint __cdecl FUN_0044ea78(int param_1);
undefined4 __cdecl FUN_0044eb20(int param_1,int param_2);
int __cdecl FUN_0044eb68(int param_1,int param_2);
undefined4 __cdecl FUN_0044eb8c(int param_1);
undefined4 __cdecl FUN_0044ebc4(LPCSTR name,LPCSTR type);
namespace OWL::TModule { undefined4 * __cdecl TModule(undefined4 *self,uint *libFileName,char param_3,char param_4,char param_5); }
namespace OWL::TModule { undefined4 * __cdecl TModule_44ed8c(undefined4 *self,uint *param_2,undefined4 param_3,char param_4); }
namespace OWL::TModule { undefined4 * __cdecl TModule_44ee00(undefined4 *self,uint *param_2,int param_3,undefined4 param_4,char param_5); }
namespace OWL::TModule { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined4 __cdecl FUN_0044ef18(LPCSTR name,LPCSTR type);
void __cdecl FUN_0044ef34(int param_1,uint *param_2);
void __cdecl FUN_0044efd0(int param_1,undefined4 param_2);
namespace OWL::TModule { void __cdecl vf1(int self,int *param_2,uint param_3,uint param_4); }
void __cdecl FUN_0044f0a4(int param_1,undefined4 param_2);
int __cdecl FUN_0044f0b4(int param_1,uint param_2,LPSTR multiByteStr,int multiByte);
int __cdecl FUN_0044f1ec(int param_1,int param_2,uint param_3);
HACCEL __cdecl FUN_0044fe7c(int param_1,LPCSTR name);
HMENU __cdecl FUN_0044fec8(int param_1,LPCSTR name);
HCURSOR __cdecl FUN_0044ff14(int param_1,LPCSTR name);
int * __cdecl FUN_0044ff60(int *param_1,int param_2,LPCSTR procName);
undefined * __stdcall FUN_00450210(void);
undefined4 __stdcall FUN_00450270(void);
void __stdcall FUN_004502b0(void);
undefined4 __stdcall FUN_004502e8(void);
undefined4 __stdcall FUN_0045032c(void);
namespace OWL::TXInvalidModule { undefined4 * __cdecl TXInvalidModule(undefined4 *self,undefined4 param_2); }
namespace OWL::TXInvalidModule { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXInvalidModule { void __cdecl vf3(int *self); }
void __cdecl FUN_0045063c(undefined4 param_1);
namespace OWL::TXInvalidModule { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __cdecl FUN_004507d4(int param_1,byte param_2);
void __cdecl FUN_00450824(int param_1,byte param_2);
void __stdcall InitRichEditStreamer_450854(void);
void __stdcall FUN_004508aa(void);
namespace OWL::TModule::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TModule { undefined4 * __cdecl TModule_450944(undefined4 *self); }
int * __cdecl FUN_00450984(int *param_1,undefined4 *param_2);
int * __cdecl FUN_004509d4(int *param_1,int *param_2);
namespace OWL::TModule::Streamer { int __cdecl vf1(int self,int *param_2); }
namespace OWL::TModule::Streamer { void __cdecl vf2(int self,int *param_2); }
undefined4 * __cdecl FUN_00450a74(int *module);
namespace OWL::TModule::Streamer { undefined4 __stdcall vf3(void); }
uint * __cdecl FUN_00450b7c(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6, uint param_7,uint param_8,uint param_9);
namespace OWL::TOpenSaveDialog::TData { void __cdecl _dtor(int self,byte dtorFlags); }
char * FUN_00450c98(char *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint *param_5);
namespace OWL::TOpenSaveDialog { undefined4 __cdecl vf14(undefined4 *self,int *param_2,undefined *param_3); }
void __cdecl FUN_00450d94(int *param_1,int param_2);
namespace OWL::TOpenSaveDialog { int * __cdecl TOpenSaveDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7); }
namespace OWL::TOpenSaveDialog { bool __cdecl vf1(int *self,int param_2,undefined4 param_3); }
namespace OWL::TOpenSaveDialog { undefined4 __stdcall vf15(void); }
namespace OWL::TFileOpenDialog { int * __cdecl TFileOpenDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7); }
namespace OWL::TFileOpenDialog { undefined4 __cdecl vf6(int self); }
namespace OWL::TFileSaveDialog { int * __cdecl TFileSaveDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7); }
namespace OWL::TFileSaveDialog { undefined4 __cdecl vf6(int self); }
namespace OWL::TScrollBar { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TScrollBar { int * __cdecl TScrollBar(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5); }
namespace OWL::TScrollBar { undefined4 __cdecl vf16(int self,int param_2,int param_3); }
namespace OWL::TScrollBar { char * __stdcall vf26(void); }
namespace OWL::TScrollBar { void __cdecl vf27(int *self); }
namespace OWL::TScrollBar { void __cdecl vf15(int *self,LPCSCROLLINFO lpsi,byte redraw); }
namespace OWL::TScrollBar { void __cdecl vf14(int *self,LPSCROLLINFO lpsi); }
namespace OWL::TScrollBar { undefined4 __cdecl vf10(int self); }
namespace OWL::TScrollBar { void __cdecl vf12(int self,int param_2); }
namespace OWL::TScrollBar { void __cdecl vf9(int self,undefined4 *param_2,undefined4 *param_3); }
namespace OWL::TScrollBar { void __cdecl vf11(int self,undefined4 param_2,undefined4 param_3); }
namespace OWL::TScrollBar { void __cdecl vf13(int self,int param_2); }
namespace OWL::TScrollBar { void __cdecl vf17(int self); }
namespace OWL::TScrollBar { void __cdecl vf18(int self); }
namespace OWL::TScrollBar { void __cdecl vf19(int self); }
namespace OWL::TScrollBar { void __cdecl vf20(int self); }
namespace OWL::TScrollBar { void __cdecl vf21(int self); }
namespace OWL::TScrollBar { void __cdecl vf22(int self); }
namespace OWL::TScrollBar { void __cdecl vf23(int self); }
namespace OWL::TScrollBar { void __cdecl vf24(int self); }
namespace OWL::TScrollBar { void __stdcall vf25(void); }
namespace OWL::TScrollBar { void __cdecl EvHScroll(int self,undefined4 param_2); }
namespace OWL::TScrollBar { void __cdecl EvVScroll(int self,undefined4 param_2); }
namespace OWL::TScroller { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TScroller { void __cdecl vf3(int *self); }
namespace OWL::TScroller { void __cdecl vf5(int *self,int param_2,int param_3); }
namespace OWL::TScroller { void __cdecl vf6(int *self,int param_2,int param_3); }
namespace OWL::TScroller { void __cdecl vf2(int *self,int param_2,int param_3); }
namespace OWL::TScroller { void __cdecl vf4(int *self); }
namespace OWL::TScroller { void __cdecl vf7(int self,int param_2,int *param_3); }
namespace OWL::TScroller { void vf8(undefined4 self,int param_2,int param_3,int *param_4); }
namespace OWL::TScroller { void __cdecl vf9(int *self,undefined4 param_2,int param_3); }
namespace OWL::TScroller { void __cdecl vf10(int *self,undefined4 param_2,int param_3); }
namespace OWL::TScroller { void __cdecl vf11(int self,int param_2,int param_3); }
namespace OWL::TScroller { undefined1 __cdecl vf14(int self); }
namespace OWL::TScroller { void __cdecl vf15(int *self); }
namespace OWL::TScroller { void __cdecl vf1(int self,undefined4 param_2); }
namespace OWL::TScroller { bool __cdecl vf12(int self,UINT sBflags,UINT arrows); }
namespace OWL::TScroller { void __cdecl vf13(int self,int bar,byte show); }
namespace OWL::TScroller { void __cdecl vf16(int self,int bar,UINT param_3,byte redraw); }
namespace OWL::TScroller { void __cdecl vf17(int self,int bar); }
namespace OWL::TScroller { void __cdecl vf18(int self,int bar,int *param_3,int *param_4); }
namespace OWL::TScroller { void __cdecl vf19(int self,int bar,int param_3,int param_4,byte redraw); }
namespace OWL::TScroller { void __cdecl vf20(int self,int bar); }
namespace OWL::TScroller { void __cdecl vf21(int self,int bar,int param_3,byte redraw); }
void __stdcall InitRichEditStreamer_45284c(void);
void __stdcall FUN_004528a2(void);
namespace OWL::TScroller::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TScroller { undefined4 * __cdecl TScroller(undefined4 *self); }
int * __cdecl FUN_0045297c(int *param_1,undefined4 *param_2);
int * __cdecl FUN_004529cc(int *param_1,int *param_2);
namespace OWL::TScroller::Streamer { int __stdcall vf1(int self,int *param_2); }
int __stdcall FUN_004529ee(void);
namespace OWL::TScroller::Streamer { void __cdecl vf2(int self,int *param_2); }
undefined4 * __cdecl FUN_00452c78(int *scroller);
namespace OWL::TScroller::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TStatic { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TStatic { int * __cdecl TStatic(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5,int param_6); }
namespace OWL::TStatic { void __cdecl EvSize(int *self,int param_2); }
namespace OWL::TStatic { char * __cdecl vf11(int *self); }
namespace OWL::TUrlLink { int __cdecl Transfer(int *self,LPSTR string_,int param_3); }
namespace OWL::TStatic { void __cdecl vf9(int *self); }
void __stdcall InitRichEditStreamer_453004(void);
void __stdcall FUN_0045305a(void);
namespace OWL::TStatic::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TStatic { int * __cdecl TStatic_4530f4(int *self,int vbasesBuilt); }
undefined4 __cdecl EvRegisteredMsg_453210_453210(int param_1,int *param_2);
namespace OWL::TStatic::Streamer { void __cdecl vf2(int self,int *param_2); }
undefined4 * __cdecl FUN_00453270(int *param_1);
namespace OWL::TStatic::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TTinyCaption { void __cdecl Find(int self,int *param_2,undefined *param_3); }
namespace OWL::TTinyCaption { void __cdecl _dtor(int *self,uint dtorFlags); }
undefined4 __cdecl EvNCHitTest_4534c4(int *param_1,int *param_2);
undefined4 __cdecl FUN_004534f8(int *param_1,int *param_2,undefined4 *param_3);
void __cdecl EvNCPaint_4536e8(int *param_1);
undefined4 __cdecl FUN_00453704(int *param_1);
undefined4 __cdecl EvNccalcsize_45377c(int *param_1,undefined1 param_2,int param_3);
undefined4 __cdecl FUN_004537ac(int *param_1,undefined4 param_2,int param_3);
void __cdecl EvNclbuttondown_4537fc(int *param_1,int param_2,ushort *param_3);
int __cdecl FUN_00453824(int *param_1,int param_2,ushort *param_3);
void __cdecl EvMouseMove_453b48(int *param_1,undefined4 param_2,LONG *param_3);
undefined4 __cdecl FUN_00453b70(int *param_1,undefined4 param_2,LONG *param_3);
void __cdecl EvLButtonUp_453d68(int *param_1,undefined4 param_2,LONG *param_3);
undefined4 __cdecl FUN_00453d90(int *param_1,undefined4 param_2,LONG *param_3);
undefined1 EvNcactivate_453ea0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined1 param_5);
undefined4 __cdecl FUN_00453ed8(int *param_1,undefined4 param_2,undefined1 *param_3);
namespace OWL::TTinyCaption { undefined4 __cdecl EvCommand(int *self,uint param_2,HWND hWnd,undefined4 param_4); }
undefined4 __cdecl FUN_00453f5c(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5);
void __cdecl EvSysCommand_453fa8(int *param_1,uint param_2);
undefined4 __cdecl FUN_00453fd0(int *param_1,uint param_2);
void __cdecl FUN_0045401c(undefined4 param_1,undefined4 *param_2,RECT *pRect,char param_4);
uint __cdecl FUN_00454384(undefined4 param_1,undefined4 *param_2,RECT *pRect,char param_4);
void __cdecl FUN_0045451c(undefined4 param_1,undefined4 *param_2,RECT *pRect);
void __cdecl FUN_00454764(undefined4 param_1,undefined4 *param_2,RECT *pRect,char param_4);
void __stdcall FUN_00454834(int *param_1,undefined4 *param_2,int *pRect,char param_4);
void __stdcall FUN_0045483a(void);
void __cdecl FUN_004549dc(int *param_1);
int * __cdecl FUN_00454dc8(int *param_1,int *param_2);
int * __cdecl FUN_00454e7c(int *param_1,int *param_2);
int * __cdecl FUN_00454ecc(int *param_1,int *param_2);
int * __cdecl FUN_00454f38(int *param_1,int *param_2);
void __cdecl FUN_00454f88(int *param_1);
namespace OWL::TValidator { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TValidator { void __stdcall vf1(void); }
namespace OWL::TValidator { undefined1 __stdcall vf2(void); }
namespace OWL::TValidator { undefined1 __stdcall vf3(void); }
namespace OWL::TValidator { undefined4 __stdcall vf4(void); }
namespace OWL::TValidator { undefined4 __stdcall vf5(void); }
void __stdcall InitRichEditStreamer_4551e8(void);
void __stdcall FUN_0045523e(void);
namespace OWL::TValidator::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TValidator { undefined4 * __cdecl TValidator(undefined4 *self); }
int * __cdecl FUN_00455318(int *param_1,undefined4 *param_2);
int * __cdecl FUN_00455368(int *param_1,int *param_2);
namespace OWL::TValidator::Streamer { undefined4 __cdecl vf1(int self,int *param_2); }
namespace OWL::TValidator::Streamer { void __cdecl vf2(undefined4 self,int *param_2); }
undefined4 * __cdecl FUN_004553c8(int *validator);
namespace OWL::TValidator::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TView { void __cdecl _dtor(undefined4 *self,uint dtorFlags); }
namespace OWL::TView { undefined * __cdecl vf9(undefined4 self,int param_2); }
namespace OWL::TView { undefined * __cdecl vf8(undefined4 self,int param_2); }
namespace OWL::TView { int __cdecl vf7(undefined4 self,char *param_2); }
namespace OWL::TView { char * __cdecl vf10(int self,int param_2,undefined4 *param_3,char *param_4); }
void __stdcall FUN_004556fc(void);
namespace OWL::TView { undefined4 __stdcall vf4(void); }
namespace OWL::TView { undefined4 __stdcall vf5(void); }
int * __cdecl FUN_00455738(uint *param_1,int param_2,undefined1 *param_3);
void __cdecl FUN_004557ea(int param_1,int param_2,int param_3);
namespace OWL::__TBarDescrGdNode { void __cdecl _dtor(int *self,byte dtorFlags); }
void __cdecl FUN_00455964(int param_1,int param_2);
namespace OWL::TBarDescr { void __stdcall _dtor(undefined4 *self,byte dtorFlags); }
void __stdcall FUN_00455a06(void);
void __cdecl FUN_00455aec(int param_1,char param_2);
undefined4 __cdecl FUN_00455b38(int *param_1);
namespace OWL::TBarDescr { undefined4 __cdecl vf1(int self,int param_2); }
namespace OWL::TBarDescr { undefined4 __cdecl vf2(int self,int param_2,int *param_3); }
namespace OWL::TBarDescr { undefined4 __cdecl vf3(int self,int *param_2); }
undefined4 __cdecl FUN_00456024(undefined4 param_1,int param_2);
void __cdecl FUN_00456114(int param_1,byte param_2);
void __cdecl FUN_0045625c(int param_1,byte param_2);
void __cdecl FUN_004563ac(int param_1,byte param_2);
void __cdecl FUN_004563fc(int param_1,byte param_2);
namespace std::logic_error { undefined4 * __stdcall logic_error(undefined4 *self,int param_2); }
undefined4 * __stdcall FUN_00456432(void);
void __stdcall FUN_00456514(void);
undefined * __stdcall FUN_00456558(void);
undefined4 __stdcall FUN_004565b0(void);
undefined * __stdcall GetDocTemplateHead(uint param_1);
undefined4 * __stdcall GetModulePtr(uint param_1);
void __stdcall FUN_00456678(void);
void __stdcall FUN_004566bc(HMODULE hModule,undefined4 param_2,uint *param_3,undefined4 param_4);
undefined4 * __cdecl calloc(int count,int size);
undefined4 __stdcall operator_delete(void);
void __stdcall operator_delete_array(void);
undefined4 __cdecl set_new_handler(undefined4 param_1);
int __stdcall operator_new(void);
int __stdcall operator_new_array(void);
void __stdcall FUN_004568e0(void);
void __stdcall FUN_00456940(void);
void __stdcall FUN_00456980(void);
void __cdecl _vector_delete_ldtc_(int param_1,int param_2,int param_3,uint param_4,undefined *param_5);
int __cdecl FUN_004569d8(int param_1,int param_2,int param_3,uint param_4,undefined *param_5);
int * __cdecl _vector_new_ldtc_(int *param_1,int param_2,int param_3,uint param_4,undefined *param_5);
bool FUN_00456cd0(int param_1,undefined4 *param_2,uint *param_3);
bool FUN_00456d3c(undefined4 *param_1,SIZE_T size);
undefined4 FUN_00456d64(LPVOID address,int param_2);
undefined4 FUN_00456db0(LPVOID address,SIZE_T size);
undefined4 FUN_00456dc8(LPVOID address);
undefined4 __cdecl FUN_00456e04(int *param_1,int *param_2,int *param_3);
undefined4 __stdcall FUN_00456e80(void);
undefined4 __stdcall malloc(void);
void __stdcall free(void);
undefined4 __stdcall FUN_00456ea4(void);
void __cdecl FUN_00456ebc(undefined4 param_1);
void __cdecl FUN_00456f04(undefined4 param_1);
void __cdecl FUN_00456f1c(undefined4 param_1);
void __cdecl FUN_00456f34(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_00456f74(void);
void __stdcall FUN_00456f78(void);
undefined4 __cdecl FUN_00456fb8(uint *param_1,uint param_2,uint param_3);
undefined4 __cdecl FUN_004570b8(uint *param_1,uint param_2);
undefined4 __cdecl FUN_004571a4(int param_1);
undefined4 __cdecl FUN_00457468(uint *param_1);
void __cdecl FUN_0045755c(int param_1);
void __cdecl FUN_00457588(int param_1);
int * __cdecl FUN_00457690(int param_1);
uint * __cdecl FUN_004576cc(uint param_1);
uint * __cdecl FUN_004576f4(uint param_1);
SIZE_T __stdcall FUN_004578cc(void);
void __stdcall FUN_004578e4(void);
int __cdecl FUN_00457944(int param_1,uint param_2);
uint * __cdecl FUN_00457a6c(uint *param_1,uint param_2);
uint * __cdecl FUN_00457b24(uint *param_1,uint param_2);
uint __cdecl FUN_00457bbc(int param_1);
void __stdcall FUN_00457bd8(void);
void __stdcall FUN_00457bdc(void);
void __cdecl FUN_00457ea0(int param_1);
void __cdecl FUN_00457ed8(int param_1);
namespace __rwstd::rb_tree_int_std_pair_const_int_std_string_rwstd_select1st_std_pair_const_int_std_string_int_std_less_int { void __cdecl _dtor(int self,byte dtorFlags); }
int __cdecl FUN_00457f7c(int param_1,int param_2);
int __cdecl FUN_00457fa0(int param_1);
int __cdecl FUN_00457fb4(int param_1);
int __cdecl FUN_00457fc0(int param_1,undefined4 param_2);
int __cdecl FUN_00457fec(int param_1,int param_2);
undefined4 * __cdecl FUN_0045800c(undefined4 *param_1,int param_2);
bool __cdecl FUN_0045813c(int param_1,int param_2);
int __cdecl FUN_00458158(int param_1);
int __cdecl FUN_0045816c(int param_1);
void __cdecl FUN_00458178(int param_1,int param_2);
bool __cdecl FUN_004581c8(int *param_1);
int __cdecl FUN_004581e0(int param_1);
int __cdecl FUN_004581ec(int param_1);
undefined4 __stdcall FUN_00458200(void);
int __cdecl FUN_00458204(int param_1);
bool __cdecl FUN_00458218(int param_1,int param_2);
undefined4 * __cdecl FUN_00458234(undefined4 *param_1,undefined4 *param_2);
int __cdecl FUN_00458274(int param_1);
undefined4 * __stdcall FUN_00458308(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
undefined4 __stdcall FUN_00458311(void);
void __cdecl FUN_00458c10(undefined4 *param_1,undefined4 param_2);
void __cdecl FUN_00458c20(int param_1,int param_2);
undefined4 __cdecl FUN_00458cb8(undefined4 param_1);
void __cdecl FUN_00458cc0(undefined4 *param_1,undefined4 *param_2);
int __cdecl FUN_00458cd8(int param_1);
int __cdecl FUN_00458d04(int param_1);
void __cdecl FUN_00458d30(int param_1,int param_2);
void __cdecl FUN_00458df8(int param_1,int param_2);
void __cdecl FUN_00458ec0(int param_1,int param_2,char param_3);
namespace std::allocator { undefined4 __cdecl allocator(undefined4 param_1); }
int __cdecl FUN_00458f3c(int param_1);
undefined4 __cdecl FUN_00458f48(undefined4 param_1,undefined4 param_2);
void __cdecl FUN_00458f50(undefined4 param_1,int param_2);
void __cdecl FUN_00458f60(int param_1);
void __cdecl FUN_00458fdc(int str);
undefined4 __cdecl FUN_00459074(int param_1);
namespace std::string { int __cdecl __getRepOf(int param_1); }
int __cdecl FUN_00459094(int *param_1);
int __cdecl FUN_004590a0(int *param_1);
undefined4 * __stdcall FUN_004590c4(void);
undefined4 * __cdecl FUN_004590cc(undefined4 *param_1);
undefined4 * __cdecl FUN_00459100(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_00459134(int *param_1);
namespace std::allocator { undefined4 __cdecl allocator_459154(undefined4 param_1); }
void __stdcall FUN_0045917c(void);
void __stdcall FUN_0045918c(void);
namespace std::allocator { undefined4 __cdecl allocator_459194(undefined4 param_1); }
namespace std::string { undefined4 __cdecl size(int self); }
void __stdcall FUN_004591d0(void);
int __cdecl FUN_004591e0(int param_1,int param_2,undefined4 *param_3);
int __cdecl FUN_00459204(int param_1,int param_2);
namespace std::allocator { undefined4 __cdecl allocator_459238(undefined4 param_1); }
void __cdecl FUN_00459260(int param_1);
undefined4 __cdecl FUN_004592d8(int param_1);
undefined4 __cdecl FUN_004592e4(int param_1);
int __cdecl FUN_004592f0(int param_1,int param_2,undefined4 *param_3);
int __cdecl FUN_00459314(int param_1,int param_2);
namespace std::allocator { undefined4 __cdecl allocator_459348(undefined4 param_1); }
namespace std::allocator { undefined4 __cdecl allocator_459370(undefined4 param_1); }
void __stdcall FUN_00459398(void);
namespace std::allocator { undefined4 __cdecl allocator_4593a8(undefined4 param_1); }
void __stdcall FUN_004593d0(void);
int __cdecl FUN_004593e0(int param_1,int *param_2);
int __cdecl FUN_0045943c(int param_1);
int * __cdecl FUN_00459448(int *param_1);
undefined4 __cdecl FUN_00459484(undefined4 *param_1);
undefined4 __cdecl FUN_00459490(int *param_1,uint param_2);
int * __cdecl FUN_004594a8(int *param_1);
undefined4 * __cdecl FUN_004594e8(undefined4 *param_1);
void __cdecl FUN_00459514(int param_1,uint *param_2,undefined4 param_3);
undefined4 * __stdcall FUN_0045954c(void);
undefined4 * __stdcall FUN_004595a0(void);
undefined * __stdcall FUN_004595f8(void);
undefined4 * __cdecl FUN_00459624(undefined4 *facet2,undefined4 param_2,char *param_3);
namespace std::locale::facet { undefined4 * __cdecl facet(undefined4 *self,undefined4 param_2,undefined4 param_3); }
int __cdecl FUN_004596d0(int param_1,char *param_2);
undefined4 * __cdecl FUN_0045970c(undefined4 param_1,uint *param_2,undefined4 param_3);
undefined4 * __cdecl FUN_00459790(undefined4 *facet,uint *param_2,undefined4 param_3);
undefined4 __cdecl FUN_004597ec(undefined4 param_1,uint *param_2);
int * __cdecl FUN_00459808(int *param_1,int param_2);
int __cdecl FUN_0045984c(int param_1,undefined4 param_2,int param_3);
int __cdecl FUN_004598b4(int param_1,int param_2,int *param_3);
int * __cdecl FUN_004598fc(int *param_1,int param_2,undefined4 *param_3);
namespace __rwstd::locale_vector_rwstd_rwcat_ptr { void __cdecl _dtor(int *self,byte dtorFlags); }
undefined4 __cdecl FUN_00459a04(int param_1);
int __cdecl FUN_00459a10(int *param_1,int param_2);
int * __cdecl FUN_00459a24(int *param_1,int param_2,undefined4 *param_3);
namespace __rwstd::locale_vector_rwstd_facet_imp_ptr { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace std::string { int __cdecl operator_assign(int self,int other); }
void __cdecl FUN_00459b44(int *param_1);
undefined4 __cdecl FUN_00459b5c(int param_1);
namespace std::string { int __cdecl assign_cstr(int self,uint *s); }
namespace __rwstd::except_msg_string { undefined4 __cdecl msgstr(undefined4 param_1); }
namespace std::logic_error { undefined4 * __cdecl logic_error_416de8(undefined4 *logicError,int str); }
bool __cdecl FUN_00459d40(char *param_1,char *param_2);
void __cdecl FUN_00459d58(undefined1 *param_1,undefined1 *param_2);
char * __cdecl FUN_00459d68(uint *s);
namespace std::string { int __cdecl string_from_cstr(int self,uint *s); }
undefined4 * __cdecl FUN_00459ea8(undefined4 *param_1,undefined4 *src,uint n);
int __cdecl FUN_00459ec8(int param_1,undefined4 param_2);
namespace std::string { int * __cdecl __getRep(undefined4 alloc,uint capacity,uint length); }
int __stdcall FUN_00459fc0(void);
namespace std::bad_alloc { undefined4 * __cdecl bad_alloc(undefined4 *self); }
undefined4 * __cdecl FUN_0045a06c(undefined4 *param_1,int param_2);
void __cdecl FUN_0045a0a0(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void __cdecl FUN_0045a0b8(undefined4 param_1,undefined4 *param_2);
undefined4 __cdecl FUN_0045a108(undefined4 param_1,undefined4 param_2);
undefined4 * __cdecl FUN_0045a168(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_0045a19c(undefined4 param_1,undefined4 param_2,undefined1 *param_3);
void __cdecl FUN_0045a1b4(undefined4 param_1,undefined1 *param_2);
void __cdecl FUN_0045a1d0(int *param_1,int param_2);
undefined4 __stdcall FUN_0045a1ec(void);
namespace std::string { int __cdecl __rep_data(int rep); }
int __cdecl FUN_0045a1fc(int str,uint pos,uint n1,uint s,uint param_5);
namespace std::string { int __cdecl replace(int self,uint pos,uint n1,uint s,uint n2,uint param_6, uint param_7); }
namespace std::out_of_range { undefined4 * __cdecl out_of_range(undefined4 *self,int what); }
namespace std::length_error { undefined4 * __cdecl length_error(undefined4 *self,int what); }
undefined4 * __cdecl FUN_0045a6ac(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 __cdecl FUN_0045a6cc(int param_1);
undefined4 __cdecl FUN_0045a6e4(int param_1);
namespace std::string { undefined4 __cdecl data(int self); }
namespace __rwstd::locale_vector_std_string { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace std::wstring { void __cdecl _dtor(int self,byte dtorFlags); }
void __cdecl FUN_0045a810(int str);
undefined4 __cdecl FUN_0045a8a8(int param_1);
namespace std::string { int __cdecl __getRepOf_45a8b4(int param_1); }
int __cdecl FUN_0045a8c8(int *param_1);
int __cdecl FUN_0045a8d4(int *param_1);
undefined * __stdcall FUN_0045a8f8(void);
undefined4 * __cdecl FUN_0045a900(undefined4 *param_1);
undefined4 * __cdecl FUN_0045a938(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_0045a96c(int *param_1);
namespace std::allocator { undefined4 __cdecl allocator_45a98c(undefined4 param_1); }
void __stdcall FUN_0045a9b4(void);
void __stdcall FUN_0045a9c4(void);
namespace std::allocator { undefined4 __cdecl allocator_45a9cc(undefined4 param_1); }
void __stdcall FUN_0045a9f4(void);
int __cdecl FUN_0045aa04(int param_1,int param_2,undefined4 *param_3);
int __cdecl FUN_0045aa28(int param_1,int param_2);
namespace std::allocator { undefined4 __cdecl allocator_45aa5c(undefined4 param_1); }
namespace std::string { undefined4 __cdecl size_45aa84(int self); }
int __cdecl FUN_0045aa98(int param_1);
int __cdecl FUN_0045ab08(int param_1,undefined4 *param_2);
int __cdecl FUN_0045ab44(int param_1);
int __cdecl FUN_0045abd0(int param_1,undefined4 *param_2);
int __cdecl FUN_0045ac0c(int param_1);
void __cdecl FUN_0045ac18(int *param_1);
namespace std::basic_filebuf_char { undefined4 * __cdecl basic_filebuf(undefined4 *self); }
undefined4 * __cdecl FUN_0045ad20(undefined4 *param_1,undefined4 param_2);
namespace std::basic_streambuf_char { undefined4 * __cdecl basic_streambuf(undefined4 *self); }
int * __cdecl FUN_0045add8(int *param_1);
void __cdecl FUN_0045ae40(int param_1,char param_2);
undefined4 __stdcall FUN_0045ae74(void);
namespace std::basic_filebuf_char { undefined4 * __cdecl basic_filebuf_45ae7c(undefined4 *self,int vbasesBuilt); }
namespace std::basic_filebuf_char { void __cdecl _dtor(int *self,byte dtorFlags); }
int * __cdecl FUN_0045b014(int *param_1);
undefined4 __stdcall FUN_0045b17c(void);
bool __cdecl FUN_0045b180(undefined4 param_1,int param_2);
undefined4 __cdecl FUN_0045b190(undefined4 param_1,uint param_2);
namespace std::basic_streambuf_char { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::basic_istream_char { undefined4 * __cdecl basic_istream(undefined4 *self,int vbasesBuilt); }
namespace std::basic_ostream_char { undefined4 * __cdecl basic_ostream(undefined4 *self,int vbasesBuilt); }
namespace std::basic_ios_char { undefined4 * __cdecl basic_ios(undefined4 *self); }
void __cdecl FUN_0045b330(int param_1,undefined4 param_2);
undefined4 __cdecl FUN_0045b380(int param_1);
undefined4 __cdecl FUN_0045b3e4(int *param_1);
void __cdecl FUN_0045b3fc(int param_1,uint param_2);
void __cdecl FUN_0045b414(int param_1,uint param_2);
undefined4 __cdecl FUN_0045b694(int param_1);
undefined4 __cdecl FUN_0045b6a0(int param_1);
int * __cdecl FUN_0045b6ac(int *param_1,LPCSTR fileName,uint param_3,uint param_4);
DWORD __cdecl FUN_0045b7b8(undefined4 param_1,uint param_2,LONG lDistanceToMove,int param_4);
void __cdecl FUN_0045b7d4(int param_1,uint param_2);
namespace std::basic_ostream_char { void __cdecl _dtor(undefined4 *self,uint dtorFlags); }
namespace std::basic_istream_char { void __cdecl _dtor(undefined4 *self,uint dtorFlags); }
namespace std::basic_ios_char { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::basic_ifstream_char { int * __cdecl basic_ifstream(int *self,int vbasesBuilt,LPCSTR fileName,uint param_4,uint param_5); }
void __cdecl FUN_0045ba08(int *param_1,LPCSTR fileName,uint param_3,uint param_4);
namespace std::basic_ifstream_char { void __cdecl _dtor(undefined4 *self,uint dtorFlags); }
namespace std::basic_istream_char { int * __cdecl basic_istream_45baf0(int *self,int vbasesBuilt,int param_3); }
undefined4 __cdecl FUN_0045bba0(int param_1);
namespace std::basic_ostream_char { int * __cdecl basic_ostream_45bbac(int *self,int vbasesBuilt,int param_3); }
undefined4 * __cdecl FUN_0045bc54(undefined4 *param_1,int *param_2,char param_3);
undefined4 __cdecl FUN_0045bdd8(int param_1);
bool __cdecl FUN_0045bde4(int *param_1,int *param_2);
bool __cdecl FUN_0045bdfc(int param_1,uint param_2,byte param_3);
bool __cdecl FUN_0045be3c(int param_1);
undefined4 __cdecl FUN_0045be50(int param_1);
int * __cdecl FUN_0045be5c(int *param_1);
undefined4 __cdecl FUN_0045be98(int *param_1);
undefined4 __cdecl FUN_0045bea8(int param_1);
undefined4 __cdecl FUN_0045beb4(int *param_1);
undefined1 __cdecl FUN_0045beec(undefined1 *param_1);
undefined4 __cdecl FUN_0045bef8(int param_1);
undefined4 __cdecl FUN_0045bf04(int param_1);
void __cdecl FUN_0045bf10(int *param_1);
undefined4 __cdecl FUN_0045bf54(int *param_1);
void __cdecl FUN_0045bfa0(int param_1,int param_2);
namespace std::basic_istream_char::sentry { void __cdecl _dtor(int self,byte dtorFlags); }
void __cdecl FUN_0045bfec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_0045c008(int param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_0045c020(int param_1,int param_2);
namespace std::basic_stringbuf_char { undefined4 * __cdecl basic_stringbuf(undefined4 *self,undefined4 param_2); }
namespace std::basic_stringbuf_char { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::basic_ofstream_char { int * __cdecl basic_ofstream(int *self,int vbasesBuilt,LPCSTR fileName,uint param_4,uint param_5); }
void __cdecl FUN_0045c1f0(int *param_1,LPCSTR fileName,uint param_3,uint param_4);
namespace std::basic_ofstream_char { void __cdecl _dtor(undefined4 *self,uint dtorFlags); }
undefined4 * __cdecl FUN_0045c2d8(undefined4 *param_1,int *param_2);
undefined1 __stdcall FUN_0045c3c0(void);
bool __cdecl FUN_0045c3cc(undefined *param_1);
bool __cdecl FUN_0045c3e0(undefined4 *param_1);
undefined4 __cdecl FUN_0045c418(undefined4 param_1,int *param_2);
namespace std::basic_ostream_char::sentry { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::basic_ostringstream_char { int * __cdecl basic_ostringstream(int *self,int vbasesBuilt,uint param_3); }
namespace std::basic_ostringstream_char { void __cdecl _dtor(undefined4 *self,uint dtorFlags); }
namespace std::string { int __cdecl string_from_buf(int self,undefined4 *s,uint n); }
int __cdecl FUN_0045c818(int param_1,int str,uint param_3,uint param_4);
undefined4 * __cdecl FUN_0045c990(undefined4 *facet2,undefined4 param_2);
int __cdecl FUN_0045c9d8(int param_1,int str);
namespace std::num_put_char_std_ostreambuf_iterator_char { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __cdecl FUN_0045cb4c(undefined4 *facet2,byte param_2);
void __cdecl FUN_0045cbf0(undefined4 *facet,byte param_2);
undefined4 * __cdecl FUN_0045cc50(int *param_1,undefined4 *param_2);
undefined4 * __cdecl FUN_0045ccf8(int *param_1);
void __cdecl FUN_0045cd5c(int *param_1);
int __stdcall FUN_0045ce6c(void);
int __stdcall FUN_0045cedc(void);
void __cdecl FUN_0045cf4c(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void __cdecl FUN_0045cf64(undefined4 param_1,undefined4 *param_2);
undefined4 * __cdecl FUN_0045cfb4(undefined4 *param_1,undefined4 *param_2);
int __cdecl FUN_0045d000(int param_1);
int __cdecl FUN_0045d0b8(int param_1,int *param_2,undefined4 *param_3,int param_4,undefined4 *param_5);
undefined4 __cdecl FUN_0045d464(undefined4 param_1,undefined4 param_2);
undefined4 __cdecl FUN_0045d46c(int param_1);
bool __cdecl FUN_0045d490(undefined4 param_1,int *param_2,int *param_3);
undefined4 * __stdcall FUN_0045d4a8(undefined4 *param_1,undefined4 *param_2,int *param_3);
undefined4 __stdcall FUN_0045d4ae(void);
int __cdecl FUN_0045d594(int param_1);
int __cdecl FUN_0045d5a8(int *param_1,uint param_2,undefined4 param_3);
int __cdecl FUN_0045d62c(int *param_1,uint param_2,undefined4 param_3);
void __cdecl FUN_0045d6b0(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __stdcall FUN_0045d6e8(void);
void __stdcall FUN_0045d770(void);
undefined4 * __cdecl FUN_0045d788(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_0045d7dc(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __stdcall FUN_0045d814(void);
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl num_put(undefined4 *self,undefined4 param_2); }
void __stdcall FUN_0045d8b0(void);
undefined4 * __cdecl FUN_0045d8c8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined1 __cdecl FUN_0045d91c(undefined1 *param_1);
undefined1 __cdecl FUN_0045d928(int param_1);
undefined1 __cdecl FUN_0045d934(int param_1);
namespace std::basic_filebuf_char { void __cdecl vf9(int *self); }
undefined4 __cdecl FUN_0045ddd0(int *param_1);
undefined4 * __cdecl FUN_0045dde0(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_0045ddf4(int *param_1);
int __cdecl FUN_0045de24(int *param_1);
undefined4 __cdecl FUN_0045de3c(int param_1);
undefined4 __cdecl FUN_0045de48(int param_1);
undefined4 __cdecl FUN_0045de54(int param_1);
undefined4 __cdecl FUN_0045de60(int param_1);
undefined4 __cdecl FUN_0045de6c(int *param_1,undefined1 param_2);
int * __cdecl FUN_0045deb8(int *param_1,int param_2);
int * __cdecl FUN_0045defc(int *param_1,int *param_2);
int * __cdecl FUN_0045df50(int *param_1);
bool __cdecl FUN_0045df8c(undefined4 param_1,uint param_2,char *buffer,int param_4,int param_5);
namespace std::basic_filebuf_char { int __cdecl vf10(int self,int param_2); }
namespace std::basic_filebuf_char { undefined4 __cdecl vf12(int *self); }
int * __cdecl FUN_0045e370(int *param_1,int param_2);
undefined4 * __cdecl FUN_0045e3c4(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_0045e3f0(undefined4 *param_1);
bool __cdecl FUN_0045e3fc(int *param_1,int *param_2);
undefined4 * __cdecl FUN_0045e414(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_0045e464(int *param_1,int *param_2);
bool __cdecl FUN_0045e4b0(int *param_1,int *param_2);
namespace std::basic_filebuf_char { void __cdecl vf7(int *self); }
undefined4 __cdecl FUN_0045e90c(int *param_1);
void __cdecl FUN_0045e93c(undefined4 *param_1,undefined4 param_2);
char * __cdecl FUN_0045e94c(undefined4 param_1,uint param_2,char *buffer,int param_4,int param_5);
int __cdecl FUN_0045e974(int param_1,char *param_2,char *param_3);
namespace std::basic_streambuf_char { void __stdcall vf9(void); }
namespace std::basic_streambuf_char { void __stdcall vf10(void); }
namespace std::basic_streambuf_char { undefined4 __stdcall vf12(void); }
namespace std::basic_streambuf_char { void __cdecl vf8(int *self); }
namespace std::basic_streambuf_char { void __stdcall vf7(void); }
namespace std::string { uint __cdecl compare(int str,uint param_2,uint param_3,byte *param_4,uint param_5); }
int __cdecl FUN_0045ebb4(byte *param_1,byte *param_2,int param_3);
namespace std::basic_stringbuf_char { int __cdecl vf9(int *self,undefined1 param_2); }
namespace std::basic_stringbuf_char { int __cdecl vf10(int self,int param_2); }
namespace std::basic_stringbuf_char { void __cdecl vf7(int self); }
namespace std::basic_filebuf_char { int __cdecl vf5(int self); }
namespace std::basic_filebuf_char { int __cdecl vf11(int *self,undefined1 *param_2,int param_3); }
undefined4 __cdecl FUN_0045f178(int param_1);
int __cdecl FUN_0045f184(int *param_1);
int * __cdecl FUN_0045f1c0(int *param_1,undefined1 *param_2,int param_3);
undefined1 __cdecl FUN_0045f3cc(int param_1);
namespace std::basic_streambuf_char { int __cdecl vf5(int self); }
namespace std::basic_streambuf_char { uint __cdecl vf6(int *self,undefined4 *param_2,uint param_3); }
namespace std::basic_streambuf_char { int __cdecl vf11(int *self,undefined1 *param_2,int param_3); }
namespace std::basic_stringbuf_char { uint __cdecl vf11(int *self,undefined4 *src,uint param_3); }
namespace std::string { void __cdecl __unshare(int self); }
undefined4 __cdecl FUN_0045f6bc(int param_1);
undefined4 __cdecl FUN_0045f6c8(int param_1,undefined4 param_2);
bool __cdecl FUN_0045f6dc(int param_1);
undefined1 __cdecl FUN_0045f768(int param_1);
int * __cdecl FUN_0045f774(int *param_1);
int __cdecl FUN_0045f7b4(int param_1,int *param_2);
undefined1 __cdecl FUN_0045f800(int param_1);
undefined1 __cdecl FUN_0045f80c(int param_1);
int * __cdecl FUN_0045f818(int *param_1);
undefined4 __cdecl FUN_0045f990(undefined4 param_1,int *param_2);
void __cdecl FUN_0045f9d8(undefined4 param_1,undefined *param_2);
int * __cdecl FUN_0045f9e8(int *param_1,undefined1 param_2);
int * __cdecl FUN_0045fb0c(int *param_1,int param_2,int param_3);
undefined4 __cdecl FUN_0045fc28(int *param_1);
int * __cdecl FUN_0045fc44(int *param_1,uint *s);
int __cdecl FUN_0045fefc(int str,int param_2);
int __cdecl FUN_0045ff3c(int str,int param_2);
undefined4 __cdecl FUN_004600b8(int param_1,undefined4 param_2);
namespace std::basic_filebuf_char { int * __cdecl vf2(int *self,int param_2,int param_3); }
namespace std::basic_streambuf_char { undefined4 __cdecl vf2(undefined4 self); }
namespace std::basic_stringbuf_char { int __cdecl vf2(int self,undefined4 *param_2,int param_3); }
namespace std::string { int __cdecl append(int self,int other); }
namespace std::string { int __cdecl replace_str(int self,uint pos,uint n1,int other); }
namespace std::string { void __cdecl insert(int self,uint pos,int other); }
namespace std::string { int __cdecl replace_fill(int self,uint pos,uint n1,uint count,undefined1 ch); }
undefined4 * __cdecl FUN_0046094c(undefined4 *param_1,uint n,undefined1 ch);
int __cdecl FUN_0046096c(int *param_1,uint param_2);
namespace std::string { int __cdecl substr(int result,int self,uint pos,uint n); }
namespace std::string { void __cdecl string_fill(int self,uint n); }
int __cdecl FUN_00460cd8(int param_1,int param_2);
int __cdecl FUN_00460d1c(int param_1,int param_2);
int __cdecl FUN_00460d60(int param_1,int param_2);
namespace std::basic_filebuf_char { int * __cdecl vf3(int *self,int *param_2,int param_3,int param_4); }
undefined4 __cdecl FUN_004613cc(int *param_1);
undefined4 * __cdecl FUN_004613dc(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_0046140c(int *param_1,int param_2);
void __cdecl FUN_0046141c(int *param_1,int param_2);
namespace std::basic_filebuf_char { int * __cdecl vf4(int *self,int *param_2); }
undefined4 * __cdecl FUN_00461614(undefined4 *param_1,int param_2);
int * __cdecl FUN_00461634(int *param_1,int *param_2);
namespace std::basic_streambuf_char { int * __cdecl vf3(int *self); }
namespace std::basic_streambuf_char { int * __cdecl vf4(int *self); }
namespace std::basic_stringbuf_char { int * __cdecl vf3(int *self,int *param_2,int param_3,int param_4,byte param_5); }
namespace std::basic_stringbuf_char { int * __cdecl vf4(int *self,int *param_2); }
void __cdecl FUN_00461d70(int str,uint param_2);
void __cdecl FUN_00461de0(int *param_1);
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf12(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9, undefined4 param_10); }
void __cdecl FUN_00461e6c(int param_1,undefined1 param_2);
undefined4 __cdecl FUN_004621d4(int param_1);
undefined4 __cdecl FUN_004621ec(int param_1);
void __cdecl FUN_00462200(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_00462228(undefined4 param_1);
int __cdecl FUN_00462230(int param_1,undefined1 param_2);
undefined4 __cdecl FUN_0046227c(int param_1);
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf2(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined4 param_8,char param_9); }
void __stdcall FUN_00462338(int param_1);
void __stdcall FUN_0046233e(void);
int __cdecl FUN_0046242c(int param_1,char param_2);
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf7(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9); }
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf5(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9, undefined4 param_10); }
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf10(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9); }
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf6(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9, undefined4 param_10,undefined2 param_11); }
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf3(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9); }
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf8(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined2 param_9); }
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf13(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9, undefined4 param_10); }
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf11(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9); }
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf4(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9); }
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf9(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined2 param_9); }
undefined4 * __cdecl FUN_0046286c(undefined4 *param_1,int *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_00462a74(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3);
undefined4 * __cdecl FUN_00462ab4(undefined4 *param_1,undefined4 *param_2);
int __cdecl FUN_00462af8(int str,byte *param_2,int param_3,int param_4);
void __cdecl FUN_00462c04(int param_1);
namespace std::basic_streambuf_char { void __cdecl vf1(int self,int *param_2); }
void __cdecl FUN_00462c5c(int *param_1);
undefined4 __cdecl FUN_00462da0(int param_1,uint param_2);
undefined4 * __cdecl FUN_00462dd0(undefined4 *param_1);
namespace __rwstd::facet_imp { undefined4 * __cdecl facet_imp(undefined4 *self,undefined4 param_2,undefined4 param_3); }
undefined4 __cdecl FUN_00462e7c(undefined4 param_1);
namespace std::exception { undefined4 * __cdecl exception(undefined4 *self); }
void __cdecl FUN_00462f14(int param_1);
namespace __rwstd::ref_counted { undefined4 * __cdecl ref_counted(undefined4 *self,undefined4 param_2); }
int __cdecl FUN_00462fa0(int param_1,char *param_2);
namespace __rwstd::facet_imp { char * vf2(int *self,byte *param_2,byte *param_3,byte *param_4,undefined4 param_5, byte *param_6,byte *param_7,byte *param_8,byte *param_9,byte *param_10, byte *param_11,undefined4 param_12,byte *param_13,byte *param_14,byte *param_15, byte *param_16,byte *param_17,byte *param_18,byte *param_19,byte *param_20, byte *param_21,byte *param_22,byte *param_23,byte *param_24,byte *param_25, undefined4 param_26,byte *param_27,byte *param_28,byte *param_29,byte *param_30, byte *param_31,byte *param_32,byte *param_33,byte *param_34,byte *param_35, byte *param_36,byte *param_37,byte *param_38,undefined4 param_39, undefined4 param_40,byte *param_41,byte *param_42,undefined4 param_43, byte *param_44,byte *param_45,byte *param_46,byte *param_47); }
namespace std::basic_filebuf_char { char vf13(char *self,undefined4 param_2,char param_3); }
void __cdecl FUN_00463790(int param_1,byte param_2);
namespace std::pair_const_int_std_string { void __cdecl _dtor(int self,byte dtorFlags); }
void __cdecl FUN_00463874(int param_1,byte param_2);
namespace __rwstd::punct_data_char { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::ios_base::failure { undefined4 * __cdecl failure_46392c(undefined4 *self,int param_2); }
namespace std::ios_base::failure { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::ios_base::failure { undefined4 __cdecl vf1(int self); }
undefined4 __cdecl FUN_00463b24(undefined4 param_1);
namespace std::ios_base::Init { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::ios_base { undefined4 * __cdecl ios_base(undefined4 *self); }
namespace std::ios_base { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __stdcall FUN_00463ddc(void);
void __stdcall FUN_00463ea8(void);
void __stdcall FUN_00463f60(void);
undefined1 * __cdecl FUN_00463f68(uint *param_1);
namespace std::locale::facet { undefined4 * __cdecl facet_4643c0(undefined4 *self,undefined4 param_2,undefined1 param_3,undefined4 param_4); }
void __cdecl FUN_004645f8(int param_1,int *param_2);
void __cdecl FUN_004647d4(undefined4 *refCounted,byte param_2);
uint __cdecl FUN_00464868(int param_1,uint param_2);
void __cdecl FUN_0046489c(int param_1,byte *param_2,byte *param_3);
uint __cdecl FUN_004648d8(int param_1,uint param_2);
void __cdecl FUN_0046490c(int param_1,byte *param_2,byte *param_3);
undefined1 __cdecl FUN_00464948(undefined4 param_1,undefined1 param_2);
int __cdecl FUN_00464950(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *dest);
undefined1 __cdecl FUN_00464974(undefined4 param_1,undefined1 param_2);
int __cdecl FUN_0046497c(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4, undefined4 *dest);
undefined4 __cdecl FUN_004649a0(char *param_1);
undefined4 * __cdecl FUN_00464a00(undefined4 *facet2,uint *param_2,undefined4 param_3);
void __cdecl FUN_00464bc0(undefined4 *refCounted,byte param_2);
uint * __cdecl FUN_00464c20(uint *param_1);
void __stdcall FUN_00464d74(void);
void __stdcall FUN_00464db0(void);
undefined4 * __cdecl FUN_00464de4(undefined4 *param_1,LPCSTR libFileName);
namespace __rwstd::__rwcat { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined4 __cdecl FUN_00464fb0(undefined4 *param_1,undefined4 param_2,UINT id,undefined4 param_4);
uint __cdecl FUN_0046526c(int param_1);
int * __cdecl FUN_004652a4(LPCSTR libFileName);
undefined4 __cdecl FUN_004653b0(int param_1,undefined4 param_2,UINT id,undefined4 param_4);
namespace std::map_int_std_string_std_less_int { void __cdecl _dtor(int self,byte dtorFlags); }
void __stdcall FUN_00465800(void);
namespace std::string { int __cdecl string(int self); }
namespace __rwstd::ref_counted { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
int * __cdecl FUN_004658e8(int *param_1);
namespace __rwstd::locale_imp { undefined4 * __cdecl locale_imp(undefined4 *self,int param_2,undefined4 param_3); }
namespace __rwstd::locale_imp { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined * __cdecl FUN_00465bb0(int param_1,uint param_2);
int * __cdecl FUN_00465be4(int *param_1,uint *param_2,int param_3);
namespace __rwstd::use_Clib_locale { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __stdcall FUN_00465da4(void);
int * __cdecl FUN_004661c0(int *param_1,int *param_2);
int __cdecl FUN_00466234(int str,int *param_2);
int * __cdecl FUN_004665a4(int *param_1,uint *param_2,char param_3,uint param_4,undefined *param_5);
void __cdecl FUN_00466744(int *param_1,int *param_2,uint *param_3);
void __cdecl FUN_00466804(undefined4 *refCounted,byte param_2);
undefined4 __cdecl FUN_00466868(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8);
undefined4 __cdecl FUN_00466884(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8);
undefined4 __stdcall FUN_004668a0(void);
undefined1 __stdcall FUN_004668ac(void);
undefined4 __stdcall FUN_004668b4(void);
uint __cdecl FUN_004668c0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5);
undefined4 __stdcall FUN_004668d4(void);
int __cdecl FUN_004668e0(int param_1,int param_2);
namespace std::runtime_error { undefined4 __cdecl vf1(int self); }
undefined4 __cdecl FUN_00466a0c(int str,int *param_2);
void __cdecl FUN_00466b50(int param_1);
void __cdecl FUN_00466b78(int param_1,undefined1 *param_2,char *param_3,char param_4);
void __cdecl FUN_00466bf0(int param_1);
void __cdecl FUN_00466c54(int param_1);
void __cdecl FUN_00466cb8(int param_1);
void __cdecl FUN_00466d14(int param_1);
void __cdecl FUN_00466d70(int param_1);
void __cdecl FUN_00466dcc(int param_1);
void __cdecl FUN_00466e28(int param_1);
void __cdecl FUN_00466e8c(int param_1);
undefined4 __cdecl FUN_00466ef0(int param_1,undefined1 *param_2,char param_3);
void __cdecl FUN_00466f80(int param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_00467000(int param_1);
int __cdecl FUN_00467068(int param_1,int param_2,char *param_3);
namespace __rwstd::except_msg_string { undefined1 * __cdecl format(undefined1 *exceptMsg,byte *format2); }
char * __cdecl FUN_00467104(char *param_1,UINT id);
namespace std::exception { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::bad_alloc { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::logic_error { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::domain_error { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::length_error { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::out_of_range { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::runtime_error { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
char * __cdecl memchr(char *s,char ch,int n);
short * __cdecl FUN_00467560(short *param_1,short param_2,int param_3);
undefined4 * __cdecl memcpy(undefined4 *dest,undefined4 *src,uint n);
undefined4 * __cdecl FUN_004675a4(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 * __cdecl memset(undefined4 *dest,undefined1 ch,uint n);
undefined2 * __cdecl FUN_0046767c(undefined2 *param_1,undefined2 param_2,int param_3);
char * __cdecl FUN_00467694(char *param_1,char *param_2);
char * __cdecl strchr(char *s,char ch);
int __cdecl FUN_00467724(char *param_1,char *param_2);
char * __cdecl FUN_00467770(char *param_1,char *param_2);
char * __cdecl strlen(uint *s);
char * __cdecl FUN_004677fc(char *param_1,char *param_2,uint param_3);
uint __cdecl FUN_0046786c(byte *param_1,byte *param_2,int param_3);
char * __cdecl thunk_memchr(char *param_1,char param_2,int param_3);
char * __cdecl thunk_strchr(char *param_1,char param_2);
char * __cdecl thunk_strchr_4678ad(char *param_1,char param_2);
char * __cdecl thunk_FUN_00467a3c(char *param_1,char *param_2);
uint * __cdecl thunk_strrchr(uint *param_1,char param_2);
uint * __cdecl thunk_strrchr_4678c5(uint *param_1,char param_2);
char * __cdecl thunk_FUN_00467ac4(char *param_1,char *param_2);
char * __cdecl thunk_FUN_00467ac4_4678d1(char *param_1,char *param_2);
int __cdecl FUN_004678d8(byte *param_1,byte *param_2,int param_3);
int __cdecl strcspn(char *s,char *reject);
undefined4 * __cdecl FUN_00467970(uint *param_1);
int __cdecl strcmp(char *s1,char *s2);
undefined4 * __cdecl strncpy(undefined4 *dest,uint *src,char *n);
char * __cdecl FUN_00467a3c(char *param_1,char *param_2);
uint * __cdecl strrchr(uint *s,char ch);
int __cdecl FUN_00467a94(char *param_1,char *param_2);
char * __cdecl FUN_00467ac4(char *param_1,char *param_2);
char * __cdecl FUN_00467b18(char *param_1,char *param_2);
int __cdecl FUN_00467b50(short *param_1);
short * __cdecl FUN_00467b68(short *param_1,short *param_2);
undefined4 __InitExceptBlockLDTC(int param_1);
undefined4 __cdecl FUN_00467c18(int param_1,int *param_2,undefined4 param_3,int param_4);
void __stdcall FUN_00467d6f(void);
undefined4 * __cdecl FUN_00467dc2(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5,int *param_6, uint *param_7,int param_8);
undefined4 __cdecl FUN_00468029(undefined4 *param_1,int param_2,int *param_3,int *param_4);
char * __cdecl FUN_004680cc(int param_1);
undefined4 __cdecl FUN_00468104(int *param_1,int *param_2);
undefined4 __cdecl FUN_004681e0(int *param_1,int *param_2,int param_3,undefined4 param_4);
namespace std::type_info { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined4 * __cdecl FUN_00468310(int param_1,int param_2,int param_3);
char * __cdecl FUN_00468420(int param_1);
undefined4 * __cdecl FUN_00468488(int param_1,int param_2,int *param_3,int *param_4,int param_5);
int __cdecl FUN_00468570(int param_1,int param_2,int *param_3);
namespace type_info_hash { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __stdcall FUN_004686b8(void);
void __stdcall FUN_004686e0(void);
void __stdcall FUN_00468784(void);
void __stdcall FUN_004687f8(void);
void __cdecl FUN_00468830(undefined4 *param_1);
void __cdecl FUN_0046887c(undefined4 *param_1);
undefined4 __stdcall FUN_004688a4(void);
LONG __cdecl FUN_004688b0(PEXCEPTION_RECORD exceptionRecord,PVOID targetFrame,PCONTEXT param_3);
void __cdecl FUN_004689a0(undefined4 *param_1);
void __cdecl FUN_004689bc(undefined4 *param_1);
undefined4 __cdecl FUN_004689cc(undefined4 param_1);
void __stdcall FUN_00468a18(void);
void __cdecl FUN_00468a2c(undefined4 *param_1);
void __cdecl FUN_00468a41(undefined4 *param_1);
void FUN_00468a7a(PVOID targetFrame,PEXCEPTION_RECORD exceptionRecord);
undefined4 __stdcall FUN_00468a8f(void);
undefined4 __cdecl access(LPCSTR path,byte mode);
undefined4 __cdecl FUN_00468ad4(uint param_1);
uint __cdecl FUN_00468b34(uint param_1);
bool __cdecl FUN_00468bbc(uint param_1);
bool __cdecl FUN_00468bec(HANDLE hFile);
DWORD __cdecl FUN_00468c04(uint param_1,LONG lDistanceToMove,int param_3);
int __cdecl FUN_00468c7c(LPCSTR fileName,uint param_2,uint param_3);
char * __cdecl FUN_00468e78(char *param_1,int param_2);
char * __cdecl FUN_00468ee4(uint param_1,char *buffer,char *numberOfBytesToRead);
int __cdecl FUN_00469014(LPCWSTR fileName,uint param_2,uint param_3);
int __cdecl FUN_00469210(uint param_1,char *buffer,uint numberOfBytesToWrite);
undefined4 __cdecl FUN_0046932c(undefined1 *param_1);
int __stdcall FUN_00469340(void);
undefined4 __cdecl FUN_00469378(uint param_1,LPVOID buffer,DWORD numberOfBytesToRead);
void __cdecl FUN_004693c0(uint param_1,char *buffer,char *numberOfBytesToRead);
void __cdecl FUN_004693dc(LPCWSTR fileName,uint param_2);
void __cdecl FUN_004693fc(LPCWSTR owner,uint key);
undefined4 __cdecl FUN_00469414(uint param_1,LPCVOID buffer,DWORD numberOfBytesToWrite);
void __cdecl FUN_0046945c(uint param_1,char *buffer,uint numberOfBytesToWrite);
undefined4 __cdecl thunk_access(LPCSTR fileName,byte param_2);
undefined4 __cdecl FUN_00469480(int *param_1,int mem,int param_3,int param_4);
undefined4 __cdecl thunk_FUN_00468ad4(uint param_1);
undefined4 __cdecl FUN_00469508(int *param_1);
undefined4 __cdecl FUN_00469598(int *param_1);
undefined4 * __cdecl FUN_00469618(undefined4 *param_1,int param_2,int *param_3);
int __stdcall FUN_00469748(void);
void __cdecl FUN_004697a4(undefined *param_1);
void __cdecl FUN_004697b4(undefined4 *param_1);
uint __cdecl FUN_004697c8(char *param_1,uint *param_2,undefined4 *param_3);
int * __cdecl FUN_004698a4(int *param_1,LPCSTR fileName,char *param_3,uint param_4);
undefined4 * __stdcall FUN_00469950(void);
int * __cdecl fopen(LPCSTR fileName,char *param_2);
uint __cdecl FUN_004699a8(byte *buffer,uint numberOfBytesToWrite,int *param_3);
int __cdecl FUN_00469a84(undefined4 *param_1);
undefined4 __cdecl fseek(int *param_1,LONG lDistanceToMove,int param_3);
DWORD __cdecl FUN_00469b44(undefined4 *param_1);
char * __cdecl FUN_00469bc4(char *param_1,LPCSTR fileName,uint param_3);
uint __cdecl FUN_00469c98(byte *buffer,uint param_2,uint param_3,int *param_4);
int __cdecl FUN_00469ccc(undefined4 param_1,undefined4 param_2);
uint __cdecl FUN_00469d0c(uint param_1,uint param_2,undefined4 param_3);
void __cdecl FUN_00469d74(uint param_1);
int __cdecl FUN_00469d90(int *param_1);
void __stdcall FUN_00469e2c(void);
undefined4 __cdecl FUN_00469f88(int param_1);
undefined4 __stdcall FUN_00469fec(void);
void __stdcall FUN_0046a000(void);
undefined4 __cdecl FUN_0046a034(undefined4 *param_1);
uint __cdecl FUN_0046a0a0(int *param_1);
uint __cdecl FUN_0046a0b8(int *param_1);
uint __cdecl FUN_0046a1a0(byte param_1,int *param_2);
DWORD __cdecl thunk_FUN_00468c04(uint param_1,LONG lDistanceToMove,int param_3);
char * __cdecl FUN_0046a2b8(char *param_1,char *param_2,ushort param_3);
char * __cdecl FUN_0046a308(char *fileName,ushort *param_2);
int __cdecl thunk_FUN_00468c7c(LPCSTR fileName,uint param_2,uint param_3);
char * __cdecl thunk_FUN_00468ee4(uint param_1,char *buffer,char *numberOfBytesToRead);
void __cdecl FUN_0046a364(int *param_1);
uint __cdecl FUN_0046a388(undefined *param_1,undefined *param_2,undefined4 param_3,uint param_4,int param_5, int *param_6,int *param_7);
undefined4 __cdecl setvbuf(int *param_1,int mem,int param_3,uint param_4);
uint __cdecl FUN_0046a5a0(undefined4 *src,uint param_2,int *param_3);
uint __cdecl sprintf(undefined1 *buf,byte *format);
void __cdecl FUN_0046a5f0(undefined1 *param_1,byte *param_2,uint *param_3);
undefined4 __cdecl FUN_0046a730(LPCSTR fileName);
void __cdecl FUN_0046a74c(int param_1);
void __cdecl FUN_0046a794(undefined1 param_1,int param_2);
void __cdecl FUN_0046a7c8(uint param_1,int param_2);
uint __cdecl FUN_0046a7fc(undefined4 param_1,undefined4 param_2,byte *param_3,int param_4,undefined4 param_5, uint *param_6);
int __cdecl thunk_FUN_00469210(uint param_1,char *buffer,uint numberOfBytesToWrite);
undefined ** __stdcall FUN_0046b198(void);
char * __cdecl FUN_0046b1a0(char *param_1,char *param_2,uint n);
undefined4 __cdecl FUN_0046b464(int param_1);
undefined4 __cdecl isalnum(uint ch);
bool __cdecl FUN_0046b4d0(uint param_1);
undefined4 __cdecl isalpha(uint ch);
undefined4 __cdecl FUN_0046b4fc(uint ch);
undefined4 __cdecl FUN_0046b510(uint ch);
undefined4 __cdecl FUN_0046b524(uint ch);
undefined4 __cdecl FUN_0046b53c(uint ch);
undefined4 __cdecl FUN_0046b550(uint ch);
undefined4 __cdecl FUN_0046b568(uint ch);
undefined4 __cdecl FUN_0046b57c(uint ch);
undefined4 __cdecl FUN_0046b590(uint ch);
undefined4 __cdecl FUN_0046b5a4(uint ch);
void __cdecl FUN_0046b5bc(ushort srcStr);
bool __cdecl FUN_0046b5d4(ushort param_1);
void __cdecl FUN_0046b5e8(ushort srcStr);
void __cdecl FUN_0046b600(ushort srcStr);
void __cdecl FUN_0046b614(ushort srcStr);
void __cdecl FUN_0046b628(ushort srcStr);
void __cdecl FUN_0046b640(ushort srcStr);
void __cdecl FUN_0046b654(ushort srcStr);
void __cdecl FUN_0046b66c(ushort srcStr);
uint __cdecl FUN_0046b680(ushort srcStr);
void __cdecl FUN_0046b694(ushort srcStr);
void __cdecl FUN_0046b6a8(ushort srcStr);
ushort __cdecl _isctype(uint ch,ushort mask);
uint __cdecl FUN_0046b704(WCHAR srcStr,uint param_2);
undefined4 __cdecl FUN_0046b75c(ushort param_1,LPCWSTR wideCharStr);
undefined4 __cdecl FUN_0046b80c(ushort param_1,uint *param_2);
uint __cdecl FUN_0046bd5c(int *param_1,byte *param_2);
int __cdecl FUN_0046bfb4(uint *param_1,ushort param_2);
void __cdecl FUN_0046c170(int param_1);
undefined4 __cdecl FUN_0046c51c(int *param_1,char *param_2);
undefined4 __cdecl FUN_0046c73c(uint *param_1,uint *param_2);
undefined4 __cdecl FUN_0046c8dc(LCID locale,LCTYPE lcType,undefined4 *param_3);
undefined4 __cdecl FUN_0046c938(LCID locale,LCTYPE lcType,undefined2 *param_3,int param_4);
undefined4 __cdecl FUN_0046c994(LCID locale,UINT codePage,undefined4 *param_3);
bool __cdecl FUN_0046ca7c(LCID locale,undefined2 *param_2);
bool __cdecl FUN_0046cbfc(LCID locale,undefined4 *param_2);
bool __cdecl FUN_0046d058(LCID locale,undefined4 *param_2);
undefined4 __stdcall FUN_0046d0e0(void);
undefined ** __stdcall FUN_0046d0ec(void);
byte * __cdecl FUN_0046d184(byte *param_1);
uint __cdecl tolower(uint ch);
uint __cdecl toupper(uint ch);
undefined4 __cdecl FUN_0046d250(byte *multiByteStr,int param_2);
undefined4 __cdecl FUN_0046d2cc(LPWSTR wideCharStr,byte *multiByteStr,int param_3);
int __cdecl FUN_0046d3a0(LPSTR multiByteStr,ushort wideCharStr);
char * __cdecl FUN_0046d414(LPWSTR wideCharStr,uint *multiByteStr,char *wideChar);
int __cdecl FUN_0046d540(short *param_1,int param_2);
uint __cdecl FUN_0046d57c(LPSTR multiByteStr,LPCWSTR wideCharStr,uint multiByte);
undefined4 __cdecl FUN_0046d720(ushort param_1,uint *param_2);
int FUN_0046d7d3(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5);
uint FUN_0046d896(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5);
void __cdecl thunk_FUN_0046e158(uint param_1,char *param_2,uint param_3);
void __cdecl FUN_0046d940(int param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4, undefined4 param_5,undefined4 param_6);
void __stdcall FUN_0046d9f0(void);
int __cdecl atoi(char *s);
void __cdecl FUN_0046dbe0(char *s);
undefined2 __stdcall FUN_0046dbf0(void);
uint __cdecl FUN_0046dc04(uint param_1,int param_2);
undefined4 __stdcall thunk_FUN_0046dc4c(void);
undefined4 __stdcall thunk_FUN_0046dc4c_46dc3a(void);
undefined4 __stdcall FUN_0046dc4c(void);
void __stdcall FUN_0046dc89(void);
void __stdcall FUN_0046dd54(void);
void __stdcall FUN_0046dd94(void);
undefined4 __stdcall __ftol(void);
void __cdecl FUN_0046ddd4(int param_1);
void __cdecl FUN_0046de04(longlong *param_1,longdouble *param_2);
ushort __cdecl FUN_0046de28(longdouble *param_1);
char * __cdecl FUN_0046de3c(int param_1,uint param_2,char *param_3,uint param_4,char param_5,char param_6);
void __cdecl FUN_0046def0(int param_1,undefined4 param_2,undefined4 param_3,ushort param_4);
void __cdecl FUN_0046e008(undefined4 param_1,int param_2);
char * __cdecl FUN_0046e078(uint param_1,char *param_2,uint param_3,char param_4,char param_5);
void __cdecl FUN_0046e0ec(uint param_1,char *param_2);
void __cdecl FUN_0046e108(uint param_1,char *param_2,uint param_3);
void __cdecl FUN_0046e138(uint param_1,char *param_2,uint param_3);
void __cdecl FUN_0046e158(uint param_1,char *param_2,uint param_3);
undefined4 __cdecl FUN_0046e180(int *param_1);
undefined4 __cdecl FUN_0046e1ac(int *param_1);
void __cdecl FUN_0046e1dc(undefined *param_1,undefined *param_2);
void __cdecl FUN_0046e1f4(double param_1,undefined4 param_2,uint param_3);
undefined4 __cdecl FUN_0046e3d0(undefined4 *param_1);
undefined4 __cdecl FUN_0046e3f8(uint *param_1,uint param_2);
uint __cdecl FUN_0046e428(char param_1,uint param_2,uint param_3);
byte * __cdecl FUN_0046e46c(longdouble *param_1,uint param_2,byte *param_3,byte param_4,char param_5,int param_6);
int __cdecl FUN_0046e6f4(int param_1,int param_2);
uint __cdecl FUN_0046e724(short param_1,uint param_2,uint param_3);
void __cdecl FUN_0046e770(longdouble *param_1,int param_2,ushort *param_3,ushort param_4,short param_5, int param_6);
int __cdecl FUN_0046ea28(int param_1,int param_2);
void __cdecl FUN_0046ea58(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5, int *param_6,undefined4 *param_7);
void __cdecl FUN_0046eea4(float *param_1,double *param_2,uint param_3);
void __cdecl FUN_0046ef3c(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5, int *param_6,undefined4 *param_7);
void __cdecl FUN_0046f384(float *param_1,double *param_2,uint param_3);
int __cdecl FUN_0046f41c(int *param_1);
void __cdecl FUN_0046f438(undefined4 param_1,int *param_2);
uint __cdecl FUN_0046f444(char *param_1,int *param_2,uint param_3);
int __cdecl FUN_0046f4d0(longdouble *param_1,uint param_2,uint *param_3,undefined4 *param_4,int param_5);
int __cdecl FUN_0046f7a4(longdouble *param_1,int param_2,uint *param_3,undefined2 *param_4,int param_5);
undefined4 __cdecl FUN_0046fa98(UINT codePage);
undefined4 __cdecl FUN_0046fbd4(uint param_1);
undefined4 __cdecl FUN_0046fc14(uint ch);
undefined4 __cdecl FUN_0046fc30(uint ch);
byte * __cdecl FUN_0046fc4c(byte *param_1,byte *param_2,uint param_3);
undefined4 __cdecl FUN_0046fca0(byte *param_1,byte *param_2,int param_3);
byte * __cdecl FUN_0046fd60(byte *param_1,uint param_2);
void __cdecl FUN_0046fdb8(uint *param_1,int param_2);
void __cdecl FUN_0046fe00(undefined4 param_1,undefined4 param_2,uint param_3);
undefined * __stdcall FUN_0046fe60(void);
void __cdecl FUN_0046feb0(LPCSTR fileName,uint *buffer);
undefined4 __stdcall FUN_0046ff18(undefined4 param_1,undefined4 *param_2);
undefined4 __stdcall FUN_0046ff2c(void);
void __cdecl FUN_0046ff70(uint *buffer);
void __cdecl FUN_0047008c(uint *buffer);
void __cdecl FUN_0047009c(uint *buffer);
void __stdcall vshared_470140(void);
void __cdecl FUN_00470150(undefined1 *param_1,undefined1 *param_2);
void __cdecl FUN_00470178(undefined1 *param_1,uint param_2);
void __cdecl FUN_0047035c(undefined1 *param_1,uint param_2,int param_3,undefined4 param_4);
void __stdcall FUN_00470388(void);
void __stdcall FUN_0047039c(void);
void __stdcall FUN_004703ac(void);
void __cdecl FUN_004703b0(int param_1,int param_2,UINT exitCode);
void __cdecl FUN_00470404(UINT exitCode);
void __cdecl FUN_0047041c(UINT exitCode);
char * __cdecl FUN_00470454(uint *param_1);
void __cdecl FUN_004704ac(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_004704c8(undefined4 param_1,undefined *param_2);
void __cdecl FUN_004704dc(undefined4 param_1,undefined *param_2);
void __cdecl FUN_004704f0(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4);
void __cdecl FUN_004705d4(uint *param_1,int param_2);
undefined4 __cdecl FUN_00470684(undefined4 param_1,uint *param_2,undefined *param_3);
void __cdecl FUN_004707f8(int *param_1,int *param_2);
undefined4 __cdecl FUN_0047086c(undefined4 param_1,short *param_2,undefined *param_3);
void __cdecl FUN_00470a1c(int *param_1,int *param_2);
undefined4 __stdcall FUN_00470b10(void);
int __cdecl FUN_00470c7c(int param_1);
undefined4 __cdecl FUN_00470c9c(int *param_1,undefined4 param_2,int param_3);
undefined4 __stdcall FUN_00470e7c(int param_1);
undefined4 __cdecl FUN_00470ea4(int param_1,undefined4 param_2);
undefined4 __cdecl FUN_00470f04(int param_1);
void __stdcall FUN_00470f74(UINT exitCode);
undefined4 __stdcall FUN_00470f84(void);
undefined4 __stdcall FUN_00470f88(void);
void __cdecl FUN_00470f8c(int *param_1,int param_2);
void __stdcall FUN_00471060(void);
void __cdecl FUN_004710cc(int param_1);
WORD __stdcall FUN_00471250(void);
void __stdcall FUN_00471278(DWORD tlsIndex);
void __stdcall FUN_00471288(DWORD tlsIndex);
void __stdcall FUN_00471298(DWORD tlsIndex,LPVOID tlsValue);
void __stdcall FUN_004712ac(void);
void __stdcall FUN_004712b4(void);
char * __stdcall FUN_004712c8(void);
void FUN_004714c3(undefined *UNRECOVERED_JUMPTABLE);
int __cdecl FUN_004714ca(uint param_1);
void __cdecl FUN_00471514(int param_1);
undefined4 __cdecl FUN_00471541(int *param_1,undefined4 param_2,int *param_3,byte param_4);
void __cdecl FUN_00471607(undefined4 param_1,undefined4 param_2,undefined *param_3,uint param_4);
int __cdecl FUN_00471715(char *param_1);
void __cdecl FUN_0047172d(undefined4 arguments,int param_2);
void __cdecl FUN_0047174a(undefined4 param_1,int param_2,byte param_3,undefined *param_4,uint param_5,int param_6 );
void __cdecl FUN_0047181a(undefined4 param_1,undefined *param_2,uint param_3);
void __cdecl __raiseException(uint *typeDesc,undefined4 *object,undefined4 objectDtor,undefined *copyCtor,uint copyCtorMask, undefined4 throwFlags,undefined4 throwFile,undefined4 throwLine,undefined4 throwReturn);
void __cdecl _ThrowExceptionLDTC(uint *typeDesc,undefined4 *object,undefined4 objectDtor,undefined *copyCtor,uint copyCtorMask, undefined4 throwFlags,undefined4 throwFile,undefined4 throwLine);
void __cdecl FUN_00471b1d(undefined4 throwFile,undefined4 throwLine);
void __cdecl FUN_00471b88(PVOID targetFrame,PEXCEPTION_RECORD exceptionRecord);
void __cdecl FUN_00471bc7(undefined4 param_1,int param_2,undefined *param_3,uint param_4);
void __cdecl FUN_00471c3c(int param_1);
void __stdcall FUN_00471cc4(void);
void __cdecl FUN_00471db5(int param_1,int param_2,int param_3,int *param_4,int param_5);
void __cdecl FUN_00472089(int param_1);
void __cdecl FUN_004721f4(int param_1);
void __cdecl FUN_00472207(undefined4 *param_1);
int * __cdecl FUN_00472223(int param_1,int param_2);
undefined4 __cdecl FUN_00472268(int *param_1,undefined4 *param_2);
void __cdecl FUN_004725c5(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5);
void __cdecl FUN_004726bc(int param_1,uint param_2,int *param_3,int *param_4);
void __cdecl FUN_00472707(int param_1,int param_2,uint param_3,uint param_4,int param_5,undefined4 param_6, int param_7);
void __cdecl FUN_004729b7(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5);
int __cdecl FUN_00472adb(int param_1,int *param_2,int param_3);
undefined4 __cdecl FUN_00472b62(int *param_1,int param_2,int param_3,int param_4);
uint __cdecl FUN_00472fe6(int param_1);
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
BOOL __stdcall import_DeleteFileA(LPCSTR lpFileName);
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
int __stdcall import_LoadStringA(HINSTANCE hInstance,UINT uID,LPSTR lpBuffer,int cchBufferMax);
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

// ---- globals (1107) ----
extern undefined * pcRam0000000c;   // 0x0000000c
extern undefined DAT_00402008;   // 0x00402008
extern undefined LAB_00402064;   // 0x00402064
extern undefined DAT_00402160;   // 0x00402160
extern undefined LAB_004021bc;   // 0x004021bc
extern undefined DAT_0040293c;   // 0x0040293c
extern undefined LAB_00402f00;   // 0x00402f00
extern undefined DAT_004039bc;   // 0x004039bc
extern undefined DAT_00403a74;   // 0x00403a74
extern undefined DAT_00403c1c;   // 0x00403c1c
extern undefined DAT_00403c70;   // 0x00403c70
extern undefined DAT_00403f08;   // 0x00403f08
extern undefined DAT_00404820;   // 0x00404820
extern undefined DAT_004049a0;   // 0x004049a0
extern undefined DAT_00404a1c;   // 0x00404a1c
extern undefined DAT_00404d74;   // 0x00404d74
extern undefined DAT_00404ef0;   // 0x00404ef0
extern undefined DAT_0040eb28;   // 0x0040eb28
extern undefined LAB_0040eb80;   // 0x0040eb80
extern undefined DAT_0041a984;   // 0x0041a984
extern undefined DAT_0041aedc;   // 0x0041aedc
extern undefined DAT_0041b138;   // 0x0041b138
extern undefined DAT_0041b788;   // 0x0041b788
extern undefined DAT_0041b820;   // 0x0041b820
extern undefined LAB_0041bf74;   // 0x0041bf74
extern undefined DAT_0041d640;   // 0x0041d640
extern undefined DAT_0041d680;   // 0x0041d680
extern undefined DAT_0041d6e8;   // 0x0041d6e8
extern undefined DAT_0041d778;   // 0x0041d778
extern undefined DAT_0041d840;   // 0x0041d840
extern undefined DAT_0041fd60;   // 0x0041fd60
extern undefined LAB_0041fdbc;   // 0x0041fdbc
extern undefined DAT_00421464;   // 0x00421464
extern undefined DAT_00421a94;   // 0x00421a94
extern undefined DAT_00423924;   // 0x00423924
extern undefined LAB_00423980;   // 0x00423980
extern undefined DAT_00427b9c;   // 0x00427b9c
extern undefined LAB_00427bf0;   // 0x00427bf0
extern undefined DAT_0042c11c;   // 0x0042c11c
extern undefined LAB_0042c170;   // 0x0042c170
extern undefined DAT_0042c594;   // 0x0042c594
extern undefined DAT_00430bf8;   // 0x00430bf8
extern undefined DAT_00430c54;   // 0x00430c54
extern undefined DAT_00434ef0;   // 0x00434ef0
extern undefined DAT_00438070;   // 0x00438070
extern undefined LAB_004380ac;   // 0x004380ac
extern undefined DAT_00439198;   // 0x00439198
extern undefined DAT_004392c8;   // 0x004392c8
extern undefined DAT_0043a6f8;   // 0x0043a6f8
extern undefined DAT_0043a718;   // 0x0043a718
extern undefined DAT_0043bd10;   // 0x0043bd10
extern undefined LAB_0043bd74;   // 0x0043bd74
extern undefined DAT_00440e5c;   // 0x00440e5c
extern undefined DAT_00449964;   // 0x00449964
extern undefined DAT_00450588;   // 0x00450588
extern undefined LAB_004505e8;   // 0x004505e8
extern undefined DAT_00464250;   // 0x00464250
extern undefined LAB_004642ac;   // 0x004642ac
extern undefined DAT_00466070;   // 0x00466070
extern undefined LAB_004660d4;   // 0x004660d4
extern undefined LAB_00467bef;   // 0x00467bef
extern undefined LAB_00468730;   // 0x00468730
extern undefined LAB_0046b140;   // 0x0046b140
extern undefined LAB_0046b170;   // 0x0046b170
extern undefined * PTR_DAT_0047427c;   // 0x0047427c
extern int _tls_index;   // 0x004742d3
extern int _DAT_004742d7;   // 0x004742d7
extern HMODULE _DAT_004742db;   // 0x004742db
extern undefined * PTR_s_A_file_named_s_already_exists_A_004742f0;   // 0x004742f0
extern undefined * PTR_s_Alphabet_mapping_file_error_at_l_00474300;   // 0x00474300
extern undefined DAT_00474358;   // 0x00474358
extern undefined DAT_00474513;   // 0x00474513
extern undefined DAT_00474671;   // 0x00474671
namespace DMDialog { extern undefined __entries; }   // 0x00474694  DAT_00474694
namespace DMApplication { extern pointer vftable; }   // 0x00474d70  PTR_FUN_00474d70
extern pointer PTR_LAB_00474dc4;   // 0x00474dc4
extern undefined * PTR_LAB_00474dd4;   // 0x00474dd4
extern pointer PTR_LAB_00474df4;   // 0x00474df4
namespace std::out_of_range { extern undefined * vftable; }   // 0x00474e04  PTR_FUN_00474e04
namespace std::exception { extern undefined * vftable; }   // 0x00474e18  PTR_FUN_00474e18
namespace std::logic_error { extern undefined * vftable; }   // 0x00474e2c  PTR_FUN_00474e2c
namespace std::length_error { extern pointer vftable; }   // 0x00474e40  PTR_FUN_00474e40
namespace DMDialog { extern undefined * vftable; }   // 0x00474e54  PTR_FUN_00474e54
extern undefined * PTR_LAB_00474eac;   // 0x00474eac
extern pointer PTR_LAB_00474ec8;   // 0x00474ec8
extern pointer PTR_LAB_00474ed4;   // 0x00474ed4
extern undefined * PTR_LAB_00474ee0;   // 0x00474ee0
namespace OWL::TStreamableBase { extern pointer vftable; }   // 0x00474f74  PTR_FUN_00474f74
namespace OWL::TEventHandler { extern pointer vftable; }   // 0x00474f84  PTR_FUN_00474f84
extern int g_writeFailed;   // 0x00474fd8  DAT_00474fd8
extern undefined4 DAT_00474fdc;   // 0x00474fdc
extern undefined2 DAT_00474fe0;   // 0x00474fe0
extern undefined1 DAT_00474fe2;   // 0x00474fe2
extern undefined DAT_00475204;   // 0x00475204
extern undefined DAT_00475208;   // 0x00475208
extern undefined DAT_0047520a;   // 0x0047520a
extern undefined DAT_0047520e;   // 0x0047520e
extern undefined DAT_0047524b;   // 0x0047524b
extern undefined DAT_00475319;   // 0x00475319
extern undefined DAT_0047537f;   // 0x0047537f
namespace std::bad_alloc { extern undefined * vftable; }   // 0x00476b30  PTR_FUN_00476b30
namespace DictionaryMaintainer { extern undefined * vftable; }   // 0x00476b44  PTR_FUN_00476b44
extern undefined DAT_00476b74;   // 0x00476b74
namespace TSDictionaryBuilderProgressBar { extern undefined * vftable; }   // 0x00477094  PTR_FUN_00477094
extern pointer PTR_LAB_004770c8;   // 0x004770c8
extern pointer PTR_LAB_004770d4;   // 0x004770d4
namespace TSDictionaryBuilderProgressBar { extern undefined * vftable_TWindow; }   // 0x004770e0  PTR_LAB_004770e0
extern undefined DAT_00477368;   // 0x00477368
extern undefined DAT_0047766d;   // 0x0047766d
extern undefined DAT_004776f8;   // 0x004776f8
extern char DAT_00477d50;   // 0x00477d50
extern undefined DAT_00477e14;   // 0x00477e14
extern char DAT_00477e18;   // 0x00477e18
extern undefined4 DAT_00477e74;   // 0x00477e74
extern char DAT_00477e78;   // 0x00477e78
namespace OWL::TRichEdit { extern undefined __entries; }   // 0x00477ed4  DAT_00477ed4
namespace OWL::TRichEdit::Streamer { extern undefined * vftable; }   // 0x00478230  PTR_FUN_00478230
namespace OWL::TStreamer { extern undefined * vftable; }   // 0x0047824c  PTR_FUN_0047824c
namespace OWL::TNewStreamer { extern undefined * vftable; }   // 0x00478268  PTR_FUN_00478268
namespace OWL::TEditSearch { extern undefined * vftable; }   // 0x00478284  PTR_FUN_00478284
extern pointer PTR_LAB_004782e4;   // 0x004782e4
extern pointer PTR_LAB_004782f0;   // 0x004782f0
namespace OWL::TEditSearch { extern undefined * vftable_TWindow; }   // 0x004782fc  PTR_LAB_004782fc
namespace OWL::TEditFile { extern undefined * vftable; }   // 0x00478390  PTR_FUN_00478390
extern pointer PTR_LAB_00478410;   // 0x00478410
extern pointer PTR_LAB_0047841c;   // 0x0047841c
namespace OWL::TEditFile { extern undefined * vftable_TWindow; }   // 0x00478428  PTR_LAB_00478428
namespace OWL::TRichEdit { extern undefined * vftable; }   // 0x004784bc  PTR_FUN_004784bc
extern pointer PTR_LAB_0047853c;   // 0x0047853c
extern pointer PTR_LAB_00478548;   // 0x00478548
extern undefined * PTR_LAB_00478554;   // 0x00478554
extern char DAT_004785f1;   // 0x004785f1
extern FARPROC DAT_004785fc;   // 0x004785fc
extern char DAT_00478600;   // 0x00478600
extern char DAT_0047863b;   // 0x0047863b
namespace OWL::TXOwl { extern undefined * vftable; }   // 0x00478b54  PTR_FUN_00478b54
namespace OWL::TCommCtrlDll { extern pointer vftable; }   // 0x00478b74  PTR_FUN_00478b74
extern char DAT_00478b84;   // 0x00478b84
extern undefined1 DAT_00478b86;   // 0x00478b86
extern char DAT_00478b87;   // 0x00478b87
extern undefined1 DAT_00478b8a;   // 0x00478b8a
extern char DAT_00478b8b;   // 0x00478b8b
extern char DAT_00478b9c;   // 0x00478b9c
extern char DAT_00478b9d;   // 0x00478b9d
extern char DAT_00478b9e;   // 0x00478b9e
extern char DAT_00478b9f;   // 0x00478b9f
extern char DAT_00478ba0;   // 0x00478ba0
extern char DAT_00478ba1;   // 0x00478ba1
extern char DAT_00478ba2;   // 0x00478ba2
extern char DAT_00478ba3;   // 0x00478ba3
namespace std::locale::facet { extern pointer vftable; }   // 0x00478df4  PTR_FUN_00478df4
extern char DAT_00478e04;   // 0x00478e04
namespace OWL::TAppDictPidImp { extern undefined * vftable; }   // 0x00478f90  PTR_FUN_00478f90
namespace OWL::TAppDictImp { extern undefined * vftable; }   // 0x00478fb8  PTR_FUN_00478fb8
namespace OWL::TAppDictInstImp { extern undefined * vftable; }   // 0x00478fe0  PTR_FUN_00478fe0
extern char DAT_004791f0;   // 0x004791f0
namespace OWL::TButtonGadgetEnabler { extern undefined * vftable; }   // 0x00479408  PTR_FUN_00479408
namespace OWL::TButtonGadget { extern undefined * vftable; }   // 0x00479420  PTR_FUN_00479420
namespace OWL::TCelArray { extern pointer vftable; }   // 0x004796fc  PTR_FUN_004796fc
extern char DAT_00479708;   // 0x00479708
extern char DAT_00479709;   // 0x00479709
extern char DAT_0047970a;   // 0x0047970a
extern char DAT_0047970b;   // 0x0047970b
extern char DAT_0047970c;   // 0x0047970c
extern char DAT_0047970d;   // 0x0047970d
extern char DAT_0047970e;   // 0x0047970e
extern undefined4 DAT_00479713;   // 0x00479713
extern undefined DAT_00479857;   // 0x00479857
extern undefined DAT_004799d8;   // 0x004799d8
extern int DAT_00479aec;   // 0x00479aec
namespace OWL::TDiagBase { extern undefined * vftable; }   // 0x00479b4c  PTR_FUN_00479b4c
namespace OWL::TDiagGroupDef { extern pointer vftable; }   // 0x00479b60  PTR_FUN_00479b60
namespace OWL::TXClipboard { extern undefined * vftable; }   // 0x00479c48  PTR_FUN_00479c48
extern char DAT_00479c5c;   // 0x00479c5c
extern char DAT_00479c5f;   // 0x00479c5f
extern char DAT_00479c60;   // 0x00479c60
extern char DAT_00479c61;   // 0x00479c61
extern char DAT_00479c62;   // 0x00479c62
extern char DAT_00479c66;   // 0x00479c66
extern char DAT_00479c67;   // 0x00479c67
namespace OWL::TCommonDialog { extern undefined __entries; }   // 0x00479d3c  DAT_00479d3c
namespace OWL::TCommonDialog { extern undefined * vftable; }   // 0x00479df0  PTR_FUN_00479df0
extern pointer PTR_LAB_00479e34;   // 0x00479e34
extern pointer PTR_LAB_00479e40;   // 0x00479e40
namespace OWL::TCommonDialog { extern undefined * vftable_TWindow; }   // 0x00479e4c  PTR_LAB_00479e4c
namespace OWL::TFile { extern pointer vftable; }   // 0x00479f18  PTR_FUN_00479f18
extern undefined * PTR_FUN_00479f20;   // 0x00479f20
namespace OWL::TControlBar { extern undefined * vftable; }   // 0x0047a018  PTR_FUN_0047a018
extern undefined * PTR_LAB_0047a08c;   // 0x0047a08c
extern pointer PTR_LAB_0047a0ac;   // 0x0047a0ac
extern pointer PTR_LAB_0047a0b8;   // 0x0047a0b8
namespace OWL::TControlBar { extern undefined * vftable_TWindow; }   // 0x0047a0c4  PTR_LAB_0047a0c4
namespace OWL::TCreatedDC { extern undefined * vftable; }   // 0x0047a1b4  PTR_FUN_0047a1b4
extern undefined DAT_0047a31b;   // 0x0047a31b
namespace std::ios_base::failure { extern undefined * vftable; }   // 0x0047a49c  PTR_FUN_0047a49c
namespace OWL::TDC { extern undefined * vftable; }   // 0x0047a4f8  PTR_FUN_0047a4f8
extern int _DAT_0047a558;   // 0x0047a558
namespace OWL::TXBase { extern undefined * vftable; }   // 0x0047a6a0  PTR_FUN_0047a6a0
extern undefined * PTR_s_Unhandled_Exception_0047a6b0;   // 0x0047a6b0
namespace OWL::TXOutOfMemory { extern undefined * vftable; }   // 0x0047aaa4  PTR_FUN_0047aaa4
namespace OWL::TSeparatorGadget { extern undefined * vftable; }   // 0x0047add4  PTR_FUN_0047add4
namespace OWL::TGadget { extern undefined * vftable; }   // 0x0047ae34  PTR_FUN_0047ae34
namespace OWL::TGadgetList { extern undefined * vftable; }   // 0x0047aef0  PTR_FUN_0047aef0
extern undefined * PTR_FUN_0047af08;   // 0x0047af08
extern undefined * PTR_FUN_0047af14;   // 0x0047af14
extern undefined * PTR_FUN_0047af20;   // 0x0047af20
namespace OWL::TGadgetWindow { extern undefined __entries; }   // 0x0047af2c  DAT_0047af2c
extern byte DAT_0047b01c;   // 0x0047b01c
namespace OWL::TGadgetWindow { extern undefined * vftable; }   // 0x0047b35c  PTR_FUN_0047b35c
extern undefined * PTR_LAB_0047b3d0;   // 0x0047b3d0
extern pointer PTR_LAB_0047b3f0;   // 0x0047b3f0
extern pointer PTR_LAB_0047b3fc;   // 0x0047b3fc
namespace OWL::TGadgetWindow { extern undefined * vftable_TWindow; }   // 0x0047b408  PTR_LAB_0047b408
namespace OWL::TXGdi { extern undefined * vftable; }   // 0x0047b598  PTR_FUN_0047b598
extern int DAT_0047b5ac;   // 0x0047b5ac
extern undefined4 _DAT_0047b5b0;   // 0x0047b5b0
extern undefined DAT_0047b5b0;   // 0x0047b5b0
extern undefined4 _DAT_0047b608;   // 0x0047b608
extern undefined DAT_0047b608;   // 0x0047b608
namespace OWL::TLayoutWindow { extern undefined __entries; }   // 0x0047b830  DAT_0047b830
namespace OWL::TLayoutWindow::Streamer { extern undefined * vftable; }   // 0x0047ba08  PTR_FUN_0047ba08
namespace OWL::TLayoutWindow { extern undefined * vftable; }   // 0x0047ba24  PTR_FUN_0047ba24
extern pointer PTR_LAB_0047ba3c;   // 0x0047ba3c
extern pointer PTR_LAB_0047ba48;   // 0x0047ba48
namespace OWL::TLayoutWindow { extern undefined * vftable_TWindow; }   // 0x0047ba54  PTR_LAB_0047ba54
extern char DAT_0047bae0;   // 0x0047bae0
extern ushort DAT_0047bb10;   // 0x0047bb10
extern ushort DAT_0047bb18;   // 0x0047bb18
extern HMODULE DAT_0047bb20;   // 0x0047bb20
extern FARPROC DAT_0047bbd8;   // 0x0047bbd8
extern char DAT_0047bbdc;   // 0x0047bbdc
extern ushort DAT_0047bbf8;   // 0x0047bbf8
extern char DAT_0047bc00;   // 0x0047bc00
extern undefined4 DAT_0047bc28;   // 0x0047bc28
extern undefined DAT_0047bcf0;   // 0x0047bcf0
extern char DAT_0047bfa0;   // 0x0047bfa0
namespace OWL::TMemoryDC { extern undefined * vftable; }   // 0x0047c090  PTR_FUN_0047c090
namespace OWL::TXMenu { extern undefined * vftable; }   // 0x0047c32c  PTR_FUN_0047c32c
namespace OWL::TPopupMenu { extern undefined * vftable; }   // 0x0047c34c  PTR_FUN_0047c34c
namespace OWL::TMenu { extern undefined * vftable; }   // 0x0047c368  PTR_FUN_0047c368
namespace OWL::TMessageBar { extern undefined * vftable; }   // 0x0047c3a8  PTR_FUN_0047c3a8
extern undefined * PTR_LAB_0047c420;   // 0x0047c420
extern pointer PTR_LAB_0047c440;   // 0x0047c440
extern pointer PTR_LAB_0047c44c;   // 0x0047c44c
namespace OWL::TMessageBar { extern undefined * vftable_TWindow; }   // 0x0047c458  PTR_LAB_0047c458
namespace OWL::TMsgThread { extern undefined * vftable; }   // 0x0047c570  PTR_FUN_0047c570
extern int * DAT_0047c5cc;   // 0x0047c5cc
extern undefined DAT_0047c978;   // 0x0047c978
extern char DAT_0047c97c;   // 0x0047c97c
namespace OWL::TPaintDC { extern undefined * vftable; }   // 0x0047ca94  PTR_FUN_0047ca94
namespace OWL::TPickListPopup { extern undefined * vftable; }   // 0x0047cbbc  PTR_FUN_0047cbbc
extern pointer PTR_LAB_0047cc4c;   // 0x0047cc4c
extern pointer PTR_LAB_0047cc58;   // 0x0047cc58
extern undefined DAT_0047ccb0;   // 0x0047ccb0
namespace OWL::TRegLink { extern pointer vftable; }   // 0x0047cd00  PTR_FUN_0047cd00
extern char DAT_0047cd04;   // 0x0047cd04
extern char DAT_0047cd05;   // 0x0047cd05
namespace OWL::TWindow { extern undefined * vftable; }   // 0x0047cdb8  PTR_FUN_0047cdb8
extern pointer PTR_LAB_0047ce48;   // 0x0047ce48
extern pointer PTR_LAB_0047ce54;   // 0x0047ce54
namespace OWL::TWindow::Streamer { extern undefined * vftable; }   // 0x0047ce64  PTR_FUN_0047ce64
extern undefined DAT_0047ce84;   // 0x0047ce84
namespace OWL::TTooltip { extern undefined * vftable; }   // 0x0047cf3c  PTR_FUN_0047cf3c
extern pointer PTR_LAB_0047cf6c;   // 0x0047cf6c
extern pointer PTR_LAB_0047cf78;   // 0x0047cf78
namespace OWL::TTooltip { extern undefined * vftable_TWindow; }   // 0x0047cf84  PTR_LAB_0047cf84
namespace OWL::TTooltipEnabler { extern undefined * vftable; }   // 0x0047d018  PTR_FUN_0047d018
extern undefined DAT_0047d024;   // 0x0047d024
extern undefined DAT_0047d028;   // 0x0047d028
extern int DAT_0047d07c;   // 0x0047d07c
extern undefined4 _DAT_0047d080;   // 0x0047d080
extern undefined DAT_0047d080;   // 0x0047d080
extern undefined4 _DAT_0047d084;   // 0x0047d084
extern undefined4 _DAT_0047d088;   // 0x0047d088
extern undefined4 _DAT_0047d08c;   // 0x0047d08c
extern char DAT_0047d090;   // 0x0047d090
extern undefined4 _DAT_0047d091;   // 0x0047d091
extern undefined DAT_0047d091;   // 0x0047d091
extern undefined4 _DAT_0047d095;   // 0x0047d095
extern undefined4 _DAT_0047d099;   // 0x0047d099
extern undefined4 _DAT_0047d09d;   // 0x0047d09d
extern char DAT_0047d0a1;   // 0x0047d0a1
extern undefined4 _DAT_0047d0a2;   // 0x0047d0a2
extern undefined DAT_0047d0a2;   // 0x0047d0a2
extern undefined4 _DAT_0047d0a6;   // 0x0047d0a6
extern undefined4 _DAT_0047d0aa;   // 0x0047d0aa
extern undefined4 _DAT_0047d0ae;   // 0x0047d0ae
extern char DAT_0047d0b2;   // 0x0047d0b2
extern undefined4 _DAT_0047d0b3;   // 0x0047d0b3
extern undefined DAT_0047d0b3;   // 0x0047d0b3
extern undefined4 _DAT_0047d0b7;   // 0x0047d0b7
extern undefined4 _DAT_0047d0bb;   // 0x0047d0bb
extern undefined4 _DAT_0047d0bf;   // 0x0047d0bf
extern char DAT_0047d0c3;   // 0x0047d0c3
extern char DAT_0047d1fc;   // 0x0047d1fc
extern undefined4 _DAT_0047d4f0;   // 0x0047d4f0
extern char DAT_0047d4f4;   // 0x0047d4f4
extern undefined4 _DAT_0047d4f8;   // 0x0047d4f8
extern char DAT_0047d4fc;   // 0x0047d4fc
extern undefined4 _DAT_0047d500;   // 0x0047d500
extern char DAT_0047d504;   // 0x0047d504
extern undefined4 _DAT_0047d508;   // 0x0047d508
extern char DAT_0047d50c;   // 0x0047d50c
extern undefined4 _DAT_0047d510;   // 0x0047d510
extern char DAT_0047d514;   // 0x0047d514
extern int DAT_0047d518;   // 0x0047d518
extern char DAT_0047d51c;   // 0x0047d51c
extern int DAT_0047d520;   // 0x0047d520
extern char DAT_0047d524;   // 0x0047d524
extern int DAT_0047d528;   // 0x0047d528
extern char DAT_0047d52c;   // 0x0047d52c
extern int DAT_0047d530;   // 0x0047d530
extern char DAT_0047d534;   // 0x0047d534
extern undefined4 _DAT_0047d538;   // 0x0047d538
extern char DAT_0047d53c;   // 0x0047d53c
extern undefined4 _DAT_0047d540;   // 0x0047d540
extern char DAT_0047d544;   // 0x0047d544
extern undefined4 _DAT_0047d548;   // 0x0047d548
extern char DAT_0047d54c;   // 0x0047d54c
extern undefined4 _DAT_0047d550;   // 0x0047d550
extern char DAT_0047d554;   // 0x0047d554
extern undefined4 _DAT_0047d558;   // 0x0047d558
extern char DAT_0047d55c;   // 0x0047d55c
extern undefined4 _DAT_0047d560;   // 0x0047d560
extern char DAT_0047d564;   // 0x0047d564
extern undefined4 _DAT_0047d568;   // 0x0047d568
extern char DAT_0047d56c;   // 0x0047d56c
extern undefined4 _DAT_0047d570;   // 0x0047d570
extern char DAT_0047d574;   // 0x0047d574
extern undefined4 _DAT_0047d578;   // 0x0047d578
extern char DAT_0047d57c;   // 0x0047d57c
extern undefined4 _DAT_0047d580;   // 0x0047d580
extern char DAT_0047d584;   // 0x0047d584
extern undefined4 _DAT_0047d588;   // 0x0047d588
extern char DAT_0047d58c;   // 0x0047d58c
extern undefined4 _DAT_0047d590;   // 0x0047d590
extern char DAT_0047d594;   // 0x0047d594
extern undefined4 _DAT_0047d598;   // 0x0047d598
extern char DAT_0047d59c;   // 0x0047d59c
extern undefined4 _DAT_0047d5a0;   // 0x0047d5a0
extern char DAT_0047d5a4;   // 0x0047d5a4
extern undefined4 _DAT_0047d5a8;   // 0x0047d5a8
extern char DAT_0047d5ac;   // 0x0047d5ac
extern undefined4 _DAT_0047d5b0;   // 0x0047d5b0
extern char DAT_0047d5b4;   // 0x0047d5b4
extern undefined4 _DAT_0047d5b8;   // 0x0047d5b8
extern char DAT_0047d5bc;   // 0x0047d5bc
extern undefined4 _DAT_0047d5c0;   // 0x0047d5c0
extern char DAT_0047d5c4;   // 0x0047d5c4
extern undefined4 _DAT_0047d5c8;   // 0x0047d5c8
extern char DAT_0047d5cc;   // 0x0047d5cc
extern undefined4 _DAT_0047d5d0;   // 0x0047d5d0
extern char DAT_0047d5d4;   // 0x0047d5d4
extern undefined4 _DAT_0047d5d8;   // 0x0047d5d8
extern char DAT_0047d5dc;   // 0x0047d5dc
extern undefined4 _DAT_0047d5e0;   // 0x0047d5e0
extern char DAT_0047d5e4;   // 0x0047d5e4
extern undefined4 _DAT_0047d5e8;   // 0x0047d5e8
extern char DAT_0047d5ec;   // 0x0047d5ec
extern int DAT_0047d5f0;   // 0x0047d5f0
extern char DAT_0047d5f4;   // 0x0047d5f4
extern int DAT_0047d5f8;   // 0x0047d5f8
extern char DAT_0047d5fc;   // 0x0047d5fc
extern undefined4 _DAT_0047d600;   // 0x0047d600
extern char DAT_0047d604;   // 0x0047d604
extern undefined4 _DAT_0047d608;   // 0x0047d608
extern char DAT_0047d60c;   // 0x0047d60c
extern undefined4 _DAT_0047d610;   // 0x0047d610
extern char DAT_0047d614;   // 0x0047d614
extern undefined4 _DAT_0047d618;   // 0x0047d618
extern char DAT_0047d61c;   // 0x0047d61c
extern undefined4 _DAT_0047d620;   // 0x0047d620
extern char DAT_0047d624;   // 0x0047d624
extern undefined4 _DAT_0047d628;   // 0x0047d628
extern char DAT_0047d62c;   // 0x0047d62c
extern undefined4 _DAT_0047d630;   // 0x0047d630
extern char DAT_0047d634;   // 0x0047d634
extern undefined4 _DAT_0047d638;   // 0x0047d638
extern char DAT_0047d63c;   // 0x0047d63c
extern undefined4 _DAT_0047d640;   // 0x0047d640
extern char DAT_0047d644;   // 0x0047d644
extern undefined4 _DAT_0047d648;   // 0x0047d648
extern char DAT_0047d64c;   // 0x0047d64c
extern undefined4 _DAT_0047d650;   // 0x0047d650
extern char DAT_0047d654;   // 0x0047d654
extern undefined4 _DAT_0047d658;   // 0x0047d658
extern char DAT_0047d65c;   // 0x0047d65c
extern undefined4 _DAT_0047d660;   // 0x0047d660
extern char DAT_0047d664;   // 0x0047d664
extern undefined4 _DAT_0047d668;   // 0x0047d668
extern char DAT_0047d66c;   // 0x0047d66c
extern undefined4 _DAT_0047d670;   // 0x0047d670
extern char DAT_0047d674;   // 0x0047d674
extern int DAT_0047d678;   // 0x0047d678
extern char DAT_0047d67c;   // 0x0047d67c
extern int DAT_0047d680;   // 0x0047d680
extern char DAT_0047d684;   // 0x0047d684
extern undefined4 _DAT_0047d688;   // 0x0047d688
extern char DAT_0047d68c;   // 0x0047d68c
extern undefined4 _DAT_0047d690;   // 0x0047d690
extern char DAT_0047d694;   // 0x0047d694
extern undefined4 _DAT_0047d698;   // 0x0047d698
extern char DAT_0047d69c;   // 0x0047d69c
extern undefined4 _DAT_0047d6a0;   // 0x0047d6a0
extern char DAT_0047d6a4;   // 0x0047d6a4
extern undefined4 _DAT_0047d6a8;   // 0x0047d6a8
extern char DAT_0047d6ac;   // 0x0047d6ac
extern undefined4 _DAT_0047d6b0;   // 0x0047d6b0
extern char DAT_0047d6b4;   // 0x0047d6b4
extern undefined4 _DAT_0047d6b8;   // 0x0047d6b8
extern char DAT_0047d6bc;   // 0x0047d6bc
extern undefined4 _DAT_0047d6c0;   // 0x0047d6c0
extern char DAT_0047d6c4;   // 0x0047d6c4
extern undefined4 _DAT_0047d6c8;   // 0x0047d6c8
extern char DAT_0047d6cc;   // 0x0047d6cc
extern undefined4 _DAT_0047d6d0;   // 0x0047d6d0
extern char DAT_0047d6d4;   // 0x0047d6d4
extern undefined4 _DAT_0047d6d8;   // 0x0047d6d8
extern char DAT_0047d6dc;   // 0x0047d6dc
extern undefined4 _DAT_0047d6e0;   // 0x0047d6e0
extern char DAT_0047d6e4;   // 0x0047d6e4
extern undefined4 _DAT_0047d6e8;   // 0x0047d6e8
extern char DAT_0047d6ec;   // 0x0047d6ec
extern undefined4 _DAT_0047d6f0;   // 0x0047d6f0
extern char DAT_0047d6f4;   // 0x0047d6f4
extern undefined4 _DAT_0047d6f8;   // 0x0047d6f8
extern char DAT_0047d6fc;   // 0x0047d6fc
extern undefined4 _DAT_0047d700;   // 0x0047d700
extern char DAT_0047d704;   // 0x0047d704
extern undefined4 _DAT_0047d708;   // 0x0047d708
extern char DAT_0047d70c;   // 0x0047d70c
extern undefined4 _DAT_0047d710;   // 0x0047d710
extern char DAT_0047d714;   // 0x0047d714
extern undefined4 _DAT_0047d718;   // 0x0047d718
extern char DAT_0047d71c;   // 0x0047d71c
extern undefined4 _DAT_0047d720;   // 0x0047d720
extern char DAT_0047d724;   // 0x0047d724
extern undefined4 _DAT_0047d728;   // 0x0047d728
extern char DAT_0047d72c;   // 0x0047d72c
extern undefined4 _DAT_0047d730;   // 0x0047d730
extern char DAT_0047d734;   // 0x0047d734
extern undefined4 _DAT_0047d738;   // 0x0047d738
extern char DAT_0047d73c;   // 0x0047d73c
extern undefined4 _DAT_0047d740;   // 0x0047d740
extern char DAT_0047d744;   // 0x0047d744
extern undefined4 _DAT_0047d748;   // 0x0047d748
extern char DAT_0047d74c;   // 0x0047d74c
extern undefined4 _DAT_0047d750;   // 0x0047d750
extern char DAT_0047d754;   // 0x0047d754
extern undefined4 _DAT_0047d758;   // 0x0047d758
extern char DAT_0047d75c;   // 0x0047d75c
extern undefined4 _DAT_0047d760;   // 0x0047d760
extern char DAT_0047d764;   // 0x0047d764
extern undefined4 _DAT_0047d768;   // 0x0047d768
extern char DAT_0047d76c;   // 0x0047d76c
extern undefined4 _DAT_0047d770;   // 0x0047d770
extern char DAT_0047d774;   // 0x0047d774
extern undefined4 _DAT_0047d778;   // 0x0047d778
extern char DAT_0047d77c;   // 0x0047d77c
extern undefined4 _DAT_0047d780;   // 0x0047d780
extern char DAT_0047d784;   // 0x0047d784
extern undefined DAT_0047d7da;   // 0x0047d7da
extern undefined DAT_0047d7f3;   // 0x0047d7f3
extern undefined DAT_0047d7f8;   // 0x0047d7f8
extern undefined DAT_0047d81e;   // 0x0047d81e
namespace OWL::TUrlLink { extern undefined __entries; }   // 0x0047d820  DAT_0047d820
namespace OWL::TUrlLink::Streamer { extern undefined * vftable; }   // 0x0047e004  PTR_FUN_0047e004
namespace OWL::TUrlLink { extern undefined * vftable; }   // 0x0047e020  PTR_FUN_0047e020
extern pointer PTR_LAB_0047e07c;   // 0x0047e07c
extern pointer PTR_LAB_0047e088;   // 0x0047e088
namespace OWL::TUrlLink { extern undefined * vftable_TWindow; }   // 0x0047e094  PTR_LAB_0047e094
extern char DAT_0047e14c;   // 0x0047e14c
extern UINT DAT_0047e150;   // 0x0047e150
extern char DAT_0047e184;   // 0x0047e184
extern char DAT_0047e1a9;   // 0x0047e1a9
extern char DAT_0047e1aa;   // 0x0047e1aa
extern char DAT_0047e1ab;   // 0x0047e1ab
extern char DAT_0047e1ac;   // 0x0047e1ac
extern uint DAT_0047e1b0;   // 0x0047e1b0
extern UINT DAT_0047e1b4;   // 0x0047e1b4
extern short DAT_0047e1b8;   // 0x0047e1b8
extern char DAT_0047e1f1;   // 0x0047e1f1
extern char DAT_0047e1f2;   // 0x0047e1f2
extern undefined * PTR_FUN_0047e1f3;   // 0x0047e1f3
namespace OWL::TWindow { extern undefined __entries; }   // 0x0047e2c0  DAT_0047e2c0
extern UINT _DAT_0047e5d8;   // 0x0047e5d8
extern char DAT_0047e608;   // 0x0047e608
namespace OWL::TXWindow { extern undefined * vftable; }   // 0x0047e958  PTR_FUN_0047e958
namespace OWL::TMenuItemEnabler { extern undefined * vftable; }   // 0x0047e978  PTR_FUN_0047e978
namespace OWL::TCommandEnabler { extern undefined * vftable; }   // 0x0047e990  PTR_FUN_0047e990
namespace OWL::TScreenDC { extern undefined * vftable; }   // 0x0047ea14  PTR_FUN_0047ea14
namespace OWL::TWindowDC { extern undefined * vftable; }   // 0x0047ea80  PTR_FUN_0047ea80
extern char DAT_0047eae0;   // 0x0047eae0
extern char DAT_0047eae1;   // 0x0047eae1
extern char DAT_0047eb58;   // 0x0047eb58
extern int DAT_0047eb5c;   // 0x0047eb5c
namespace OWL::TApplication { extern undefined * vftable; }   // 0x0047ebf8  PTR_FUN_0047ebf8
extern pointer PTR_LAB_0047ec4c;   // 0x0047ec4c
extern undefined * PTR_LAB_0047ec5c;   // 0x0047ec5c
extern pointer PTR_LAB_0047ec7c;   // 0x0047ec7c
extern HWND DAT_0047f218;   // 0x0047f218
extern char DAT_0047f21c;   // 0x0047f21c
namespace OWL::TApplication { extern undefined __entries; }   // 0x0047f280  DAT_0047f280
namespace OWL::TXInvalidMainWindow { extern undefined * vftable; }   // 0x0047f3b4  PTR_FUN_0047f3b4
extern undefined4 DAT_0047f3c8;   // 0x0047f3c8
extern char DAT_0047f40c;   // 0x0047f40c
namespace OWL::TButton { extern undefined __entries; }   // 0x0047f538  DAT_0047f538
namespace OWL::TButton { extern undefined * vftable; }   // 0x0047f58c  PTR_FUN_0047f58c
extern pointer PTR_LAB_0047f5c0;   // 0x0047f5c0
extern pointer PTR_LAB_0047f5cc;   // 0x0047f5cc
namespace OWL::TButton { extern undefined * vftable_TWindow; }   // 0x0047f5d8  PTR_LAB_0047f5d8
namespace OWL::TButton::Streamer { extern undefined * vftable; }   // 0x0047f768  PTR_FUN_0047f768
extern undefined DAT_0047f778;   // 0x0047f778
namespace OWL::TCheckBox { extern undefined * vftable; }   // 0x0047f7cc  PTR_FUN_0047f7cc
extern pointer PTR_LAB_0047f804;   // 0x0047f804
extern pointer PTR_LAB_0047f810;   // 0x0047f810
namespace OWL::TCheckBox { extern undefined * vftable_TWindow; }   // 0x0047f81c  PTR_LAB_0047f81c
namespace OWL::TControl { extern undefined __entries; }   // 0x0047f8fc  DAT_0047f8fc
namespace OWL::TControl { extern undefined * vftable; }   // 0x0047f9bc  PTR_FUN_0047f9bc
extern pointer PTR_LAB_0047f9e8;   // 0x0047f9e8
extern pointer PTR_LAB_0047f9f4;   // 0x0047f9f4
namespace OWL::TControl { extern undefined * vftable_TWindow; }   // 0x0047fa00  PTR_LAB_0047fa00
namespace OWL::TControl::Streamer { extern undefined * vftable; }   // 0x0047fb80  PTR_FUN_0047fb80
extern undefined DAT_0047fbdc;   // 0x0047fbdc
namespace OWL::TDecoratedFrame { extern undefined __entries; }   // 0x0047fbe0  DAT_0047fbe0
namespace OWL::TDecoratedFrame { extern undefined * vftable; }   // 0x0047fcec  PTR_FUN_0047fcec
extern undefined * PTR_LAB_0047fd30;   // 0x0047fd30
extern pointer PTR_LAB_0047fd48;   // 0x0047fd48
extern pointer PTR_LAB_0047fd54;   // 0x0047fd54
namespace OWL::TDecoratedFrame { extern undefined * vftable_TWindow; }   // 0x0047fd60  PTR_LAB_0047fd60
namespace OWL::TDecoratedFrame { extern undefined * vftable_TFrameWindow; }   // 0x0047fdf0  PTR_LAB_0047fdf0
extern int * DAT_0047fe3c;   // 0x0047fe3c
extern undefined DAT_0047fe40;   // 0x0047fe40
namespace OWL::TDialog { extern undefined * vftable; }   // 0x0047ff60  PTR_FUN_0047ff60
extern pointer PTR_LAB_0047ffa4;   // 0x0047ffa4
extern pointer PTR_LAB_0047ffb0;   // 0x0047ffb0
namespace OWL::TDialog { extern undefined * vftable_TWindow; }   // 0x0047ffbc  PTR_LAB_0047ffbc
namespace OWL::TControlEnabler { extern undefined * vftable; }   // 0x004800c4  PTR_FUN_004800c4
namespace OWL::TDib { extern undefined * vftable; }   // 0x004800dc  PTR_FUN_004800dc
extern undefined DAT_00480178;   // 0x00480178
extern undefined1 DAT_0048017a;   // 0x0048017a
extern undefined DAT_0048017b;   // 0x0048017b
extern undefined DAT_0048017c;   // 0x0048017c
namespace OWL::TDocManager { extern undefined __entries; }   // 0x0048021c  DAT_0048021c
namespace OWL::TDocument { extern undefined * vftable; }   // 0x00480a7c  PTR_FUN_00480a7c
namespace OWL::TDocManager { extern undefined * vftable; }   // 0x00480aec  PTR_FUN_00480aec
extern pointer PTR_LAB_00480b64;   // 0x00480b64
extern pointer PTR_LAB_00480b70;   // 0x00480b70
namespace OWL::TDvFileSaveDialog { extern undefined * vftable; }   // 0x00480b80  PTR_FUN_00480b80
extern pointer PTR_LAB_00480bc8;   // 0x00480bc8
extern pointer PTR_LAB_00480bd4;   // 0x00480bd4
extern undefined * PTR_LAB_00480be0;   // 0x00480be0
namespace OWL::TDvFileOpenDialog { extern undefined * vftable; }   // 0x00480c74  PTR_FUN_00480c74
extern pointer PTR_LAB_00480cbc;   // 0x00480cbc
extern pointer PTR_LAB_00480cc8;   // 0x00480cc8
extern undefined * PTR_LAB_00480cd4;   // 0x00480cd4
namespace OWL::TDocTemplate { extern undefined * vftable; }   // 0x00480dc8  PTR_FUN_00480dc8
extern pointer PTR_LAB_00480dec;   // 0x00480dec
extern pointer PTR_s_Document_Class_00480df0;   // 0x00480df0
extern pointer PTR_s_Document_Title_00480e00;   // 0x00480e00
extern undefined DAT_00480f60;   // 0x00480f60
extern undefined DAT_00481081;   // 0x00481081
extern int * DAT_00481088;   // 0x00481088
namespace OWL::TEdit { extern undefined __entries; }   // 0x0048108c  DAT_0048108c
namespace OWL::TEdit { extern undefined * vftable; }   // 0x004813e0  PTR_FUN_004813e0
extern pointer PTR_LAB_00481440;   // 0x00481440
extern pointer PTR_LAB_0048144c;   // 0x0048144c
namespace OWL::TEdit { extern undefined * vftable_TWindow; }   // 0x00481458  PTR_LAB_00481458
namespace OWL::TEdit::Streamer { extern undefined * vftable; }   // 0x00481590  PTR_FUN_00481590
extern undefined DAT_004815a0;   // 0x004815a0
extern undefined DAT_00481a30;   // 0x00481a30
namespace OWL::TEditFile::Streamer { extern undefined * vftable; }   // 0x00481ab8  PTR_FUN_00481ab8
namespace OWL::TEditSearch { extern undefined __entries; }   // 0x00481adc  DAT_00481adc
namespace OWL::TEditSearch::Streamer { extern undefined * vftable; }   // 0x00481dd4  PTR_FUN_00481dd4
namespace OWL::TXBadFormat { extern undefined * vftable; }   // 0x00481e44  PTR_FUN_00481e44
namespace OWL::TDiskFileHandle { extern undefined * vftable; }   // 0x00481ef0  PTR_FUN_00481ef0
namespace OWL::TFileHandle { extern undefined * vftable; }   // 0x00481f58  PTR_FUN_00481f58
extern undefined DAT_00482110;   // 0x00482110
extern undefined * PTR_DAT_00482260;   // 0x00482260
extern undefined DAT_00482280;   // 0x00482280
extern char DAT_00482283;   // 0x00482283
extern undefined DAT_00482284;   // 0x00482284
extern undefined DAT_00482286;   // 0x00482286
extern undefined DAT_00482289;   // 0x00482289
extern char DAT_0048228b;   // 0x0048228b
extern undefined DAT_0048228e;   // 0x0048228e
extern undefined DAT_00482484;   // 0x00482484
namespace OWL::TFindReplaceDialog { extern undefined __entries; }   // 0x004824ac  DAT_004824ac
namespace OWL::TReplaceDialog { extern undefined * vftable; }   // 0x00482554  PTR_FUN_00482554
extern pointer PTR_LAB_00482598;   // 0x00482598
extern pointer PTR_LAB_004825a4;   // 0x004825a4
extern undefined * PTR_LAB_004825b0;   // 0x004825b0
namespace OWL::TFindDialog { extern undefined * vftable; }   // 0x00482644  PTR_FUN_00482644
extern pointer PTR_LAB_00482688;   // 0x00482688
extern pointer PTR_LAB_00482694;   // 0x00482694
extern undefined * PTR_LAB_004826a0;   // 0x004826a0
namespace OWL::TFindReplaceDialog { extern undefined * vftable; }   // 0x00482734  PTR_FUN_00482734
extern pointer PTR_LAB_00482778;   // 0x00482778
extern pointer PTR_LAB_00482784;   // 0x00482784
extern undefined * PTR_LAB_00482790;   // 0x00482790
extern HICON DAT_00482818;   // 0x00482818
extern undefined DAT_00482831;   // 0x00482831
extern undefined DAT_00482835;   // 0x00482835
namespace OWL::TFrameWindow { extern undefined __entries; }   // 0x00482838  DAT_00482838
namespace OWL::TFrameWindow { extern undefined * vftable; }   // 0x00482aa4  PTR_FUN_00482aa4
extern pointer PTR_LAB_00482af8;   // 0x00482af8
extern pointer PTR_LAB_00482b04;   // 0x00482b04
namespace OWL::TFrameWindow { extern undefined * vftable_TWindow; }   // 0x00482b10  PTR_LAB_00482b10
namespace OWL::TMenuDescr { extern undefined * vftable; }   // 0x00482c30  PTR_FUN_00482c30
extern char DAT_00482c51;   // 0x00482c51
extern char DAT_00482c52;   // 0x00482c52
extern char DAT_00482c53;   // 0x00482c53
extern char DAT_00482c54;   // 0x00482c54
extern char DAT_00482c55;   // 0x00482c55
extern char DAT_00482c57;   // 0x00482c57
extern char DAT_00482c5c;   // 0x00482c5c
extern char DAT_00482c5e;   // 0x00482c5e
extern int DAT_00482e1c;   // 0x00482e1c
namespace OWL::TXInvalidModule { extern undefined * vftable; }   // 0x0048339c  PTR_FUN_0048339c
namespace OWL::TModule { extern pointer vftable; }   // 0x004833bc  PTR_FUN_004833bc
namespace OWL::TModule::Streamer { extern undefined * vftable; }   // 0x00483488  PTR_FUN_00483488
extern undefined DAT_004834d4;   // 0x004834d4
extern int DAT_004834ec;   // 0x004834ec
namespace OWL::TFileSaveDialog { extern undefined * vftable; }   // 0x00483568  PTR_FUN_00483568
extern pointer PTR_LAB_004835b0;   // 0x004835b0
extern pointer PTR_LAB_004835bc;   // 0x004835bc
extern undefined * PTR_LAB_004835c8;   // 0x004835c8
namespace OWL::TFileOpenDialog { extern undefined * vftable; }   // 0x0048365c  PTR_FUN_0048365c
extern pointer PTR_LAB_004836a4;   // 0x004836a4
extern pointer PTR_LAB_004836b0;   // 0x004836b0
extern undefined * PTR_LAB_004836bc;   // 0x004836bc
namespace OWL::TOpenSaveDialog { extern undefined * vftable; }   // 0x00483750  PTR_FUN_00483750
extern pointer PTR_LAB_00483798;   // 0x00483798
extern pointer PTR_LAB_004837a4;   // 0x004837a4
extern undefined * PTR_LAB_004837b0;   // 0x004837b0
namespace OWL::TScrollBar { extern undefined __entries; }   // 0x00483844  DAT_00483844
namespace OWL::TScrollBar { extern undefined * vftable; }   // 0x004838bc  PTR_FUN_004838bc
extern pointer PTR_LAB_00483934;   // 0x00483934
extern pointer PTR_LAB_00483940;   // 0x00483940
extern undefined * PTR_LAB_0048394c;   // 0x0048394c
namespace OWL::TScroller { extern undefined * vftable; }   // 0x00483a04  PTR_FUN_00483a04
namespace OWL::TScroller::Streamer { extern undefined * vftable; }   // 0x00483b0c  PTR_FUN_00483b0c
namespace OWL::TStatic { extern undefined __entries; }   // 0x00483b30  DAT_00483b30
namespace OWL::TStatic { extern undefined * vftable; }   // 0x00483b90  PTR_FUN_00483b90
extern pointer PTR_LAB_00483bc8;   // 0x00483bc8
extern pointer PTR_LAB_00483bd4;   // 0x00483bd4
extern undefined * PTR_LAB_00483be0;   // 0x00483be0
namespace OWL::TStatic::Streamer { extern undefined * vftable; }   // 0x00483d18  PTR_FUN_00483d18
extern undefined DAT_00483d28;   // 0x00483d28
namespace OWL::TTinyCaption { extern undefined * vftable; }   // 0x00483fc0  PTR_FUN_00483fc0
extern pointer PTR_LAB_00483fd4;   // 0x00483fd4
extern pointer PTR_LAB_00483fe0;   // 0x00483fe0
namespace OWL::TTinyCaption { extern undefined * vftable_TWindow; }   // 0x00483fec  PTR_LAB_00483fec
namespace OWL::TValidator { extern undefined * vftable; }   // 0x004840a4  PTR_FUN_004840a4
namespace OWL::TValidator::Streamer { extern undefined * vftable; }   // 0x0048416c  PTR_FUN_0048416c
extern pointer PTR_FUN_00484178;   // 0x00484178
extern pointer PTR_s_View_Class_0048417c;   // 0x0048417c
extern pointer PTR_s_View_Name_00484180;   // 0x00484180
extern uint DAT_004841a4;   // 0x004841a4
namespace OWL::TView { extern undefined * vftable; }   // 0x00484250  PTR_FUN_00484250
extern pointer PTR_FUN_00484288;   // 0x00484288
extern pointer PTR_LAB_00484294;   // 0x00484294
namespace OWL::TBarDescr { extern undefined * vftable; }   // 0x0048442c  PTR_FUN_0048442c
extern char DAT_004844b4;   // 0x004844b4
extern char DAT_004844c3;   // 0x004844c3
extern int DAT_00484890;   // 0x00484890
extern undefined DAT_00484894;   // 0x00484894
extern char DAT_00484898;   // 0x00484898
extern undefined DAT_004848a1;   // 0x004848a1
extern int DAT_00484a8c;   // 0x00484a8c
extern undefined4 _DAT_00484b30;   // 0x00484b30
extern undefined4 _DAT_00484b34;   // 0x00484b34
extern undefined * PTR_FUN_00484b38;   // 0x00484b38
extern undefined * PTR_FUN_00484b3c;   // 0x00484b3c
extern undefined * PTR_FUN_00484b40;   // 0x00484b40
extern undefined * PTR_LAB_00484b44;   // 0x00484b44
extern uint DAT_00484b48;   // 0x00484b48
extern int DAT_00484b4c;   // 0x00484b4c
extern int DAT_00484b50;   // 0x00484b50
extern uint DAT_00484b58;   // 0x00484b58
extern uint DAT_00484b5c;   // 0x00484b5c
extern uint DAT_00484b60;   // 0x00484b60
extern uint * DAT_00484b64;   // 0x00484b64
extern uint * _DAT_00484b68;   // 0x00484b68
extern int DAT_00484b6c;   // 0x00484b6c
extern undefined4 DAT_00484b70;   // 0x00484b70
extern undefined * PTR_DAT_00484b74;   // 0x00484b74
extern undefined * PTR_DAT_00484b7c;   // 0x00484b7c
extern uint DAT_00484b80;   // 0x00484b80
extern uint DAT_00484b84;   // 0x00484b84
extern undefined DAT_00484eb1;   // 0x00484eb1
extern undefined DAT_00484eb4;   // 0x00484eb4
extern undefined4 g_nullStringRep;   // 0x00485bcc  DAT_00485bcc
extern undefined g_emptyStringData;   // 0x00485bd8  DAT_00485bd8
extern undefined DAT_00485c38;   // 0x00485c38
extern int g_stringNpos;   // 0x00485f20  DAT_00485f20
extern undefined DAT_00485f6c;   // 0x00485f6c
extern undefined DAT_00486b1c;   // 0x00486b1c
namespace __rwstd::ref_counted { extern pointer vftable; }   // 0x00487554  PTR_FUN_00487554
namespace __rwstd::facet_imp { extern undefined * vftable; }   // 0x00487564  PTR_FUN_00487564
extern undefined * PTR_FUN_00487578;   // 0x00487578
namespace std::num_put_char_std_ostreambuf_iterator_char { extern undefined * vftable; }   // 0x004875a8  PTR_FUN_004875a8
namespace std::basic_ostringstream_char { extern pointer vftable; }   // 0x004875ec  PTR_FUN_004875ec
extern pointer PTR_LAB_004875f8;   // 0x004875f8
namespace std::basic_ofstream_char { extern pointer vftable; }   // 0x00487608  PTR_FUN_00487608
extern pointer PTR_LAB_00487614;   // 0x00487614
namespace std::basic_stringbuf_char { extern undefined * vftable; }   // 0x00487624  PTR_FUN_00487624
namespace std::basic_ifstream_char { extern pointer vftable; }   // 0x00487664  PTR_FUN_00487664
extern pointer PTR_LAB_00487670;   // 0x00487670
namespace std::basic_ios_char { extern pointer vftable; }   // 0x00487680  PTR_FUN_00487680
namespace std::basic_ostream_char { extern pointer vftable; }   // 0x00487690  PTR_FUN_00487690
extern pointer PTR_LAB_0048769c;   // 0x0048769c
namespace std::basic_istream_char { extern pointer vftable; }   // 0x004876ac  PTR_FUN_004876ac
extern pointer PTR_LAB_004876b8;   // 0x004876b8
namespace std::basic_streambuf_char { extern undefined * vftable; }   // 0x004876c8  PTR_FUN_004876c8
namespace std::basic_filebuf_char { extern undefined * vftable; }   // 0x00487708  PTR_FUN_00487708
extern undefined * PTR_FUN_00487748;   // 0x00487748
extern undefined * PTR_FUN_00487770;   // 0x00487770
extern undefined DAT_004877ac;   // 0x004877ac
extern undefined * PTR_s_iostream_object_has_failbit_set_0048782c;   // 0x0048782c
extern undefined * PTR_s_iostream_object_has_badbit_set_00487830;   // 0x00487830
extern undefined * PTR_s_iostream_object_has_eofbit_set_00487834;   // 0x00487834
extern undefined1 DAT_00487898;   // 0x00487898
namespace std::ios_base { extern pointer vftable; }   // 0x004879b4  PTR_FUN_004879b4
extern undefined DAT_00487a3c;   // 0x00487a3c
extern uint DAT_00487a47;   // 0x00487a47
extern undefined1 DAT_00487a4b;   // 0x00487a4b
namespace std::domain_error { extern pointer vftable; }   // 0x00487b1c  PTR_FUN_00487b1c
extern undefined DAT_00487b30;   // 0x00487b30
extern undefined DAT_00487b38;   // 0x00487b38
extern undefined DAT_00487fd8;   // 0x00487fd8
extern undefined * PTR_FUN_00487ff4;   // 0x00487ff4
extern undefined1 DAT_0048801c;   // 0x0048801c
extern undefined * PTR_FUN_004880f0;   // 0x004880f0
extern undefined DAT_00488118;   // 0x00488118
extern undefined * PTR_s_locale_initid_called_twice_004882fc;   // 0x004882fc
extern undefined * PTR_s_Error_constructing_locale_name_00488308;   // 0x00488308
extern char DAT_00488380;   // 0x00488380
extern undefined DAT_00488499;   // 0x00488499
extern undefined DAT_0048849a;   // 0x0048849a
extern undefined DAT_0048849b;   // 0x0048849b
extern undefined DAT_004884a9;   // 0x004884a9
extern undefined DAT_004887ec;   // 0x004887ec
namespace std::runtime_error { extern undefined * vftable; }   // 0x00488848  PTR_FUN_00488848
namespace __rwstd::locale_imp { extern pointer vftable; }   // 0x0048885c  PTR_FUN_0048885c
extern undefined DAT_00488885;   // 0x00488885
extern undefined DAT_00488888;   // 0x00488888
extern undefined DAT_0048888a;   // 0x0048888a
extern undefined DAT_0048888c;   // 0x0048888c
extern undefined DAT_0048888d;   // 0x0048888d
extern undefined DAT_0048888e;   // 0x0048888e
extern undefined DAT_00488890;   // 0x00488890
extern undefined DAT_00488892;   // 0x00488892
extern undefined DAT_00488894;   // 0x00488894
extern undefined * PTR_s_no_named_exception_thrown_004888e4;   // 0x004888e4
extern undefined * PTR_s_bad_alloc_exception_thrown_004888ec;   // 0x004888ec
extern undefined * PTR_s_Error_004888f0;   // 0x004888f0
extern int * DAT_004888f4;   // 0x004888f4
extern undefined * PTR_s_invalid_string_size_parameter_in_00488a54;   // 0x00488a54
extern undefined * PTR_s_position_beyond_end_of_string_in_00488a58;   // 0x00488a58
extern undefined * PTR_s_resulting_length_is_invalid_in_f_00488a5c;   // 0x00488a5c
extern undefined * PTR_s_string_index_out_of_range_in_fun_00488a60;   // 0x00488a60
extern undefined * PTR_s_unexpected_NULL_pointer_in_funct_00488a64;   // 0x00488a64
extern undefined DAT_00488c1b;   // 0x00488c1b
extern undefined DAT_00488c2a;   // 0x00488c2a
extern undefined DAT_00488e85;   // 0x00488e85
namespace type_info_hash { extern pointer vftable; }   // 0x00488f20  PTR_FUN_00488f20
namespace std::type_info { extern pointer vftable; }   // 0x00488f30  PTR_FUN_00488f30
extern undefined * DAT_00488f34;   // 0x00488f34
extern undefined * DAT_00488f38;   // 0x00488f38
extern undefined DAT_00488f70;   // 0x00488f70
extern int _DAT_00488f84;   // 0x00488f84
extern int DAT_00489054;   // 0x00489054
extern undefined * PTR_FUN_00489068;   // 0x00489068
extern uint _DAT_0048906c;   // 0x0048906c
extern undefined4 _DAT_00489070;   // 0x00489070
extern undefined4 DAT_00489074;   // 0x00489074
extern undefined DAT_0048908c;   // 0x0048908c
extern undefined DAT_004890a4;   // 0x004890a4
extern uint DAT_00489524;   // 0x00489524
extern undefined4 DAT_00489528;   // 0x00489528
extern undefined * PTR_DAT_004895f4;   // 0x004895f4
extern undefined DAT_004895f8;   // 0x004895f8
extern undefined DAT_00489724;   // 0x00489724
extern undefined DAT_00489728;   // 0x00489728
extern int DAT_004897f4;   // 0x004897f4
extern undefined1 DAT_00489bb4;   // 0x00489bb4
extern undefined DAT_00489bc2;   // 0x00489bc2
extern undefined DAT_00489c26;   // 0x00489c26
extern pointer PTR_DAT_00489e28;   // 0x00489e28
extern undefined * PTR_DAT_00489e2c;   // 0x00489e2c
extern undefined * PTR_DAT_00489e30;   // 0x00489e30
extern undefined * PTR_DAT_00489e34;   // 0x00489e34
extern undefined * PTR_DAT_00489e38;   // 0x00489e38
extern undefined * PTR_DAT_00489e3c;   // 0x00489e3c
extern undefined * PTR_DAT_00489e40;   // 0x00489e40
extern undefined * PTR_DAT_00489e44;   // 0x00489e44
extern undefined * PTR_DAT_00489e48;   // 0x00489e48
extern undefined * PTR_DAT_00489e4c;   // 0x00489e4c
extern undefined1 DAT_00489e50;   // 0x00489e50
extern undefined1 DAT_00489e51;   // 0x00489e51
extern undefined1 DAT_00489e52;   // 0x00489e52
extern undefined1 DAT_00489e53;   // 0x00489e53
extern undefined1 DAT_00489e54;   // 0x00489e54
extern undefined1 DAT_00489e55;   // 0x00489e55
extern undefined1 DAT_00489e56;   // 0x00489e56
extern undefined1 DAT_00489e57;   // 0x00489e57
extern undefined DAT_00489e64;   // 0x00489e64
extern undefined DAT_00489e67;   // 0x00489e67
extern undefined DAT_00489e6c;   // 0x00489e6c
extern undefined DAT_00489e6f;   // 0x00489e6f
extern undefined DAT_00489e74;   // 0x00489e74
extern undefined DAT_00489e77;   // 0x00489e77
extern undefined DAT_00489e7c;   // 0x00489e7c
extern undefined DAT_00489e7f;   // 0x00489e7f
extern undefined DAT_00489e84;   // 0x00489e84
extern undefined DAT_00489e87;   // 0x00489e87
extern undefined DAT_00489e8a;   // 0x00489e8a
extern undefined DAT_00489e8d;   // 0x00489e8d
extern undefined DAT_00489e92;   // 0x00489e92
extern undefined DAT_00489e95;   // 0x00489e95
extern undefined DAT_00489e98;   // 0x00489e98
extern undefined DAT_00489e9b;   // 0x00489e9b
extern undefined DAT_00489ea0;   // 0x00489ea0
extern undefined DAT_00489ea3;   // 0x00489ea3
extern undefined DAT_00489ea6;   // 0x00489ea6
extern undefined DAT_00489ea9;   // 0x00489ea9
extern undefined DAT_00489eae;   // 0x00489eae
extern undefined DAT_00489eb4;   // 0x00489eb4
extern undefined DAT_00489fb4;   // 0x00489fb4
extern UINT _DAT_0048a0b4;   // 0x0048a0b4
extern undefined4 DAT_0048a0bc;   // 0x0048a0bc
extern undefined4 DAT_0048a0fc;   // 0x0048a0fc
extern undefined4 DAT_0048a139;   // 0x0048a139
extern undefined4 DAT_0048a143;   // 0x0048a143
extern undefined4 DAT_0048a14d;   // 0x0048a14d
extern undefined4 DAT_0048a157;   // 0x0048a157
extern undefined1 DAT_0048a15b;   // 0x0048a15b
extern undefined DAT_0048a1c3;   // 0x0048a1c3
extern undefined DAT_0048a1c5;   // 0x0048a1c5
extern undefined DAT_0048a1c7;   // 0x0048a1c7
extern undefined DAT_0048a1c9;   // 0x0048a1c9
extern undefined1 DAT_0048a1cc;   // 0x0048a1cc
extern pointer PTR_DAT_0048a200;   // 0x0048a200
extern undefined * PTR_DAT_0048a218;   // 0x0048a218
extern undefined4 DAT_0048a2dc;   // 0x0048a2dc
extern undefined * PTR_DAT_0048a308;   // 0x0048a308
extern pointer PTR_DAT_0048a42c;   // 0x0048a42c
extern undefined * _DAT_0048a564;   // 0x0048a564
extern undefined * PTR_FUN_0048a568;   // 0x0048a568
extern undefined4 DAT_0048a634;   // 0x0048a634
extern float _DAT_0048a638;   // 0x0048a638
extern longdouble _DAT_0048a63c;   // 0x0048a63c
extern double _DAT_0048a668;   // 0x0048a668
extern undefined4 DAT_0048a668;   // 0x0048a668
extern undefined4 DAT_0048a6e8;   // 0x0048a6e8
extern undefined DAT_0048a6f0;   // 0x0048a6f0
extern undefined * PTR_FUN_0048a6f4;   // 0x0048a6f4
extern undefined * PTR_FUN_0048a6f8;   // 0x0048a6f8
extern undefined4 DAT_0048a740;   // 0x0048a740
extern undefined4 DAT_0048a748;   // 0x0048a748
extern undefined4 DAT_0048a750;   // 0x0048a750
extern undefined DAT_0048a758;   // 0x0048a758
extern undefined1 DAT_0048a75c;   // 0x0048a75c
extern undefined1 DAT_0048a761;   // 0x0048a761
extern undefined1 DAT_0048a766;   // 0x0048a766
extern undefined1 DAT_0048a76b;   // 0x0048a76b
extern undefined4 DAT_0048a798;   // 0x0048a798
extern undefined4 DAT_0048a79c;   // 0x0048a79c
extern undefined2 DAT_0048a7a0;   // 0x0048a7a0
extern undefined4 DAT_0048a7a2;   // 0x0048a7a2
extern undefined4 DAT_0048a7a6;   // 0x0048a7a6
extern undefined2 DAT_0048a7aa;   // 0x0048a7aa
extern undefined4 DAT_0048a7ac;   // 0x0048a7ac
extern undefined4 DAT_0048a7b0;   // 0x0048a7b0
extern undefined2 DAT_0048a7b4;   // 0x0048a7b4
extern undefined4 DAT_0048a7b6;   // 0x0048a7b6
extern undefined4 DAT_0048a7ba;   // 0x0048a7ba
extern undefined2 DAT_0048a7be;   // 0x0048a7be
extern undefined4 DAT_0048a7c0;   // 0x0048a7c0
extern undefined4 DAT_0048a7c4;   // 0x0048a7c4
extern undefined2 DAT_0048a7c8;   // 0x0048a7c8
extern undefined4 DAT_0048a7ca;   // 0x0048a7ca
extern undefined4 DAT_0048a7ce;   // 0x0048a7ce
extern undefined2 DAT_0048a7d2;   // 0x0048a7d2
extern undefined4 DAT_0048a7d4;   // 0x0048a7d4
extern undefined4 DAT_0048a7d8;   // 0x0048a7d8
extern undefined2 DAT_0048a7dc;   // 0x0048a7dc
extern undefined4 DAT_0048a7de;   // 0x0048a7de
extern undefined4 DAT_0048a7e2;   // 0x0048a7e2
extern undefined2 DAT_0048a7e6;   // 0x0048a7e6
extern byte DAT_0048a7e8;   // 0x0048a7e8
extern byte DAT_0048a7e9;   // 0x0048a7e9
extern byte DAT_0048a7ea;   // 0x0048a7ea
extern byte DAT_0048a7eb;   // 0x0048a7eb
extern undefined4 _DAT_0048a878;   // 0x0048a878
extern undefined * DAT_0048a87c;   // 0x0048a87c
extern LPCSTR DAT_0048a880;   // 0x0048a880
extern undefined DAT_0048a884;   // 0x0048a884
extern undefined DAT_0048a887;   // 0x0048a887
extern undefined * DAT_0048a8f4;   // 0x0048a8f4
extern undefined * PTR_FUN_0048a8f8;   // 0x0048a8f8
extern undefined * PTR_FUN_0048a8fc;   // 0x0048a8fc
extern undefined * PTR_FUN_0048a900;   // 0x0048a900
extern undefined * PTR_FUN_0048a904;   // 0x0048a904
extern undefined * PTR_LAB_0048a908;   // 0x0048a908
extern undefined * PTR_FUN_0048a90c;   // 0x0048a90c
extern undefined * PTR_LAB_0048a910;   // 0x0048a910
extern int DAT_0048a968;   // 0x0048a968
extern undefined * PTR_FUN_0048a9b4;   // 0x0048a9b4
extern undefined * PTR_FUN_0048a9b8;   // 0x0048a9b8
extern char DAT_0048aa30;   // 0x0048aa30
extern undefined DAT_0048aa34;   // 0x0048aa34
extern undefined4 DAT_0048aa5c;   // 0x0048aa5c
extern undefined DAT_0048aa84;   // 0x0048aa84
extern int DAT_0048aa90;   // 0x0048aa90
extern int DAT_0048aa94;   // 0x0048aa94
extern int DAT_0048aa98;   // 0x0048aa98
extern int DAT_0048aa9c;   // 0x0048aa9c
extern undefined * PTR_DAT_0048aaa0;   // 0x0048aaa0
extern undefined * PTR_DAT_0048aaa4;   // 0x0048aaa4
extern undefined DAT_0048aaa8;   // 0x0048aaa8
extern undefined1 DAT_0048aaab;   // 0x0048aaab
extern undefined1 DAT_0048aaac;   // 0x0048aaac
extern undefined DAT_0048acc8;   // 0x0048acc8
extern undefined DAT_0048b329;   // 0x0048b329
extern undefined DAT_0048b33c;   // 0x0048b33c
extern int DAT_0048b444;   // 0x0048b444
extern int _DAT_0048b44c;   // 0x0048b44c
extern uint g_huffmanCodes;   // 0x0048b450  DAT_0048b450
extern byte g_huffmanCodeLengths;   // 0x0048b850  DAT_0048b850
extern undefined4 DAT_0048b950;   // 0x0048b950
extern short DAT_0048bd50;   // 0x0048bd50
extern short DAT_0048bd52;   // 0x0048bd52
extern undefined2 DAT_0048bd54;   // 0x0048bd54
extern undefined4 DAT_0048bf54;   // 0x0048bf54
extern int DAT_0048c35c;   // 0x0048c35c
extern undefined DAT_0048c364;   // 0x0048c364
extern undefined * DAT_0048c368;   // 0x0048c368
extern undefined DAT_0048c371;   // 0x0048c371
extern undefined4 DAT_0048c384;   // 0x0048c384
extern undefined DAT_0048c470;   // 0x0048c470
extern undefined4 _DAT_0048c484;   // 0x0048c484
extern undefined DAT_0048c484;   // 0x0048c484
extern undefined DAT_0048c53c;   // 0x0048c53c
extern undefined DAT_0048c54d;   // 0x0048c54d
extern undefined DAT_0048c55e;   // 0x0048c55e
extern undefined DAT_0048c56f;   // 0x0048c56f
extern undefined DAT_0048c580;   // 0x0048c580
extern undefined DAT_0048c591;   // 0x0048c591
extern undefined DAT_0048c5a2;   // 0x0048c5a2
extern undefined DAT_0048c5b3;   // 0x0048c5b3
extern undefined DAT_0048c5c4;   // 0x0048c5c4
extern undefined DAT_0048c5c8;   // 0x0048c5c8
extern uint DAT_0048c5d0;   // 0x0048c5d0
extern undefined DAT_0048c5d5;   // 0x0048c5d5
extern undefined DAT_0048c5d9;   // 0x0048c5d9
extern undefined DAT_0048c5dd;   // 0x0048c5dd
extern undefined DAT_0048c5e4;   // 0x0048c5e4
extern undefined DAT_0048c5f5;   // 0x0048c5f5
extern undefined4 DAT_0048c602;   // 0x0048c602
extern undefined4 DAT_0048c606;   // 0x0048c606
extern undefined4 DAT_0048c60a;   // 0x0048c60a
extern undefined4 DAT_0048c60e;   // 0x0048c60e
extern undefined4 DAT_0048c612;   // 0x0048c612
extern undefined4 DAT_0048c616;   // 0x0048c616
extern undefined DAT_0048c62c;   // 0x0048c62c
extern undefined DAT_0048c630;   // 0x0048c630
extern undefined DAT_0048c634;   // 0x0048c634
extern undefined DAT_0048c640;   // 0x0048c640
extern undefined DAT_0048c648;   // 0x0048c648
extern undefined DAT_0048c650;   // 0x0048c650
extern int DAT_0048c654;   // 0x0048c654
extern int DAT_0048c658;   // 0x0048c658
extern undefined DAT_0048c670;   // 0x0048c670
extern undefined DAT_0048c674;   // 0x0048c674
extern undefined4 DAT_0048c698;   // 0x0048c698
extern undefined4 DAT_0048c69c;   // 0x0048c69c
extern undefined DAT_0048c6a4;   // 0x0048c6a4
extern int DAT_0048c6ac;   // 0x0048c6ac
extern undefined4 DAT_0048c6b0;   // 0x0048c6b0
extern undefined4 DAT_0048c6b4;   // 0x0048c6b4
extern undefined DAT_0048c6c0;   // 0x0048c6c0
extern undefined4 DAT_0048c6d5;   // 0x0048c6d5
extern undefined4 DAT_0048c6d9;   // 0x0048c6d9
extern undefined4 DAT_0048c6dd;   // 0x0048c6dd
extern undefined4 DAT_0048c6e1;   // 0x0048c6e1
extern undefined4 DAT_0048c6f1;   // 0x0048c6f1
extern undefined4 DAT_0048c6f5;   // 0x0048c6f5
extern undefined DAT_0048c6fc;   // 0x0048c6fc
extern undefined4 _DAT_0048c70c;   // 0x0048c70c
extern undefined DAT_0048c70c;   // 0x0048c70c
extern undefined DAT_0048c710;   // 0x0048c710
extern undefined DAT_0048c86c;   // 0x0048c86c
extern HANDLE DAT_0048c8bc;   // 0x0048c8bc
extern undefined DAT_0048c8c0;   // 0x0048c8c0
extern int _DAT_0048c8d1;   // 0x0048c8d1
extern undefined DAT_0048c8dc;   // 0x0048c8dc
extern undefined4 _DAT_0048c8e1;   // 0x0048c8e1
extern undefined4 _DAT_0048c8e5;   // 0x0048c8e5
extern undefined4 _DAT_0048c8e9;   // 0x0048c8e9
extern uint * DAT_0048c8ed;   // 0x0048c8ed
extern undefined DAT_0048c8f4;   // 0x0048c8f4
extern undefined DAT_0048c904;   // 0x0048c904
extern undefined1 DAT_0048caf4;   // 0x0048caf4
extern undefined4 _DAT_0048caf5;   // 0x0048caf5
extern undefined4 _DAT_0048caf9;   // 0x0048caf9
extern undefined4 _DAT_0048cafd;   // 0x0048cafd
extern HWND DAT_0048cb01;   // 0x0048cb01
extern undefined DAT_0048cb05;   // 0x0048cb05
extern int DAT_0048cb20;   // 0x0048cb20
extern undefined DAT_0048cb24;   // 0x0048cb24
extern undefined DAT_0048cc28;   // 0x0048cc28
extern undefined4 _DAT_0048cc2c;   // 0x0048cc2c
extern undefined DAT_0048cc2c;   // 0x0048cc2c
extern undefined4 _DAT_0048cc30;   // 0x0048cc30
extern undefined4 _DAT_0048cc34;   // 0x0048cc34
extern HMODULE DAT_0048cc38;   // 0x0048cc38
extern undefined4 DAT_0048cc3c;   // 0x0048cc3c
extern undefined4 DAT_0048cc40;   // 0x0048cc40
extern undefined DAT_0048cc44;   // 0x0048cc44
extern int DAT_0048cc4c;   // 0x0048cc4c
extern undefined DAT_0048cc54;   // 0x0048cc54
extern undefined DAT_0048cd18;   // 0x0048cd18
extern undefined DAT_0048cd28;   // 0x0048cd28
extern undefined DAT_0048cd38;   // 0x0048cd38
extern undefined DAT_0048cd48;   // 0x0048cd48
extern undefined DAT_0048cd58;   // 0x0048cd58
extern undefined DAT_0048cd68;   // 0x0048cd68
extern undefined4 DAT_0048cd75;   // 0x0048cd75
extern undefined4 DAT_0048cd79;   // 0x0048cd79
extern undefined4 DAT_0048cd7d;   // 0x0048cd7d
extern undefined4 DAT_0048cd81;   // 0x0048cd81
extern undefined DAT_0048cd89;   // 0x0048cd89
extern undefined DAT_0048cda6;   // 0x0048cda6
extern undefined DAT_0048cdb7;   // 0x0048cdb7
extern undefined DAT_0048cdd0;   // 0x0048cdd0
extern undefined DAT_0048cde0;   // 0x0048cde0
extern undefined DAT_0048cdf0;   // 0x0048cdf0
extern undefined DAT_0048ce00;   // 0x0048ce00
extern undefined DAT_0048ce10;   // 0x0048ce10
extern undefined4 DAT_0048ce55;   // 0x0048ce55
extern undefined DAT_0048ce60;   // 0x0048ce60
extern undefined * DAT_0048ce70;   // 0x0048ce70
extern undefined * * _DAT_0048ce74;   // 0x0048ce74
extern undefined DAT_0048ce74;   // 0x0048ce74
extern undefined DAT_0048ce90;   // 0x0048ce90
extern undefined DAT_0048ced4;   // 0x0048ced4
extern undefined DAT_0048cf18;   // 0x0048cf18
extern int DAT_0048cf5c;   // 0x0048cf5c
extern undefined DAT_0048cfa0;   // 0x0048cfa0
extern int DAT_0048cfe0;   // 0x0048cfe0
extern int DAT_0048d020;   // 0x0048d020
extern undefined DAT_0048d060;   // 0x0048d060
extern int DAT_0048d068;   // 0x0048d068
extern int DAT_0048d06c;   // 0x0048d06c
extern uint DAT_0048d070;   // 0x0048d070
extern undefined4 * DAT_0048d074;   // 0x0048d074
extern int DAT_0048d078;   // 0x0048d078
extern undefined4 * DAT_0048d07c;   // 0x0048d07c
extern undefined4 * DAT_0048d080;   // 0x0048d080
extern int DAT_0048d084;   // 0x0048d084
extern undefined DAT_0048d088;   // 0x0048d088
extern undefined4 DAT_0048d090;   // 0x0048d090
extern undefined DAT_0048d490;   // 0x0048d490
extern int * DAT_0048d49c;   // 0x0048d49c
extern undefined * DAT_0048d4a0;   // 0x0048d4a0
extern undefined * DAT_0048d4a4;   // 0x0048d4a4
extern HANDLE _DAT_0048d570;   // 0x0048d570
extern undefined DAT_0048d570;   // 0x0048d570
extern HANDLE DAT_0048d574;   // 0x0048d574
extern HANDLE _DAT_0048d578;   // 0x0048d578
extern int _DAT_0048d638;   // 0x0048d638
extern byte DAT_0048d63c;   // 0x0048d63c
extern undefined DAT_0048d642;   // 0x0048d642
extern undefined1 DAT_0048d650;   // 0x0048d650
extern undefined1 DAT_0048d651;   // 0x0048d651
extern undefined1 DAT_0048d652;   // 0x0048d652
extern UINT _DAT_0048d754;   // 0x0048d754
extern undefined DAT_0048d758;   // 0x0048d758
extern undefined DAT_0048d858;   // 0x0048d858
extern int DAT_0048d874;   // 0x0048d874
extern undefined * DAT_0048d878;   // 0x0048d878
extern uint DAT_0048d87c;   // 0x0048d87c
extern int DAT_0048d880;   // 0x0048d880
extern int DAT_0048d884;   // 0x0048d884
extern undefined1 * DAT_0048d88c;   // 0x0048d88c
extern undefined2 * DAT_0048d890;   // 0x0048d890
extern int * DAT_0048d894;   // 0x0048d894
extern uint * DAT_0048d898;   // 0x0048d898
extern int _DAT_0048d89c;   // 0x0048d89c
extern char * DAT_0048d8b0;   // 0x0048d8b0
extern LPCH DAT_0048d8b4;   // 0x0048d8b4
extern int DAT_0048d8b8;   // 0x0048d8b8
extern undefined DAT_0048d8bc;   // 0x0048d8bc
extern undefined1 * DAT_0048d8c4;   // 0x0048d8c4
extern undefined4 _DAT_0048d8d8;   // 0x0048d8d8
extern undefined DAT_0048d8d8;   // 0x0048d8d8
extern int _DAT_0048d8dc;   // 0x0048d8dc
extern undefined4 DAT_0048d8ec;   // 0x0048d8ec
extern int * DAT_0048d8f0;   // 0x0048d8f0
extern undefined4 _DAT_0048d8f4;   // 0x0048d8f4
extern undefined4 _DAT_0048d8f8;   // 0x0048d8f8
extern undefined1 DAT_4f004175;   // 0x4f004175
extern undefined4 uRam632c7261;   // 0x632c7261
extern undefined1 uRam725f5f00;   // 0x725f5f00
extern undefined4 uRam732c7261;   // 0x732c7261

} // namespace tea
