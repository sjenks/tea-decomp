// TEA.exe — declarations for the decompiled program. Generated; do not edit.
// One prototype per function (as Ghidra has it after its signatures were committed) and one
// declaration per global the pseudocode names. Class names appear as namespaces: the binary has no
// type information from which real class definitions could be rebuilt.
#pragma once
#include "../ghidra.h"

namespace tea {

// ---- functions (4493) ----
void __stdcall entry(void);
void __stdcall __startup(void);
void __cdecl __GetExceptDLLinfo(undefined4 *info);
undefined4 __stdcall __getTlsBlock(void);
namespace TEADictionaryPropertiesWindows { int * __cdecl TEADictionaryPropertiesWindows(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6); }
namespace TEADictionaryPropertiesWindows { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace TEADictionaryPropertiesWindows { void __cdecl SetupWindow(int *self); }
int __cdecl FindWordInString(int text,int start,uint *word_);
namespace TEADictionaryPropertiesWindows { void __cdecl SetupMoveableControls(int *self); }
namespace OWL::TWindow { undefined4 __cdecl GetTooltip(int self); }
namespace OWL::TWindow { bool __cdecl EnableWindow(int self,byte enable); }
namespace OWL::TWindow { void __cdecl Invalidate(int self,byte erase); }
namespace OWL::TWindow { void __cdecl InvalidateRect(int self,RECT *pRect,byte erase); }
namespace std::string { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TStatic { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TGroupBox { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace std::vector_PropertiesViewWindows_MoveableControl_ptr { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std { void __cdecl _Destroy_range_ptr(undefined4 vec,int first,int last); }
namespace PrintoutFeeder { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace TEAPrintout { undefined4 * __cdecl TEAPrintout(undefined4 *self,uint *param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 *param_7); }
namespace TEAPrintout { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std { void __cdecl _Destroy_range_PageInfo(undefined4 vec,int first,int last); }
namespace TEAPrintout { void __cdecl vf6(int self,int param_2); }
namespace TEAPrintout { void __cdecl vf9(int self,undefined4 *param_2,int *param_3); }
namespace TEAPrintout { void __cdecl vf2(int self,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5); }
namespace TEAPrintout { void __cdecl Paginate(int self); }
namespace TEAPrintout::PageInfo { undefined4 * __cdecl Copy(undefined4 *dest,undefined4 *src,undefined4 *unused); }
namespace std::vector_PageInfo { void __cdecl insert_aux(int vec,undefined4 *pos,undefined4 *value); }
namespace std { undefined4 * __cdecl copy_backward_PageInfo(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3); }
namespace std { undefined4 * __cdecl uninitialized_copy_PageInfo(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3); }
namespace std { void __cdecl _Destroy_range_PageInfo_404240(int param_1,int param_2); }
namespace TEAPrintout { undefined4 __cdecl vf5(int self,int param_2); }
namespace OWL::TScreenDC { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace OWL::TFont { void __cdecl _dtor(uint *self,byte dtorFlags); }
namespace std::exception { undefined * __stdcall vf1(void); }
namespace std::bad_alloc { undefined * __stdcall vf1(void); }
namespace PrintPreviewPrintout { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace PrintoutFeeder { char * vf6(char *self,undefined4 param_2,byte param_3); }
namespace std::vector_TEAPrintout_PageInfo { void __cdecl _dtor(int self,byte dtorFlags); }
namespace TEAPrintoutFeeder { char * __cdecl GetLine(int self,int line,int column); }
namespace TEAPropertiesViewWindows { int * __cdecl TEAPropertiesViewWindows(int *self,int vbasesBuilt,undefined4 *param_3,int param_4,int param_5); }
namespace TEAPropertiesViewWindows { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace TEAPropertiesViewWindows { void __cdecl OnButton(undefined4 *self,int param_2,int param_3); }
namespace TEAPropertiesViewWindows { void __cdecl OnComboChange(int self); }
namespace TEAPropertiesViewWindows { void __cdecl OnColourChanged(int self,int *colour); }
namespace TEAPropertiesViewWindows { void __cdecl OnFontChanged(int self,undefined4 *column,int param_3); }
namespace TEAPropertiesViewWindows { void __cdecl OnEditKillFocus(int self,undefined4 param_2,int param_3); }
namespace TEAPropertiesViewWindows { void __cdecl OnSelectionCommitted(int self,int param_2); }
namespace TEAPropertiesViewWindows { void __cdecl InitControls(int self); }
namespace TEAPropertiesViewWindows { void __cdecl SetupWindow(int *self); }
namespace TEAPropertiesViewWindows { void __cdecl OnPageChanged(int *self); }
namespace TEAPropertiesViewWindows { void __cdecl UpdateEnabled(int self); }
namespace TEAPropertiesViewWindows { void __cdecl FillDefinitionDictionaries(int self,uint *paths); }
namespace OWL::TRadioButton { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TListBox { void __cdecl _dtor(int *self,uint dtorFlags); }
void __stdcall InitDictionaryCache(void);
void __stdcall DestroyDictionaryCache(void);
namespace TSDictionaryList { undefined4 * __cdecl TSDictionaryList(undefined4 *self,uint *paths); }
namespace TSDictionaryList { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std { void __cdecl _Destroy_range_ptr_40771c(undefined4 vec,int first,int last); }
namespace TSDictionaryList { undefined4 * __cdecl Open(uint *paths); }
namespace std::vector_ptr { void __cdecl insert_aux(int vec,undefined4 *pos,undefined4 *value); }
namespace std { undefined4 * __cdecl copy_backward_ptr(undefined4 *first,undefined4 *last,undefined4 *destEnd); }
namespace std { undefined4 * __cdecl copy_ptr(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace std { void __cdecl _Destroy_range_ptr_40886c(int first,int last); }
namespace TSDictionaryList { void __cdecl ReleaseDictionaries(int self); }
namespace std { int * __cdecl find_ptr(int *first,int *last,int *value); }
namespace std { undefined4 * __cdecl copy_ptr_4089a4(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace std::vector_ptr { void __stdcall operator_assign(void); }
namespace TSDictionaryList { int __cdecl GetCount(int self); }
namespace TSDictionaryList { undefined4 __cdecl GetFirstMissingPath(int self); }
namespace TSDictionaryList { undefined1 __cdecl IsLoaded(int self,int index); }
namespace TSDictionaryList { undefined4 __cdecl EnsureCurrent(int self,int index); }
namespace TSDictionaryList { undefined4 __cdecl GetPathList(undefined4 *self); }
namespace TSDictionaryList { undefined4 __cdecl GetPath(int self,int index); }
namespace TSDictionaryList { undefined4 __cdecl GetFileTitle(undefined4 result,int self,int index); }
namespace TSDictionaryList { undefined4 __cdecl GetFileDateText(undefined4 result,int self,int index); }
namespace TSDictionaryList { undefined4 __cdecl GetDescription(undefined4 result,int self,int index); }
namespace TSDictionaryList { void __cdecl GetSummaryText(int self,int index); }
undefined4 __stdcall ReturnZero(void);
namespace TSDictionaryList { undefined2 __cdecl GetNumLengths(int self,int index); }
namespace TSDictionaryList { bool __cdecl HasDefinitions(int self,int index); }
namespace TSDictionaryList { void __cdecl GetCounts(int self,int index); }
namespace TSDictionaryList { undefined4 __cdecl GetWordCount(int self,int index,int length); }
namespace TSDictionaryList { undefined4 __cdecl GetWordStreamOffset(int self,int index,int length); }
namespace TSDictionaryList { undefined4 __cdecl GetLetterChar(int self,int index,int letterClass); }
namespace TSDictionaryList { int __cdecl GetNumUsedLetters(int self,int index); }
namespace TSDictionaryList { int __cdecl GetSymbolBytes(int self,int index); }
namespace TSDictionaryList { uint __cdecl CollectDefinitionOffsets(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int vec); }
namespace std::vector_ptr { void __cdecl insert_aux_4092e8(int vec,undefined4 *pos,undefined4 *value); }
namespace std { undefined4 * __cdecl copy_backward_ptr_4094c0(undefined4 *first,undefined4 *last,undefined4 *destEnd); }
namespace std { undefined4 * __cdecl copy_ptr_4094e4(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace std { void __cdecl _Destroy_range_ptr_409564(int first,int last); }
namespace std { void __cdecl _Destroy_range_ptr_40957c(undefined4 vec,int first,int last); }
namespace TSDictionaryList { void __cdecl FindDefinitions(int self,int word_,int results); }
namespace DefinitionSearch { void __cdecl AddRecord(int self,uint offset); }
namespace DefinitionSearch { undefined4 __cdecl Merge(int self,int records,uint count,int flags); }
namespace std { int __cdecl __introsort_loop_string_40a2f4(int param_1,int param_2,int param_3); }
namespace std { int __cdecl uninitialized_copy_string(int first,int last,int dest); }
namespace std { void __cdecl _Destroy_range_16(int first,int last); }
namespace std { void __cdecl _Destroy_range_128(int first,int last); }
namespace DefinitionRecord { int __cdecl operator_assign(int self,int other,int unused); }
namespace std::vector_string { int __cdecl operator_assign(int self,int other); }
namespace std { int __cdecl copy_string_40add8(int first,int last,int dest); }
namespace DefinitionRecord { void __cdecl Swap(int a,int b,int unused); }
namespace std { void __cdecl uninitialized_copy_DefinitionRecord(int first,int last,int dest); }
namespace std { void __cdecl _Destroy_range_string(undefined4 vec,int first,int last); }
namespace DefinitionViewWindows { int __cdecl CompareDefinitions_40b5a8(int a,int b,int word_); }
namespace std { void __cdecl _Destroy_range_DefinitionRecord(undefined4 vec,int first,int last); }
namespace TSDictionaryList::Dictionary { undefined4 * __cdecl Dictionary(undefined4 *self,int path); }
namespace TSDictionaryList::Dictionary { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace TSDictionaryList::Dictionary { int * __cdecl Load(int *self,int reload); }
namespace TSDictionaryList::Dictionary { undefined4 * __cdecl Unload(int self); }
namespace TSDictionaryList::Dictionary { int __cdecl EnsureCurrent(int *self); }
namespace TSDictionaryList::Dictionary { undefined4 __cdecl GetPathData(int self); }
namespace TSDictionaryList::Dictionary { int __cdecl GetFileTitle(int result,int self); }
namespace TSDictionaryList::Dictionary { undefined4 __cdecl GetFileName(int self); }
namespace TSDictionaryList::Dictionary { void __cdecl GetCounts(int self,int *totalWords,int *totalLinked,int *shortest,int *longest); }
namespace TSDictionaryList::Dictionary { uint __cdecl GetSummaryText(int *self,int out); }
namespace TSDictionaryList::Dictionary { int __cdecl GetFileDateText(int result,int self); }
namespace TSDictionaryList::Dictionary { int __cdecl GetDescription(int result,int self); }
namespace TSDictionaryDefinitionRetriever { int * __cdecl TSDictionaryDefinitionRetriever(int *param_1,int tsDictionaryList,int index,undefined4 *param_4); }
namespace TSDictionaryDefinitionRetriever { void __cdecl _dtor(int self,byte dtorFlags); }
namespace TSDictionaryDefinitionRetriever { void __cdecl ReadDefinition(int param_1,LONG lDistanceToMove,int str); }
namespace std::vector_string { void __cdecl resize(int vec,uint n); }
namespace std::vector_string { undefined4 __cdecl insert_fill(int vec,int pos,uint n,int value); }
namespace std { int __cdecl uninitialized_copy_string_40df24(int first,int last,int dest); }
namespace std { int __cdecl copy_backward_string(int first,int last,int destEnd); }
namespace std { void __cdecl fill_string(int first,int last,int value); }
namespace std { void __cdecl uninitialized_fill_n_string(int dest,int n,int value); }
namespace std { int __cdecl copy_string_40e20c(int first,int last,int dest); }
namespace std::vector_string { void __cdecl insert_aux(int vec,int pos,int value); }
namespace TSDictionaryDefinitionSearchIndexed { int * __cdecl TSDictionaryDefinitionSearchIndexed(int *param_1,int dictList,int dictIndex,int param_4,undefined4 *param_5); }
namespace std::vector_uint { void __cdecl reserve(int vec,uint n); }
namespace std::vector_MatchEngine_ptr { void __cdecl resize(int vec,uint n); }
namespace std::vector_MatchEngine_ptr { undefined4 __cdecl insert_fill(int vec,undefined4 *first,uint n,undefined4 *value); }
namespace std { void __cdecl fill_ptr(undefined4 *first,undefined4 *last,undefined4 *value); }
namespace std { void __cdecl fill_n_ptr(undefined4 *first,int n,undefined4 *value); }
void __cdecl sort_uint32_impl(int *first,int *last);
namespace std { void __cdecl __insertion_sort_uint(int *first,int *last); }
namespace std { void __cdecl __unguarded_linear_insert_uint(int *last,int value); }
namespace std { void __cdecl __unguarded_insertion_sort_uint(int *first,int *last); }
void __cdecl sort_uint32(int *first,int *last);
namespace std { int * __cdecl __unguarded_partition_uint(int *first,int *last,int pivot); }
namespace std { int * __cdecl unique_uint(int *first,int *last); }
int * __cdecl unique_uint32(int *param_1,int *param_2,int *param_3);
namespace std { undefined4 * __cdecl copy_ptr_410598(undefined4 *first,undefined4 *last,undefined4 *dest); }
undefined4 * __cdecl set_union_uint32(int *first,int *last,int *first2,int *last2,int *dest);
int * __cdecl set_intersection_uint32(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5);
namespace TSDictionaryDefinitionSearchIndexed { void __cdecl _dtor(int self,byte dtorFlags); }
namespace TSDictionaryDefinitionSearchIndexed { undefined4 __cdecl Next(int *param_1,int str); }
namespace TSDictionaryDefinitionSearchIndexed { void __cdecl GetRange(int self,int *first,int *last); }
namespace TSDictionaryDefinitionSearchSequential { int * __cdecl TSDictionaryDefinitionSearchSequential(int *param_1,int param_2,int param_3,int param_4,undefined4 *param_5); }
namespace TSDictionaryDefinitionSearchSequential { void __cdecl _dtor(int self,byte dtorFlags); }
namespace TSDictionaryDefinitionSearchSequential { int * __cdecl Next(int *param_1,int param_2); }
namespace std { void __cdecl _Destroy_range_ptr_410d88(undefined4 vec,int first,int last); }
namespace TSDictionaryDefinitionSearchSequential { void __cdecl GetRange(int *self,int *first,int *last); }
namespace Definition { void __cdecl _dtor(int self,byte dtorFlags); }
namespace MatchEngine { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::logic_error { undefined4 __cdecl vf1(int self); }
namespace std::vector_TSDictionaryList_Dictionary_ptr { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::vector_const_MatchEngine_ptr { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::vector_long { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::vector_std_string { void __cdecl _dtor(int self,byte dtorFlags); }
undefined4 __stdcall MsgHookProc(int code_,undefined4 wParam,undefined4 *msg);
namespace InputEngine { undefined4 * __cdecl InputEngine(undefined4 *self,int dictList,int dictIndex); }
namespace InputEngine { void __cdecl _dtor(int self,byte dtorFlags); }
namespace InputEngine { bool __cdecl StartLength(int self,int length); }
namespace InputEngine { int __cdecl NextWord(int self,int unused); }
namespace InputEngine { char * __cdecl NextMatch(int self,int matchSet); }
namespace MatchEngineSet { uint __cdecl EvalLogic(int mode,int wordBuf,int length,byte *ops,int *engines); }
namespace InputEngine { bool __cdecl OpenFile(int self); }
namespace InputEngine { int __cdecl GetLinkGroupIndex(int self); }
namespace InputEngine { char * __cdecl GetAnnotation(int self); }
void __stdcall DestroyFileHistory(void);
namespace std::string { int __cdecl string_412334(int self); }
undefined * __cdecl GetFileHistory(int owner,int isCrossword);
namespace FileHistory { int __cdecl Get(int result,int self,int index); }
namespace FileHistory { void __cdecl Add(int self,uint *path); }
namespace FileHistory { void __cdecl Save(int self); }
namespace FileHistory { int * __cdecl FileHistory(int *self,int owner,int isCrossword); }
namespace FileHistory { void __cdecl _dtor(int self,byte dtorFlags); }
namespace IntroductionViewWindows { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace IntroductionViewWindows { int * __cdecl IntroductionViewWindows(int *self,int vbasesBuilt,undefined4 param_3,int param_4); }
namespace IntroductionViewWindows { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace IntroductionViewWindows { void __stdcall Cmd1530(void); }
namespace IntroductionViewWindows { void __stdcall Cmd29991(void); }
namespace IntroductionViewWindows { void __stdcall Cmd90(void); }
namespace IntroductionViewWindows { void __cdecl Cmd100(int self); }
namespace IntroductionViewWindows { int __cdecl GetEditText(int self,int out); }
namespace PropertiesViewWindows { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace PropertiesViewWindows { void __stdcall EvMsg_19(int self); }
namespace PropertiesViewWindows { void __stdcall EvSize_413cd4(int self); }
namespace PropertiesViewWindows { void __stdcall Cmd1530(int self); }
namespace PropertiesViewWindows { int * __cdecl PropertiesViewWindows(int *self,int vbasesBuilt,int param_3,undefined4 param_4,int param_5,uint *param_6, int param_7,int param_8); }
namespace PropertiesViewWindows { void __cdecl _dtor(int *self,uint dtorFlags); }
void vshared_414108(char *param_1,undefined4 param_2,char param_3);
namespace PropertiesViewWindows { void __cdecl SetupTooltips(int *self); }
namespace PropertiesViewWindows { void __cdecl DestroyTooltips(int *self); }
namespace PropertiesViewWindows { bool __cdecl IsTooltipActive(int self); }
undefined4 * __cdecl ListFilesInDirectory(undefined4 *result,int pattern);
namespace std { void __cdecl sort_collation(int first,int param_2); }
namespace std { void __cdecl __introsort_loop_collation(int first,int param_2); }
namespace std { void __cdecl __unguarded_linear_insert_collation(int str,undefined4 other,undefined4 param_3,byte *param_4); }
namespace std { void __cdecl __final_insertion_sort_collation(int str,int param_2); }
namespace std { void __cdecl unique_collation(uint str,uint str2); }
namespace std { uint __cdecl __median_collation(uint str,uint str2,undefined4 param_3,undefined4 param_4,byte *param_5); }
namespace PropertiesViewWindows { void __cdecl UpdateControlCallback(int child); }
namespace PropertiesViewWindows { void __cdecl EnableControls(int *self); }
namespace PropertiesViewWindows { void __stdcall OnButton(void); }
namespace PropertiesViewWindows { void __stdcall OnStaticClicked(void); }
namespace PropertiesViewWindows { void __stdcall OnEditKillFocus(void); }
namespace PropertiesViewWindows { void __stdcall OnEditChange(void); }
namespace PropertiesViewWindows { undefined4 __stdcall OnDoubleClick(void); }
namespace PropertiesViewWindows { void __stdcall OnUpDown(void); }
namespace PropertiesViewWindows { undefined4 __stdcall OnNotify25(void); }
namespace PropertiesViewWindows { void __stdcall OnNotify26(void); }
namespace PropertiesViewWindows { void __stdcall OnColourChanged(void); }
namespace PropertiesViewWindows { void __stdcall OnFontChanged(void); }
namespace PropertiesViewWindows { void __stdcall OnComboChange(void); }
namespace PropertiesViewWindows { undefined4 __stdcall OnNotify30(void); }
namespace PropertiesViewWindows { undefined4 __stdcall OnMouseOverControl(void); }
namespace PropertiesViewWindows { void __cdecl OnTextClicked(undefined4 self,undefined4 param_2,LPCSTR file); }
namespace PropertiesViewWindows { void __stdcall OnPathListChanged(void); }
namespace PropertiesViewWindows { undefined4 __stdcall IsResizable(void); }
namespace PropertiesViewWindows { int __cdecl GetSectionName(int self); }
namespace PropertiesViewWindows { void __stdcall OnNotify35(void); }
namespace PropertiesViewWindows { void __stdcall OnSelectionCommitted(void); }
namespace PropertiesViewWindows { void __cdecl Destroy(int *self,INT_PTR result); }
namespace PropertiesViewWindows { void __stdcall OnPropertyChanged(void); }
namespace PropertiesViewWindows { int __cdecl LoadResourceString(int self,int param_2,uint id); }
void __stdcall ShowContextHelp(void);
namespace PropertiesViewWindows { void __cdecl ShowControlTip(int self,undefined4 param_2,LPARAM lParam); }
undefined4 __cdecl FitRectToMonitor(int left2,int top2,int right2,int bottom2);
namespace PropertiesViewWindows { undefined4 __cdecl EvRegisteredMsg_4154a0(int self,int param_2); }
namespace PropertiesViewWindows { void __cdecl EvInitMenuPopup(int *self,HMENU hPopupMenu,undefined4 index,char sysMenu); }
namespace PropertiesViewWindows { void __cdecl EvMenuSelect(undefined4 self,undefined4 menuItemId,uint flags,int hMenu); }
namespace PropertiesViewWindows { void __cdecl SetupWindow(int *self); }
namespace PropertiesViewWindows { void __cdecl SetHelpTopic(int *self,int topic); }
namespace PropertiesViewWindows { void __cdecl ShowControlMenu(int *self,int *control,int *point); }
namespace PropertiesViewWindows { void __stdcall ShowHelp(void); }
namespace PropertiesViewWindows { void __cdecl CmEditExternalLookupSetup(undefined4 *self); }
namespace PropertiesViewWindows { void __cdecl CmShared_415d40(int *self,int index); }
namespace PropertiesViewWindows { int __cdecl GetLookupWord(int self); }
namespace PropertiesViewWindows { void __cdecl GetControlTipText(int *self,int *param_2); }
namespace PropertiesViewWindows { undefined4 __cdecl EvCtlColor(int *self,HDC hdc,HWND hWnd,int param_4); }
namespace PropertiesViewWindows { void __cdecl EvSize(int *self,int param_2); }
namespace PropertiesViewWindows { void __cdecl EvPaint(int *self); }
namespace PropertiesViewWindows { void __cdecl EvActivate(int *self); }
namespace PropertiesViewWindows { bool __cdecl PreProcessMsg(int *self,LPMSG lParam); }
namespace PropertiesViewWindows { undefined4 __cdecl EvNotify(int *self,int param_2,undefined4 *param_3); }
namespace PropertiesViewWindows { undefined4 __cdecl LoadDword(int self,uint *valueName,undefined4 defaultValue); }
namespace PropertiesViewWindows { void __cdecl SaveDword(int self,uint *valueName); }
namespace PropertiesViewWindows { int __cdecl LoadString(int result,int self,uint *valueName,uint *defaultValue); }
namespace PropertiesViewWindows { void __cdecl SaveString(int self,uint *valueName,uint *value); }
namespace PropertiesViewWindows::MoveableControl { int * __cdecl MoveableControl(int *self,int control,int xFactor,int yFactor,int sizeFactor); }
namespace PropertiesViewWindows { void __stdcall SetupMoveableControls(void); }
namespace PropertiesViewWindows { void __cdecl AddMoveableControl(int self,undefined4 control); }
namespace std::vector_ptr { void __cdecl insert_aux_4174cc(int vec,undefined4 *pos,undefined4 *value); }
namespace std { undefined4 * __cdecl copy_backward_ptr_4176a4(undefined4 *first,undefined4 *last,undefined4 *destEnd); }
namespace std { undefined4 * __cdecl copy_ptr_4176c8(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace std { void __cdecl _Destroy_range_ptr_417748(int first,int last); }
void __cdecl SetTooltipMaxWidth(undefined4 self,HWND hWndTooltip);
namespace PropertiesViewWindows { void __cdecl RepositionControls(int *self,int delta); }
LOGBRUSH * __cdecl MakeLogBrush(LOGBRUSH *logBrush,COLORREF colour);
namespace PVWBrush { void __cdecl _dtor(int self,byte dtorFlags); }
namespace PVWPushButton { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace PVWPushButton { int * __cdecl PVWPushButton(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4); }
namespace PVWPushButton { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace PVWPushButton { void __cdecl BNClicked(int *self); }
namespace PVWPushButton { void __cdecl PreProcessMsg(int *self,LPMSG lParam); }
namespace PVWPushButton { void __cdecl EvShowWindow(int *self,char param_2); }
namespace PVWRadioButton { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace PVWRadioButton { void __stdcall EvMouseMove(int self); }
namespace PVWRadioButton { int * __cdecl PVWRadioButton(int *self,int vbasesBuilt,undefined4 *param_3,uint param_4,int param_5); }
namespace PVWRadioButton { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace PVWRadioButton { void __cdecl PreProcessMsg(int *self,LPMSG lParam); }
namespace PVWRadioButton { void __cdecl vf13(int *self); }
namespace PVWRadioButton { void __cdecl SetupWindow(int *self); }
namespace PVWRadioButton { void __cdecl BNClicked(int *self); }
namespace PVWRadioButton { void __cdecl EvShowWindow(int *self,char param_2); }
namespace PVWCheckBox { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace PVWCheckBox { int * __cdecl PVWCheckBox(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4); }
namespace PVWCheckBox { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace PVWCheckBox { void __cdecl BNClicked(int *self); }
namespace PVWCheckBox { void __cdecl EvShowWindow(int *self,char param_2); }
namespace PVWColourButton { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace PVWColourButton { int * __cdecl PVWColourButton(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4,int param_5); }
namespace PVWColourButton { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace PVWColourButton { void __cdecl PreProcessMsg(int *self,LPMSG lParam); }
namespace PVWColourButton { void __cdecl SetColour(int *self,int *colour); }
namespace PVWColourButton { undefined4 __stdcall EvRegisteredMsg_418a70(void); }
namespace PVWColourButton { void __cdecl vf7(int self); }
namespace PVWColourButton { void __cdecl vf6(int self); }
namespace PVWColourButton { void __cdecl vf5(int self,int param_2); }
namespace PVWColourButton { void __cdecl BNClicked(int *self); }
namespace PVWFontButton { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace PVWFontButton { int * __cdecl PVWFontButton(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4,int param_5,int param_6 ,int param_7); }
namespace PVWFontButton { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace PVWFontButton { void __cdecl PreProcessMsg(int *self,LPMSG lParam); }
namespace PVWFontButton { void __cdecl SetSampleFont(int *self,int *logFont,int *colour,int x,int y,int w,int h); }
namespace PVWFontButton { undefined4 __stdcall EvRegisteredMsg_419488(void); }
namespace PVWFontButton { void __cdecl vf7(int self); }
namespace PVWFontButton { void __cdecl vf6(int self); }
namespace PVWFontButton { void __cdecl vf5(int self,int param_2); }
namespace PVWFontButton { void __cdecl BNClicked(int *self); }
namespace PVWRichEdit { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace PVWRichEdit { int * __cdecl PVWRichEdit(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4,int *param_5, int param_6); }
namespace PVWRichEdit { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace PVWRichEdit { void __cdecl EvLButtonDblClk(int *self); }
namespace PVWRichEdit { void __cdecl NotifyAtChild_512(int *self); }
namespace PVWRichEdit { void __cdecl NotifyAtChild_768(int *self); }
namespace PVWRichEdit { int __cdecl GetWordAt(int self,int *position,int word_,int lParam); }
namespace PVWRichEdit { void __cdecl SetupWindow(int *self); }
namespace PVWRichEdit { undefined1 __stdcall CanClose(void); }
namespace PVWRichEdit { undefined1 __stdcall SetDocTitle(void); }
namespace PVWRichEdit { void __cdecl SetPlainText(int *self,LPCSTR text); }
namespace PVWRichEdit { int __cdecl GetText(int self,int *out); }
namespace PVWRichEdit { void __cdecl SetText(int *self,int text); }
namespace PVWRichEdit { void __cdecl SetRtf(int *self,int text); }
namespace PVWRichEdit { void __cdecl vf30(int *self,LONG *param_2); }
namespace PVWRichEdit { void __stdcall vf31(void); }
namespace PVWRichEdit { void __cdecl vf9(int *self); }
namespace PVWRichEdit { void __cdecl ApplyFont(undefined4 *colour,int charFormat); }
namespace PVWEdit { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace PVWEdit { int * __cdecl PVWEdit(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4,int param_5); }
namespace PVWEdit { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace PVWEdit { void __cdecl NotifyAtChild_512(int *self); }
namespace PVWEdit { void __cdecl NotifyAtChild_768(int *self); }
namespace PVWEdit { void __cdecl SetText(int *self,LPCSTR text); }
namespace PVWEdit { void __cdecl SetInt(int *self); }
namespace PVWEdit { void __cdecl SetLong(int *self); }
namespace PVWEdit { int __cdecl GetInt(int *self); }
namespace PVWEdit { int __cdecl GetText(int self,int *out); }
namespace PVWEdit { void __cdecl SetIntValue(int *self,int value); }
namespace PVWEdit { void __cdecl SetPathText(int *self,int path); }
namespace PVWEdit { void __cdecl vf9(int *self); }
namespace PVWEdit { void __cdecl PreProcessMsg(int *self,LPMSG lParam); }
namespace PVWStatic { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace PVWStatic { int * __cdecl PVWStatic(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4,int param_5); }
namespace PVWStatic { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace PVWStatic { bool __cdecl IsTransparent(int *self); }
namespace PVWStatic { int __cdecl GetText(int self,int *out); }
namespace PVWStatic { void __cdecl BNClicked(int *self); }
namespace PVWUpDown { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace PVWUpDown { int * __cdecl PVWUpDown(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4); }
namespace PVWUpDown { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace PVWUpDown { void __cdecl PreProcessMsg(int *self,LPMSG lParam); }
namespace PVWUpDown { void __cdecl EvVScroll(int *self,int param_2); }
namespace PVWEnumeration { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace PVWEnumeration { int * __cdecl PVWEnumeration(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4,int param_5,int param_6 ); }
namespace PVWEnumeration { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace PVWEnumeration { void __cdecl SetupWindow(int self); }
namespace PVWEnumeration { void __cdecl Reset(int self); }
namespace PVWEnumeration { void __cdecl NotifyAtChild_9(int *self); }
namespace PVWCombo { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace PVWCombo { int * __cdecl PVWCombo(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4,int param_5); }
namespace PVWCombo { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace PVWCombo { void __cdecl ClearItems(int self); }
namespace PVWCombo { int __cdecl FillDictionaries(int self,uint *paths,int selected); }
namespace PVWCombo { undefined4 __cdecl GetSelectionIndex(int self); }
namespace PVWCombo { undefined4 __cdecl GetSelectedValue(int self); }
namespace PVWCombo { int __cdecl AddToHistory(int self,int text,int limit); }
namespace PVWCombo { bool __cdecl PreProcessMsg(int *self,LPMSG lParam); }
namespace PVWCombo { void __cdecl NotifyAtChild_9(int *self); }
namespace PVWCombo { int __cdecl AddPathItems(int self,int paths); }
namespace PVWURL { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace PVWURL { void __stdcall EvGetDlgCode(int self); }
namespace PVWURL { void __stdcall EvLButtonDown(int self); }
namespace PVWURL { void __stdcall EvMouseMove(int self); }
namespace PVWURL { void __stdcall EvLButtonUp(int self); }
namespace PVWURL { int * __cdecl PVWURL(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4,int param_5,int param_6 ); }
namespace PVWURL { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace PVWURL { void __cdecl SetupWindow(int *self); }
namespace std::logic_error { undefined4 * __cdecl logic_error_copy(undefined4 *self,int other); }
namespace PVWURL { void __cdecl vf22(int *self,undefined4 param_2,int *param_3); }
namespace PVWURL { void __cdecl vf23(int *self,undefined4 param_2,int *param_3); }
namespace PVWURL { void __cdecl vf24(int *self); }
namespace PVWURL { uint __cdecl vf25(int *self,int param_2); }
namespace PVWURL::Link { undefined4 * __cdecl Link(undefined4 *self); }
namespace PVWFontMaintainer { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __cdecl CreateFontFromLogFont2(undefined4 *result,undefined4 *logFont);
void __cdecl MeasureControlText(int *control,int *size);
undefined4 __cdecl CreateFontFromLogFont(undefined4 *param_1);
namespace PVWTabs { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace PVWTabs { int * __cdecl PVWTabs(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4); }
namespace PVWTabs { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace PVWTabs { void __cdecl EvKeyDown(int *self,int param_2); }
namespace PVWTabs { void __cdecl EvLButtonDblClk(int self); }
namespace PVWPathListBox { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace PVWPathListBox { void __stdcall EvMouseMove(int self); }
namespace PVWPathListBox { int * __cdecl PVWPathListBox(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4); }
namespace PVWPathListBox { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace PVWPathListBox { void __cdecl vf31(int *self); }
namespace PVWPathListBox { void __cdecl Fill(int self,int paths,char sorted); }
namespace PVWPathListBox { int __cdecl GetPathAt(int result,int self,int index); }
namespace PVWPathListBox { void __cdecl UpdateEntry(int self,int list,int index); }
namespace PVWPathListBox { undefined4 __cdecl IsFull(int self); }
namespace PVWPathList { int * __cdecl PVWPathList(int *self,undefined4 *parent,int firstId,int module,int flags); }
namespace PVWPathList { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace PVWPathList { void __cdecl EditDictionary(int self,int index); }
char * __cdecl memrchr(char *p,char ch,int n);
namespace PVWPathList { void __cdecl Refresh(int self); }
namespace PVWPathList { void __cdecl UpdateButtons(int self,int listId); }
namespace PVWPathList { void __cdecl OnDoubleClick(int self,int listId); }
namespace PVWPathList { void __cdecl GetControlTip(int self,int *control,int index,int *out); }
namespace PVWPathList { void __cdecl FillAvailable(int self,int folder); }
namespace PVWPathList { void __cdecl FillSelected(int self,int paths); }
namespace PVWPathList { undefined4 * __cdecl GetPaths(undefined4 *result,int self); }
bool __cdecl IsValidDictionaryFile(undefined4 unused,int path);
namespace OWL::TDefaultGUIFont { void __cdecl _dtor(uint *self,byte dtorFlags); }
namespace OWL::TChooseColorDialog::TData { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TPen { void __cdecl _dtor(uint *self,byte dtorFlags); }
namespace PVWPathList::Entry { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TPopupMenu { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TListBox { void __cdecl GetCount(int *self); }
namespace OWL::TListBox { void __cdecl FindString(int *self,LPARAM lParam,WPARAM wParam); }
namespace OWL::TListBox { void __cdecl FindExactString(int *self,undefined4 param_2,undefined4 param_3); }
namespace OWL::TListBox { void __cdecl GetTopIndex(int *self); }
namespace OWL::TListBox { void __cdecl SetTopIndex(int *self,WPARAM wParam); }
namespace OWL::TListBox { void __cdecl GetHorizontalExtent(int *self); }
namespace OWL::TListBox { void __cdecl SetHorizontalExtent(int *self,WPARAM wParam); }
namespace OWL::TListBox { void __cdecl GetStringLen(int *self,WPARAM wParam); }
namespace OWL::TListBox { void __cdecl GetString(int *self,LPARAM lParam,WPARAM wParam); }
namespace OWL::TListBox { void __cdecl GetItemData(int *self,WPARAM wParam); }
namespace OWL::TListBox { void __cdecl SetItemData(int *self,WPARAM wParam,LPARAM lParam); }
namespace OWL::TListBox { void __cdecl GetItemHeight(int *self,WPARAM wParam); }
namespace OWL::TListBox { void __cdecl SetItemHeight(int *self,WPARAM wParam,ushort lParam); }
namespace OWL::TListBox { void __cdecl ClearList(int *self); }
namespace OWL::TListBox { void __cdecl DirectoryList(int *self,WPARAM wParam,LPARAM lParam); }
namespace OWL::TListBox { void __cdecl AddString(int *self,LPARAM lParam); }
namespace OWL::TListBox { void __cdecl InsertString(int *self,LPARAM lParam,WPARAM wParam); }
namespace OWL::TListBox { void __cdecl DeleteString(int *self,WPARAM wParam); }
namespace OWL::TEdit { void __cdecl GetSelection(int *self,WPARAM wParam,LPARAM lParam); }
namespace OWL::TEdit { undefined4 __cdecl vf14(int self); }
namespace OWL::TEdit { bool __cdecl SetSelection(int *self,WPARAM wParam,LPARAM lParam); }
namespace OWL::TEdit { void __cdecl Paste(int *self); }
namespace OWL::TEdit { void __cdecl CharFromPos(int *self,undefined2 param_2,undefined2 param_3); }
namespace OWL::TEdit { void __cdecl PosFromChar(int *self,WPARAM wParam); }
namespace OWL::TComboBox { void __cdecl GetCount(int *self); }
namespace OWL::TComboBox { void __cdecl FindString(int *self,LPARAM lParam,WPARAM wParam); }
namespace OWL::TComboBox { void __cdecl FindExactString(int *self,LPARAM lParam,WPARAM wParam); }
namespace OWL::TComboBox { void __cdecl GetTopIndex(int *self); }
namespace OWL::TComboBox { void __cdecl SetTopIndex(int *self,WPARAM wParam); }
namespace OWL::TComboBox { void __cdecl GetHorizontalExtent(int *self); }
namespace OWL::TComboBox { void __cdecl SetHorizontalExtent(int *self,WPARAM wParam); }
namespace OWL::TComboBox { void __cdecl GetStringLen(int *self,WPARAM wParam); }
namespace OWL::TComboBox { void __cdecl GetString(int *self,LPARAM lParam,WPARAM wParam); }
namespace OWL::TComboBox { void __cdecl GetItemData(int *self,WPARAM wParam); }
namespace OWL::TComboBox { void __cdecl SetItemData(int *self,WPARAM wParam,LPARAM lParam); }
namespace OWL::TComboBox { void __cdecl GetItemHeight(int *self,WPARAM wParam); }
namespace OWL::TComboBox { void __cdecl SetItemHeight(int *self,WPARAM wParam,ushort lParam); }
namespace OWL::TComboBox { void __cdecl ClearList(int *self); }
namespace OWL::TComboBox { void __cdecl DirectoryList(int *self,WPARAM wParam,LPARAM lParam); }
namespace OWL::TComboBox { void __cdecl AddString(int *self,LPARAM lParam); }
namespace OWL::TComboBox { void __cdecl InsertString(int *self,LPARAM lParam,WPARAM wParam); }
namespace OWL::TComboBox { void __cdecl DeleteString(int *self,WPARAM wParam); }
namespace OWL::TComboBox { void __cdecl GetSelIndex(int *self); }
namespace OWL::TComboBox { void __cdecl SetSelIndex(int *self,WPARAM wParam); }
namespace OWL::TComboBox { void __cdecl GetSelStringIndex(int *self,LPARAM lParam,WPARAM wParam); }
namespace OWL::TComboBox { void __cdecl SetSelString(int *self,LPARAM lParam,WPARAM wParam); }
namespace OWL::TRichEdit { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TUpDown { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace LookupConfiguration::LookupEntry { void __cdecl Clear(undefined4 *self); }
namespace OWL::TAPointer_char { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace LookupConfiguration::LookupStyleEntries { void __cdecl Clear(undefined4 *self); }
namespace OWL::TAPointer_OWL_TColor { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __stdcall DestroyLookupConfiguration(void);
undefined * __cdecl GetLookupConfiguration(int owner);
namespace LookupConfiguration { uint __cdecl Run(int self,uint *word_,int index); }
namespace LookupConfiguration { int __cdecl GetCount(int *self); }
namespace LookupConfiguration { void __cdecl UpdateMenuLabels(int *self); }
namespace LookupConfiguration { void __cdecl FillMenu(int *self,int hMenu,int position); }
namespace LookupConfiguration { void __cdecl Save(int self); }
int __cdecl AppendChar(int result,int str);
namespace LookupConfiguration { int * __cdecl LookupConfiguration(int *self,int owner); }
namespace LookupConfiguration::LookupEntry { undefined4 * __cdecl LookupEntry(undefined4 *self); }
namespace LookupConfiguration::LookupEntry { void __cdecl _dtor(int self,byte dtorFlags); }
namespace LookupConfiguration { void __cdecl _dtor(int self,byte dtorFlags); }
namespace LookupConfiguration::LookupStyleEntries { void __cdecl _dtor(int self,byte dtorFlags); }
namespace MyScroller { void __cdecl UpdateRange(int self); }
namespace PrintPreviewWindow { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace PrintPreviewWindow { void __stdcall EvSize(int self); }
namespace PrintPreviewWindow { int * __cdecl PrintPreviewWindow(int *self,int vbasesBuilt,uint *title,int parent,int printer,int printout,int client, int module,uint *caption,undefined4 flags,int *rect); }
namespace PrintPreviewWindow { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace PrintPreviewWindow { void __cdecl vf19(int self,int *param_2); }
namespace OWL::TControl::Streamer { void vf4(char *self,int param_2,byte param_3); }
namespace PrintPreviewWindow { void __cdecl SetupWindow(int *self); }
namespace PrintPreviewWindow { undefined4 __cdecl Create(int self); }
namespace PrintPreviewWindow { undefined4 __cdecl PreProcessMsg(int *self,LPMSG lParam2); }
namespace PrintPreviewWindow { void __cdecl Destroy(int self,undefined4 param_2); }
namespace PrintPreviewWindow { void __cdecl EvCommandEnable(undefined4 *self,int *param_2); }
namespace PrintPreviewWindow { int * __cdecl vf18(undefined4 self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6); }
namespace PrintPreviewWindow { void __cdecl vf17(int self); }
namespace PrintPreviewWindow { void __cdecl vf20(int self); }
namespace PrintPreviewWindow { void __stdcall EvHelp(void); }
namespace PrintPreviewWindow { void __cdecl vf21(undefined4 *self,WPARAM wParam,int *size); }
namespace PrintPreviewWindow { void __cdecl CeCmd5690(undefined4 self,undefined4 *commandEnabler); }
namespace PrintPreviewWindow { void __cdecl CeCmd5720(undefined4 self,undefined4 *commandEnabler); }
namespace PrintPreviewWindow { void __cdecl CeCmd5730(undefined4 self,undefined4 *commandEnabler); }
namespace PrintPreviewWindow { void __cdecl Cmd5690(int self); }
namespace PrintPreviewWindow { undefined4 __cdecl Cmd5720(int self); }
namespace PrintPreviewWindow { undefined4 __cdecl Cmd5730(int self); }
namespace PrintPreviewWindow { undefined4 __cdecl GetPageCount(int self); }
namespace PrintPreviewWindow { int __cdecl NextPage(int self); }
namespace PrintPreviewWindow { int __cdecl PreviousPage(int self); }
namespace MyScroller { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TPrintDC { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace OWL::TGadgetWindowFont { void __cdecl _dtor(uint *self,byte dtorFlags); }
namespace OWL::TSeparatorGadget { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TPreviewPage { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace MatchListLabelWindows { int * __cdecl MatchListLabelWindows(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4,int *param_5); }
namespace MatchListLabelWindows { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace MatchListLabelWindows { void __cdecl SetLabel(int *self,int number,int text); }
namespace MatchListLabelWindows { void __cdecl SetCount(int *self,int count); }
namespace MatchListLabelWindows { void __cdecl UpdateText(int *self); }
namespace MatchListWindows { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace MatchListWindows { int * __cdecl MatchListWindows(int *self,int vbasesBuilt,undefined4 *parent,int ctlId,int *bounds); }
namespace MatchListWindows::SelectionTree { void __cdecl AddNodeBuffer(int *tree); }
namespace MatchListWindows::EntryTree { void __cdecl AddNodeBuffer(int *tree); }
namespace std::vector_EntryHead { void __cdecl reserve(int vec,uint n); }
namespace std { undefined4 * __cdecl uninitialized_copy_EntryHead(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace std { void __cdecl _Destroy_range_12(int first,int last); }
namespace std { void __cdecl _Destroy_range_EntryHead(undefined4 vec,undefined4 *first,undefined4 *last); }
namespace std::vector_EntryHead { void __cdecl insert_aux(int vec,int *pos,int *value); }
namespace std { int * __cdecl copy_backward_EntryHead(int *first,int *last,int *destEnd); }
namespace MatchListWindows { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace std { void __cdecl _Destroy_range_ptr_42a45c(undefined4 vec,int first,int last); }
namespace MatchListWindows::EntryTree { undefined4 * __cdecl erase_range(undefined4 *result,int tree,undefined4 firstLo,undefined4 firstHi,int firstNode); }
namespace MatchListWindows::EntryTree { void __cdecl __erase(int tree,int node); }
namespace MatchListWindows::EntryTree { undefined4 * __cdecl erase(undefined4 *result,int tree,undefined4 itLo,undefined4 itHi,int itNode); }
namespace __rwstd::__rb_tree { void __cdecl __set_node(undefined4 *dest,undefined4 node); }
namespace __rwstd::__rb_tree { int __cdecl __minimum(int node); }
namespace __rwstd::__rb_tree { int __cdecl __maximum(int node); }
namespace __rwstd::__rb_tree::iterator { void __cdecl increment(int it); }
namespace __rwstd::__rb_tree { void __cdecl __deallocate_buffers(int tree); }
namespace MatchListWindows::SelectionTree { undefined4 * __cdecl erase_range(undefined4 *result,int tree,undefined4 firstLo,undefined4 firstHi,int firstNode); }
namespace MatchListWindows::SelectionTree { void __cdecl __erase(int tree,int node); }
namespace MatchListWindows::SelectionTree { undefined4 * __cdecl erase(undefined4 *result,int tree,undefined4 itLo,undefined4 itHi,int itNode); }
namespace __rwstd::__rb_tree { void __cdecl __set_node_42b8f8(undefined4 *dest,undefined4 node); }
namespace __rwstd::__rb_tree { int __cdecl __minimum_42b908(int node); }
namespace __rwstd::__rb_tree { int __cdecl __maximum_42b928(int node); }
namespace __rwstd::__rb_tree::iterator { void __cdecl increment_42b948(int it); }
namespace __rwstd::__rb_tree { void __cdecl __deallocate_buffers_42b9ac(int tree); }
namespace MatchListWindows { void __cdecl SetColumnWidths(int self,undefined4 wordWidth,undefined4 annotationWidth); }
namespace MatchListWindows { undefined4 __cdecl GetLineCount(int self); }
namespace MatchListWindows { int __cdecl GetEntryCount(int self); }
namespace __rwstd::__rb_tree::iterator { void __cdecl increment_42ba94(int it); }
namespace MatchListWindows { int __cdecl GetEntryText(int self,int index); }
namespace MatchListWindows { void __cdecl Clear(int *self); }
namespace std { int * __cdecl copy_EntryHead(int *first,int *last,int *dest); }
namespace MatchListWindows { void __cdecl Invalidate(int *self,byte erase); }
namespace MatchListWindows { void __cdecl SetBounds(int *self,int *rect,char redraw); }
namespace MatchListWindows { void __cdecl PreProcessMsg(int *self,LPMSG lParam2); }
namespace MatchListWindows { void __cdecl UpdateScrollState(int *self,char changed); }
namespace MatchListWindows { char * __stdcall GetClassName(void); }
namespace MatchListWindows { void __cdecl Paint(int *self,int *param_2); }
namespace MatchListWindows::Selection { undefined4 * __cdecl Selection(undefined4 *self); }
namespace std { undefined4 * __cdecl copy_ptr_42cbf0(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace std::vector_ptr { void __cdecl insert_aux_42cc14(int vec,undefined4 *pos,undefined4 *value); }
namespace std { undefined4 * __cdecl copy_backward_ptr_42cdec(undefined4 *first,undefined4 *last,undefined4 *destEnd); }
namespace std { undefined4 * __cdecl copy_ptr_42ce10(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace std { void __cdecl _Destroy_range_ptr_42ce90(int first,int last); }
namespace MatchListWindows { void __cdecl SetupWindow(int *self); }
namespace MatchListWindows { uint __cdecl EvGetDlgCode(int *self); }
namespace MatchListWindows { void __cdecl EvKeyDown(int *self,int param_2); }
namespace MatchListWindows { void __cdecl EvSysKeyDown(int *self,int param_2); }
namespace MatchListWindows { void __cdecl EvLButtonDown(int *self,byte modKeys,int point); }
namespace MatchListWindows { void __cdecl EvLButtonDblClk(int self); }
namespace MatchListWindows { void __cdecl EvLButtonUp(int *self); }
namespace MatchListWindows { void __stdcall EvRButtonDown(int *self,byte modKeys,int point); }
namespace MatchListWindows { void __stdcall EvRButtonDown_body(void); }
namespace MatchListWindows { void __cdecl EvRButtonUp(int *self,undefined4 modKeys,int *point); }
namespace MatchListWindows { void __stdcall EvMouseMove(int *self,uint modKeys,int point); }
namespace MatchListWindows { void __stdcall EvMouseMove_body(void); }
namespace std { int * __cdecl find_ptr_42d9a0(int *first,int *last,int *value); }
namespace MatchListWindows { void __cdecl EvSetFocus(int *self); }
namespace MatchListWindows { void __cdecl EvKillFocus(int *self); }
namespace MatchListWindows { void __cdecl EvTimer(int *self); }
namespace MatchListWindows { void __cdecl EvVScroll(int *self,int param_2); }
namespace MatchListWindows { void __cdecl SetFonts(int self,undefined4 *wordFont,undefined4 *annotationFont,undefined4 wordColour, undefined4 annotationColour); }
namespace MatchListWindows { undefined4 __cdecl AddEntry(int *self,uint *word_,uint *annotation,int suffix,undefined4 group); }
namespace MatchListWindows::SelectionTree { undefined4 * __cdecl insert_unique(undefined4 *result,int *tree,int *value); }
namespace MatchListWindows::SelectionTree { int __cdecl __insert(int result,int *tree,int forceLeft,int parent,int *value); }
namespace MatchListWindows::SelectionTree { undefined4 * __cdecl __get_node(int *tree,undefined4 *value); }
namespace __rwstd::__rb_tree::iterator { void __cdecl decrement(int it); }
namespace MatchListWindows { bool __cdecl Contains(int self,uint *word_,char *wordLen); }
namespace MatchListWindows::SelectionTree { undefined4 * __cdecl find(undefined4 *result,int tree,int *key); }
namespace MatchListWindows { undefined4 __cdecl MoveCaret(int *self,int key,int extend); }
namespace MatchListWindows { undefined1 __cdecl GetEntry(int self,int useCaret,int text,undefined4 *group); }
namespace MatchListWindows { void __cdecl SelectFirst(int *self); }
namespace MatchListWindows { void __cdecl SelectAll(int *self); }
namespace MatchListWindows { undefined1 __cdecl GetEntryFlag(int self,int index); }
namespace MatchListWindows { int * __cdecl Select(int *result,int *self,int first,int count,int mode,char extend); }
namespace MatchListWindows::EntryTree { undefined4 * __cdecl insert_unique(undefined4 *result,int *tree,int *value); }
namespace MatchListWindows::EntryTree { int __cdecl __insert(int result,int *tree,int forceLeft,int parent,int *value); }
namespace MatchListWindows::EntryTree { undefined4 * __cdecl __get_node(int *tree,undefined4 *value); }
namespace __rwstd::__rb_tree::iterator { void __cdecl decrement_430114(int it); }
namespace MatchListWindows::EntryTree { int * __cdecl operator_assign(int *self,int *other); }
namespace MatchListWindows::EntryTree { undefined4 * __cdecl __copy(int *tree,undefined4 *src,undefined4 *parent); }
namespace MatchListWindows { undefined4 __cdecl GetLinesRect(int *self,int first,int count,int *rect); }
namespace MatchListWindows { void __stdcall InvalidateSelection_stub(int *matchListWindows); }
namespace MatchListWindows { void __stdcall InvalidateSelection(void); }
namespace MatchListWindows::Entry { void __cdecl Entry(undefined4 *self,uint *text,char *wordLen,undefined4 group); }
namespace MatchListWindows { undefined4 __cdecl SelectionLess(undefined4 self,int a,int b); }
namespace MatchListWindows::EntryHead { undefined4 * __cdecl EntryHead_move(undefined4 *self,undefined4 *other); }
namespace MatchListWindows::EntryHead { void __cdecl operator_assign(int *self,int *other); }
namespace MatchListWindows::EntryHead { void __cdecl Clear(undefined4 *self); }
namespace MatchListWindows::SelectionIterator { int * __cdecl SelectionIterator(int *self,int list); }
namespace MatchListWindows::SelectionIterator { int __cdecl Next(int *self); }
namespace MatchListWindows::SelectionIterator { void __cdecl Seek(int *self,int n); }
namespace MatchListWindows { undefined4 __cdecl IsSelected(int self,int line); }
namespace MatchListWindows { undefined4 * __cdecl GetEntryAt(int self,int index); }
namespace MatchListWindows { bool __cdecl CompareEntries(int param_1,int param_2,uint param_3); }
namespace MatchListWindows { int __cdecl CompareWithEntry(int entry,byte *word_,int wordLen,uint mode); }
namespace MatchListWindows { void __cdecl ShowContextMenu(int *self,int *point); }
namespace MatchListWindows::Selection { void __cdecl _dtor(int self,byte dtorFlags); }
namespace MatchListWindows::EntryHead { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::set_MatchListWindows_Selection_std_less_MatchListWindows_Selection { void __cdecl _dtor(int self,byte dtorFlags); }
namespace __rwstd::rb_tree_MatchListWindows_Selection_MatchListWindows_Selection_rwstd_ident_MatchListWindows_Selection_MatchListWindows_Selection_std_less_MatchListWindows_Selection { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::set_const_MatchListWindows_Entry_ptr_MatchListWindows_EntryIndexComparator { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::vector_int { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::vector_MatchListWindows_EntryHead { void __cdecl _dtor(int self,byte dtorFlags); }
namespace __rwstd::rb_tree_const_MatchListWindows_Entry_ptr_const_MatchListWindows_Entry_ptr_rwstd_ident_const_MatchListWindows_Entry_ptr_const_MatchListWindows_Entry_ptr_MatchListWindows_EntryIndexComparator { void __cdecl _dtor(int self,byte dtorFlags); }
namespace MatchEngine { undefined4 __cdecl Emit(int self,undefined4 op); }
namespace MatchEngine { int __cdecl CompilePattern(int *self,int *cursor,int bc,int *outVarPos,int *outEndPos,int *outExtra); }
namespace MatchEngine { int __cdecl CompileTemplate(int self,int *cursorRef,int bc,int *outVarPos,int *outEndPos,undefined4 *outExtra); }
namespace MatchEngine { int __cdecl CompileAnagram(int *self,undefined4 *cursorRef,int bc,undefined4 *outExtra,int templateExtra); }
namespace MatchEngine { void __cdecl Compile(int *self,int dictList,int dictIndex,uint *patternText,int ignoreUnusedPunctuation); }
namespace MatchEngine { undefined4 __cdecl IsValid(int self); }
namespace MatchEngine { undefined4 __cdecl GetStatus(int self); }
namespace MatchEngine { undefined4 * __cdecl MatchEngine(undefined4 *self); }
namespace MatchEngine { void __cdecl SetShortest(int self,int shortest); }
namespace MatchEngine { void __cdecl SetLongest(int self,int longest); }
namespace MatchEngine { undefined4 __cdecl GetLengthKind(int self); }
namespace MatchEngine { void __cdecl SetWordLength(int self,int length); }
namespace MatchEngine { bool __cdecl MatchWord(int self,int wordBuf); }
namespace MatchEngine { void __cdecl FormatBalance(int self,int out); }
namespace MatchEngine { int __cdecl GetMinLength(int self); }
namespace MatchEngine { int __cdecl GetMaxLength(int self); }
namespace std::string { int __cdecl string(int self); }
namespace Pattern { undefined4 * __cdecl Pattern(undefined4 *self); }
namespace Pattern { void __cdecl _dtor(int self,byte dtorFlags); }
namespace Pattern { int __cdecl Add(int *self,int str); }
namespace Pattern { void __cdecl Clear(undefined4 *self); }
namespace Pattern { int __cdecl At(int self,byte index); }
namespace GridAboutBoxViewWindows { int * __cdecl GridAboutBoxViewWindows(int *self,int vbasesBuilt,undefined4 parent,int module,int versionText); }
namespace GridAboutBoxViewWindows { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace GridAboutBoxViewWindows { void __cdecl SetupWindow(int *self); }
undefined4 __stdcall FindHeaderControlProc(HWND hWnd,undefined4 *found);
undefined4 __stdcall BrowseFolderCallback(HWND hWnd,int msg,undefined4 lParam,int data);
int __cdecl SplitCommandLine(int result,int commandLine);
bool __cdecl BrowseForFolder(HWND hWnd,LPCSTR title,int folder);
int __cdecl ExpandProgramPath(int result,uint *name,int fallback);
undefined4 __cdecl LaunchProgram(int program,int arguments,int folder);
int __cdecl ExpandLongPathName(int result,int path);
namespace std { int __cdecl operator_plus(int result,int lhs,int rhs); }
int __cdecl GetFileTitleString(int result,int path);
bool __cdecl IsRelativePath(int path);
int __cdecl GetProgramDirectory(int result);
int __cdecl GetMyDocumentsDirectory(int result);
int __cdecl ResolveRelativePaths(int result,int paths);
bool __cdecl ReadFileTime(int path,int wantWriteTime,LPFILETIME timeOut);
void __cdecl BackupFile(int path,LPFILETIME timeOut);
int __cdecl FormatInt(int result);
namespace std::locale { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace TEAViewProfileWindows { int __cdecl TEAViewProfileWindows(int self,int keyPath); }
namespace TEAViewProfileWindows { void __cdecl _dtor(int self,byte dtorFlags); }
namespace TEAViewProfileWindows { void __cdecl Save(int self,undefined4 keyPath); }
int __cdecl ExpandQueryMacros(int result,int expansions,int query);
void __cdecl LoadPatternOptions(int options,int param_2);
namespace PrintPreviewWindowTEA { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace PrintPreviewWindowTEA { int * __cdecl PrintPreviewWindowTEA(int *self,int vbasesBuilt,uint *title,int parent,int printer,int client,int module, undefined1 flag,uint *caption,undefined4 flags,int *rect); }
namespace PrintPreviewWindowTEA { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace PrintPreviewWindowTEA { void __cdecl CmShared_43bfc8(int self,int param_2); }
namespace PrintPreviewWindowTEA { void __cdecl CeCmd9850(undefined4 self,undefined4 *commandEnabler); }
namespace TEAPrintoutFeeder { undefined4 * __cdecl TEAPrintoutFeeder(undefined4 *self,undefined4 param_2); }
namespace TEAPrintoutFeeder { undefined4 __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace TEAPrintoutFeeder { void __cdecl vf1(int self); }
namespace TEAPrintoutFeeder { int __cdecl vf2(int self); }
namespace TEAPrintoutFeeder { void __cdecl vf3(int self,int param_2); }
namespace TEAPrintoutFeeder { void __cdecl vf4(int self,int n); }
namespace TEAPrintoutFeeder { int __cdecl vf5(int self,int param_2); }
int __cdecl CollationCompare(byte *param_1,int param_2,byte *param_3,int param_4);
int __cdecl CollationLength(byte *param_1,int param_2);
undefined4 __cdecl CollationCode(byte ch);
namespace TSDictionarySaveTEADialog { int * __cdecl TSDictionarySaveTEADialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7,int param_8,int param_9,int param_10,int param_11); }
namespace TSDictionarySaveTEADialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace TSDictionarySaveTEADialog { undefined4 __cdecl vf50(int *self,undefined4 *param_2,int param_3,uint param_4); }
namespace TSDictionarySaveTEADialog { void __cdecl vf51(int self); }
namespace TSDictionarySaveDialog { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace TSDictionarySaveDialog { int * __cdecl TSDictionarySaveDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,uint *param_5,int param_6, int param_7,int param_8,int param_9,int param_10,int param_11); }
namespace TSDictionarySaveDialog { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace TSDictionarySaveDialog { void __cdecl OnButton(int *self,undefined4 param_2,int param_3); }
namespace TSDictionarySaveDialog { uint __cdecl SaveDictionary(int *self,int fileName); }
namespace TSDictionarySaveDialog { undefined4 __cdecl UpdateOkButton(int self); }
namespace TSDictionarySaveDialog { void __cdecl FocusControl(int *self,char toList); }
namespace TSDictionarySaveDialog { void __cdecl SetupWindow(int *self); }
namespace TSDictionarySaveDialog { void __cdecl Destroy(int *self,INT_PTR result); }
namespace TSDictionarySaveDialog { void __cdecl vf48(int self,byte *format); }
namespace TSDictionarySaveDialog { void __cdecl vf49(int self); }
namespace TSDictionarySaveDialog { undefined4 __cdecl Child7830_Notify1(int self); }
namespace OWL::TFileSaveDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TOpenSaveDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
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
namespace __rwstd::__rb_tree::iterator { void __cdecl increment_43ff6c(int it); }
namespace std { void __cdecl _Destroy_range_WordMap(undefined4 vec,int first,int last); }
namespace WordMap { undefined4 * __cdecl erase_range(undefined4 *result,int tree,undefined4 firstLo,undefined4 firstHi,int firstNode); }
namespace WordMap { void __cdecl __erase(int tree,int node); }
namespace WordMap { undefined4 * __cdecl erase(undefined4 *result,int tree,undefined4 itLo,undefined4 itHi,int itNode); }
namespace __rwstd::__rb_tree { void __cdecl __set_node_440c78(undefined4 *dest,undefined4 node); }
namespace __rwstd::__rb_tree { int __cdecl __minimum_440c88(int node); }
namespace __rwstd::__rb_tree { int __cdecl __maximum_440ca8(int node); }
namespace __rwstd::__rb_tree { void __cdecl __deallocate_buffers_440cc8(int tree); }
uint __stdcall WriteTsdDictionary(int *self,int wordLists,LPCSTR fileName,uint *description,int shortest,int longest, int progressTotal,int options);
namespace std::vector_WordMap { void __cdecl vector(undefined4 *self,int n,int value); }
namespace std { void __cdecl uninitialized_fill_n_WordMap(int *dest,int n,int value); }
namespace WordMap { undefined4 * __cdecl __copy(int *tree,undefined4 *src,undefined4 *parent); }
namespace WordMap { undefined4 * __cdecl __get_node(int *tree,int value); }
namespace __rwstd::__rb_tree { int __cdecl __minimum_448bf4(int node); }
namespace __rwstd::__rb_tree { int __cdecl __maximum_448c14(int node); }
namespace std { void __cdecl _Destroy_range_448c34(int first,int last); }
namespace WordListMap { void __cdecl AllocateNode(int *param_1); }
namespace WordMap2 { undefined4 * __cdecl erase_range(undefined4 *result,int tree,undefined4 firstLo,undefined4 firstHi,int firstNode); }
namespace WordMap2 { void __cdecl __erase(int tree,int node); }
namespace WordMap2 { undefined4 * __cdecl erase(undefined4 *result,int tree,undefined4 itLo,undefined4 itHi,int itNode); }
namespace __rwstd::__rb_tree { void __cdecl __set_node_449940(undefined4 *dest,undefined4 node); }
namespace __rwstd::__rb_tree::iterator { void __cdecl increment_449950(int it); }
namespace __rwstd::__rb_tree { void __cdecl __deallocate_buffers_4499b4(int tree); }
namespace std::vector_WordMap2 { void __cdecl vector(undefined4 *self,int n,int value); }
namespace std { void __cdecl uninitialized_fill_n_WordMap2(int *dest,int n,int value); }
namespace WordMap2 { undefined4 * __cdecl __copy(int *tree,undefined4 *src,undefined4 *parent); }
namespace WordMap2 { undefined4 * __cdecl __get_node(int *tree,int value); }
namespace std { void __cdecl _Destroy_range_449f18(int first,int last); }
namespace WordListMap { void __cdecl AllocateNode_449f30(int *param_1); }
namespace std::vector_int { void __cdecl vector(undefined4 *self,int n,undefined4 *value); }
namespace std { void __cdecl _Destroy_range_WordMap2(undefined4 vec,int first,int last); }
namespace WordMap { undefined4 * __cdecl insert_hint(undefined4 *result,int *tree,undefined4 hintLo,undefined4 hintHi,int hintNode, undefined4 unused,int value); }
namespace WordMap { int __cdecl __insert(int result,int *tree,int forceLeft,int parent,int value); }
namespace WordMap { undefined4 * __cdecl insert_unique(undefined4 *result,int *tree,int value); }
namespace __rwstd::__rb_tree::iterator { int __cdecl decrement_44ac68(int it); }
namespace WordMap2 { undefined4 * __cdecl lower_bound(undefined4 *result,int tree,int key); }
namespace WordMap2 { undefined4 * __cdecl insert_unique(undefined4 *result,int *tree,int value); }
namespace WordMap2 { int __cdecl __insert(int result,int *tree,int forceLeft,int parent,int value); }
namespace __rwstd::__rb_tree::iterator { void __cdecl decrement_44b358(int it); }
namespace __rwstd::__rb_tree::iterator { int __cdecl increment_44b3c4(int it); }
namespace WordListMap { void __cdecl AllocateNode_44b428(int *param_1); }
namespace WordMap3 { undefined4 * __cdecl erase_range(undefined4 *result,int tree,undefined4 firstLo,undefined4 firstHi,int firstNode); }
namespace WordMap3 { void __cdecl __erase(int tree,int node); }
namespace __rwstd::__rb_tree { void __cdecl __deallocate_buffers_44b780(int tree); }
namespace WordMap3 { undefined4 * __cdecl lower_bound(undefined4 *result,int tree,int key); }
namespace __rwstd::__rb_tree::iterator { void __cdecl increment_44b8bc(int it); }
namespace WordMap3 { undefined4 * __cdecl erase(undefined4 *result,int tree,undefined4 itLo,undefined4 itHi,int itNode); }
namespace __rwstd::__rb_tree { void __cdecl __set_node_44c2bc(undefined4 *dest,undefined4 node); }
namespace __rwstd::__rb_tree { int __cdecl __minimum_44c2cc(int node); }
namespace __rwstd::__rb_tree { int __cdecl __maximum_44c2ec(int node); }
namespace WordMap3 { undefined4 * __cdecl insert_unique(undefined4 *result,int *tree,int value); }
namespace WordMap3 { int __cdecl __insert(int result,int *tree,int forceLeft,int parent,int value); }
namespace WordMap3 { undefined4 * __cdecl __get_node(int *tree,int value); }
namespace __rwstd::__rb_tree::iterator { void __cdecl decrement_44ca3c(int it); }
namespace std::vector_16 { void __cdecl reserve(int vec,uint n); }
namespace std { undefined4 * __cdecl uninitialized_copy_16(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace std { void __cdecl _Destroy_range_16_44ce88(int first,int last); }
namespace std::vector_16 { void __cdecl insert_aux(int vec,undefined4 *pos,undefined4 *value); }
namespace std { undefined4 * __cdecl copy_backward_16(undefined4 *first,undefined4 *last,undefined4 *destEnd); }
namespace std { void __cdecl __final_insertion_sort(undefined4 *first,undefined4 *last,undefined *less); }
namespace std { void __cdecl __insertion_sort(undefined4 *first,undefined4 *last,undefined *less); }
namespace std { void __cdecl __unguarded_linear_insert(undefined4 *last); }
namespace std { void __cdecl __unguarded_insertion_sort(undefined4 *first,undefined4 *last); }
namespace std { void __cdecl __introsort_loop(undefined4 *first,undefined4 *last,undefined4 depthLimit,undefined *less); }
namespace std { undefined4 * __cdecl __unguarded_partition(undefined4 *first,undefined4 *last); }
namespace std { void __cdecl _Destroy_range_16_44d44c(undefined4 vec,int first,int last); }
namespace DictionaryMaintainer { void __stdcall vf3(void); }
namespace DictionaryMaintainer { void __stdcall vf4(void); }
namespace std::map_std_string_long_std_less_std_string { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::pair_const_std_string_std_vector_long_ptr { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::pair_const_std_string_long { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::pair_std_string_long { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::map_std_string_std_vector_long_ptr_std_less_std_string_std_allocator_std_pair_const_std_string_std_vector_long_ptr { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::multimap_std_string_long_WordListMapComparator { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::vector_16 { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::vector_WordMap2 { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::vector_WordMap { void __cdecl _dtor(int self,byte dtorFlags); }
namespace WordMap2 { void __cdecl _dtor(int self,byte dtorFlags); }
namespace WordMap { void __cdecl _dtor(int self,byte dtorFlags); }
namespace WordMap3 { void __cdecl _dtor(int self,byte dtorFlags); }
int __stdcall NextTokenInt(void);
namespace Persist { int * __cdecl Persist(int *self,int param_2,int create,int tryLocalMachine); }
namespace Persist { void __cdecl _dtor(int self,byte dtorFlags); }
namespace Persist { undefined4 __cdecl QueryString(int self,int valueName,int out); }
namespace Persist { undefined4 __cdecl QueryDword(int self,int valueName,undefined4 *out); }
namespace Persist { undefined4 __cdecl QueryFont(int self,int valueName,int defaultText,uint *logFont); }
namespace Persist { uint __cdecl QueryColour(int self,int valueName,uint *colour); }
namespace Persist { void __cdecl SetString(int self,int valueName,int value); }
namespace Persist { void __cdecl SetDword(int self,int valueName); }
namespace Persist { void __cdecl SetFont(int self,int valueName,undefined4 logFont); }
namespace Persist { void __cdecl SetColour(int self,int valueName,undefined4 colour); }
void __cdecl ParseWindowPlacement(char *text,int *showCmd,int *left,int *top,int *right,int *bottom);
void __cdecl FormatWindowPlacement(undefined1 *buf);
uint * __cdecl ParseColour(char *text,uint *colour);
void __cdecl FormatColour(undefined4 colour,undefined1 *buf);
void __cdecl ParseLogFont(char *text,uint *logFont);
void __cdecl FormatLogFont(undefined4 logFont,undefined1 *buf);
undefined4 __stdcall DdeNullCallback(void);
undefined4 __cdecl SendDdeExecute(LPCSTR service,LPCSTR topic,uint *command);
undefined4 __stdcall FloatComputationToInt(void);
void __stdcall FloatComputationToInt2(void);
namespace MyScroller { undefined4 * __cdecl MyScroller(undefined4 *self,undefined4 window,undefined4 xUnit,undefined4 yUnit, undefined4 xRange,undefined4 yRange); }
namespace MyScroller { void __cdecl vf3(int self); }
namespace MyScroller { void __cdecl vf5(int *self,int param_2,int param_3); }
namespace MyScroller { void __cdecl vf11(int self,int param_2,int param_3); }
namespace MyScroller { void __cdecl vf4(int self); }
namespace MyScroller { void __cdecl vf10(int *self,int param_2,int param_3); }
namespace MyScroller { void __cdecl vf9(int *self,int param_2,int param_3); }
namespace MyScroller { void __cdecl vf8(int self); }
namespace MyScroller { void __cdecl SetAutoScroll(int self,undefined1 on); }
namespace OWL::TScroller { void __cdecl vf1(int self,undefined4 param_2); }
namespace OWL::TScroller { bool __cdecl vf12(int self,UINT sBflags,UINT arrows); }
namespace OWL::TScroller { void __cdecl vf13(int self,int bar,byte show); }
namespace OWL::TScroller { void __cdecl vf16(int self,int bar,UINT param_3,byte redraw); }
namespace OWL::TScroller { void __cdecl vf17(int self,int bar); }
namespace OWL::TScroller { void __cdecl vf18(int self,int bar,int *param_3,int *param_4); }
namespace OWL::TScroller { void __cdecl vf19(int self,int bar,int param_3,int param_4,byte redraw); }
namespace OWL::TScroller { void __cdecl vf20(int self,int bar); }
namespace OWL::TScroller { void __cdecl vf21(int self,int bar,int param_3,byte redraw); }
namespace MyScroller { undefined4 __cdecl ScrollToChild(int self,int *child); }
namespace MyScroller { void __cdecl ActivateOwner(int self); }
namespace TEAProgressBar { int * __cdecl TEAProgressBar(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4); }
namespace TEAProgressBar { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace TEAProgressBar { void __cdecl SetRange(int *self,int low,int high); }
namespace TEAProgressBar { void __cdecl StartDictionary(int *self,int dictList,int dictIndex,int pane,int view); }
namespace TEAProgressBar { void __cdecl SetPosition(int *self,int position); }
namespace TEAProgressBar { void __cdecl vf5(int self,int param_2); }
namespace TEAProgressBar { void __cdecl PreProcessMsg(int *self,LPMSG lParam); }
namespace SearchModeButton { int * __cdecl SearchModeButton(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4); }
namespace SearchModeButton { void __cdecl vf12(int *self,LPMSG lParam); }
namespace SearchModeButton { void __cdecl vf5(undefined4 self,int param_2); }
namespace TEAViewWindows { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace TEAViewWindows { void __stdcall EvLButtonDown(int self); }
namespace TEAViewWindows { void __stdcall EvMouseMove(int self); }
namespace TEAViewWindows { void __stdcall EvLButtonUp(int self); }
namespace TEAViewWindows { void __stdcall EvLButtonDblClk(int self); }
namespace TEAViewWindows { void __stdcall EvRButtonDown(int self); }
namespace TEAViewWindows { void __stdcall EvRButtonUp(int self); }
namespace TEAViewWindows { void __stdcall EvDropFiles(int self); }
namespace TEAViewWindows { void __stdcall EvSysColorChange(int self); }
namespace TEAViewWindows { int * __cdecl TEAViewWindows(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6); }
namespace TEAViewWindows { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace std { void __cdecl _Destroy_range_ptr_451754(undefined4 vec,int first,int last); }
namespace std { void __cdecl _Destroy_range_ptr_45176c(undefined4 vec,int first,int last); }
namespace TEAViewWindows { undefined4 __cdecl CreatePanes(int *self,int paneCount); }
namespace std { undefined4 * __cdecl copy_ptr_45233c(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace std::vector_ptr { void __cdecl insert_aux_452360(int vec,undefined4 *pos,undefined4 *value); }
namespace std { undefined4 * __cdecl copy_backward_ptr_452538(undefined4 *first,undefined4 *last,undefined4 *destEnd); }
namespace std { undefined4 * __cdecl copy_ptr_45255c(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace std { void __cdecl _Destroy_range_ptr_4525dc(int first,int last); }
namespace TEAViewWindows { void __cdecl ShowDictionaryProperties(int self); }
namespace TEAViewWindows { void __cdecl RestartSearch(int *self); }
namespace TEAViewWindows { void __cdecl CmOpenDictionary(int *self); }
namespace TEAViewWindows { void __cdecl SetCurrentPane(int *self,int pane); }
namespace TEAViewWindows { undefined4 __cdecl GetCurrentPane(int self); }
namespace TEAViewWindows { int __cdecl GetLengthRange(int self,int pane,int *first,int *last,int *step); }
namespace TEAViewWindows { bool __cdecl PrepareToClose(int self); }
namespace TEAViewWindows { int __cdecl GetFocusedListEntryCount(int self); }
namespace TEAViewWindows { undefined4 __cdecl GetCurrentListLineCount(int self); }
namespace TEAViewWindows { void __cdecl CmOptions(undefined4 *self); }
namespace std::vector_ptr { void __cdecl insert_aux_452ef8(int vec,undefined4 *pos,undefined4 *value); }
namespace std { undefined4 * __cdecl copy_backward_ptr_4530d0(undefined4 *first,undefined4 *last,undefined4 *destEnd); }
namespace std { undefined4 * __cdecl copy_ptr_4530f4(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace std { void __cdecl _Destroy_range_ptr_453174(int first,int last); }
namespace TEAViewWindows { undefined4 __cdecl CmPrintPreview(int *self); }
namespace TEAViewWindows { undefined4 __cdecl CmPrint(int self); }
namespace TEAViewWindows { void __cdecl CmPageSetup(int self); }
namespace TEAViewWindows { void __cdecl CmSaveResults(int *self); }
namespace TEAViewWindows { void __cdecl CmCopy(int *self); }
namespace TEAViewWindows { void __cdecl CmSelectAll(int self); }
namespace TEAViewWindows { undefined4 __cdecl GetPopupOwner(int *self); }
namespace TEAViewWindows { void __cdecl CeShared_454478(int self,int *commandEnabler); }
namespace TEAViewWindows { bool __cdecl IsCommandEnabled(int self,int cmdId); }
namespace TEAViewWindows { void __cdecl CmShared_4548d0(int *self,int param_2); }
namespace TEAViewWindows { void __cdecl SetupTooltips(int *self); }
namespace TEAViewWindows { void __cdecl OnButton(int *self,undefined4 param_2,int param_3); }
namespace TEAViewWindows { void __cdecl ShowControlTip(int self,int *param_2,undefined4 *lParam); }
namespace TEAViewWindows { int __cdecl GetLookupWord(int self,int list); }
namespace TEAViewWindows { void __cdecl BeginNextLength(int self); }
namespace TEAViewWindows { undefined4 __cdecl OnSearchStep(int *self,int *state); }
namespace TEAViewWindows { void __cdecl OnComboChange(int *self); }
namespace TEAViewWindows { void __cdecl Child4270_Notify5(int *self); }
namespace TEAViewWindows { void __cdecl StartSearch(int self); }
namespace TEAViewWindows { void __cdecl OnEditKillFocus(int *self,undefined4 param_2,int param_3); }
namespace TEAViewWindows { void __cdecl OnEditChange(int *self); }
namespace TEAViewWindows { void __stdcall Nothing(void); }
namespace TEAViewWindows { void __cdecl ShowDefinitions(int *self,int list,int useCaret,int newWindow); }
namespace std::vector_DefinitionSearch { void __cdecl vector(undefined4 *self,int n,int value); }
namespace TEAViewWindows { int __cdecl CheckDictionaries(int *self); }
namespace TEAViewWindows { int __cdecl GetSelectedWord(int self,int list,int useCaret,int word_,int dictPath,undefined4 *group); }
namespace TEAViewWindows { void __cdecl OnUpDown(int self,int param_2); }
namespace TEAViewWindows { void __cdecl SetupMoveableControls(int *self); }
LONG * __cdecl GetWindowRectInParent(LONG *rect,int *window);
int __cdecl ParsePaneLayout(undefined4 self,char *text,undefined4 param_3,undefined4 param_4,int param_5);
namespace TEAViewWindows { void __cdecl SetupWindow(int *self); }
namespace TEAViewWindows { void __cdecl OnSplitterButtonDown(int *self,undefined4 param_2,int *param_3); }
namespace TEAViewWindows { int __cdecl OnSplitterDrag(int *self,uint y2,int *param_3); }
namespace TEAViewWindows { void __cdecl OnSplitterButtonUp(int *self); }
namespace TEAViewWindows { void __cdecl OnPaneLabelDoubleClick(int *self,undefined4 param_2,int *window); }
namespace TEAViewWindows { void __cdecl OnPaneLabelClick(int *self,undefined4 param_2,int *window); }
namespace TEAViewWindows { void __cdecl OnPaneLabelContextMenu(int *self,undefined4 param_2,LPPOINT point); }
namespace TEAViewWindows { void __cdecl EvSize(int *self,int param_2); }
namespace TEAViewWindows { void __cdecl OnDropFiles(int *self); }
namespace TEAViewWindows { void __cdecl OnSysColorChange(int self); }
namespace TEAViewWindows { undefined4 __cdecl EvCtlColor(int *self,HDC hdc,HWND hWnd,int param_4); }
namespace TEAViewWindows { void __cdecl LoadPrintMargins(int self); }
namespace TEAViewWindows { void __cdecl SaveSettings(int self); }
namespace TEAViewWindows { void __cdecl SavePanes(int *self); }
namespace TEAViewWindows { void __cdecl SaveQueryHistory(int *self); }
namespace TEAViewWindows { void __cdecl OnListFocus(int self,int list,int gained); }
namespace TEAViewWindows { void __cdecl OnListDoubleClick(int *self); }
namespace TEAViewWindows { void __cdecl FocusPaneList(int self,int pane); }
namespace TEAViewWindows { void __cdecl Cmd12690(int *self); }
namespace TEAViewWindows { void __cdecl TrackContextMenu(int *self,UINT flags); }
namespace TEAViewWindows { void __cdecl SetSearching(int self,int searching); }
namespace TEAViewWindows { int * __cdecl ShowQuickReference(undefined4 *result,int self); }
namespace TEAViewWindows { void __cdecl ShowStartupTips(undefined4 *self); }
namespace TEAViewWindows { void __cdecl RestoreAuxiliaryWindows(int *self); }
namespace TEAViewWindows { void __cdecl Destroy(int *self,int result); }
namespace TEAViewWindows { bool __cdecl PreProcessMsg(int *self,LPMSG lParam); }
namespace TEAViewWindows { void __cdecl LayoutQueryControls(int self); }
namespace TEAViewWindows { void __cdecl ApplyListFonts(int self); }
namespace TEAViewWindows { void __cdecl ApplyDefinitionSettings(int self); }
namespace TEAViewWindows { void __cdecl DeletePanes(int self); }
namespace TEAViewWindows { void __cdecl RefreshCurrentList(int self); }
namespace TEAViewWindows { void __cdecl BroadcastToOthers(int *self,int except); }
namespace TEAViewWindows { int __cdecl PaneAt(int self,int *point); }
int * __cdecl ClientRectToScreen(int *rect,int *window);
namespace TEAViewWindows { int __cdecl FirstFreePaneId(int self); }
namespace TEAViewWindows { void __cdecl ActivateWindow(int *self,int window,int backwards); }
namespace TEAViewWindows { void __cdecl SetQuery(int *self,uint *text); }
namespace TEAViewWindows { void __cdecl ShowTooltip(int self,int text,undefined4 x,undefined4 y,undefined2 *rect, int lParam); }
namespace TEAViewWindows { int * __cdecl GetDefinitionWindow(undefined4 *result,int self); }
namespace TEAViewWindows { undefined4 __cdecl MoveCaretAndShowDefinition(int *self,int list,int key,int extend); }
namespace TEAViewWindows::OutputGroup { int __cdecl OutputGroup(int self,undefined4 label,undefined4 list); }
namespace TEAViewWindows::OutputGroup { void __cdecl _dtor(int self,byte dtorFlags); }
namespace TEAViewWindows::OutputGroup { void __cdecl StartLengths(int self,int view,int pane); }
namespace TEAViewWindows::OutputGroup { void __cdecl NextLength(int self); }
namespace TEAViewWindows::OutputGroup { undefined4 __cdecl HasLength(int self); }
namespace TEAViewWindows::OutputGroup { void __cdecl GetLengthRange(int self,undefined4 *first,undefined4 *last); }
namespace OWL::TFileOpenDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace SearchModeButton { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace std::vector_Definition { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::vector_OWL_TWindow_ptr { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::vector_TEAViewWindows_OutputGroup_ptr { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::vector_MatchEngine_ptr { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std { void __cdecl _Destroy_range_ptr_45f0c4(undefined4 vec,int first,int last); }
namespace MatchEngine { byte * MatchFixedTemplate(undefined4 self,int bc,int wordBuf); }
namespace MatchEngine { byte * MatchDistinctAnagram(undefined4 self,int bc,byte *letters); }
namespace MatchEngine { byte * MatchMultiAnagram(undefined4 self,int bc,byte *letters); }
namespace MatchEngine { byte * RunTemplateVM(int self,byte *bc,byte *wordBuf,int punctIdx,int slack); }
namespace MatchEngine { byte * AnagramSingleLetters(undefined4 self,byte *bc,int hist,int budget); }
namespace MatchEngine { byte * AnagramMultiLetters(undefined4 self,byte *bc,int hist,int budget); }
namespace MatchEngine { int AnagramEnd(undefined4 self,int bc); }
namespace MatchEngine { int AnagramChoiceLists(undefined4 self,byte *bc,int hist,int idx,int mult,int allowed, int budget,undefined4 numLetters); }
namespace MatchEngine { void AnagramChoiceListsOp(int self,byte *bc,int hist,int budget,int numLetters); }
namespace MatchEngine { int AnagramVariables(undefined4 self,int varCounts,byte *hist,int var,int budget,int numLetters); }
namespace MatchEngine { int AnagramBoundVariables(undefined4 self,byte *varCounts,byte *hist,int budget,int numLetters); }
namespace MatchEngine { int AnagramSubPattern(int self,byte *bc,int letters,char op,int mult,int sub, int punctIdx,uint budget,int n,undefined4 numLetters); }
namespace MatchEngine { byte * RunAnagramVM(int self,byte *bc,byte *letters,undefined4 punctIdx,uint budget, int n,undefined4 numLetters); }
namespace MatchEngine { void ComputeBalance(char *bc,byte *letters,int n); }
namespace MatchEngine { byte * MatchGeneral(int self,char *bc,byte *wordBuf,int punctIdx,int slack,int n); }
namespace VariableValues { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace LookupPropertiesViewWindows { int * __cdecl LookupPropertiesViewWindows(int *self,int vbasesBuilt,undefined4 parent,int config); }
namespace LookupPropertiesViewWindows { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace LookupPropertiesViewWindows { void __cdecl Destroy(int *self,INT_PTR result); }
namespace LookupPropertiesViewWindows { void __cdecl SetupWindow(int *self); }
namespace LookupPropertiesViewWindows { void __cdecl FillList(int self); }
namespace LookupPropertiesViewWindows { void __cdecl GetControlTip(int self,int control,uint *text,int *out); }
namespace LookupPropertiesViewWindows { void __cdecl OnButton(int *self,int param_2,int param_3); }
namespace LookupPropertiesViewWindows { void __cdecl OnEditChange(int self,undefined4 param_2,int param_3); }
namespace LookupPropertiesViewWindows { void __cdecl OnComboChange(int self,char param_2,int param_3); }
namespace LookupPropertiesViewWindows::URLControls { void __cdecl _dtor(int self,byte dtorFlags); }
namespace LookupPropertiesViewWindows::DDEControls { void __cdecl _dtor(int self,byte dtorFlags); }
namespace LookupPropertiesViewWindows::MessageControls { void __cdecl _dtor(int self,byte dtorFlags); }
namespace LookupPropertiesViewWindows::ProgramControls { void __cdecl _dtor(int self,byte dtorFlags); }
void __stdcall InitRegistryPaths(void);
void __stdcall DestroyRegistryPaths(void);
namespace std::string { int __cdecl string_462d44(int self); }
namespace TEAAppWindows { int __cdecl TEAAppWindows(int self,int name); }
namespace GridViewWindows { void __cdecl _dtor(int self,byte dtorFlags); }
namespace TEAAppWindows { void __cdecl LoadMainWindowSettings(int self,int *rect,undefined4 unused,undefined4 *x,undefined4 *y, undefined4 *width,undefined4 *height,undefined4 *state); }
namespace TEAAppWindows { void __cdecl SaveMainWindowSettings(int self); }
namespace TEAAppWindows { void __cdecl OpenStartupDictionaries(int self); }
namespace TEAAppWindows { void __cdecl ShowHelpFor(int self); }
void __stdcall ShowHelpContents(void);
int __cdecl GetProfileKeyPath(int param_1);
namespace TEAAppWindows { int __cdecl LoadResourceString(int result,int self,uint id); }
namespace TEAAppWindows { undefined4 __cdecl GetMainWindowHandle(int self); }
namespace TEAAppWindows { undefined4 __cdecl GetPrinter(int self); }
namespace TEAAppWindows { void __stdcall Nothing_464ba4(void); }
namespace TEAAppWindows { void __stdcall Nothing_464bac(void); }
namespace TEAAppWindows { undefined4 __cdecl OpenDictionaries(int self,uint *paths); }
namespace TEAAppWindows { void __cdecl CloseDictionary(int self); }
namespace TEAAppWindows { void __cdecl MoveDictionary(int self,int direction); }
namespace TEAAppWindows { void __stdcall Nothing_465244(void); }
namespace TEAAppWindows { uint __cdecl Lookup(int self,int except,int index,int word_,int newWindow,int flags); }
namespace TEAAppWindows { void __cdecl LaunchTool(undefined4 self,uint *exeName); }
namespace TEAAppWindows { void __cdecl CopyTextToClipboard(int self,uint *text,uint *text2); }
namespace TEAAppWindows { void __cdecl SetStatusText(int self,int text); }
namespace TEAAppWindows { void __cdecl RunStartupSequence(int self); }
namespace TEAAppWindows { void __cdecl ActivateWindow(int self,int window,int backwards); }
namespace TEAAppWindows { void __cdecl UpdateFileMenu(int self,int hMenu); }
namespace TEAAppWindows { undefined4 __cdecl GetLicenseInfo(int self); }
namespace TEAAppWindows { void __cdecl CheckLicense(int self); }
namespace TEAAppWindows { void __stdcall Nothing_466b10(void); }
namespace TEAAppWindows { undefined4 __cdecl GetDictionaryList(int self); }
namespace TEAAppWindows { undefined4 __cdecl GetProfile(int self); }
namespace TEAAppWindows { void __cdecl UpdateTitle(int self); }
namespace TEAAppWindows { void __stdcall Nothing_466e78(void); }
namespace TEAAppWindows { int * __cdecl GetDefinitionWindow(int self,int view); }
namespace TEAAppWindows { void __cdecl FindDefinitions(int self,int word_,int results); }
namespace TEAAppWindows { undefined4 __cdecl MoveCaretAndShowDefinition(int self,int list,int key,int extend); }
undefined4 __stdcall SetFontOnControlsProc(HWND hWnd,WPARAM hFont);
undefined4 __stdcall SetFontOnControlsProc2(HWND hWnd,WPARAM hFont);
namespace TEAQuickReferenceViewWindows { int * __cdecl TEAQuickReferenceViewWindows(int *self,int vbasesBuilt,undefined4 *param_3,int param_4,int param_5); }
namespace TEAQuickReferenceViewWindows { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace TEAQuickReferenceViewWindows { bool __cdecl IsShown(int self); }
namespace TEAQuickReferenceViewWindows { void __cdecl OnTextClicked(int self,int param_2); }
namespace TEAQuickReferenceViewWindows { void __cdecl DeleteBrush(int self); }
namespace TEAQuickReferenceViewWindows { void __cdecl SetupWindow(int *self); }
namespace TEAQuickReferenceViewWindows { undefined4 __cdecl EvCtlColor(int *self,HDC hdc,HWND hWnd,int param_4); }
namespace TabbyPropertiesViewWindows { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace TabbyPropertiesViewWindows { int * __cdecl TabbyPropertiesViewWindows(int *self,int vbasesBuilt,int param_3,int param_4,int param_5,int param_6, undefined4 param_7,int param_8,uint *param_9,int param_10); }
namespace TabbyPropertiesViewWindows { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace TabbyPropertiesViewWindows { void __cdecl SetupTooltips(int *self); }
namespace TabbyPropertiesViewWindows { undefined4 __cdecl OnMouseOverControl(int self,int param_2); }
namespace TabbyPropertiesViewWindows { void __cdecl EvNotify(int *self,int param_2,undefined4 *param_3); }
namespace TabbyPropertiesViewWindows { void __cdecl PreProcessMsg(int *self,LPMSG lParam); }
namespace TabbyPropertiesViewWindows { void __cdecl ShowControlTip(int self,undefined4 param_2,LPARAM lParam); }
namespace TabbyPropertiesViewWindows { void __cdecl SetupWindow(int *self); }
namespace TabbyPropertiesViewWindows { void __cdecl ShowHelp(int self); }
namespace TabbyPropertiesViewWindows { void __cdecl EnableControls(int *self,byte enable); }
namespace TabbyPropertiesViewWindows { void __cdecl OnPageChanged(int *self); }
namespace TabbyPropertiesViewWindows { void __cdecl ShowPage(int *self,int firstId,int show); }
namespace TabbyPropertiesViewWindows { void __cdecl EnablePage(int *self,byte enable); }
namespace TabbyPropertiesViewWindows { void __cdecl GetControlTipText(int *self,int *param_2); }
namespace VariableValues { bool __cdecl Bind(int var,char letter); }
namespace VariableValues { undefined1 * __cdecl Get(int var); }
namespace VariableValues { undefined4 __cdecl IsLetterBound(char letter); }
namespace VariableValues { void __stdcall Clear(void); }
namespace VariableValues { void __cdecl Save(int snapshot); }
namespace VariableValues { void __cdecl Restore(int snapshot); }
namespace MatchEngine { void __stdcall ResetMatchState(void); }
undefined4 __stdcall GetRichEditVersion(void);
void __stdcall DestroyRichEditLoader(void);
namespace OWL::TRichEdit { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace OWL::TRichEdit { void __cdecl Cmd24322(int *self); }
namespace OWL::TRichEdit { void __cdecl Cmd24323(int *self); }
namespace OWL::TRichEdit { void __cdecl Cmd24324(int self); }
namespace OWL::TRichEdit { void __cdecl Cmd24325(int *self); }
namespace OWL::TRichEdit { void __cdecl Cmd24326(int self); }
namespace OWL::TRichEdit { void __cdecl Cmd24321(int *self); }
namespace OWL::TRichEdit { int * __cdecl TRichEdit(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9, uint *param_10,int param_11); }
namespace OWL::TRichEdit { bool __stdcall LoadModule(void); }
namespace OWL::TRichEdit { undefined4 __cdecl CreateModule(undefined4 loader); }
namespace OWL::TDllLoader_OWL_TRichEditModule { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TRichEdit { undefined * __stdcall GetDllLoader(void); }
namespace OWL::TRichEdit { void __cdecl GetCharFormat(int *self,LPARAM charFormat,char selection); }
namespace OWL::TRichEdit { bool __cdecl SetCharFormat(int *self,LPARAM charFormat,WPARAM flags); }
namespace OWL::TRichEdit { undefined4 * __cdecl SetBkgndColor(undefined4 *result,int *self,uint *colour); }
namespace OWL::TRichEdit { void __cdecl GetSelection(int *self,undefined4 *param_2,undefined4 *param_3); }
namespace OWL::TRichEdit { void __cdecl GetSelection_4691fc(int *self,LPARAM range); }
namespace OWL::TRichEdit { bool __cdecl SetSelection(int *self,undefined4 param_2,undefined4 param_3); }
namespace OWL::TRichEdit { undefined4 __cdecl SetSelection_46924c(int *self,LPARAM range); }
namespace OWL::TRichEdit { void __cdecl GetTextRange(int *self,LPARAM textRange); }
namespace OWL::TRichEdit { void __cdecl GetSubText(int *self,undefined4 param_2,undefined4 param_3,undefined4 param_4); }
namespace OWL::TRichEdit { undefined4 __cdecl FindText(int *self,WPARAM flags,LPARAM findText); }
namespace OWL::TRichEdit { int __cdecl vf16(int *self,int param_2,uint *param_3,char param_4,char param_5,char param_6); }
namespace OWL::TRichEdit { void __cdecl Paste(int *self); }
namespace OWL::TRichEdit { void __cdecl StreamIn(int *self,WPARAM format,LPARAM editStream); }
namespace OWL::TRichEdit { void __cdecl StreamOut(int *self,WPARAM format,LPARAM editStream); }
namespace OWL::TRichEdit { undefined4 __cdecl GetEventMask(int *self); }
namespace OWL::TRichEdit { void __cdecl SetEventMask(int *self,LPARAM mask); }
namespace OWL::TRichEdit { void __cdecl EvGetDlgCode(int *self); }
namespace OWL::TRichEdit { void __cdecl EvChar(int *self); }
namespace OWL::TRichEdit { void __cdecl EvKeyDown(int *self); }
namespace OWL::TRichEdit { void __cdecl EvKillFocus(int *self); }
namespace OWL::TRichEdit { void __cdecl EvSetFocus(int *self); }
namespace OWL::TRichEdit { void __cdecl CeShared_469490(int self,undefined4 *commandEnabler); }
namespace OWL::TRichEdit { void __cdecl CeCmd24324(int *self,undefined4 *commandEnabler); }
namespace OWL::TRichEdit { void __cdecl CeCmd24326(int *self,undefined4 *commandEnabler); }
namespace OWL::TRichEdit { void __cdecl CeCmd24321(int *self,undefined4 *commandEnabler); }
namespace PVWRichEdit { char * __stdcall GetClassName(void); }
namespace OWL::TRichEdit { undefined4 __stdcall GetModuleName(void); }
namespace OWL::TRichEdit { void __cdecl vf20(int *self); }
namespace OWL::TRichEdit { undefined4 __stdcall StreamInCallback(int *cookie,undefined1 *buffer,int size,undefined4 *read); }
namespace OWL::TRichEdit { undefined4 __stdcall StreamOutCallback(int *cookie,int buffer,int size,int *written); }
namespace PVWRichEdit { undefined4 __stdcall Transfer(void); }
namespace OWL::TRichEdit { bool __cdecl ReadFromStream(int *self,undefined4 unused,WPARAM format); }
namespace OWL::TRichEdit { bool __cdecl WriteToStream(int *self,undefined4 unused,WPARAM format); }
namespace OWL::TRichEdit { undefined4 __cdecl ReadFromFile(int *self,LPCSTR fileName); }
namespace OWL::TRichEdit { undefined4 __cdecl WriteToFile(int *self,LPCSTR fileName); }
namespace OWL::TRichEditModule { undefined4 * __cdecl TRichEditModule(undefined4 *self); }
namespace OWL::TRichEdit { undefined4 __cdecl UseRichEdit2(char load); }
namespace OWL::TErrorMode { void __cdecl _dtor(UINT *self,byte dtorFlags); }
namespace OWL::TRichEditModule { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
int __cdecl ParseLinkTarget(int text,int len,int *number);
bool __cdecl DefinitionLinkLess(int a,int b);
namespace DefinitionRichEdit { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace DefinitionRichEdit { int * __cdecl DefinitionRichEdit(int *self,int vbasesBuilt,undefined4 *param_3,int *param_4); }
namespace DefinitionRichEdit { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace DefinitionRichEdit { void __cdecl vf31(int *self,int hMenu); }
namespace DefinitionRichEdit { void __cdecl EvKeyDown(int *self,int param_2); }
namespace DefinitionViewWindows { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace DefinitionViewWindows { int * __cdecl DefinitionViewWindows(int *self,int vbasesBuilt,int param_3,int param_4); }
namespace DefinitionViewWindows { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace DefinitionViewWindows { void __cdecl CeShared_46a8f4(int *self,undefined4 *commandEnabler); }
namespace DefinitionViewWindows { void __cdecl CmShared_46a924(int *self,uint param_2); }
namespace DefinitionViewWindows { uint __cdecl NavigateResults(int *self,uint cmdId); }
namespace DefinitionViewWindows { void __cdecl BuildContextMenu(int self,int hMenu); }
namespace DefinitionViewWindows { void __cdecl SetupWindow(int *self); }
namespace DefinitionViewWindows { void __cdecl Destroy(int *self); }
namespace DefinitionViewWindows { void __cdecl SetupMoveableControls(int *self); }
namespace DefinitionViewWindows { void __cdecl OnSplitterButtonDown(int *self,undefined4 param_2,int *rect); }
namespace DefinitionViewWindows { void __cdecl OnSplitterDrag(int *self,byte param_2,int *rect); }
namespace DefinitionViewWindows { void __cdecl OnSplitterButtonUp(int *self); }
undefined4 __cdecl GetChildRectOnScreen(int *window,int *rect);
namespace DefinitionViewWindows { void __cdecl SaveSplitterPosition(int *self); }
namespace DefinitionViewWindows { undefined4 __cdecl OnDoubleClick(int *self,undefined4 param_2,int lParam); }
namespace DefinitionViewWindows { undefined4 __cdecl FindDictionary(int self,int path,int *index,int *count); }
namespace DefinitionViewWindows { bool __cdecl PreProcessMsg(int *self,LPMSG lParam); }
namespace DefinitionViewWindows { int __cdecl GetLookupWord(int self,int position); }
namespace DefinitionViewWindows { undefined4 __cdecl Child13860_Notifym402(int *self); }
namespace DefinitionViewWindows { void __cdecl Child13860_Notifym406(int self); }
namespace DefinitionViewWindows { void __cdecl ScrollTextToTop(int self); }
namespace DefinitionViewWindows { void __cdecl ShowDescription(int *self); }
namespace DefinitionViewWindows { void __cdecl ShowDefinitionNumber(int *self); }
namespace DefinitionViewWindows { void __cdecl HighlightWord(int self); }
namespace DefinitionViewWindows { uint __cdecl FollowLinkAt(int *self,int position,int lParam); }
namespace DefinitionViewWindows { int __cdecl GetWordAt(int self,int position,int word_,int lParam); }
namespace DefinitionViewWindows { void __cdecl ShowDefinitions(int *self,int list,int value,int word_,int matchSet,int dictIndex,int flags, int newWindow); }
namespace DefinitionViewWindows { int __cdecl SortDefinitions(int self,int definitions); }
namespace std { int __cdecl __introsort_loop_string(int param_1,int param_2,int param_3); }
namespace DefinitionViewWindows { int __cdecl CompareDefinitions(int a,int b,int word_); }
namespace DefinitionViewWindows { void __stdcall EvHelp(void); }
namespace DefinitionViewWindows { void __cdecl RenderDefinitions(int *self,int word_,int dictIndex); }
namespace std { void __cdecl stable_sort_string(int first,int last,undefined *less); }
namespace std { void __cdecl __stable_sort_adaptive_string(int param_1,int param_2,undefined *param_3); }
namespace std { void __cdecl __merge_adaptive_string(int str,undefined4 other,undefined4 param_3,int param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,int first,int last); }
namespace std { void __cdecl __inplace_stable_sort_string(int str,int param_2,undefined4 param_3,undefined4 param_4); }
namespace std { void __cdecl sort_string(uint str,uint str2,undefined4 param_3,undefined *param_4); }
namespace std { uint __cdecl __introsort_loop_string_4717cc(uint str,uint str2,undefined4 param_3,undefined4 param_4,int param_5); }
namespace DefinitionViewWindows { void __cdecl ScrollTextToTop2(int self); }
namespace DefinitionViewWindows { int __cdecl GetDefinitionCount(int self); }
namespace DefinitionViewFrame { int * __cdecl DefinitionViewFrame(int *self,int vbasesBuilt,undefined4 parent,int title,undefined4 module,int number); }
namespace DefinitionViewFrame { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace DefinitionViewFrame { void __cdecl SetupWindow(int *self); }
namespace DefinitionViewFrame { void __cdecl Destroy(int self); }
namespace DefinitionViewFrame { void __cdecl ShowDefinitions(int *self,int list,int value,int word_,int matchSet,int dictIndex,int flags, int newWindow); }
namespace DefinitionViewFrame { void __cdecl SetStatusText(int self,uint *text); }
namespace DefinitionViewFrame { void __cdecl RefreshDefinition(int *self); }
namespace DefinitionViewFrame { void __cdecl SetTitle(int self,int word_); }
namespace OWL::TTreeNode { void __cdecl _dtor(int self,byte dtorFlags); }
namespace GripBar { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TStatusBar { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace DefinitionRecord { int __cdecl DefinitionRecord(int self); }
namespace TEAFrameWindow { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace TEAFrameWindow { int * __cdecl TEAFrameWindow(int *self,int vbasesBuilt,int parent,int *client); }
namespace TEAFrameWindow { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace TEAFrameWindow { void __cdecl EvInitMenuPopup(undefined4 *self,HMENU hPopupMenu,undefined4 index,char sysMenu); }
namespace TEAFrameWindow { char * __stdcall GetClassName(void); }
namespace TEAFrameWindow { undefined4 __cdecl EvRegisteredMsg_474770(int self); }
namespace TEAFrameWindow { void __cdecl SetupWindow(int *self); }
namespace TEAFrameWindow { bool __cdecl CanClose(int self); }
namespace TEAFrameWindow { void __cdecl CeFilePageSetup(int self,undefined4 *commandEnabler); }
namespace TEAFrameWindow { void __cdecl CeShared_4748c8(int self,int *commandEnabler); }
namespace TEAFrameWindow { void __cdecl CmFileClose(int self); }
namespace TEAFrameWindow { void __cdecl CmFileDemote(int self); }
namespace TEAFrameWindow { void __cdecl CmFilePromote(int self); }
namespace TEAFrameWindow { void __cdecl CmToolsOptions(int self); }
namespace TEAFrameWindow { void __cdecl CmRange4840to4849(int self,int param_2); }
namespace TEAFrameWindow { void __cdecl CmFilePageSetup(int self); }
namespace TEAFrameWindow { void __cdecl CmShared_474a3c(int self,int param_2); }
namespace TEAFrameWindow { void __cdecl CmToolsDictionaryBuilder(int self); }
namespace TEAFrameWindow { void __cdecl CmToolsWordListMerge(int self); }
namespace TEAFrameWindow { void __cdecl CmWindowAlwaysOnTop(int self); }
namespace TEAFrameWindow { void __cdecl CmShared_474adc(int self,int param_2); }
namespace TEAFrameWindow { void __cdecl CmHelpQuickReference(int self); }
namespace TEAFrameWindow { void __cdecl CmHelpStartupTips(int self); }
namespace TEAFrameWindow { void __stdcall CmHelpContents(void); }
namespace TEAFrameWindow { void __stdcall CmHelpOnlineTutorial(void); }
namespace TEAFrameWindow { void __stdcall CmHelpEmailSupport(void); }
namespace TEAFrameWindow { void __stdcall CmHelpOnlineHelp(void); }
namespace TEAFrameWindow { void __stdcall CmHelpOnlineOrdering(void); }
namespace TEAFrameWindow { void __stdcall CmHelpOrderForm(void); }
namespace TEAFrameWindow { void __cdecl CmHelpAboutTEA(int self); }
namespace TEAAppWindows { int * __cdecl TEAAppWindows_base(int *self,int name); }
namespace TEAAppWindows { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace TEAAppWindows { void __cdecl vf17(int self); }
namespace TEAAppWindows { void __cdecl OpenFile(int self,int fileHistory,LPCSTR fileName); }
namespace TEAAppWindows { void __cdecl vf16(int self); }
undefined4 __stdcall OwlMain(void);
namespace OWL::TApplication { void __stdcall vf9(void); }
namespace OWL::TApplication { undefined4 __cdecl vf13(int self); }
namespace ExternalLookupViewWindows { int * __cdecl ExternalLookupViewWindows(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6); }
namespace ExternalLookupViewWindows { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace ExternalLookupViewWindows { void __cdecl OnButton(undefined4 *self); }
namespace ExternalLookupViewWindows { void __cdecl Destroy(int *self,INT_PTR result); }
namespace ExternalLookupViewWindows { void __cdecl SetupWindow(int *self); }
namespace ExternalLookupViewWindows { void __cdecl FillLookups(int self); }
namespace DictionaryListViewWindows { undefined4 __cdecl Find(undefined4 *self,int *eventInfo,undefined *equal); }
namespace DictionaryListViewWindows { int * __cdecl DictionaryListViewWindows(int *self,int vbasesBuilt,undefined4 param_3,int firstId,int param_5,int module); }
namespace DictionaryListViewWindows { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace DictionaryListViewWindows { void __cdecl OnButton(int *self); }
namespace DictionaryListViewWindows { void __cdecl OnEditChange(int self); }
namespace DictionaryListViewWindows { void __cdecl OnPathListChanged(int self,undefined4 param_2,int other); }
namespace DictionaryListViewWindows { void __cdecl ShowControlTip(int self,int *control,int index); }
namespace DictionaryListViewWindows { int __cdecl GetSelectedPaths(int result,int self); }
namespace DictionaryListViewWindows { void __cdecl SetupWindow(int *self); }
namespace DictionaryListViewWindows { void __cdecl Destroy(int *self,int result); }
namespace DictionaryListViewWindows { void __cdecl CmShared_477acc(int self,int index); }
namespace DictionaryListViewWindows { void __cdecl Child7830_Notify1(int self); }
namespace DictionaryListViewWindows { void __cdecl Child7830_Notify2(int self); }
namespace DictionaryListViewWindows { void __cdecl Child7840_Notify1(int self); }
namespace DictionaryListViewWindows { void __cdecl Child7840_Notify2(int self); }
namespace MatchListLabelWindows::Info { undefined4 * __cdecl Info(undefined4 *self); }
namespace MatchEngineSet { void __cdecl _dtor(int self,byte dtorFlags); }
namespace MatchEngineSet { undefined4 __cdecl Compile(int self,int dictList,int dictIndex,int query,int shortest,int longest,int ignoreUnusedPunctuation); }
namespace std::vector_MatchEngine_ptr { void __cdecl insert_aux_4791f0(int vec,undefined4 *pos,undefined4 *value); }
namespace std { undefined4 * __cdecl copy_backward_ptr_4793c8(undefined4 *first,undefined4 *last,undefined4 *destEnd); }
namespace std { undefined4 * __cdecl copy_ptr_4793ec(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace std { void __cdecl _Destroy_range_ptr_47946c(int first,int last); }
namespace MatchEngineSet { undefined4 __cdecl SetWordLength(int self,int length); }
namespace MatchEngineSet { void __cdecl GetBalanceText(int self,int prefix,int out); }
namespace MatchEngineSet { void __cdecl SetLengthLimits(int self,int shortest,int longest); }
namespace MatchEngineSet { void __cdecl GetLengthRange(int self,int *first,int *last); }
namespace MatchEngineSet { undefined4 __cdecl GetLengthKindSum(int self); }
namespace MatchEngineSet { void __cdecl CopyEngines(int self,int vec); }
namespace std::vector_MatchEngine_ptr { void __cdecl resize_479c14(int vec,uint n); }
namespace std::vector_MatchEngine_ptr { undefined4 __cdecl insert_fill_479cb4(int vec,undefined4 *first,uint n,undefined4 *value); }
namespace std { undefined4 * __cdecl copy_ptr_479f5c(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace std { void __cdecl _Destroy_range_ptr_479fdc(int first,int last); }
namespace std { undefined4 * __cdecl copy_backward_ptr_479ff4(undefined4 *first,undefined4 *last,undefined4 *destEnd); }
namespace std { void __cdecl fill_ptr_47a018(undefined4 *first,undefined4 *last,undefined4 *value); }
namespace std { void __cdecl fill_n_ptr_47a038(undefined4 *first,int n,undefined4 *value); }
namespace std { undefined4 * __cdecl copy_ptr_47a0b4(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace std { undefined4 * __cdecl copy_ptr_47a0d8(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace MatchEngineSet { void __cdecl Clear(int self); }
namespace std::vector_MatchEngine_ptr { void __cdecl resize_47a74c(int vec,uint n); }
namespace std::vector_MatchEngine_ptr { undefined4 __cdecl insert_fill_47a7ec(int vec,undefined4 *first,uint n,undefined4 *value); }
namespace std { void __cdecl fill_ptr_47aa94(undefined4 *first,undefined4 *last,undefined4 *value); }
namespace std { void __cdecl fill_n_ptr_47aab4(undefined4 *first,int n,undefined4 *value); }
namespace std { undefined4 * __cdecl copy_ptr_47ab30(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace TEAStartupTipsViewWindows { int * __cdecl TEAStartupTipsViewWindows(int *self,int vbasesBuilt,undefined4 *param_3,int param_4); }
namespace TEAStartupTipsViewWindows { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace TEAStartupTipsViewWindows { bool __cdecl IsShowAtStartup(int self); }
namespace TEAStartupTipsViewWindows { void __cdecl OnButton(int self,undefined4 param_2,int param_3); }
namespace TEAStartupTipsViewWindows { void __cdecl SetupTooltips(int *self); }
namespace TEAStartupTipsViewWindows { void __cdecl SetupWindow(int *self); }
namespace std::basic_istringstream { undefined4 * __cdecl basic_istringstream(int self,uint *text,undefined4 mode); }
namespace TEAStartupTipsViewWindows { void __cdecl Destroy(int *self,INT_PTR result); }
namespace TEAStartupTipsViewWindows { void __cdecl ShowTip(int self); }
namespace std::locale::facet { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace __rwstd::facet_imp { void __stdcall vf1(void); }
namespace __rwstd::facet_imp { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace GripBar { int * __cdecl GripBar(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,undefined4 param_5); }
namespace OWL::TGadgetWindow { undefined4 __cdecl GetTooltip(int self); }
namespace RtfFilter { uint __cdecl HashControlWord(char *word_); }
namespace RtfFilter { undefined4 __cdecl LookupSymbol(int id); }
namespace RtfFilter { uint * __cdecl ReadControlWord(char *start,uint *p,undefined4 *state); }
namespace RtfFilter { void __cdecl AppendFlag(int out,uint *word_,int oldValue,int newValue); }
namespace RtfFilter { void __cdecl AppendEscaped(int out,int text); }
namespace RtfFilter { undefined4 __stdcall AppendNumberWord(int str,undefined4 *param_2,uint param_3,uint *param_4); }
namespace RtfFilter { undefined4 __stdcall AppendWordAndStore(int out,uint *word_,undefined4 value,undefined4 *store); }
namespace RtfFilter { void __cdecl AppendToggle(int out,int changed,int on,uint *word_); }
namespace RtfFilter { undefined4 __cdecl InitKeywordTable(undefined4 param_1); }
namespace std { undefined4 * __cdecl copy_ptr_47c8e8(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace std { void __cdecl _Destroy_range_ptr_47c968(int first,int last); }
namespace std { undefined4 * __cdecl copy_backward_ptr_47c980(undefined4 *first,undefined4 *last,undefined4 *destEnd); }
namespace std { void __cdecl _Destroy_range_ptr_47c9a4(undefined4 vec,int first,int last); }
namespace std { void __cdecl _Destroy_range_1(undefined4 param_1,int param_2,int param_3); }
namespace RtfFilter { void __cdecl HandleControlWord(undefined4 *self,uint token,int index,int *value); }
namespace RtfFilter { void __cdecl HandleDestination(int self,uint kind,undefined4 *state,uint value); }
namespace std { int * operator_shl_string_47d0e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5 ); }
namespace RtfFilter { void __cdecl AddFontName(int self,undefined4 index,undefined4 *name,int charset); }
namespace RtfFilter { void __cdecl AddText(int self,int text,uint len,int flags); }
namespace RtfFilter { void __cdecl FlushTextBuffer(int self,uint count); }
namespace RtfFilter { int __cdecl ConvertTextBuffer(int param_1,undefined1 *first,uint param_3,undefined1 *param_4); }
namespace std { undefined1 * __cdecl copy_bytes(undefined1 *first,undefined1 *last,undefined1 *dest); }
namespace std { void __cdecl _Destroy_range_1_47f5fc(int param_1,int param_2); }
namespace std { undefined1 * __cdecl copy_backward_bytes(undefined1 *first,undefined1 *last,undefined1 *destEnd); }
namespace std { undefined1 * __cdecl copy_bytes_47f630(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3); }
namespace std { void __cdecl fill_n_bytes(undefined1 *param_1,int param_2,undefined1 *param_3); }
namespace std { undefined1 * __cdecl copy_bytes_47f6cc(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3); }
namespace RtfFilter { void __cdecl SetCharAt(int self,undefined1 ch); }
namespace RtfFilter { void __cdecl BeginRun(int self,int kind,undefined4 value); }
namespace std::vector_ptr { void __cdecl insert_aux_47f820(int vec,undefined4 *pos,undefined4 *value); }
namespace RtfFilter { void __cdecl FlushPendingWord(int self); }
namespace RtfFilter { void __cdecl Break(int self,uint token,int isColumn); }
namespace RtfFilter { void __cdecl SectionBreak(int self); }
namespace RtfFilter { void __cdecl SetSectionBreakType(int self,int type); }
namespace RtfFilter { void __cdecl SetColumns(int self,undefined4 count); }
namespace RtfFilter { void __cdecl SetColumnSpacing(int self,undefined4 twips); }
namespace RtfFilter { void __cdecl SetCharFormat(int self,uint attribute,int value); }
namespace std::vector_ptr { void __cdecl insert_aux_480144(int vec,undefined4 *pos,undefined4 *value); }
namespace std { undefined4 * __cdecl copy_backward_ptr_48031c(undefined4 *first,undefined4 *last,undefined4 *destEnd); }
namespace std { undefined4 * __cdecl copy_ptr_480340(undefined4 *first,undefined4 *last,undefined4 *dest); }
namespace std { void __cdecl _Destroy_range_ptr_4803c0(int first,int last); }
namespace std { void __cdecl _Destroy_range_ptr_4803d8(undefined4 vec,int first,int last); }
namespace RtfFilter { void __cdecl SetAlignmentOrIndent(int self,int kind,int value); }
namespace RtfFilter { void __cdecl AddTabStop(int self,undefined4 position); }
namespace RtfFilter { void __cdecl ResetParagraph(int self); }
namespace RtfFilter { undefined4 __cdecl CurrentParagraph(int self); }
namespace RtfFilter { undefined4 __cdecl CurrentRunCount(int self); }
namespace RtfFilter { undefined4 * __cdecl MakeCharFormat(undefined4 *result,int self); }
namespace RtfFilter { undefined4 * __cdecl MakeParaFormat(undefined4 *result,int state); }
namespace RtfFilter { undefined4 * __cdecl CopyRunFormat(undefined4 *result,undefined4 *source); }
namespace FormattedTextSegment { void __cdecl _dtor(int self,byte dtorFlags); }
namespace FormattedTextSegment { undefined4 * __cdecl FormattedTextSegment(undefined4 *self,undefined4 *paragraph,undefined4 *text,undefined4 *source); }
namespace FormattedTextParagraph { void __cdecl _dtor(int self,byte dtorFlags); }
int __cdecl RtfParseColorTable(int self);
int __cdecl RtfParseFontTable(int self,int text);
int __cdecl FindStringIndex(int vec,int first,int value);
namespace RtfFilter { int __cdecl FontIndexOf(int self,int font); }
namespace RtfFilter { int __cdecl ColourIndexOf(int self,int colour); }
bool __cdecl IsRtfText(int text);
int __cdecl ConvertMarkupToRtf(int result,int text,int flags);
int __cdecl DecodeEntity(int text,int len);
void __cdecl SetRichText(HWND hWnd,int text,int lParam);
namespace std::basic_ostream_char::sentry { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::vector_FormattedTextSegment_ptr { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TCharFormat { undefined4 * __cdecl TCharFormat(undefined4 *self,int *richEdit,char selection,undefined4 mask); }
namespace OWL::TCharFormat { void __cdecl SetBold(int self,char on); }
namespace OWL::TCharFormat { void __cdecl SetItalic(int self,char on); }
namespace OWL::TCharFormat { void __cdecl SetUnderline(int self,char on); }
namespace OWL::TCharFormat { void __cdecl SetStrikeOut(int self,char on); }
namespace OWL::TCharFormat { void __cdecl SetTextColor(int self,undefined4 *colour); }
namespace OWL::TCharFormat { char * __cdecl SetFaceName(int self,char *faceName); }
namespace OWL::TCharFormat { void __cdecl SetCharSet(int self,undefined1 charSet); }
namespace OWL::TCharFormat { void __cdecl SetPitchAndFamily(int self,undefined1 pitchAndFamily); }
namespace OWL::TCharFormat { void __cdecl SetHeight(int self,undefined4 height); }
namespace OWL::TCharFormat { undefined4 * __cdecl GetFontInfo(int self,int *logFont); }
namespace OWL::TCharFormat { void __cdecl SetDefaults(int self); }
namespace OWL::TParaFormat { undefined4 * __cdecl TParaFormat(undefined4 *self,undefined4 mask); }
namespace OWL::TParaFormat { void __cdecl SetStartIndent(int self,undefined4 indent,char relative); }
namespace OWL::TParaFormat { void __cdecl SetRightIndent(int self,undefined4 indent); }
namespace OWL::TParaFormat { void __cdecl SetOffset(int self,undefined4 offset); }
namespace OWL::TParaFormat { void __cdecl SetAlignment(int self,undefined2 alignment); }
namespace OWL::TParaFormat { void __cdecl SetTabs(int self,short count,undefined4 *tabs); }
void __stdcall DestroyRichEditLoader_48593c(void);
undefined4 __cdecl ShowHtmlHelp(HWND hWnd);
undefined4 * __cdecl LoadHtmlHelp(undefined4 *result);
namespace Help { void __cdecl _dtor(int *self,byte dtorFlags); }
int __cdecl GetCommonIniPath(int result,int subdir);
namespace Common { void __cdecl _dtor(int self,byte dtorFlags); }
namespace Common { undefined4 __cdecl ReadLicense(int self,int owner,int key); }
namespace Common { void __cdecl WriteLicense(int self,int owner,int key); }
undefined4 __cdecl CheckLicenseKey3(byte *owner,char *key);
bool __cdecl CheckLicenseKeyImpl(byte *owner,char *key);
void __cdecl LicenseHashByte(byte input,byte *state,byte *polynomial);
namespace LicenseViewWindows { int * __cdecl LicenseViewWindows(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6); }
namespace LicenseViewWindows { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace LicenseViewWindows { void __cdecl CloseWindow(int *self,int param_2); }
undefined4 __cdecl CheckLicenseKey(byte *owner,char *key);
undefined4 __cdecl CheckLicenseKey2(byte *owner,char *key);
undefined4 __stdcall GetRichEditVersion2(void);
void __stdcall InitRichEditStreamer(void);
void __stdcall DestroyRichEditStreamer(void);
namespace OWL::TRichEdit::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TRichEdit { int * __cdecl TRichEdit_48698c(int *self,int vbasesBuilt); }
namespace OWL::TRichEdit::Streamer { undefined4 __cdecl vf1(int self,int *param_2); }
void __cdecl FUN_00486ac4(int param_1,int *param_2);
namespace OWL::TRichEdit::Streamer { void __cdecl vf2(int self,int *param_2); }
void __cdecl FUN_00486b34(int param_1,int *param_2);
undefined4 * __cdecl FUN_00486b88(int *param_1);
namespace OWL::TNewStreamer { void __cdecl vf0(int self); }
namespace OWL::TRichEdit::Streamer { undefined4 __stdcall vf3(void); }
void __stdcall FUN_00486df0(void);
namespace OWL::TCommCtrlDll { undefined4 * __cdecl TCommCtrlDll(undefined4 *self); }
void __cdecl FUN_00486eec(int param_1);
bool __cdecl FUN_00486f1c(int param_1,int param_2);
undefined4 __stdcall FUN_00486f84(void);
undefined4 __stdcall FUN_00486ff4(void);
bool __stdcall FUN_00487090(void);
undefined * __stdcall FUN_004870d0(void);
undefined * __stdcall FUN_00487178(void);
bool __stdcall FUN_00487180(void);
namespace OWL::TXCommCtrl { undefined4 * __cdecl TXCommCtrl(undefined4 *self); }
namespace OWL::TXCommCtrl { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXCommCtrl { void __cdecl vf3(int *self); }
void __stdcall FUN_0048739c(void);
namespace OWL::TXCommCtrl { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TCommCtrlDll { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined * __stdcall FUN_0048751c(void);
undefined1 __stdcall FUN_00487548(void);
undefined1 __stdcall FUN_00487578(void);
bool __stdcall FUN_004875a8(void);
void __stdcall FUN_004875c0(void);
undefined * __stdcall FUN_004876f0(void);
PHKEY __cdecl FUN_00487794(PHKEY phkResult,HKEY hKey,uint *param_3,REGSAM samDesired,int param_5);
undefined4 * __cdecl FUN_0048786c(undefined4 *param_1,undefined4 param_2,undefined1 param_3,uint *param_4);
namespace OWL::TRegKey { void __cdecl _dtor(int *self,byte dtorFlags); }
LSTATUS __cdecl FUN_00487964(undefined4 *param_1,LPSTR class_,LPDWORD lpcchClass,LPDWORD subKeys,LPDWORD maxSubKeyLen, DWORD *maxClassLen,DWORD *values,LPDWORD maxValueNameLen,LPDWORD maxValueLen,LPDWORD securityDescriptor, PFILETIME lpftLastWriteTime);
undefined4 * __cdecl FUN_00487a14(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
namespace OWL::TRegValue { void __cdecl _dtor(int self,byte dtorFlags); }
void __stdcall DestroyRichEditLoader_487b80(void);
undefined * __stdcall FUN_00487bc0(void);
undefined4 * __cdecl FUN_00487c5c(undefined4 *param_1);
namespace OWL::TAppDictionary { void __cdecl _dtor(int *self,byte dtorFlags); }
undefined4 __cdecl FUN_00487e08(undefined4 *param_1,int param_2);
void __cdecl FUN_00487e38(undefined4 *param_1,undefined4 param_2,int param_3);
void __cdecl FUN_00487e60(undefined4 *param_1);
bool __cdecl FUN_00487eac(undefined4 *param_1);
namespace OWL::TAppDictPidImp { undefined4 * __cdecl TAppDictPidImp(undefined4 *self); }
namespace OWL::TAppDictPidImp { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TAppDictPidImp { void __cdecl vf1(int self,int param_2,int param_3); }
namespace OWL::TAppDictPidImp { void __cdecl vf2(int *self); }
namespace OWL::TAppDictPidImp { int * __cdecl vf3(int self,int param_2); }
namespace OWL::TAppDictPidImp { uint __cdecl vf4(int self,int param_2); }
namespace OWL::TAppDictPidImp { void vf5(undefined4 self,undefined4 param_2,uint param_3,int param_4,undefined *param_5); }
namespace OWL::TAppDictPidImp { int __cdecl vf6(int self); }
undefined4 * __cdecl FUN_004880b4(int param_1);
void __stdcall FUN_004880e0(void);
int __cdecl FUN_004880f0(int param_1);
int * __cdecl FUN_00488138(int param_1);
namespace OWL::TAppDictImp { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TAppDictInstImp { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TAppDictInstImp { void __cdecl vf1(int self,undefined4 param_2,undefined4 param_3); }
namespace OWL::TAppDictInstImp { void __cdecl vf2(int self); }
namespace OWL::TAppDictInstImp { int __cdecl vf3(int self); }
namespace OWL::TAppDictInstImp { int __cdecl vf4(int self); }
namespace OWL::TAppDictInstImp { void __cdecl vf5(undefined4 self,undefined *param_2); }
namespace OWL::TAppDictInstImp { bool __cdecl vf6(int self); }
uint * __cdecl FUN_004883bc(uint *param_1,undefined4 param_2,int param_3);
uint * __cdecl FUN_0048842c(uint *param_1,int width,int height,byte planes,byte bitCount,void *bits);
uint * __cdecl FUN_004884a0(uint *param_1,undefined4 *param_2,int cx,int cy,char param_5);
uint * __cdecl FUN_0048852c(uint *param_1,uint *param_2);
uint * __cdecl FUN_004885cc(uint *param_1,int param_2,uint *param_3);
namespace OWL::TBitmap { void __cdecl _dtor(uint *self,byte dtorFlags); }
undefined4 __cdecl FUN_00488700(undefined4 *param_1);
undefined4 __cdecl FUN_00488728(undefined4 *param_1);
undefined4 * __cdecl FUN_00488750(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_00488788(uint *param_1,int param_2,uint *param_3);
void __cdecl FUN_0048882c(uint *param_1,uint *param_2);
namespace OWL::TPalette { void __cdecl _dtor(uint *self,byte dtorFlags); }
namespace OWL::TButtonGadget { int vf28(...); }   // not decompiled
void __stdcall FUN_00488bbc(void);
void __stdcall FUN_00488bfc(void);
namespace OWL::TButtonGadgetEnabler { void __cdecl vf0(int self); }
namespace OWL::TButtonGadgetEnabler { void __stdcall vf1(void); }
namespace OWL::TButtonGadgetEnabler { void __cdecl vf2(int self,int param_2); }
namespace OWL::TButtonGadget { int * __cdecl TButtonGadget(int *self,uint *param_2,undefined4 param_3,char param_4,undefined4 param_5, byte param_6,char param_7); }
namespace OWL::TButtonGadget { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __cdecl FUN_00488e74(int param_1,byte param_2);
namespace OWL::TButtonGadget { void __cdecl vf5(int self); }
namespace OWL::TButtonGadget { void __cdecl vf6(int *self); }
void __cdecl FUN_00488f94(int *param_1);
void __cdecl FUN_004890e4(int *param_1,int param_2);
namespace OWL::TButtonGadget { void __cdecl vf3(int *self,int *param_2); }
namespace OWL::TButtonGadget { void __cdecl vf2(int *self,int *param_2); }
namespace OWL::TButtonGadget { int * __cdecl vf22(int self); }
namespace OWL::TDib { void vf3(char *self,int param_2,char param_3); }
namespace OWL::TButtonGadget { void __cdecl vf23(undefined4 self,int param_2); }
namespace OWL::TButtonGadget { void __cdecl vf24(int *self); }
void __cdecl FUN_00489588(int param_1,undefined4 param_2);
namespace OWL::TButtonGadget { void __cdecl vf12(int *self); }
namespace OWL::TButtonGadget { void __cdecl vf13(int self,undefined4 *param_2); }
undefined * __stdcall FUN_00489774(void);
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
namespace OWL::TCelArray { undefined4 * __cdecl TCelArray_489df0(undefined4 *self,undefined4 *param_2,undefined4 param_3,int param_4, undefined4 param_5,int param_6); }
namespace OWL::TCelArray { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
int * __cdecl FUN_00489f44(int *param_1,int param_2,int param_3,int param_4);
int * __cdecl FUN_00489f80(int *param_1,int param_2,int param_3,int param_4);
undefined4 __cdecl FUN_00489ffc(int param_1,uint *param_2);
undefined4 __cdecl FUN_0048a094(int param_1,int param_2,int param_3);
undefined4 __cdecl FUN_0048a134(int param_1,int param_2);
undefined4 __cdecl FUN_0048a244(int param_1,int param_2,uint *param_3);
uint __cdecl FUN_0048a2b4(uint *param_1,uint *param_2,int *param_3,int *param_4,int x1,int y1);
undefined4 __cdecl FUN_0048a3c4(int param_1,int param_2);
undefined4 __cdecl FUN_0048a404(int param_1,int param_2);
void __stdcall FUN_0048a614(void);
HMODULE __stdcall FUN_0048a629(HANDLE hProcess,LPCVOID address);
undefined4 __cdecl FUN_0048a6d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void __stdcall FUN_0048a88b(void);
void __stdcall FUN_0048a8c9(void);
namespace OWL::TDiagGroupDef { undefined4 * __cdecl TDiagGroupDef(undefined4 *self,undefined4 param_2,byte param_3,char param_4); }
namespace OWL::TDiagGroupDef { undefined4 __stdcall vf0(void); }
namespace OWL::TDiagBase { undefined4 * __cdecl TDiagBase(undefined4 *self,undefined4 param_2,byte param_3,char param_4); }
namespace OWL::TDiagBase { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
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
namespace OWL::TDiagGroupDef { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __stdcall FUN_0048ae6c(void);
void __stdcall FUN_0048ae7c(void);
void __cdecl FUN_0048aee8(int param_1,int param_2);
namespace OWL::TTmpBuffer_char { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TChooseColorDialog { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TChooseColorDialog { int * __cdecl TChooseColorDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7); }
namespace OWL::TChooseColorDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TChooseColorDialog { void __cdecl vf1(int *self,int param_2,undefined4 param_3); }
namespace OWL::TChooseColorDialog { undefined4 __cdecl DoExecute(int self); }
namespace OWL::TChooseFontDialog { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TChooseFontDialog { int * __cdecl TChooseFontDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7); }
namespace OWL::TChooseFontDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TChooseFontDialog { void __cdecl vf1(int *self,int param_2,undefined4 param_3); }
namespace OWL::TChooseFontDialog { undefined4 __cdecl DoExecute(int self); }
char * __cdecl FUN_0048ba8c(char *param_1,HWND hWnd,char param_3);
namespace OWL::TClipboard { void __cdecl _dtor(char *self,byte dtorFlags); }
void __cdecl FUN_0048bc08(char *param_1);
void __cdecl FUN_0048bc20(undefined4 param_1,HWND hWnd);
namespace OWL::TXClipboard { undefined4 * __cdecl TXClipboard(undefined4 *self,uint param_2); }
namespace OWL::TXClipboard { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXClipboard { void __cdecl vf3(int *self); }
namespace OWL::TXClipboard { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
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
namespace OWL::TCommonDialog { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TCommonDialog { void __cdecl EvClose(int *self); }
namespace OWL::TCommonDialog { void __cdecl CmRange1to2(int *self); }
namespace OWL::TCommonDialog { int * __cdecl TCommonDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5); }
namespace OWL::TCommonDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TCommonDialog { void __cdecl SetupWindow(int *self); }
namespace OWL::TCommonDialog { void __stdcall PerformCreate(void); }
namespace OWL::TCommonDialog { undefined4 __stdcall DoExecute(void); }
void __cdecl FUN_0048c8b0(int param_1,uint param_2);
int __cdecl FUN_0048c8fc(int param_1,uint param_2);
undefined4 __stdcall FUN_0048c948(int param_1);
undefined4 __stdcall FUN_0048c94e(void);
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
void __stdcall FUN_0048cc38(void);
namespace OWL::TMBlockList_TStandardAllocator { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TMMemBlocks_TStandardAllocator { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TMMemStack_TStandardAllocator { void __cdecl _dtor(int self,byte dtorFlags); }
void __cdecl FUN_0048ce3c(int param_1,byte param_2);
namespace OWL::TControlBar { int * __cdecl TControlBar(int *self,int vbasesBuilt,undefined4 param_3,undefined1 param_4,uint *param_5, int param_6); }
namespace OWL::TControlBar { void __cdecl _dtor(int *self,uint dtorFlags); }
undefined4 * __cdecl FUN_0048d298(undefined4 *param_1);
int * __cdecl FUN_0048d2f8(int *param_1,LPCSTR pwszDriver,LPCSTR pwszDevice,LPCSTR port,DEVMODEA *pdm);
undefined4 * __cdecl FUN_0048d35c(undefined4 *param_1,undefined4 param_2,int param_3);
namespace OWL::TCreatedDC { void __cdecl _dtor(int *self,byte dtorFlags); }
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
namespace OWL::TDC { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace OWL::TDC { undefined4 __cdecl vf23(undefined4 *self); }
void __cdecl FUN_0048d8f4(undefined4 *param_1,uint *param_2);
void __cdecl FUN_0048d938(undefined4 *param_1,uint *param_2);
namespace OWL::TDC { void __cdecl vf5(undefined4 *self,uint *param_2); }
void __cdecl FUN_0048d9c0(undefined4 *param_1,uint *param_2,byte forceBkgd);
namespace OWL::TDC { void __cdecl vf6(undefined4 *self,int i); }
void __cdecl FUN_0048da38(undefined4 *param_1);
void __cdecl FUN_0048da64(undefined4 *param_1);
namespace OWL::TDC { void __cdecl vf7(undefined4 *self); }
void __cdecl FUN_0048dabc(undefined4 *param_1);
void __cdecl FUN_0048dae8(undefined4 *param_1);
void __cdecl FUN_0048db14(undefined4 *param_1);
void __cdecl FUN_0048db40(int *param_1);
HGDIOBJ __cdecl FUN_0048db7c(undefined4 *param_1,UINT type);
void __cdecl FUN_0048db90(undefined4 *param_1,uint *param_2,int *param_3,int w2,int h2,DWORD rop);
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
namespace OWL::TXBase { undefined4 * __cdecl TXBase(undefined4 *self,int param_2); }
namespace OWL::TXBase { undefined4 * __cdecl TXBase_48e99c(undefined4 *self,int *param_2); }
namespace OWL::TXBase { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TXBase { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXBase { void __cdecl vf3(int *self); }
namespace OWL::TXBase { undefined4 __cdecl vf1(int self); }
undefined4 __stdcall FUN_0048ebe4(void);
undefined4 __stdcall FUN_0048ec38(undefined4 param_1,undefined1 *param_2);
undefined4 __cdecl FUN_0048ec48(int *param_1,LPCSTR caption,char *param_3);
namespace OWL::TXOwl { undefined4 * __cdecl TXOwl(undefined4 *self,int param_2,undefined4 param_3); }
namespace OWL::TXOwl { undefined4 * __cdecl TXOwl_48ed90(undefined4 *self,uint param_2,int param_3); }
namespace OWL::TXOwl { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TXOwl { void __cdecl vf4(undefined4 self,int *param_2); }
namespace OWL::TXOwl { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXOwl { void __cdecl vf3(int *self); }
namespace OWL::TXOwl { undefined4 * __cdecl TXOwl_48efdc(undefined4 *self,int *param_2); }
void __cdecl FUN_0048f024(int param_1,undefined4 param_2);
int __cdecl FUN_0048f078(int param_1,char *param_2,uint param_3,int param_4);
int __cdecl FUN_0048f258(int str,uint param_2,undefined4 param_3,int param_4);
int __cdecl FUN_0048f35c(int str,uint param_2,undefined4 param_3,int param_4);
namespace OWL::TXOutOfMemory { undefined4 * __cdecl TXOutOfMemory(undefined4 *self); }
namespace OWL::TXOutOfMemory { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXOutOfMemory { void __cdecl vf3(int *self); }
void __stdcall FUN_0048f674(void);
namespace OWL::TXOutOfMemory { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
uint * __cdecl FUN_0048f708(uint *param_1,undefined4 param_2,int param_3);
uint * __cdecl FUN_0048f75c(uint *param_1,LPCSTR faceName,int cHeight,int cWidth,int cEscapement,int cOrientation, int cWeight,byte pitchAndFamily,byte italic,byte underline,byte strikeOut,byte charSet, byte outPrecision,byte clipPrecision,byte quality);
uint * __cdecl FUN_0048f7fc(uint *param_1,LOGFONTA *pLogFont);
void __cdecl FUN_0048f85c(undefined4 param_1,LPTEXTMETRICA lptm,int param_3);
void __cdecl FUN_0048f898(undefined4 param_1,LPTEXTMETRICA lptm);
LONG * __cdecl FUN_0048f8fc(LONG *param_1,undefined4 param_2);
LONG * __cdecl FUN_0048f980(LONG *param_1,undefined4 param_2,uint *string_);
LONG * __cdecl FUN_0048f9ec(LONG *param_1,undefined4 param_2,int param_3,uint *string_);
int __cdecl FUN_0048fa68(int str,undefined4 *param_2);
undefined1 __cdecl FUN_0048fac4(undefined4 *param_1);
uint * __cdecl FUN_0048faec(uint *param_1);
undefined4 * __cdecl FUN_0048fb40(undefined4 *param_1,int param_2,undefined4 *param_3,uint n);
int __cdecl FUN_0048fb88(int param_1,int param_2);
undefined4 __cdecl FUN_0048fba0(int param_1);
void __cdecl FUN_0048fbc8(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6);
namespace OWL::TGadget { undefined4 * __stdcall TGadget(undefined4 *self,undefined4 param_2); }
int __stdcall FUN_0048fcf2(void);
namespace OWL::TGadget { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TGadget { undefined4 __cdecl vf4(int *self,int param_2); }
namespace OWL::TGadget { void __stdcall vf5(void); }
namespace OWL::TGadget { void __stdcall vf6(void); }
void __cdecl FUN_0048fe6c(int param_1,undefined1 param_2,undefined1 param_3);
namespace OWL::TGadget { void __cdecl vf1(int self,char param_2); }
namespace OWL::TGadget { void __cdecl vf3(int *self,int *param_2); }
void __cdecl FUN_0048ff24(int param_1,undefined4 *param_2);
void __cdecl FUN_0048ff54(int param_1,undefined4 *param_2);
void __cdecl FUN_0048ff7c(int param_1,undefined4 param_2);
namespace OWL::TGadget { undefined4 __cdecl vf11(int self,int *param_2); }
namespace OWL::TGadget { void __cdecl vf7(int self); }
namespace OWL::TGadget { void __stdcall vf8(void); }
namespace OWL::TGadget { void __cdecl vf10(int self); }
namespace OWL::TGadget { void __cdecl vf9(int self); }
void __cdecl FUN_00490358(int param_1);
void __cdecl FUN_004903b8(int param_1);
void __cdecl FUN_00490404(int param_1);
namespace OWL::TGadget { void __cdecl vf13(int self,undefined4 *param_2); }
namespace OWL::TGadget { void __cdecl vf12(int *self); }
namespace OWL::TGadget { void __cdecl vf2(int self,int *param_2); }
void __cdecl FUN_004905e8(int param_1,int *param_2,int *param_3,int *param_4,int *param_5);
void __cdecl FUN_004906a0(int param_1,int *param_2);
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
namespace OWL::TSizeGripGadget { int * __cdecl TSizeGripGadget(int *self,undefined4 param_2); }
namespace OWL::TSizeGripGadget { void __cdecl vf12(int self,undefined4 *param_2); }
namespace OWL::TSizeGripGadget { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TGadgetList { undefined4 * __cdecl TGadgetList(undefined4 *self); }
namespace OWL::TGadgetList { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
int * __cdecl FUN_00490d84(int param_1);
int __cdecl FUN_00490dd0(int param_1,int param_2);
int __cdecl FUN_00490df0(int param_1,int param_2);
namespace OWL::TGadgetList { void __cdecl vf1(int *self,int param_2,int param_3,int param_4); }
namespace OWL::TGadgetList { void vf2(int self,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5, int param_6,int param_7); }
namespace OWL::TGadgetList { int __cdecl vf3(int *self,int param_2); }
namespace OWL::TGadgetList { void __stdcall vf4(void); }
namespace OWL::TGadgetList { void __stdcall vf5(void); }
namespace OWL::TGadgetWindow { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
uint * __cdecl FUN_00490fa8(uint *param_1,int param_2,char param_3,byte italic);
namespace OWL::TGadgetWindow { int * __cdecl TGadgetWindow(int *self,int vbasesBuilt,undefined4 param_3,undefined1 param_4,uint *param_5, int param_6); }
namespace OWL::TGadgetWindow { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TGadgetWindow { void EvSysColorChange(undefined4 self,undefined4 param_2,int *param_3,int param_4); }
namespace OWL::TGadgetWindow { void __cdecl IdleAction(int *self,int param_2); }
uint __cdecl FUN_00491668(int *param_1);
undefined4 __cdecl FUN_004916ac(int *param_1,int param_2);
void __cdecl FUN_004916d0(int param_1,int param_2);
void __cdecl FUN_004916ec(int *param_1,int param_2);
uint __cdecl FUN_004917ac(int param_1,int param_2);
namespace OWL::TGadgetWindow { void __cdecl vf13(int *self); }
namespace OWL::TGadgetWindow { void __cdecl vf14(int *self,undefined4 *param_2); }
undefined4 * __cdecl FUN_004918cc(undefined4 *param_1);
int __cdecl FUN_00491968(int *param_1);
namespace OWL::TGadgetWindow { void __cdecl Create(int *self); }
namespace OWL::TGadgetWindow { void __cdecl vf2(int *self,int param_2); }
namespace OWL::TGadgetWindow { void __cdecl vf16(int *self,int *param_2); }
namespace OWL::TGadgetWindow { void __cdecl vf20(int self,int param_2,int param_3,int *param_4); }
namespace OWL::TGadgetWindow { int * __cdecl vf18(int *self,int param_2); }
void __cdecl FUN_00491cec(int param_1,int *param_2);
void __cdecl FUN_00491fbc(int param_1,int *param_2);
void __cdecl FUN_004921d4(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6, int *param_7);
void __cdecl FUN_004922a4(int param_1,int *param_2);
namespace OWL::TGadgetWindow { void __cdecl vf17(int self,int param_2,int *param_3); }
void __cdecl FUN_00492634(int param_1);
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
void __stdcall FUN_00492f80(int *param_1);
void __stdcall FUN_00492f8c(int *param_1);
namespace OWL::TGadgetWindow { void __cdecl EnableTooltip(int *self,byte wParam); }
void __cdecl FUN_0049304c(int *param_1,undefined4 param_2);
namespace OWL::TGadgetWindow { undefined4 __cdecl EvCommand(int *self,int param_2,HWND hWnd,undefined4 param_4); }
namespace OWL::TGadgetWindow { void __cdecl EvCommandEnable(int *self,int param_2); }
namespace OWL::TGadgetWindow::TLayoutInfo { void __cdecl _dtor(int self,byte dtorFlags); }
void __cdecl FUN_00493498(undefined4 *param_1);
namespace OWL::TAPointer_OWL_TRect { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined4 * __cdecl FUN_004934c8(undefined4 *param_1);
undefined4 * __cdecl FUN_004934f8(undefined4 *param_1,undefined4 param_2,int param_3);
void __cdecl FUN_00493530(int *param_1,uint param_2);
void __cdecl FUN_00493548(int param_1,uint param_2);
namespace OWL::TXGdi { undefined4 * __cdecl TXGdi(undefined4 *self,uint param_2,undefined4 param_3); }
namespace OWL::TXGdi { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXGdi { void __cdecl vf3(int *self); }
void __cdecl FUN_00493800(uint param_1,undefined4 param_2);
namespace OWL::TXGdi { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
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
namespace OWL::TGdiObject { void __cdecl _dtor(uint *self,byte dtorFlags); }
namespace OWL::TObjInfo { void __cdecl _dtor(int self,byte dtorFlags); }
void __cdecl FUN_004941a4(int param_1,byte param_2);
void __cdecl FUN_004942c0(int param_1,byte param_2);
void __cdecl FUN_00494390(int param_1,byte param_2);
void __cdecl FUN_00494454(int *param_1,int param_2,int param_3);
int * __cdecl FUN_00494470(int *param_1,int param_2,int param_3);
void __cdecl FUN_0049448c(int *param_1,int *param_2);
void __cdecl FUN_00494540(int *param_1,int *param_2);
int * __cdecl FUN_004945ec(int *param_1);
namespace OWL::TImageList { void __cdecl _dtor(int self,byte dtorFlags); }
void __cdecl FUN_004946f4(int *param_1);
undefined4 __cdecl FUN_00494708(int param_1);
int __cdecl FUN_00494722(int param_1,int param_2);
void __cdecl FUN_0049473d(int param_1,int param_2,int param_3);
void __stdcall InitRichEditStreamer_494930(void);
void __stdcall FUN_00494986(void);
undefined4 * __cdecl FUN_004949b6(undefined4 *param_1);
undefined4 * __cdecl FUN_004949e0(undefined4 *param_1,int numWindows);
bool __cdecl FUN_00494a40(int *param_1,HWND hWnd,HWND hWnd2,int x,int y,int cx,int cy, UINT flags);
undefined4 __cdecl FUN_00494a74(undefined4 *param_1);
namespace OWL::TDeferWinPos { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace OWL::TLayoutWindow { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TLayoutWindow { int * __cdecl TLayoutWindow(int *self,int vbasesBuilt,undefined4 param_3,uint *param_4,int param_5); }
undefined4 * __cdecl FUN_00494c8c(undefined4 *param_1);
namespace OWL::TLayoutWindow { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TLayoutWindow { void __cdecl vf1(int *self); }
void __cdecl FUN_00494fc8(int param_1,int param_2,undefined4 *param_3);
undefined4 __cdecl FUN_00495098(int param_1,int param_2,undefined4 *param_3);
undefined4 __cdecl FUN_004950cc(int param_1,int param_2);
namespace OWL::TLayoutWindow { void __cdecl EvSize(int *self,int sizeType,int *size); }
namespace OWL::TLayoutWindow { void __cdecl RemoveChild(int *self,int param_2); }
int __cdecl FUN_004952f8(int param_1,int param_2);
void __cdecl FUN_00495318(int param_1);
void __cdecl FUN_0049533c(int param_1);
void __cdecl FUN_00495374(int *param_1);
void __cdecl FUN_00495468(int *param_1,int param_2,int *param_3,int param_4);
void __cdecl FUN_00495904(int param_1,undefined1 *param_2);
void __cdecl FUN_00495978(int *param_1,char *param_2);
int __cdecl FUN_00495b64(int param_1,int param_2);
void __cdecl FUN_00495b84(int *param_1);
namespace OWL::TLayoutWindow::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TLayoutWindow { int * __cdecl TLayoutWindow_495c80(int *self,int vbasesBuilt); }
namespace OWL::TLayoutWindow::Streamer { undefined4 __cdecl vf1(int self); }
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
void __stdcall DestroyRichEditLoader_49637f(void);
undefined4 * __cdecl FUN_00496414(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
int __stdcall FUN_00496458(void);
undefined4 * __cdecl FUN_0049646c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
uint * __cdecl FUN_004964ec(undefined4 *param_1,char *param_2);
int __cdecl FUN_00496740(int param_1,ushort param_2);
namespace OWL::_TLocaleCacheList { void __cdecl _dtor(int *self,byte dtorFlags); }
void __cdecl FUN_00496924(int *param_1,int param_2);
int __cdecl FUN_00496938(int *param_1,ushort param_2);
undefined4 __cdecl FUN_00496a1c(ushort param_1);
namespace OWL::_TLocaleCache { void __cdecl _dtor(int self,byte dtorFlags); }
int __cdecl FUN_00496b14(char *s1,char *s2);
undefined * __stdcall FUN_00496b94(void);
void __stdcall FUN_00496bdf(void);
char * __cdecl FUN_00496d48(uint *param_1);
undefined4 * __cdecl FUN_00496d90(undefined4 *param_1);
int * __cdecl FUN_00497298(int *param_1,int param_2);
namespace OWL::TTmpBufferBase { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::__TFixedAlloc { void __cdecl _dtor(int self,byte dtorFlags); }
undefined * __stdcall FUN_0049754c(void);
void __stdcall DestroyRichEditLoader_497595(void);
int __cdecl FUN_00497628(int param_1);
namespace OWL::TMemDCCache { void __cdecl _dtor(int self,byte dtorFlags); }
undefined4 __cdecl FUN_004976cc(int param_1);
void __cdecl FUN_00497724(int param_1,int param_2);
int * __cdecl FUN_00497758(int *param_1);
int * __cdecl FUN_004977c0(int *param_1,undefined4 *param_2);
int * __cdecl FUN_00497828(int *param_1,uint *param_2);
void __cdecl FUN_00497880(int *param_1);
void __cdecl FUN_004978c0(undefined4 *param_1,uint *param_2);
void __cdecl FUN_00497904(undefined4 *param_1);
namespace OWL::TMemoryDC { int * __cdecl _dtor(int *self,byte dtorFlags); }
undefined4 * __cdecl FUN_004979c4(undefined4 *param_1,undefined4 param_2);
namespace OWL::TMenu { undefined4 * __cdecl TMenu(undefined4 *self,int param_2); }
namespace OWL::TMenu { undefined4 * __cdecl TMenu_497a7c(undefined4 *self,int *param_2,int param_3); }
namespace OWL::TMenu { undefined4 * __cdecl TMenu_497aec(undefined4 *self,undefined4 param_2,int param_3); }
namespace OWL::TMenu { undefined4 * __cdecl TMenu_497b38(undefined4 *self,HWND hWnd,int param_3); }
namespace OWL::TMenu { undefined4 * __cdecl TMenu_497b98(undefined4 *self,HINSTANCE hInstance,LPCSTR menuName); }
namespace OWL::TMenu { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
UINT __cdecl FUN_00497c2c(int param_1,int pos);
void __cdecl FUN_00497cdc(int param_1,uint param_2);
namespace OWL::TMenu { void __stdcall vf2(void); }
namespace OWL::TMenu { void __stdcall vf3(void); }
bool __cdecl FUN_00497d04(int param_1,UINT item,char param_3,LPCMENUITEMINFOA lpmii);
bool __cdecl FUN_00497d34(int param_1,UINT item,char param_3,LPCMENUITEMINFOA lpmi);
int * __cdecl FUN_00497d64(int param_1,int *param_2,int param_3,int param_4);
namespace OWL::TPopupMenu { undefined4 * __cdecl TPopupMenu(undefined4 *self,int param_2); }
namespace OWL::TPopupMenu { undefined4 * __cdecl TPopupMenu_497f68(undefined4 *self,undefined4 param_2,int param_3); }
namespace OWL::TPopupMenu { undefined4 * __cdecl TPopupMenu_497fac(undefined4 *self,int *param_2,int param_3); }
namespace OWL::TXMenu { undefined4 * __cdecl TXMenu(undefined4 *self,uint param_2); }
namespace OWL::TXMenu { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXMenu { void __cdecl vf3(int *self); }
void __cdecl FUN_00498208(uint param_1);
namespace OWL::TXMenu { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TMenu { undefined4 __cdecl vf1(int self); }
uint * __stdcall FUN_004982d4(void);
namespace OWL::TMessageBar { int * __cdecl TMessageBar(int *self,int vbasesBuilt,undefined4 param_3,uint *param_4,int param_5); }
namespace OWL::TMessageBar { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TMessageBar { void vf15(undefined4 self,undefined4 param_2,undefined4 param_3,int *gadgetWindow, undefined4 *param_5,undefined1 param_6,int *param_7); }
namespace OWL::TMessageBar { void __cdecl vf16(int *self,int *param_2); }
namespace OWL::TMessageBar { void __cdecl vf14(int *self,undefined4 *param_2); }
void __cdecl FUN_004987c4(int param_1,uint *param_2);
void __cdecl FUN_004987e0(int param_1,int param_2,uint *param_3);
namespace OWL::TMessageBar { void __cdecl vf27(int *self,uint *param_2); }
namespace OWL::TModeGadget { undefined4 * __cdecl TModeGadget(undefined4 *self,undefined4 param_2,uint *param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7); }
namespace OWL::TModeGadget { undefined4 __cdecl vf4(int *self,int param_2); }
namespace OWL::TModeGadget { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TTextGadget { void __cdecl vf21(undefined4 *self); }
namespace OWL::TSystemMessage { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TMsgThread { undefined4 * __cdecl TMsgThread(undefined4 *self); }
namespace OWL::TMsgThread { undefined4 __cdecl vf0(int *self); }
namespace OWL::TMsgThread { undefined4 __stdcall vf1(void); }
namespace OWL::TMsgThread { undefined4 __cdecl vf2(undefined4 self,MSG *pMsg); }
undefined4 __cdecl FUN_00498d7c(int *param_1);
void __stdcall FUN_00498dd8(void);
namespace OWL::TMsgThread { void __cdecl vf3(int *self); }
namespace OWL::TMsgThread { undefined4 __stdcall vf4(void); }
namespace OWL::TMsgThread { undefined4 __cdecl vf5(undefined4 self,undefined4 param_2); }
void __cdecl FUN_00498ebc(undefined4 param_1,int param_2);
void __cdecl FUN_00498ed8(undefined4 param_1,int param_2);
undefined4 __cdecl FUN_00498ef4(undefined4 param_1,uint *param_2);
void __stdcall FUN_00498f10(void);
void __stdcall FUN_00498f8c(void);
int __cdecl FUN_00498fc4(int param_1,int param_2);
void __cdecl FUN_00499074(int param_1,int param_2);
uint __cdecl FUN_00499110(int param_1,int param_2);
undefined4 * __cdecl FUN_00499268(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int param_5);
namespace OWL::TStreamableClass { void __cdecl _dtor(int self,byte dtorFlags); }
int * __cdecl FUN_00499330(int *param_1);
namespace OWL::TStreamableTypes { void __cdecl _dtor(int *self,byte dtorFlags); }
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
void __cdecl FUN_00499dec(int *param_1,undefined4 *dest,uint param_3);
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
void __cdecl FUN_0049a358(int *param_1,undefined4 *src,uint param_3);
void __cdecl FUN_0049a3c4(int *param_1,uint *param_2);
void __cdecl FUN_0049a40c(int *param_1,uint *src);
void __cdecl FUN_0049a454(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_0049a490(int *param_1,int *param_2,undefined4 param_3);
void __cdecl FUN_0049a508(int *param_1,int *param_2);
void __cdecl FUN_0049a554(int *param_1,int *param_2,undefined4 param_3);
void __cdecl FUN_0049a758(undefined4 *param_1);
namespace OWL::TPointer_OWL_TStreamer { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
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
void __stdcall FUN_0049ac8c(HWND hWnd,UINT msg,WPARAM wParam,LPARAM lParam);
undefined1 * __cdecl FUN_0049acf4(undefined4 param_1);
undefined4 * __stdcall FUN_0049adbc(void);
void __stdcall FUN_0049ae74(void);
void __cdecl FUN_0049ae7c(int param_1);
void FUN_0049aea4(int param_1);
namespace TThunkAllocator { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __cdecl FUN_0049af68(LPVOID mem);
int * __cdecl FUN_0049af8c(int *param_1,HWND hWnd);
namespace OWL::TPaintDC { void __cdecl _dtor(int *self,byte dtorFlags); }
uint * __cdecl FUN_0049b094(uint *param_1,undefined4 param_2,int param_3);
namespace OWL::TPaintDC { int vf24(...); }   // not decompiled
uint * __cdecl FUN_0049b104(uint *param_1,int param_2,BYTE param_3);
void __cdecl FUN_0049b14c(uint *param_1,int param_2,BYTE param_3);
namespace OWL::TFileName { void __cdecl _dtor(int self,byte dtorFlags); }
uint * __cdecl FUN_0049b6a8(uint *param_1,uint *param_2,int cWidth,int style);
namespace OWL::TPickListPopup { int * __cdecl TPickListPopup(int *self,int vbasesBuilt,undefined4 param_3,uint param_4); }
undefined4 __cdecl FUN_0049b904(int param_1,LPCSTR newItem);
namespace OWL::TPickListPopup { undefined4 __cdecl Execute(int self); }
namespace OWL::TPickListPopup { undefined4 __cdecl EvCommand(int self,undefined4 param_2); }
void __cdecl FUN_0049b9d4(int param_1);
void __cdecl FUN_0049baac(int param_1,int param_2);
void __cdecl FUN_0049bb48(int param_1,undefined *param_2);
namespace OWL::TPickListPopup { void __cdecl _dtor(int *self,uint dtorFlags); }
undefined4 * __cdecl FUN_0049bca0(undefined4 *param_1,int param_2);
undefined4 * __cdecl FUN_0049bcdc(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
namespace OWL::TPreviewDCBase { undefined4 __cdecl vf23(int self); }
undefined4 * __cdecl FUN_0049bd60(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4,RECT *pRect);
namespace OWL::TPrintPreviewDC { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace OWL::TPrintPreviewDC { void __cdecl vf5(int self,int *param_2); }
namespace OWL::TPrintPreviewDC { void __cdecl vf6(undefined4 *self,int i); }
namespace OWL::TPrintPreviewDC { void __cdecl vf7(undefined4 *self); }
namespace OWL::TPrintPreviewDC { void __cdecl vf3(int self,int param_2); }
namespace OWL::TPrintPreviewDC { void __cdecl vf24(undefined4 *self); }
namespace OWL::TPrintPreviewDC { void __cdecl vf25(undefined4 *self); }
namespace OWL::TPrintPreviewDC { void __cdecl vf26(undefined4 *self); }
namespace OWL::TPrintPreviewDC { undefined4 * __cdecl vf8(undefined4 *self,undefined4 *param_2); }
namespace OWL::TPrintPreviewDC { undefined4 * __cdecl vf9(undefined4 *self,undefined4 *param_2); }
namespace OWL::TPrintPreviewDC { undefined4 __cdecl vf10(int self); }
namespace OWL::TPrintPreviewDC { undefined4 __cdecl vf11(int self); }
namespace OWL::TPrintPreviewDC { undefined4 __cdecl vf12(int self); }
namespace OWL::TPrintPreviewDC { undefined4 __cdecl vf13(int self); }
namespace OWL::TPrintPreviewDC { undefined4 __cdecl vf14(int self); }
namespace OWL::TPrintPreviewDC { undefined4 __cdecl vf15(int self); }
namespace OWL::TPrintPreviewDC { undefined4 __cdecl vf16(int self); }
namespace OWL::TPreviewPage { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TPreviewPage { int * __cdecl TPreviewPage(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7); }
void __cdecl FUN_0049c744(int param_1,undefined4 param_2);
namespace OWL::TPreviewPage { void __cdecl Paint(int self,undefined4 *param_2,undefined4 param_3,RECT *pRect); }
namespace OWL::TPreviewPage { void __cdecl EvSize(int self,int param_2); }
namespace OWL::TPreviewDCBase { void __cdecl _dtor(int *self,byte dtorFlags); }
undefined4 * __cdecl FUN_0049ca30(undefined4 *param_1,undefined4 param_2,int param_3);
int * __cdecl FUN_0049caa8(int *param_1,LPCSTR pwszDriver,LPCSTR pwszDevice,LPCSTR port,DEVMODEA *pdm);
namespace OWL::TView { undefined4 __cdecl vf1(int self); }
namespace OWL::TView { undefined4 __cdecl vf2(int self); }
namespace OWL::TView { undefined4 __stdcall vf6(void); }
namespace OWL::TView { undefined4 __stdcall vf11(void); }
namespace OWL::TPrintDC { void vf24(char *self,byte *param_2,char param_3); }
namespace OWL::TToolbarRes { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TResource_OWL_TOOLBARTEMPLATE_241 { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined4 __cdecl FUN_0049ccc8(int param_1);
undefined4 __cdecl FUN_0049ccd8(int param_1);
undefined4 __cdecl FUN_0049cce4(int param_1);
undefined2 __cdecl FUN_0049ccf0(int param_1);
int __cdecl FUN_0049cd08(int param_1);
undefined2 __cdecl FUN_0049cd1c(int param_1);
undefined2 __cdecl FUN_0049cd34(int param_1);
undefined * __cdecl FUN_0049ce10(undefined4 *param_1,char *param_2,ushort param_3);
int * __cdecl FUN_0049ce64(int *param_1);
int * __cdecl FUN_0049ced4(int *param_1,RECT *pRect);
namespace OWL::TRegion { BOOL __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined4 * __cdecl FUN_0049cf60(undefined4 *param_1,RECT *pRect);
undefined4 * __cdecl FUN_0049cfc0(undefined4 *param_1,RECT *pRect);
namespace OWL::TRegLink { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined * __stdcall FUN_0049d0a8(void);
void __stdcall FUN_0049d0fd(void);
void __cdecl FUN_0049d148(int *param_1,int param_2,ushort param_3,uint *param_4);
namespace OWL::TStatusBar { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TStatusBar { int * __cdecl TStatusBar(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,undefined4 param_5, uint *param_6,int param_7); }
undefined4 __cdecl FUN_0049d994(int *gadgetWindow);
undefined4 __cdecl FUN_0049da2c(int param_1,int param_2);
namespace OWL::TStatusBar { void __cdecl vf20(int self,undefined4 param_2,int *param_3,int *param_4); }
namespace OWL::TStatusBar { void __cdecl vf5(int *self,int param_2,int param_3,int param_4); }
namespace OWL::TStatusBar { void __cdecl vf27(int *self,uint *param_2); }
namespace OWL::TStatusBar { undefined4 __cdecl EvNCHitTest(int *self,LPPOINT point); }
namespace OWL::TStatusBar { void __cdecl EvMsg_7ef5(int *self,int param_2); }
namespace OWL::TModeStrings { void __cdecl _dtor(int self,byte dtorFlags); }
void __stdcall InitRichEditStreamer_49dec0(void);
void __stdcall FUN_0049df16(void);
namespace OWL::TWindow::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TWindow { int * __cdecl TWindow(int *self,int vbasesBuilt); }
int * __cdecl FUN_0049e070(int *param_1,undefined4 *param_2);
int * __cdecl FUN_0049e0c0(int *param_1,int param_2);
namespace OWL::TWindow::Streamer { int __cdecl vf1(int self,int *param_2,int param_3); }
namespace OWL::TWindow::Streamer { void __cdecl vf2(int self,int *param_2); }
undefined4 * __cdecl FUN_0049e6d8(int *param_1);
namespace OWL::TWindow::Streamer { undefined4 __stdcall vf3(void); }
uint * __cdecl FUN_0049e814(uint *param_1,uint *param_2,char *len,uint param_4);
void __cdecl FUN_0049e85c(uint *param_1,uint *param_2,char *len);
namespace OWL::TTabControl { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TTabControl { int * __cdecl TTabControl(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5); }
namespace OWL::TTabControl { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TTabControl { char * __cdecl GetClassName(int self); }
namespace OWL::TTabControl { undefined4 __stdcall Transfer(void); }
namespace OWL::TTabControl { void __cdecl EvVScroll(int *self); }
namespace OWL::TTabControl { void __cdecl EvHScroll(int *self); }
namespace OWL::TTextGadget { undefined4 * __cdecl TTextGadget(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,uint *param_6,undefined4 param_7); }
namespace OWL::TTextGadget { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __cdecl FUN_0049ed04(int param_1);
void __cdecl FUN_0049ed44(int param_1,uint *param_2);
namespace OWL::TTextGadget { void __cdecl vf2(int self,int *param_2); }
namespace OWL::TTextGadget { void __cdecl vf12(int *self,int *param_2); }
void __cdecl FUN_0049f044(int param_1);
void __cdecl FUN_0049f058(int param_1);
void __cdecl FUN_0049f098(int *param_1,int *param_2,int param_3);
int * __cdecl FUN_0049f0c4(int *param_1,uint param_2);
int * __cdecl FUN_0049f1b4(int *param_1,uint param_2);
uint * __cdecl FUN_0049f1fc(uint *param_1,int *param_2,int param_3,int param_4,int param_5);
uint * __cdecl FUN_0049f29c(uint *param_1,FILETIME *pFileTime);
undefined4 __cdecl FUN_0049f300(uint *param_1);
undefined4 * __cdecl FUN_0049f374(undefined4 *param_1,char param_2);
undefined4 * __cdecl FUN_0049f414(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4, uint *param_5);
undefined4 * __cdecl FUN_0049f498(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint *param_4);
void __cdecl FUN_0049f504(int param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_0049f51c(int param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_0049f534(int param_1,uint *param_2,char param_3);
void __cdecl FUN_0049f588(int param_1,uint *src);
namespace OWL::TTooltipEnabler { undefined4 * __cdecl TTooltipEnabler(undefined4 *self,int param_2,undefined4 param_3); }
namespace OWL::TTooltipEnabler { void __cdecl vf1(int self,uint *src); }
namespace OWL::TTooltipEnabler { void __stdcall vf2(void); }
namespace OWL::TTooltip { int * __cdecl TTooltip(int *self,int vbasesBuilt,undefined4 param_3,char param_4,int param_5); }
namespace OWL::TTooltip { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TTooltip { char * __stdcall GetClassName(void); }
namespace OWL::TFrameWindow { undefined4 __stdcall vf4(void); }
namespace OWL::TFrameWindow { undefined4 __stdcall vf5(void); }
undefined4 * __cdecl FUN_0049f930(undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4);
undefined4 * __cdecl FUN_0049f990(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
int * __cdecl FUN_0049f9e0(int *param_1,int *param_2);
void __cdecl FUN_0049fa58(LPRECT qrc,undefined4 *param_2);
undefined4 __cdecl FUN_0049fa74(undefined4 *param_1,LPRECT qrc,uint edge,uint grfFlags);
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
namespace OWL::TUIFaceData { void __cdecl _dtor(uint *self,byte dtorFlags); }
namespace OWL::THatch8x8Brush { void __cdecl _dtor(uint *self,byte dtorFlags); }
void __cdecl FUN_004a153c(undefined4 *param_1);
namespace OWL::TPointer_OWL_TBitmap { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __stdcall FUN_004a15a0(void);
undefined4 __cdecl FUN_004a1e48(undefined4 param_1);
void __cdecl FUN_004a1e70(undefined4 param_1,undefined4 *param_2,LPRECT param_3,UINT param_4,UINT param_5);
undefined4 __cdecl FUN_004a1e90(undefined4 param_1,undefined4 *param_2,LPRECT param_3,UINT param_4,UINT param_5);
namespace OWL::TUpDown { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
undefined4 * __cdecl FUN_004a1f1c(undefined4 *param_1,undefined4 param_2);
namespace OWL::TUpDown { int * __cdecl TUpDown(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5,int param_6); }
namespace PVWUpDown { char * __cdecl GetClassName(int self); }
namespace PVWUpDown { void __cdecl PerformCreate(int *self); }
namespace OWL::TUpDown { void __cdecl EvVScroll(int *self); }
namespace OWL::TUpDown { void __cdecl EvHScroll(int *self); }
void __stdcall InitRichEditStreamer_4a21c4(void);
void __stdcall FUN_004a221a(void);
namespace OWL::TUrlLink { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TUrlLink { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TUrlLink { char * __stdcall GetClassName(void); }
namespace OWL::TUrlLink { void __cdecl SetupWindow(int *self); }
namespace OWL::TUrlLink { void __cdecl EnableTooltip(int *self,byte wParam); }
void __cdecl FUN_004a2818(int *param_1,int param_2);
namespace OWL::TUrlLink { void __cdecl PreProcessMsg(int *self,LPMSG lParam); }
LRESULT __stdcall FUN_004a29fc(HWND hWnd,UINT msg,WPARAM wParam,LPARAM lParam);
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
void __cdecl FUN_004a3194(int *param_1,undefined1 param_2);
void __cdecl FUN_004a31b8(int *param_1);
namespace OWL::TUrlLink { uint __cdecl vf19(undefined4 self,uint *param_2,UINT cmdShow); }
namespace OWL::TUrlLink { void __cdecl vf20(int *self,undefined4 param_2); }
namespace OWL::TUrlLink::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TUrlLink { int * __cdecl TUrlLink(int *self,int vbasesBuilt); }
namespace OWL::TUrlLink::Streamer { undefined4 __cdecl vf1(int self,int *param_2); }
void __cdecl FUN_004a43c8(int param_1,int *param_2);
namespace OWL::TUrlLink::Streamer { void __cdecl vf2(int self,int *param_2); }
void __cdecl FUN_004a44dc(int param_1,int *param_2);
undefined4 * __cdecl FUN_004a4530(int *param_1);
namespace OWL::TUrlLink::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TUrlLink { undefined4 __cdecl GetTooltip(int self); }
void __cdecl FUN_004a4778(undefined4 *param_1);
namespace OWL::TPointer_OWL_TFont { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
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
namespace OWL::TWindow { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TCommandEnabler { undefined4 * __cdecl TCommandEnabler(undefined4 *self,undefined4 param_2,undefined4 param_3); }
namespace OWL::TCommandEnabler { void __cdecl vf0(int self); }
void __cdecl FUN_004a4db4(int param_1);
namespace OWL::TWindow { int * __cdecl TWindow_4a4de0(int *self,int vbasesBuilt,undefined4 param_3,uint *param_4,int param_5); }
namespace OWL::TWindow { int * __cdecl TWindow_4a4ed0(int *self,int vbasesBuilt,undefined4 param_3,int *param_4); }
namespace OWL::TWindow { int * __cdecl TWindow_4a4fbc(int *self,int vbasesBuilt); }
void __cdecl FUN_004a5098(int param_1,undefined4 param_2,uint *param_3,int param_4);
void __cdecl FUN_004a50ec(int param_1,undefined4 param_2,int *param_3);
void __cdecl FUN_004a5194(int param_1,undefined4 param_2,int param_3);
namespace OWL::TWindow { void __cdecl _dtor(undefined4 *self,uint dtorFlags); }
namespace OWL::TWindow { bool __cdecl PreProcessMsg(int self,LPMSG lParam); }
namespace OWL::TWindow { undefined4 __cdecl IdleAction(int self,int param_2); }
namespace OWL::TWindow { void __cdecl EvSysColorChange(int self); }
namespace OWL::TWindow { void __cdecl RemoveChild(int self,int param_2); }
namespace OWL::TWindow { void __cdecl SetParent(int self,int param_2); }
namespace OWL::TWindow { undefined4 __cdecl SetDocTitle(int self); }
void __cdecl FUN_004a56f8(int param_1,undefined4 param_2);
undefined4 __cdecl FUN_004a5774(int param_1);
namespace OWL::TWindow { undefined4 __cdecl EvCommand(undefined4 *self,int param_2,HWND hWnd,undefined4 param_4); }
namespace OWL::TWindow { undefined4 __cdecl EvNotify(undefined4 *self,int param_2,undefined4 *param_3); }
namespace OWL::TWindow { void __cdecl EvCommandEnable(undefined4 *self,int param_2); }
void __cdecl FUN_004a5b5c(undefined4 *window,HWND hWnd2,undefined4 *param_3);
namespace OWL::TWindow { void __cdecl DefWindowProc(int self,UINT msg,WPARAM wParam,LPARAM lParam); }
undefined4 * __cdecl FUN_004a5cec(undefined4 *param_1);
void __cdecl FUN_004a5d74(int param_1,int param_2);
void __cdecl FUN_004a5da0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, undefined4 param_6);
undefined4 __cdecl FUN_004a5dd0(int param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_004a5e10(int param_1);
void __cdecl FUN_004a5e28(int param_1);
namespace OWL::TWindow { undefined4 __cdecl WindowProc(undefined4 *self,uint param_2,undefined4 param_3); }
undefined4 __cdecl FUN_004a6094(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int __cdecl FUN_004a60fc(int param_1,int param_2,undefined4 param_3,int param_4);
LRESULT __cdecl FUN_004a614c(HWND hWnd,LPARAM lParam);
namespace OWL::TWindow { void __cdecl EvCreate(int self); }
namespace OWL::TWindow { undefined4 __stdcall HoldFocusHWnd(void); }
namespace OWL::TWindow { void __cdecl EvKillFocus(int self); }
namespace OWL::TWindow { void __cdecl EvSize(int self,int param_2); }
namespace OWL::TWindow { void __cdecl EvMove(int self); }
namespace OWL::TWindow { void __cdecl EvCompareitem(int self,undefined4 param_2,int param_3); }
namespace OWL::TWindow { void __cdecl EvDeleteitem(int self,undefined4 param_2,int param_3); }
namespace OWL::TWindow { void __cdecl EvDrawItem(int self,undefined4 ctrlId,int *drawInfo); }
namespace OWL::TWindow { void __cdecl EvMeasureItem(undefined4 *self,WPARAM ctrlId,int *measureInfo); }
namespace OWL::TWindow { void __cdecl EvShared_4a6518(int self); }
void __cdecl FUN_004a65bc(int param_1,int param_2,undefined4 param_3,HWND hWnd);
namespace OWL::TWindow { LRESULT __cdecl EvRegisteredMsg_4a6634(int self,int param_2,LPARAM lParam); }
namespace OWL::TWindow { bool __cdecl EvMouseWheel(int self,byte param_2,int param_3); }
namespace OWL::TWindow { void __cdecl EvHScroll(int self,int scrollCode,undefined4 thumbPos,HWND hWndCtl); }
namespace OWL::TWindow { void __cdecl EvVScroll(int self,int scrollCode,undefined4 thumbPos,HWND hWndCtl); }
namespace OWL::TWindow { bool __cdecl EvEraseBkgnd(int self,undefined4 hdc); }
namespace OWL::TWindow { uint __cdecl EvMsg_19(int self,HDC hdc,undefined4 param_3,int param_4); }
namespace OWL::TWindow { void __cdecl EvPaint(int self); }
namespace OWL::TWindow { void __stdcall Paint(void); }
namespace OWL::TWindow { bool __cdecl EvSetCursor(int self,int param_2,int param_3); }
namespace OWL::TWindow { void __cdecl EvLButtonDown(int self); }
void __cdecl FUN_004a6bcc(int param_1);
namespace OWL::TWindow { void __cdecl Destroy(int self,undefined4 param_2); }
namespace OWL::TWindow { void __cdecl GetWindowClass(int self,undefined4 *param_2); }
namespace OWL::TWindow { char * __cdecl GetClassName(int self); }
void __cdecl FUN_004a6d7c(int param_1,undefined4 param_2);
void __cdecl FUN_004a6da0(int param_1);
namespace OWL::TWindow { void __cdecl PerformCreate(int self,HMENU hMenu); }
namespace OWL::TWindow { undefined4 __cdecl Create(int self); }
namespace OWL::TWindow { void __cdecl Execute(int self); }
namespace OWL::TWindow { undefined4 __cdecl DoExecute(int self); }
namespace OWL::TWindow { void __cdecl SetupWindow(int self); }
namespace OWL::TWindow { void __stdcall CleanupWindow(void); }
namespace OWL::TWindow { undefined4 __cdecl Transfer(int self,int param_2); }
namespace OWL::TWindow { void __cdecl TransferData(int self); }
void __cdecl FUN_004a70e4(int param_1);
namespace OWL::TWindow { bool __cdecl Register(int self); }
namespace OWL::TWindow { bool __cdecl CanClose(int self); }
namespace OWL::TWindow { void __cdecl CloseWindow(int self,undefined4 param_2); }
namespace OWL::TWindow { void __cdecl EvClose(int self); }
namespace OWL::TWindow { void __cdecl EvDestroy(int self); }
namespace OWL::TWindow { void __cdecl EvNCDestroy(int self); }
namespace OWL::TWindow { uint __cdecl EvQueryEndSession(int self); }
namespace OWL::TWindow { void __cdecl EvEndSession(int self,char param_2); }
namespace OWL::TWindow { void __cdecl EvChildinvalid(undefined4 self,HWND hWnd); }
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
LRESULT __cdecl FUN_004a76a8(int param_1,UINT msg,WPARAM wParam,LPARAM lParam);
LRESULT __cdecl FUN_004a76c4(int param_1,HWND hWnd,char param_3);
undefined4 __cdecl FUN_004a7708(int param_1,char param_2);
void __cdecl FUN_004a7740(int param_1,UINT msg,WPARAM wParam,LPARAM lParam);
void __cdecl FUN_004a7780(int param_1,uint *param_2);
void __cdecl FUN_004a77c8(int param_1);
LONG __cdecl FUN_004a783c(int param_1,char param_2);
LONG __cdecl FUN_004a78f0(int param_1);
LONG __cdecl FUN_004a7910(int param_1,LONG newLong);
LONG __cdecl FUN_004a793c(int param_1);
LONG __cdecl FUN_004a795c(int param_1,LONG newLong);
undefined4 __cdecl FUN_004a7988(int param_1,uint param_2,uint param_3,uint param_4);
undefined4 __cdecl FUN_004a79e0(int param_1,uint param_2,uint param_3,uint param_4);
void __cdecl FUN_004a7a30(int param_1,LPRECT rect);
void __cdecl FUN_004a7a6c(int param_1,LPRECT rect);
bool __cdecl FUN_004a7aa0(int param_1,HWND hWnd,int x,int y,int cx,int cy,uint flags);
namespace OWL::TWindow { bool __cdecl ShowWindow(int self,int cmdShow); }
undefined4 __cdecl FUN_004a7bfc(int param_1,int param_2,int param_3);
namespace OWL::TWindow { void __cdecl EvInitMenuPopup(int self,HMENU hPopupMenu,undefined4 index,char sysMenu); }
namespace OWL::TWindow { void __cdecl EvContextMenu(int self,undefined4 hWndChild,int x,int y); }
namespace OWL::TWindow { void __cdecl EvEnteridle(int self,int param_2,HWND hWnd); }
int __cdecl FUN_004a7f40(int param_1,int bar);
int __cdecl FUN_004a7f80(int param_1,int bar,int param_3,byte redraw);
void __cdecl FUN_004a7fdc(int param_1,int bar,int *param_3,int *param_4);
void __cdecl FUN_004a802c(int param_1,int bar,int param_3,int param_4,byte redraw);
void __cdecl FUN_004a807c(int param_1,int bar,UINT param_3,byte redraw);
UINT __cdecl FUN_004a80c4(int param_1,int bar);
namespace OWL::TWindow { void __cdecl EnableTooltip(int self,byte wParam); }
void __cdecl FUN_004a819c(int param_1,undefined4 param_2);
void __cdecl FUN_004a8244(int param_1,int bar,LPCSCROLLINFO lpsi,byte redraw);
void __cdecl FUN_004a8260(int param_1,int bar,LPSCROLLINFO lpsi);
void __stdcall FUN_004a8278(void);
undefined4 * __cdecl FUN_004a8294(undefined4 *lp);
namespace OWL::TXWindow { undefined4 * __cdecl TXWindow(undefined4 *self,int param_2,uint param_3); }
namespace OWL::TXWindow { undefined4 * __cdecl TXWindow_4a83f4(undefined4 *self,int *param_2); }
namespace OWL::TXWindow { void __cdecl vf4(int self,int *param_2); }
namespace OWL::TXWindow { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXWindow { void __cdecl vf3(int *self); }
void __cdecl FUN_004a857c(int param_1,uint param_2);
namespace OWL::TXWindow { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TCacheEntryStr { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TCommandEnabler { undefined4 vf3(char *self,byte *param_2,undefined4 param_3); }
int * __cdecl FUN_004a8674(int *param_1,undefined4 param_2);
namespace OWL::TWindowDC { int * __cdecl _dtor(int *self,byte dtorFlags); }
int * __cdecl FUN_004a8760(int *param_1);
void __stdcall FUN_004a87c4(void);
undefined4 __stdcall FUN_004a87e0(void);
undefined4 __stdcall FUN_004a87f8(void);
void __stdcall FUN_004a8814(void);
int * __cdecl FUN_004a8824(int *param_1,undefined4 *param_2);
int * __cdecl FUN_004a8888(int *param_1,undefined4 *param_2);
void __cdecl FUN_004a88f0(HWND hWnd,LPCSTR text,LPCSTR caption,UINT type);
void __stdcall FUN_004a8923(void);
undefined4 * __cdecl FUN_004a8978(undefined4 *param_1);
namespace OWL::TApplicatData { void __cdecl _dtor(int self,byte dtorFlags); }
undefined * __stdcall FUN_004a89e8(void);
undefined * __stdcall FUN_004a8a84(void);
namespace OWL::TEnumInfoStr { void __cdecl _dtor(int self,byte dtorFlags); }
void __stdcall FUN_004a8b48(void);
undefined * __stdcall FUN_004a8c00(void);
int * __cdecl FUN_004a8c70(int *param_1,int param_2,uint *param_3,undefined4 *param_4,undefined *param_5);
namespace OWL::TApplication { void __cdecl _dtor(undefined4 *self,uint dtorFlags); }
namespace OWL::TBwccDll { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TCtl3dDll { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TDocument::TList { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace OWL::TApplication { undefined4 __cdecl vf12(int self); }
namespace OWL::TApplication { void __stdcall vf15(void); }
namespace OWL::TApplication { void __cdecl vf16(int self); }
namespace OWL::TApplication { void __cdecl vf17(int self); }
namespace OWL::TApplication { void __cdecl vf18(int self,undefined4 param_2); }
undefined4 __cdecl FUN_004a95d8(int param_1,undefined4 param_2);
int __cdecl FUN_004a96c8(int str,undefined4 param_2,uint *s);
namespace OWL::TApplication { void __cdecl vf2(int self); }
namespace OWL::TApplication { undefined4 __cdecl vf3(int self); }
namespace OWL::TApplication { undefined4 __cdecl vf4(int self); }
namespace OWL::TApplication { undefined4 __cdecl vf5(int self); }
namespace OWL::TApplication { undefined4 __cdecl vf6(undefined4 *self,MSG *pMsg); }
namespace OWL::TApplication { undefined4 __cdecl vf7(int self,int *lParam); }
namespace OWL::TApplication { void __cdecl vf8(int self,int param_2,char param_3); }
namespace OWL::TApplication { void __cdecl vf14(int self,byte wParam); }
void __cdecl FUN_004aabec(int param_1,undefined4 param_2);
namespace OWL::TApplication { void __cdecl EvActivateApp(int self,char param_2); }
namespace OWL::TApplication { void __cdecl CmFileExit(int self); }
namespace OWL::TApplication { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TApplication { undefined4 __cdecl vf1(int self); }
namespace OWL::TApplication { void __cdecl vf10(int self); }
void __cdecl FUN_004aae70(int param_1,int param_2);
void __cdecl FUN_004aaeb0(int param_1,int param_2);
void __cdecl FUN_004aaef4(int param_1);
namespace OWL::TXInvalidMainWindow { undefined4 * __cdecl TXInvalidMainWindow(undefined4 *self); }
namespace OWL::TXInvalidMainWindow { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXInvalidMainWindow { void __cdecl vf3(int *self); }
void __stdcall FUN_004ab17c(void);
namespace OWL::TXInvalidMainWindow { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined4 __stdcall FUN_004ab210(HWND hWnd,int *param_2);
void __cdecl FUN_004ab25d(int *param_1);
undefined4 __cdecl FUN_004ab2b4(int param_1,int param_2,uint param_3);
void __cdecl FUN_004ab404(int param_1,undefined4 param_2);
void __cdecl FUN_004ab428(int param_1,char param_2);
void __stdcall DestroyRichEditLoader_4ab47c(void);
undefined * __stdcall FUN_004ab4bc(void);
undefined4 * __cdecl FUN_004ab558(undefined4 *param_1);
namespace OWL::TBrushCache { void __cdecl _dtor(int self,byte dtorFlags); }
void __cdecl FUN_004ab620(undefined4 *param_1,int param_2);
undefined1 __cdecl FUN_004ab670(uint *param_1,uint param_2,uint param_3);
void __cdecl FUN_004ab72c(int param_1,int param_2);
undefined4 __cdecl FUN_004ab764(int param_1,int param_2);
undefined4 __cdecl FUN_004ab7a0(undefined4 *param_1,int param_2);
uint * __cdecl FUN_004ab7e4(uint *param_1,undefined4 param_2,int param_3);
uint * __cdecl FUN_004ab84c(uint *param_1,uint *param_2,char param_3);
uint * __cdecl FUN_004ab954(uint *param_1,LOGBRUSH *plbrush);
namespace OWL::TBrush { undefined4 __cdecl _dtor(uint *self,byte dtorFlags); }
uint * __cdecl FUN_004aba20(uint *param_1,int param_2,uint *param_3,uint *param_4);
void __cdecl FUN_004aba90(uint *param_1,int param_2,uint *param_3,uint *param_4);
HBRUSH __cdecl FUN_004abacc(int param_1,uint *param_2,uint *param_3);
namespace OWL::TButton { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TButton { int * __cdecl TButton(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5); }
namespace OWL::TButton { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TButton { char * __cdecl GetClassName(int *self); }
namespace OWL::TButton { void __cdecl SetupWindow(int *self); }
namespace OWL::TButton { undefined4 __cdecl EvGetDlgCode(int *self); }
namespace OWL::TButton { undefined4 __cdecl EvMsg_f4(int *self,int param_2); }
void __stdcall InitRichEditStreamer_4abf84(void);
void __stdcall FUN_004abfda(void);
namespace OWL::TButton::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TButton { int * __cdecl TButton_4ac074(int *self,int vbasesBuilt); }
undefined4 __cdecl EvRegisteredMsg_4ac190_4ac190(int param_1,int *param_2);
void __cdecl FUN_004ac1c8(int param_1,int *param_2);
namespace OWL::TButton::Streamer { void __cdecl vf2(int self,int *param_2); }
void __cdecl FUN_004ac254(int param_1,int *param_2);
undefined4 * __cdecl FUN_004ac2a8(int *param_1);
namespace OWL::TButton::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TCheckBox { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
void __cdecl EvGetDlgCode_4ac408(int *param_1);
namespace OWL::TCheckBox { int * __cdecl TCheckBox(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,undefined4 param_5, int param_6); }
namespace OWL::TCheckBox { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TCheckBox { char * __cdecl GetClassName(int *self); }
namespace OWL::TCheckBox { undefined4 __cdecl Transfer(int *self,ushort *param_2,int param_3); }
void __cdecl FUN_004ac750(int *param_1,WPARAM wParam);
void __cdecl BNClicked_4ac788(int *param_1);
void __cdecl FUN_004ac7b4(int *param_1);
void __cdecl FUN_004ac7e8(int *param_1,uint *s,char param_3);
void __cdecl FUN_004ac9dc(int *param_1,uint *s,undefined4 param_3,char param_4);
void __cdecl FUN_004aca24(int *param_1,int param_2);
void __cdecl FUN_004aca54(int *param_1,uint *param_2);
namespace OWL::TComboBox { int * __cdecl TComboBox(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5,int param_6); }
namespace OWL::TComboBox { void __cdecl _dtor(int *self,uint dtorFlags); }
void __cdecl FUN_004ace70(int *param_1,int param_2);
uint __cdecl FUN_004acea4(int *param_1,uint *param_2,uint *param_3);
void __cdecl FUN_004aced4(undefined4 param_1,int param_2);
namespace OWL::TComboBox { undefined4 __cdecl Transfer(int *self,int *param_2,int param_3); }
namespace OWL::TComboBox { char * __stdcall GetClassName(void); }
namespace OWL::TComboBox { void __cdecl SetupWindow(int *self); }
namespace OWL::TComboBox { void __cdecl CleanupWindow(int *self); }
void __stdcall InitRichEditStreamer_4ad25c(void);
void __stdcall FUN_004ad2b2(void);
namespace OWL::TComboBox::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TComboBox { int * __cdecl TComboBox_4ad34c(int *self,int vbasesBuilt); }
undefined4 __cdecl EvRegisteredMsg_4ad468_4ad468(int param_1,int *param_2);
void __cdecl FUN_004ad498(int param_1,int *param_2);
namespace OWL::TComboBox::Streamer { void __cdecl vf2(int self,int *param_2); }
void __cdecl FUN_004ad520(int param_1,int *param_2);
undefined4 * __cdecl FUN_004ad574(int *param_1);
namespace OWL::TComboBox::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TControl { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TControl { int * __cdecl TControl(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10 ); }
namespace OWL::TControl { int * __cdecl TControl_4ad87c(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5); }
namespace OWL::TControl { void __cdecl _dtor(int *self,uint dtorFlags); }
void __cdecl EvPaint_4ada9c(int *param_1);
void __cdecl EvCompareitem_4adac8(int param_1);
namespace OWL::TControl { undefined4 __cdecl vf1(int *self,int param_2); }
void __cdecl EvDeleteitem_4adb24(int param_1);
namespace OWL::TControl { void __stdcall vf2(void); }
void __cdecl EvMeasureItem_4adb44(int param_1);
namespace OWL::TControl { void __cdecl vf3(undefined4 self,int param_2); }
void __cdecl EvDrawItem_4adb84(int param_1);
namespace OWL::TControl { void __cdecl vf4(int self,int param_2); }
namespace OWL::TControl { void __cdecl vf5(undefined4 self,int param_2); }
namespace OWL::TControl { void __cdecl vf6(undefined4 self,int param_2); }
namespace OWL::TControl { void __cdecl vf7(undefined4 self,int param_2); }
void __stdcall InitRichEditStreamer_4adc5c(void);
void __stdcall FUN_004adcb2(void);
namespace OWL::TControl::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TControl { int * __cdecl TControl_4add4c(int *self,int vbasesBuilt); }
namespace OWL::TControl::Streamer { int * __cdecl vf1(int self,int *param_2,uint param_3); }
void __cdecl FUN_004ade80(int param_1,int *param_2);
namespace OWL::TControl::Streamer { void __cdecl vf2(int self,int *param_2); }
void __cdecl FUN_004adf10(int param_1,int *param_2);
undefined4 * __cdecl FUN_004adf64(int *param_1);
namespace OWL::TControl::Streamer { undefined4 __stdcall vf3(void); }
int * __cdecl FUN_004ae07c(undefined4 param_1);
undefined4 __cdecl FUN_004ae109(int param_1,int *param_2);
undefined4 __cdecl FUN_004ae15f(int param_1,int *param_2);
undefined4 __cdecl FUN_004ae188(int param_1);
namespace OWL::TDecoratedFrame { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
undefined4 __cdecl FUN_004ae20c(int param_1,int param_2);
int * __cdecl FUN_004ae248(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5, undefined1 param_6,int param_7);
void __cdecl FUN_004ae754(undefined4 *param_1);
void __cdecl FUN_004ae764(undefined4 *param_1);
namespace OWL::TDecoratedFrame { void __cdecl _dtor(int *self,uint dtorFlags); }
void __cdecl FUN_004ae8fc(int param_1,undefined4 *param_2);
void __cdecl FUN_004ae91c(int param_1,undefined4 *param_2);
namespace OWL::TDecoratedFrame { void __cdecl SetupWindow(int *self); }
namespace OWL::TDecoratedFrame { void __cdecl CleanupWindow(int *self); }
namespace OWL::TDecoratedFrame { int __cdecl TFrameWindow_vf7(int *self,int *window); }
namespace OWL::TDecoratedFrame { void __cdecl RemoveChild(int *self,int param_2); }
namespace OWL::TDecoratedFrame { undefined4 __cdecl PreProcessMsg(int *self,LPMSG lParam); }
namespace OWL::TDecoratedFrame { char * __cdecl vf2(int *self,uint param_2,uint *multiByteStr,char *multiByte,int param_5); }
namespace OWL::TDecoratedFrame { void __cdecl EvMenuSelect(int self,int menuItemId,uint flags,int hMenu); }
namespace OWL::TDecoratedFrame { void __cdecl EvSize(undefined4 *self,WPARAM sizeType,int *size); }
namespace OWL::TDecoratedFrame { void __cdecl EvEnteridle(undefined4 *self,int param_2,HWND hWnd); }
namespace OWL::TDecoratedFrame { undefined4 __cdecl EvCommand(int *self,int param_2,HWND hWnd,undefined4 param_4); }
namespace OWL::TDecoratedFrame { void __cdecl EvCommandEnable(undefined4 *self,int *param_2); }
void __cdecl FUN_004af210(int param_1,int param_2,int param_3);
void __cdecl FUN_004af394(int *param_1,int param_2,int param_3);
void __cdecl FUN_004af558(int *param_1,int param_2,int param_3);
void __cdecl FUN_004af794(int *param_1,int param_2,int param_3);
namespace OWL::TDecoratedFrame { void __cdecl vf1(int *self,int param_2,int param_3); }
namespace OWL::TDecoratedFrame { undefined4 * __cdecl vf5(int self); }
namespace OWL::TDecoratedFrame { undefined4 __cdecl vf8(int *self); }
namespace OWL::TDecoratedFrame { undefined4 __cdecl TFrameWindow_vf4(int *self); }
namespace OWL::TDecoratedFrame { undefined4 __cdecl TFrameWindow_vf5(int *self); }
void __cdecl Child4914547_Notify4914568_4afd49(int param_1);
void __cdecl FUN_004afd5e(int param_1);
void __cdecl FUN_004afd9d(int param_1,LPMSG lParam);
void __cdecl Child4977508_Notify4972756_4afddc(int param_1);
void __cdecl FUN_004afdf1(int param_1);
namespace OWL::TDialog { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TDialog { int * __cdecl TDialog(int *self,int vbasesBuilt,undefined4 param_3,uint *param_4,int param_5); }
bool __cdecl FUN_004b0208(int param_1);
void __cdecl FUN_004b0224(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
namespace OWL::TDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TDialog { bool __cdecl PreProcessMsg(int *self,LPMSG lParam); }
namespace OWL::TDialog { char * __cdecl GetClassName(int *self); }
namespace OWL::TDialog { void __cdecl GetWindowClass(int *self,int param_2); }
void __cdecl EvSetfont_4b0550(int *param_1);
void __cdecl EvPaint_4b0574(int *param_1);
uint __cdecl EvMsg_19_4b0584(int *param_1,HDC hdc,undefined4 param_3,int param_4);
void __cdecl EvMsg_400_4b05e4(int *param_1);
bool __cdecl EvMsg_401_4b05f8(int *param_1);
void __cdecl EvMsg_402_4b0614(int *param_1);
namespace OWL::TDialog { bool __cdecl vf1(int *self,int param_2,undefined4 param_3); }
undefined1 __stdcall FUN_004b070c(HWND hWnd,int param_2);
void __cdecl FUN_004b07c8(int *param_1);
namespace OWL::TDialog { undefined4 __cdecl Create(int *self); }
namespace OWL::TDialog { void __cdecl PerformCreate(int *self,LPCDLGTEMPLATEA templateName); }
namespace OWL::TDialog { int __cdecl Execute(int *self); }
namespace OWL::TDialog { void __cdecl DoExecute(int *self); }
char __cdecl FUN_004b09e0(int *param_1);
namespace OWL::TDialog { undefined4 __cdecl vf2(int *self); }
namespace OWL::TDialog { void __cdecl SetupWindow(int *self); }
namespace OWL::TDialog { void __cdecl CloseWindow(int *self,undefined4 param_2); }
namespace OWL::TDialog { void __cdecl Destroy(int *self,INT_PTR result); }
void __cdecl FUN_004b0c44(int *param_1,uint *param_2);
void __cdecl Cmd1_4b0c6c(int *param_1);
void __cdecl Cmd2_4b0cc0(int *param_1);
void __cdecl EvClose_4b0cd0(int *param_1);
namespace OWL::TControlEnabler { undefined4 * __cdecl TControlEnabler(undefined4 *self,undefined4 param_2,undefined4 param_3); }
namespace OWL::TControlEnabler { void __cdecl vf0(int self,byte enable); }
namespace OWL::TControlEnabler { void __cdecl vf1(int self,char *string_); }
namespace OWL::TControlEnabler { void __cdecl vf2(int self,WPARAM wParam); }
namespace OWL::TDialog { undefined4 __cdecl IdleAction(int *self,int param_2); }
void __cdecl FUN_004b0f1c(int *param_1,undefined4 *param_2);
void __cdecl FUN_004b0f84(undefined4 *param_1);
void __cdecl FUN_004b103c(undefined4 *param_1);
namespace OWL::TDib { void __cdecl _dtor(int *self,byte dtorFlags); }
void __cdecl FUN_004b10dc(int param_1,int param_2,uint *param_3);
int __cdecl FUN_004b1130(int param_1,uint *param_2,uint *param_3,char param_4);
void __cdecl FUN_004b11dc(int param_1,uint param_2,uint *param_3);
namespace OWL::TDib { undefined4 __cdecl vf1(int *self,int *param_2,char param_3); }
int * __cdecl FUN_004b1504(int *param_1,HMODULE hModule,LPCSTR name);
bool __cdecl FUN_004b1598(int *param_1,HMODULE hModule,LPCSTR name);
namespace OWL::TDib { bool __cdecl vf2(undefined4 *self,undefined4 *param_2,char param_3); }
int * __cdecl FUN_004b165c(int *param_1,int param_2,int param_3,uint cEntries,undefined2 param_5);
namespace OWL::TFloatingSlip { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TFloatingFrame { void __cdecl _dtor(int *self,uint dtorFlags); }
void __cdecl FUN_004b1bc8(int *param_1,int *param_2,int param_3);
undefined4 __cdecl FUN_004b1c06(uint *param_1,uint *param_2);
uint * __cdecl FUN_004b1c88(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6, uint param_7,uint param_8);
undefined4 * __cdecl FUN_004b1d08(undefined4 *param_1,undefined4 param_2);
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
int __cdecl FUN_004b232c(int param_1,int param_2,int param_3);
namespace OWL::TDocManager { int __cdecl vf1(int self,int param_2,undefined4 param_3,char param_4); }
namespace OWL::TDocManager { int __cdecl vf2(int self,int param_2,undefined4 param_3,undefined4 param_4,char param_5); }
namespace OWL::TDocManager { int __cdecl vf3(int self,int param_2,undefined4 param_3,int param_4); }
namespace OWL::TDocManager { char * __cdecl vf4(undefined4 self,int param_2,int param_3,uint *param_4); }
namespace OWL::TDocManager { undefined4 __cdecl vf5(int self,char *param_2,uint param_3); }
namespace OWL::TDocManager { int * __cdecl vf6(int self,int *param_2,int param_3,int param_4,uint param_5); }
int * __cdecl FUN_004b2980(int param_1,int *param_2,int param_3,uint param_4);
namespace OWL::TDocManager { undefined4 __cdecl vf7(int self,int param_2); }
int __cdecl FUN_004b2d18(undefined4 param_1,int param_2,int *param_3);
namespace OWL::TDocManager { undefined4 __cdecl vf8(int self,int *param_2); }
namespace OWL::TDocManager { undefined4 __cdecl vf9(int self,int *param_2); }
namespace OWL::TDocManager { int __cdecl vf10(int self,uint *param_2); }
undefined4 __cdecl FUN_004b301c(uint *param_1,uint *param_2);
namespace OWL::TDocManager { int * __cdecl vf11(int self); }
int __cdecl FUN_004b3b84(int param_1,char *param_2);
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
void __cdecl FUN_004b50d8(undefined4 *param_1);
namespace OWL::TAPointer_OWL_TDocTemplate_ptr { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __cdecl FUN_004b5170(int param_1,uint param_2);
void __cdecl FUN_004b5180(int param_1,uint param_2);
undefined * __cdecl FUN_004b5190(int param_1);
namespace OWL::TDocTemplate { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined * __cdecl FUN_004b5254(int param_1);
undefined * __cdecl FUN_004b5274(int param_1);
undefined * __cdecl FUN_004b5294(int param_1);
namespace OWL::TDocument { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace OWL::TDocument { undefined * __cdecl vf19(undefined4 self,int param_2); }
namespace OWL::TDocument { undefined * __cdecl vf18(undefined4 self,int param_2); }
namespace OWL::TDocument { int __cdecl vf17(undefined4 self,char *param_2); }
namespace OWL::TDocument { char * __cdecl vf20(int *self,undefined4 param_2,int *param_3,char *param_4); }
namespace OWL::TDocument { undefined4 __cdecl vf21(int *self,int param_2); }
namespace OWL::TDocument { void __cdecl vf7(int self); }
namespace OWL::TDocument { undefined4 __cdecl vf8(int *self,uint *param_2); }
namespace OWL::TDocument { void __cdecl vf9(int self,uint *param_2); }
undefined4 __cdecl FUN_004b5734(int param_1,int param_2);
void __cdecl FUN_004b57a4(int param_1);
namespace OWL::TDocument { void __cdecl vf23(int self,int param_2); }
namespace OWL::TDocument { void __cdecl vf24(int self,int param_2); }
undefined4 __cdecl FUN_004b5874(int param_1,int param_2);
int __cdecl FUN_004b5890(int param_1,int param_2);
undefined4 __cdecl FUN_004b596c(int *param_1,int param_2);
namespace OWL::TDocument { char __cdecl vf5(int self,uint param_2); }
namespace OWL::TDocument { char __cdecl vf6(int self,uint param_2); }
char __cdecl FUN_004b5ab0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
undefined4 * __cdecl FUN_004b5b68(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
namespace OWL::TDocument { bool __cdecl vf10(int self); }
namespace OWL::TDocument { bool __cdecl vf13(int *self); }
namespace OWL::TDocument { int * __cdecl vf14(int *self,undefined4 param_2); }
namespace OWL::TDocument { undefined4 __cdecl vf12(int self); }
namespace OWL::TDocument { undefined4 __cdecl vf4(int self); }
namespace OWL::TDocument { void __cdecl vf15(int self); }
undefined4 __cdecl FUN_004b5d60(undefined4 *param_1,int param_2);
undefined4 __cdecl FUN_004b5d78(int *param_1,int param_2);
void __cdecl FUN_004b5da0(int *param_1);
uint * __cdecl FUN_004b5e14(uint *param_1,uint *param_2,char param_3);
char * __cdecl FUN_004b5ea2(char *param_1,int param_2,uint *param_3,char param_4);
namespace OWL::TEdit { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TEdit { void __cdecl Cmd24322(int *self); }
namespace OWL::TEdit { void __cdecl Cmd24323(int *self); }
namespace OWL::TEdit { void __cdecl Cmd24324(int self); }
namespace OWL::TEdit { void __cdecl Cmd24325(int *self); }
namespace OWL::TEdit { void __cdecl Cmd24326(int self); }
namespace OWL::TEdit { void __cdecl Cmd24321(int *self); }
namespace OWL::TEdit { int * __cdecl TEdit(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10 ,char param_11,int param_12); }
namespace OWL::TEdit { int * __cdecl TEdit_4b6184(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5,int param_6); }
namespace OWL::TEdit { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TEdit { void __cdecl NotifyAtChild_1280(int *self); }
namespace OWL::TEdit { uint __cdecl EvGetDlgCode(int *self); }
namespace OWL::TEdit { void __cdecl EvChar(int *self,int param_2); }
namespace OWL::TEdit { void __cdecl EvKeyDown(int *self,int param_2); }
namespace PVWEdit { void __cdecl EvKillFocus(int *self,HWND hWndGetFocus); }
namespace OWL::TEdit { void __cdecl EvSetFocus(int *self); }
namespace OWL::TEdit { undefined4 __cdecl NotifyAtChild_m722(int *self); }
namespace OWL::TEdit { void __cdecl EvChildinvalid(int *self); }
void __cdecl FUN_004b6920(int *param_1);
namespace OWL::TEdit { void __cdecl vf9(int *self); }
namespace OWL::TEdit { bool __cdecl CanClose(int *self); }
namespace OWL::TEdit { void __cdecl CeShared_4b69c4(int self,undefined4 *commandEnabler); }
namespace OWL::TEdit { void __cdecl CeCmd24324(int *self,undefined4 *commandEnabler); }
namespace OWL::TEdit { void __cdecl CeCmd24326(int *self,undefined4 *commandEnabler); }
namespace OWL::TEdit { void __cdecl CeCmd24321(int *self,undefined4 *commandEnabler); }
undefined4 __cdecl FUN_004b6ae8(int *param_1,WPARAM wParam);
bool __cdecl FUN_004b6b2c(int *param_1,undefined2 *lParam,uint param_3,WPARAM wParam);
LPSTR __cdecl FUN_004b6ba0(int *param_1,SIZE_T param_2);
void __cdecl FUN_004b6c5c(int *param_1,LPCSTR param_2,char param_3);
namespace OWL::TEdit { int __cdecl vf16(int *self,int param_2,uint *param_3,char param_4,char param_5,char param_6); }
bool __cdecl FUN_004b6e50(int *param_1);
bool __cdecl FUN_004b6e94(int *param_1);
namespace OWL::TEdit { void __cdecl GetSubText(int *self,int param_2,uint wParam4,uint wParam5); }
namespace OWL::TEdit { undefined * __stdcall GetClassName(void); }
namespace OWL::TEdit { void __cdecl SetupWindow(int *self); }
undefined1 __cdecl FUN_004b7060(int *param_1,char param_2);
void __cdecl FUN_004b70e0(int param_1,undefined4 param_2);
namespace OWL::TEdit { int __cdecl Transfer(int *self,LPSTR string_,int param_3); }
void __stdcall InitRichEditStreamer_4b72d0(void);
void __stdcall FUN_004b7326(void);
namespace OWL::TEdit::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TEdit { int * __cdecl TEdit_4b73c0(int *self,int vbasesBuilt); }
undefined4 __cdecl EvRegisteredMsg_4b74dc_4b74dc(int param_1,int *param_2);
namespace OWL::TEdit::Streamer { void __cdecl vf2(int self,int *param_2); }
undefined4 * __cdecl FUN_004b753c(int *param_1);
namespace OWL::TEdit::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TEditFile { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
void __cdecl Cmd24333_4b7698(int param_1);
void __cdecl Cmd24334_4b76a8(int param_1);
namespace OWL::TEditFile { int * __cdecl TEditFile(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9, uint *param_10,int param_11); }
namespace OWL::TEditFile { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TEditFile { void __cdecl SetupWindow(int *self); }
int __cdecl FUN_004b7c98(int *param_1,uint *param_2);
namespace OWL::TEditFile { void __cdecl vf23(int *self); }
namespace OWL::TEditFile { void __cdecl vf26(int *self,uint *param_2); }
namespace OWL::TEditFile { void __cdecl vf24(undefined4 *self); }
namespace OWL::TEditFile { uint __cdecl vf25(int *self,int param_2); }
namespace OWL::TEditFile { undefined4 __cdecl vf27(int *self); }
namespace OWL::TEditFile { undefined4 __cdecl vf28(int *self); }
void __cdecl CeCmd24333_4b8a40(int *param_1,undefined4 *param_2);
namespace OWL::TEditFile { undefined4 __cdecl vf29(int *self,int param_2); }
namespace OWL::TEditFile { uint __cdecl vf22(int *self); }
namespace OWL::TEditFile { void __cdecl CanClose(int self); }
void __stdcall InitRichEditStreamer_4b908c(void);
void __stdcall FUN_004b90e2(void);
namespace OWL::TEditFile::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TEditFile { int * __cdecl TEditFile_4b917c(int *self,int vbasesBuilt); }
namespace OWL::TEditFile::Streamer { int __cdecl vf1(int self,int *param_2); }
void __cdecl FUN_004b92f8(int param_1,int *param_2);
namespace OWL::TEditFile::Streamer { void __cdecl vf2(int self,int *param_2); }
void __cdecl FUN_004b9388(int param_1,int *param_2);
undefined4 * __cdecl FUN_004b93dc(int *param_1);
namespace OWL::TEditFile::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TEditSearch { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TEditSearch { int * __cdecl TEditSearch(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10 ); }
namespace OWL::TEditSearch { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TEditSearch { void __cdecl SetupWindow(int *self); }
void __cdecl FUN_004b988c(int *param_1);
namespace OWL::TEditSearch { void __cdecl Cmd24351(undefined4 *self); }
namespace OWL::TEditSearch { void __cdecl Cmd24352(undefined4 *self); }
namespace OWL::TEditSearch { void __cdecl CeRange24351to24352(undefined4 self,undefined4 *commandEnabler); }
namespace OWL::TEditSearch { void __cdecl Cmd24353(int *self); }
namespace OWL::TEditSearch { void __cdecl CeCmd24353(int self,undefined4 *commandEnabler); }
namespace OWL::TEditSearch { undefined4 __cdecl EvRegisteredMsg_4b9d94(int *self,undefined4 param_2,int param_3); }
namespace OWL::TFindDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TReplaceDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TFindReplaceDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
void __stdcall InitRichEditStreamer_4ba164(void);
void __stdcall FUN_004ba1ba(void);
namespace OWL::TEditSearch::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TEditSearch { int * __cdecl TEditSearch_4ba254(int *self,int vbasesBuilt); }
namespace OWL::TEditSearch::Streamer { undefined4 __cdecl vf1(int self,int *param_2); }
void __cdecl FUN_004ba3cc(int param_1,int *param_2);
namespace OWL::TEditSearch::Streamer { void __cdecl vf2(int self,int *param_2); }
void __cdecl FUN_004ba464(int param_1,int *param_2);
undefined4 * __cdecl FUN_004ba4b8(int *param_1);
namespace OWL::TEditSearch::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TListBox::Streamer { int vf4(...); }   // not decompiled
namespace OWL::TXBadFormat { undefined4 * __cdecl TXBadFormat(undefined4 *self); }
int vshared_4ba6cc(...);   // not decompiled
void __stdcall FUN_004ba6ec(void);
namespace OWL::TXBadFormat { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TXBadFormat { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXBadFormat { void __cdecl vf3(int *self); }
namespace OWL::TXBadFormat { undefined4 * __cdecl TXBadFormat_4ba8d0(undefined4 *self,int *param_2); }
void __cdecl FUN_004ba924(uint *param_1,uint *param_2,uint *param_3,uint param_4);
namespace OWL::TDiskFileHandle { undefined4 * __cdecl TDiskFileHandle(undefined4 *self,uint *s,undefined4 param_3); }
namespace OWL::TDiskFileHandle { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf1(int self); }
namespace OWL::TDiskFileHandle { int __cdecl vf2(int self,int param_2); }
namespace OWL::TDiskFileHandle { bool __cdecl vf4(int self); }
namespace OWL::TFileHandle { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TDiskFileHandle { undefined4 * __cdecl TDiskFileHandle_4bad10(undefined4 *self,undefined4 param_2,uint *s,undefined4 param_4); }
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
uint __cdecl FUN_004bb0cc(uint param_1);
namespace OWL::TDiskFileHandle { undefined4 __cdecl vf22(int *self,uint *param_2); }
namespace OWL::TFile { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace OWL::TFile { bool __cdecl vf2(int self,uint *s,undefined4 param_3); }
namespace OWL::TFile { undefined4 __cdecl vf3(int self); }
namespace OWL::TFile { void __cdecl vf14(int self); }
namespace OWL::TFile { void __cdecl vf15(int self); }
namespace OWL::TFile { void __cdecl vf16(int self); }
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
int __cdecl FUN_004bb804(undefined4 *src,undefined4 *dest,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_004bb82c(undefined4 *src,undefined4 *dest,undefined4 param_3,int param_4,int param_5);
int __cdecl FUN_004bb854(int param_1);
int __cdecl FUN_004bb874(int *param_1,undefined4 param_2,int *param_3,int param_4);
undefined1 __cdecl FUN_004bb9ac(int *param_1,undefined4 param_2,int *param_3,int param_4);
void __cdecl FUN_004bbaf0(int *param_1,undefined4 param_2,int param_3,int param_4);
void __cdecl FUN_004bbb14(int *param_1,undefined4 param_2,int param_3,int param_4);
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
char * __cdecl FUN_004bbca0(char *param_1);
char * __cdecl FUN_004bbcb0(char *param_1,char *param_2,int param_3);
char * __cdecl FUN_004bbcce(char *param_1,char *param_2,uint *param_3);
char * __cdecl FUN_004bbd06(char *param_1,char *param_2,int param_3);
char * __cdecl FUN_004bbd24(char *param_1,char *param_2,uint *param_3);
char * __cdecl FUN_004bbd5c(char *param_1,char *param_2,char *param_3);
undefined4 __cdecl FUN_004bbd80(int str,uint *param_2,char param_3);
int __cdecl FUN_004bc960(int str,uint *param_2,char param_3);
void __cdecl FUN_004bca70(int param_1);
int __cdecl FUN_004bcae0(int param_1,uint param_2);
bool __cdecl FUN_004bcc54(int param_1,uint param_2);
undefined4 * __cdecl FUN_004bccc4(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
namespace OWL::TFindReplaceDialog::TData { void __cdecl _dtor(int self,byte dtorFlags); }
namespace OWL::TFindReplaceDialog { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
void __cdecl FUN_004bcde4(int *param_1,int param_2);
namespace OWL::TFindReplaceDialog { int * __cdecl TFindReplaceDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7); }
namespace OWL::TFindReplaceDialog { void __stdcall vf4(void); }
namespace OWL::TFindReplaceDialog { void __cdecl vf1(int *self,int param_2,undefined4 param_3); }
namespace OWL::TFindReplaceDialog { void __cdecl EvNCDestroy(int *self); }
void __cdecl FUN_004bcffc(int param_1,int param_2);
namespace OWL::TFindDialog { int * __cdecl TFindDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7); }
namespace OWL::TFindDialog { void __cdecl vf4(int *self); }
namespace OWL::TReplaceDialog { int * __cdecl TReplaceDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7); }
namespace OWL::TReplaceDialog { void __cdecl vf4(int *self); }
void __cdecl FUN_004bd5e4(int param_1,int *param_2);
void __cdecl FUN_004bd664(undefined4 *param_1,int *param_2);
uint __cdecl FUN_004bd6bc(HMENU hMenu,int param_2);
HICON __stdcall FUN_004bd700(void);
int __cdecl FUN_004bd7a3(int param_1);
bool __cdecl FUN_004bd80c(int param_1);
namespace OWL::TFrameWindow { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TMenuItemEnabler { void __cdecl vf0(int self,char param_2); }
namespace OWL::TMenuItemEnabler { void __cdecl vf1(int self,LPCSTR newItem); }
namespace OWL::TMenuItemEnabler { void __cdecl vf2(int self,int param_2); }
namespace OWL::TFrameWindow { int * __cdecl TFrameWindow(int *self,int vbasesBuilt,undefined4 param_3,uint *param_4,int param_5,char param_6, int param_7); }
namespace OWL::TFrameWindow { int * __cdecl TFrameWindow_4bda48(int *self,int vbasesBuilt); }
void __cdecl FUN_004bdb60(int *param_1,int param_2,char param_3);
void __cdecl FUN_004bdbb0(int *param_1,undefined4 param_2);
namespace OWL::TFrameWindow { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TFrameWindow { void __cdecl EvInitMenuPopup(int *self,HMENU hPopupMenu,undefined4 index,char sysMenu); }
void __cdecl Child4972344_Notify4914610_4bdebc(int *param_1,int param_2);
namespace OWL::TFrameWindow { HWND __cdecl vf9(int *self); }
namespace OWL::TFrameWindow { undefined4 __cdecl EvCommand(int *self,int param_2,HWND hWnd2,undefined4 param_4); }
namespace OWL::TFrameWindow { void __cdecl EvCommandEnable(undefined4 *self,undefined4 *param_2); }
namespace OWL::TFrameWindow { undefined4 __cdecl PreProcessMsg(int *self,LPMSG lParam); }
namespace OWL::TFrameWindow { bool __cdecl vf2(int *self,HMENU hMenu); }
namespace OWL::TFrameWindow { undefined4 __cdecl vf1(int *self,uint *param_2); }
undefined4 __cdecl FUN_004be1e0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 __cdecl FUN_004be26c(int *param_1,undefined4 param_2,HANDLE param_3);
namespace OWL::TFrameWindow { undefined4 __cdecl vf6(int self); }
namespace OWL::TFrameWindow { int __cdecl vf7(int *self,undefined4 param_2); }
namespace OWL::TFrameWindow { void __cdecl RemoveChild(int *self,int param_2); }
namespace OWL::TFrameWindow { undefined4 __cdecl SetDocTitle(int *self,uint *param_2,uint param_3); }
namespace OWL::TFrameWindow { void __cdecl EvPaint(int *self); }
namespace OWL::TFrameWindow { bool __cdecl EvEraseBkgnd(int *self,undefined4 hdc); }
namespace OWL::TFrameWindow { HICON __cdecl EvQuerydragicon(int *self); }
int __cdecl FUN_004be7cc(int *param_1);
namespace OWL::TFrameWindow { bool __cdecl HoldFocusHWnd(int *self,HWND hWnd,HWND hWnd2); }
namespace OWL::TFrameWindow { void __cdecl EvSetFocus(int *self); }
namespace OWL::TFrameWindow { void __cdecl EvParentNotify(int *self,int param_2,HWND hWnd); }
namespace OWL::TFrameWindow { bool __cdecl EvQuerynewpalette(int *self); }
namespace OWL::TFrameWindow { void __cdecl EvPalettechanged(int *self); }
undefined4 __cdecl FUN_004be9dc(int *param_1,char param_2);
namespace OWL::TFrameWindow { void __cdecl SetupWindow(int *self); }
namespace OWL::TFrameWindow { void __cdecl CleanupWindow(int *self); }
void __cdecl FUN_004bf118(int *param_1,WPARAM wParam,LPARAM lParam);
namespace OWL::TFrameWindow { void __stdcall EvSize(int self,int sizeType,int *size); }
void __stdcall FUN_004bf14a(void);
namespace OWL::TFrameWindow { undefined4 __cdecl vf3(int *self,int *param_2); }
namespace OWL::TGroupBox { char * __cdecl vf10(int *self); }
namespace OWL::TGroupBox { int * __cdecl TGroupBox(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5); }
namespace OWL::TGroupBox { void __cdecl vf9(int *self,int param_2); }
void __cdecl FUN_004bf6d0(int *param_1);
undefined4 __cdecl FUN_004bf6f4(int param_1);
void __cdecl FUN_004bf704(int param_1);
void __cdecl FUN_004bf714(int *param_1,uint *s,char param_3);
void __cdecl FUN_004bf908(int *param_1,uint *s,undefined4 param_3,char param_4);
void __cdecl FUN_004bf950(int param_1,int param_2);
int __cdecl FUN_004bf998(int param_1,int param_2);
namespace OWL::TListBox { int * __cdecl TListBox(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5); }
namespace PVWPathListBox { char * __stdcall GetClassName(void); }
namespace PVWPathListBox { undefined4 __cdecl Transfer(int *self,int *param_2,int param_3); }
undefined4 __cdecl FUN_004bfd60(int *param_1);
namespace OWL::TListBox { undefined4 __cdecl GetSelIndex(int *self); }
undefined4 __cdecl FUN_004bfdd8(int *param_1,LPARAM lParam,WPARAM wParam);
namespace OWL::TListBox { undefined4 __cdecl SetSelIndex(int *self,WPARAM wParam); }
void __stdcall InitRichEditStreamer_4bfeac(void);
void __stdcall FUN_004bff02(void);
namespace OWL::TListBox::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TListBox { int * __cdecl TListBox_4bff9c(int *self,int vbasesBuilt); }
namespace OWL::TListBox::Streamer { undefined4 __cdecl vf1(int self,int *param_2); }
namespace OWL::TListBox::Streamer { void __cdecl vf2(int self,int *param_2); }
undefined4 * __cdecl FUN_004c00dc(int *param_1);
namespace OWL::TListBox::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TMenuDescr { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined4 __cdecl FUN_004c0250(int *param_1,int *param_2,int param_3);
namespace OWL::TMenuDescr { undefined4 __cdecl vf1(int self); }
void __stdcall FUN_004c02d8(void);
DWORD * __cdecl FUN_004c0384(DWORD *param_1);
void __cdecl FUN_004c0418(DWORD *param_1,ushort languageId);
undefined4 __cdecl FUN_004c0490(int param_1);
void __cdecl FUN_004c055c(int param_1,undefined4 param_2,uint param_3);
void __cdecl FUN_004c05fc(int param_1,int param_2);
uint __cdecl FUN_004c0698(int param_1);
undefined4 __cdecl FUN_004c0740(int param_1,int param_2);
int __cdecl FUN_004c0788(int param_1,int param_2);
undefined4 __cdecl FUN_004c07ac(int param_1);
undefined4 __cdecl FUN_004c07e4(LPCSTR name,LPCSTR type);
namespace OWL::TModule { undefined4 * __cdecl TModule(undefined4 *self,uint *libFileName,char param_3,char param_4,char param_5); }
namespace OWL::TModule { undefined4 * __cdecl TModule_4c09ac(undefined4 *self,uint *param_2,undefined4 param_3,char param_4); }
namespace OWL::TModule { undefined4 * __cdecl TModule_4c0a20(undefined4 *self,uint *param_2,int param_3,undefined4 param_4,char param_5); }
namespace OWL::TModule { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined4 __cdecl FUN_004c0b38(LPCSTR name,LPCSTR type);
void __cdecl FUN_004c0b54(int param_1,uint *param_2);
void __cdecl FUN_004c0bf0(int param_1,undefined4 param_2);
namespace OWL::TModule { void __cdecl vf1(int self,int *param_2,uint param_3,uint param_4); }
void __cdecl FUN_004c0cc4(int param_1,undefined4 param_2);
int __cdecl FUN_004c0cd4(int param_1,uint param_2,LPSTR multiByteStr,int multiByte);
int __cdecl FUN_004c0e0c(int param_1,int param_2,uint param_3);
HACCEL __cdecl FUN_004c1a9c(int param_1,LPCSTR name);
HMENU __cdecl FUN_004c1ae8(int param_1,LPCSTR name);
HCURSOR __cdecl FUN_004c1b34(int param_1,LPCSTR name);
int * __cdecl FUN_004c1b80(int *param_1,int param_2,LPCSTR procName);
undefined * __stdcall FUN_004c1e30(void);
undefined4 __stdcall FUN_004c1e90(void);
void __stdcall FUN_004c1ed0(void);
undefined4 __stdcall FUN_004c1f08(void);
undefined4 __stdcall FUN_004c1f4c(void);
namespace OWL::TXInvalidModule { undefined4 * __cdecl TXInvalidModule(undefined4 *self,undefined4 param_2); }
namespace OWL::TXInvalidModule { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXInvalidModule { void __cdecl vf3(int *self); }
void __cdecl FUN_004c225c(undefined4 param_1);
namespace OWL::TXInvalidModule { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __cdecl FUN_004c23f4(int param_1,byte param_2);
void __cdecl FUN_004c2444(int param_1,byte param_2);
void __stdcall InitRichEditStreamer_4c2474(void);
void __stdcall FUN_004c24ca(void);
namespace OWL::TModule::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TModule { undefined4 * __cdecl TModule_4c2564(undefined4 *self); }
int * __cdecl FUN_004c25a4(int *param_1,undefined4 *param_2);
int * __cdecl FUN_004c25f4(int *param_1,int *param_2);
namespace OWL::TModule::Streamer { int __cdecl vf1(int self,int *param_2); }
namespace OWL::TModule::Streamer { void __cdecl vf2(int self,int *param_2); }
undefined4 * __cdecl FUN_004c2694(int *module);
namespace OWL::TModule::Streamer { undefined4 __stdcall vf3(void); }
uint * __cdecl FUN_004c279c(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6, uint param_7,uint param_8,uint param_9);
namespace OWL::TOpenSaveDialog::TData { void __cdecl _dtor(int self,byte dtorFlags); }
char * FUN_004c28b8(char *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint *param_5);
namespace OWL::TOpenSaveDialog { undefined4 __cdecl vf14(undefined4 *self,int *param_2,undefined *param_3); }
void __cdecl FUN_004c29b4(int *param_1,int param_2);
namespace OWL::TOpenSaveDialog { int * __cdecl TOpenSaveDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7); }
namespace OWL::TOpenSaveDialog { bool __cdecl vf1(int *self,int param_2,undefined4 param_3); }
namespace OWL::TOpenSaveDialog { undefined4 __stdcall vf15(void); }
namespace OWL::TFileOpenDialog { int * __cdecl TFileOpenDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7); }
namespace OWL::TFileOpenDialog { undefined4 __cdecl vf6(int self); }
namespace OWL::TFileSaveDialog { int * __cdecl TFileSaveDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7); }
namespace OWL::TFileSaveDialog { undefined4 __cdecl vf6(int self); }
namespace OWL::TPrintDialog { undefined4 __cdecl vf14(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TPrintDialog { int * __cdecl TPrintDialog(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5,int param_6, int param_7,int param_8); }
namespace OWL::TPrintDialog { void __cdecl vf1(int *self,int param_2,undefined4 param_3); }
namespace OWL::TPrintDialog { undefined4 __cdecl vf6(int *self); }
bool __cdecl FUN_004c3c90(int param_1);
undefined4 * __cdecl FUN_004c3ce4(undefined4 *param_1);
namespace OWL::TPrintDialog::TData { void __cdecl _dtor(int self,byte dtorFlags); }
void __cdecl FUN_004c3e40(int param_1);
void __cdecl FUN_004c3e7c(int param_1);
void __cdecl FUN_004c3ec0(int param_1);
void __cdecl FUN_004c3eec(int param_1);
int __cdecl FUN_004c3f18(int param_1);
int __cdecl FUN_004c3f38(int param_1);
int __cdecl FUN_004c3f58(int param_1);
void __cdecl FUN_004c3f78(int param_1,uint *param_2,uint *param_3,uint *param_4);
undefined4 * __cdecl FUN_004c4074(int param_1);
namespace OWL::TPrintDialog { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TFormattedStatic { int * __cdecl TFormattedStatic(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,uint *param_5, uint *param_6); }
namespace OWL::TFormattedStatic { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TFormattedStatic { void __cdecl SetupWindow(int *self); }
namespace OWL::TNumericStatic { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TNumericStatic { int * __cdecl TNumericStatic(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5); }
namespace OWL::TNumericStatic { undefined4 __cdecl EvMsg_464(int *self,int param_2); }
namespace OWL::TPrinterAbortDlg { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TPrinterAbortDlg { int * __cdecl TPrinterAbortDlg(int *self,int vbasesBuilt,undefined4 param_3,uint *param_4,uint *param_5,uint *param_6, uint *param_7,int param_8); }
namespace OWL::TPrinterAbortDlg { void __cdecl vf11(int *self); }
namespace OWL::TPrinterAbortDlg { void __cdecl Cmd2(int *self); }
namespace OWL::TPrinter { int * __cdecl TPrinter(int *self,int vbasesBuilt); }
namespace OWL::TPrinter { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TPrinter { void __cdecl vf1(int self); }
namespace OWL::TPrinter { void __cdecl vf6(int self); }
namespace OWL::TPrinter { void __cdecl vf7(int self,uint *param_2,uint *param_3,uint *param_4); }
undefined4 __stdcall FUN_004c4f30(int param_1,int param_2);
namespace OWL::TPrinter { uint __cdecl vf8(int self,undefined4 param_2); }
namespace OWL::TPrinter { bool __cdecl vf9(int self,undefined4 param_2); }
namespace OWL::TPrinter { int __cdecl vf10(int self,undefined4 param_2,int param_3); }
namespace OWL::TPrinter { void __cdecl vf5(int self,int param_2); }
void __cdecl FUN_004c52b0(int param_1,undefined4 *param_2);
namespace OWL::TPrinter { bool __cdecl vf3(int *self,int param_2,int *param_3,char param_4); }
namespace OWL::TPrinter { void __cdecl vf2(int *self); }
namespace OWL::TPrinter { undefined4 __cdecl vf4(int self,int param_2,int param_3); }
namespace OWL::TXPrinter { undefined4 * __cdecl TXPrinter(undefined4 *self,uint param_2); }
namespace OWL::TXPrinter { undefined4 * __cdecl vf2(int *self); }
namespace OWL::TXPrinter { void __cdecl vf3(int *self); }
void __cdecl FUN_004c5f00(uint param_1);
namespace OWL::TXPrinter { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TPrinterAbortDlg { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TNumericStatic { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TPrintout { undefined4 * __cdecl TPrintout(undefined4 *self,uint *param_2); }
namespace OWL::TPrintout { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TPrintout { void __cdecl vf1(int self,undefined4 param_2,undefined4 param_3,undefined4 param_4); }
namespace OWL::TPrintout { void __cdecl vf2(undefined4 self,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5); }
namespace OWL::TPrintout { void __stdcall vf3(void); }
namespace OWL::TPrintout { void __stdcall vf4(void); }
namespace OWL::TPrintout { bool __cdecl vf5(undefined4 self,int param_2); }
namespace OWL::TPrintout { void __stdcall vf6(void); }
namespace OWL::TPrintout { void __stdcall vf7(void); }
namespace OWL::TPrintout { void __stdcall vf8(void); }
namespace OWL::TRadioButton { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TRadioButton { int * __cdecl TRadioButton(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,undefined4 param_5, int param_6); }
namespace PVWRadioButton { char * __cdecl GetClassName(int *self); }
namespace OWL::TRadioButton { void __cdecl BNClicked(int *self); }
namespace OWL::TScroller { undefined4 * __cdecl TScroller(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6); }
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
void __stdcall InitRichEditStreamer_4c7364(void);
void __stdcall FUN_004c73ba(void);
namespace OWL::TScroller::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TScroller { undefined4 * __cdecl TScroller_4c7454(undefined4 *self); }
int * __cdecl FUN_004c7494(int *param_1,undefined4 *param_2);
int * __cdecl FUN_004c74e4(int *param_1,int *param_2);
namespace OWL::TScroller::Streamer { int __stdcall vf1(int self,int *param_2); }
int __stdcall FUN_004c7506(void);
namespace OWL::TScroller::Streamer { void __cdecl vf2(int self,int *param_2); }
undefined4 * __cdecl FUN_004c7790(int *scroller);
namespace OWL::TScroller::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TStatic { undefined4 __cdecl Find(undefined4 *self,int *param_2,undefined *param_3); }
namespace OWL::TStatic { int * __cdecl TStatic(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10 ,int param_11); }
namespace OWL::TStatic { int * __cdecl TStatic_4c7a28(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5,int param_6); }
namespace OWL::TStatic { void __cdecl EvSize(int *self,int param_2); }
namespace PVWStatic { char * __cdecl GetClassName(int *self); }
namespace PVWStatic { int __cdecl Transfer(int *self,LPSTR string_,int param_3); }
namespace OWL::TStatic { void __cdecl vf9(int *self); }
void __stdcall InitRichEditStreamer_4c7c60(void);
void __stdcall FUN_004c7cb6(void);
namespace OWL::TStatic::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TStatic { int * __cdecl TStatic_4c7d50(int *self,int vbasesBuilt); }
undefined4 __cdecl EvRegisteredMsg_4c7e6c_4c7e6c(int param_1,int *param_2);
namespace OWL::TStatic::Streamer { void __cdecl vf2(int self,int *param_2); }
undefined4 * __cdecl FUN_004c7ecc(int *param_1);
namespace OWL::TStatic::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TTinyCaption { void __cdecl Find(int self,int *param_2,undefined *param_3); }
namespace OWL::TTinyCaption { void __cdecl _dtor(int *self,uint dtorFlags); }
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
namespace OWL::TTinyCaption { undefined4 __cdecl EvCommand(int *self,uint param_2,HWND hWnd,undefined4 param_4); }
undefined4 __cdecl FUN_004c8bb8(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5);
void __cdecl EvSysCommand_4c8c04(int *param_1,uint param_2);
undefined4 __cdecl FUN_004c8c2c(int *param_1,uint param_2);
void __cdecl FUN_004c8c78(undefined4 param_1,undefined4 *param_2,RECT *pRect,char param_4);
uint __cdecl FUN_004c8fe0(undefined4 param_1,undefined4 *param_2,RECT *pRect,char param_4);
void __cdecl FUN_004c9178(undefined4 param_1,undefined4 *param_2,RECT *pRect);
void __cdecl FUN_004c93c0(undefined4 param_1,undefined4 *param_2,RECT *pRect,char param_4);
void __stdcall FUN_004c9490(int *param_1,undefined4 *param_2,int *pRect,char param_4);
void __stdcall FUN_004c9496(void);
void __cdecl FUN_004c9638(int *param_1);
int * __cdecl FUN_004c9a24(int *param_1,int *param_2);
int * __cdecl FUN_004c9ad8(int *param_1,int *param_2);
int * __cdecl FUN_004c9b28(int *param_1,int *param_2);
int * __cdecl FUN_004c9b94(int *param_1,int *param_2);
void __cdecl FUN_004c9be4(int *param_1);
namespace OWL::TValidator { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace OWL::TValidator { void __stdcall vf1(void); }
namespace OWL::TValidator { undefined1 __stdcall vf2(void); }
namespace OWL::TValidator { undefined1 __stdcall vf3(void); }
namespace OWL::TValidator { undefined4 __stdcall vf4(void); }
namespace OWL::TValidator { undefined4 __stdcall vf5(void); }
void __stdcall InitRichEditStreamer_4c9e44(void);
void __stdcall FUN_004c9e9a(void);
namespace OWL::TValidator::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TValidator { undefined4 * __cdecl TValidator(undefined4 *self); }
int * __cdecl FUN_004c9f74(int *param_1,undefined4 *param_2);
int * __cdecl FUN_004c9fc4(int *param_1,int *param_2);
namespace OWL::TValidator::Streamer { undefined4 __cdecl vf1(int self,int *param_2); }
namespace OWL::TValidator::Streamer { void __cdecl vf2(undefined4 self,int *param_2); }
undefined4 * __cdecl FUN_004ca024(int *validator);
namespace OWL::TValidator::Streamer { undefined4 __stdcall vf3(void); }
namespace OWL::TView { void __cdecl _dtor(undefined4 *self,uint dtorFlags); }
namespace OWL::TView { undefined * __cdecl vf9(undefined4 self,int param_2); }
namespace OWL::TView { undefined * __cdecl vf8(undefined4 self,int param_2); }
namespace OWL::TView { int __cdecl vf7(undefined4 self,char *param_2); }
namespace OWL::TView { char * __cdecl vf10(int self,int param_2,undefined4 *param_3,char *param_4); }
void __stdcall FUN_004ca358(void);
namespace OWL::TView { undefined4 __stdcall vf4(void); }
namespace OWL::TView { undefined4 __stdcall vf5(void); }
namespace OWL::TTreeWindow { void __cdecl GetItemHeight(int *self); }
namespace OWL::TTreeWindow { void __cdecl SetItemHeight(int *self,undefined4 param_2,short wParam); }
int * __cdecl FUN_004ca3d0(uint *param_1,int param_2,undefined1 *param_3);
void __cdecl FUN_004ca482(int param_1,int param_2,int param_3);
namespace OWL::__TBarDescrGdNode { void __cdecl _dtor(int *self,byte dtorFlags); }
void __cdecl FUN_004ca5fc(int param_1,int param_2);
namespace OWL::TBarDescr { void __stdcall _dtor(undefined4 *self,byte dtorFlags); }
void __stdcall FUN_004ca69e(void);
void __cdecl FUN_004ca784(int param_1,char param_2);
undefined4 __cdecl FUN_004ca7d0(int *param_1);
namespace OWL::TBarDescr { undefined4 __cdecl vf1(int self,int param_2); }
namespace OWL::TBarDescr { undefined4 __cdecl vf2(int self,int param_2,int *param_3); }
namespace OWL::TBarDescr { undefined4 __cdecl vf3(int self,int *param_2); }
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
void __stdcall InitRichEditStreamer_4cb2a0(void);
void __stdcall FUN_004cb2f6(void);
uint * __cdecl FUN_004cb348(uint *param_1,uint param_2,byte param_3);
undefined4 * __cdecl FUN_004cb3b4(undefined4 *dest,undefined4 param_2,undefined4 param_3);
undefined4 * __cdecl FUN_004cb40c(undefined4 *param_1,undefined4 *param_2);
undefined4 * __cdecl FUN_004cb424(undefined4 *param_1,undefined4 *param_2);
undefined4 * __cdecl FUN_004cb490(undefined4 *dest,int param_2,undefined4 *param_3,undefined4 param_4);
undefined4 __cdecl FUN_004cb50c(uint *lParam,uint *param_2,char param_3);
uint __cdecl FUN_004cb550(uint *lParam,uint *param_2,char param_3);
bool __cdecl FUN_004cb5ec(uint *lParam,uint param_2,char param_3);
bool __cdecl FUN_004cb628(uint *lParam,uint param_2,char param_3);
undefined4 __cdecl FUN_004cb664(uint *lParam,uint *param_2,char param_3);
undefined4 __cdecl FUN_004cb6a8(uint *lParam,uint *param_2,char param_3);
undefined4 * __cdecl FUN_004cb6ec(undefined4 *dest,undefined4 param_2);
void __cdecl FUN_004cb794(int param_1);
namespace OWL::TTreeWindow { int * __cdecl TTreeWindow(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5); }
namespace OWL::TTreeWindow { void __cdecl _dtor(int *self,uint dtorFlags); }
namespace OWL::TTreeWindow { char * __stdcall GetClassName(void); }
namespace OWL::TTreeWindow { undefined4 __stdcall Transfer(void); }
void __cdecl FUN_004cba44(undefined4 *dest);
undefined4 * __cdecl FUN_004cba5c(undefined4 *dest);
undefined4 * __cdecl FUN_004cba88(undefined4 *dest);
uint * __cdecl FUN_004cbac4(uint *dest,uint *param_2,char *param_3);
void __cdecl FUN_004cbb00(uint *param_1,uint *param_2,char *param_3);
undefined4 __cdecl FUN_004cbb48(byte *param_1);
void __cdecl FUN_004cbb5c(uint *param_1,uint param_2);
void __cdecl FUN_004cbb70(uint *param_1,uint param_2);
void __cdecl FUN_004cbb84(uint *param_1,uint param_2);
namespace OWL::TTreeWindow::Streamer { undefined4 * __cdecl Streamer(undefined4 *self,int *param_2); }
namespace OWL::TTreeWindow { int * __cdecl TTreeWindow_4cbc00(int *self,int vbasesBuilt); }
namespace OWL::TTreeWindow::Streamer { undefined4 __cdecl vf1(int self,int *param_2); }
namespace OWL::TTreeWindow::Streamer { void __cdecl vf2(int self,int *param_2); }
undefined4 * __cdecl FUN_004cbd50(int *param_1);
namespace OWL::TTreeWindow::Streamer { undefined4 __stdcall vf3(void); }
undefined * __stdcall GetDocTemplateHead(uint param_1);
undefined4 * __stdcall GetModulePtr(uint param_1);
void __stdcall FUN_004cbf28(void);
void __stdcall FUN_004cbf6c(HMODULE hModule,undefined4 param_2,uint *param_3,undefined4 param_4);
undefined4 * __cdecl calloc(int count,int size);
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
bool FUN_004cc5ec(undefined4 *param_1,SIZE_T size);
undefined4 FUN_004cc614(LPVOID address,int param_2);
undefined4 FUN_004cc660(LPVOID address,SIZE_T size);
undefined4 FUN_004cc678(LPVOID address);
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
namespace __rwstd::rb_tree_int_std_pair_const_int_std_string_rwstd_select1st_std_pair_const_int_std_string_int_std_less_int { void __cdecl _dtor(int self,byte dtorFlags); }
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
namespace std::allocator { undefined4 __cdecl allocator(undefined4 param_1); }
int __cdecl FUN_004ce7ec(int param_1);
undefined4 __cdecl FUN_004ce7f8(undefined4 param_1,undefined4 param_2);
void __cdecl FUN_004ce800(undefined4 param_1,int param_2);
void __cdecl FUN_004ce810(int param_1);
void __cdecl FUN_004ce88c(int str);
undefined4 __cdecl FUN_004ce924(int param_1);
namespace std::string { int __cdecl __getRepOf(int param_1); }
int __cdecl FUN_004ce944(int *param_1);
int __cdecl FUN_004ce950(int *param_1);
undefined4 * __stdcall FUN_004ce974(void);
undefined4 * __cdecl FUN_004ce97c(undefined4 *param_1);
undefined4 * __cdecl FUN_004ce9b0(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_004ce9e4(int *param_1);
namespace std::allocator { undefined4 __cdecl allocator_4cea04(undefined4 param_1); }
void __stdcall FUN_004cea2c(void);
void __stdcall FUN_004cea3c(void);
namespace std::allocator { undefined4 __cdecl allocator_4cea44(undefined4 param_1); }
namespace std::string { undefined4 __cdecl size(int self); }
void __stdcall FUN_004cea80(void);
int __cdecl FUN_004cea90(int param_1,int param_2,undefined4 *param_3);
int __cdecl FUN_004ceab4(int param_1,int param_2);
namespace std::allocator { undefined4 __cdecl allocator_4ceae8(undefined4 param_1); }
void __cdecl FUN_004ceb10(int param_1);
undefined4 __cdecl FUN_004ceb88(int param_1);
undefined4 __cdecl FUN_004ceb94(int param_1);
int __cdecl FUN_004ceba0(int param_1,int param_2,undefined4 *param_3);
int __cdecl FUN_004cebc4(int param_1,int param_2);
namespace std::allocator { undefined4 __cdecl allocator_4cebf8(undefined4 param_1); }
namespace std::allocator { undefined4 __cdecl allocator_4cec20(undefined4 param_1); }
void __stdcall FUN_004cec48(void);
namespace std::allocator { undefined4 __cdecl allocator_4cec58(undefined4 param_1); }
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
undefined4 * __cdecl FUN_004ceed4(undefined4 *facet2,undefined4 param_2,char *param_3);
namespace std::locale::facet { undefined4 * __cdecl facet(undefined4 *self,undefined4 param_2,undefined4 param_3); }
int __cdecl FUN_004cef80(int param_1,char *param_2);
undefined4 * __cdecl FUN_004cefbc(undefined4 param_1,uint *param_2,undefined4 param_3);
undefined4 * __cdecl FUN_004cf040(undefined4 *facet,uint *param_2,undefined4 param_3);
undefined4 __cdecl FUN_004cf09c(undefined4 param_1,uint *param_2);
int * __cdecl FUN_004cf0b8(int *param_1,int param_2);
int __cdecl FUN_004cf0fc(int param_1,undefined4 param_2,int param_3);
int __cdecl FUN_004cf164(int param_1,int param_2,int *param_3);
int * __cdecl FUN_004cf1ac(int *param_1,int param_2,undefined4 *param_3);
namespace __rwstd::locale_vector_rwstd_rwcat_ptr { void __cdecl _dtor(int *self,byte dtorFlags); }
undefined4 __cdecl FUN_004cf2b4(int param_1);
int __cdecl FUN_004cf2c0(int *param_1,int param_2);
int * __cdecl FUN_004cf2d4(int *param_1,int param_2,undefined4 *param_3);
namespace __rwstd::locale_vector_rwstd_facet_imp_ptr { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace std::string { int __cdecl operator_assign(int self,int other); }
void __cdecl FUN_004cf3f4(int *param_1);
undefined4 __cdecl FUN_004cf40c(int param_1);
namespace std::string { int __cdecl assign_cstr(int self,uint *s); }
namespace __rwstd::except_msg_string { undefined4 __cdecl msgstr(undefined4 param_1); }
namespace std::logic_error { undefined4 * __cdecl logic_error_416de8(undefined4 *logicError,int str); }
bool __cdecl FUN_004cf5f0(char *param_1,char *param_2);
void __cdecl FUN_004cf608(undefined1 *param_1,undefined1 *param_2);
char * __cdecl FUN_004cf618(uint *s);
namespace std::string { int __cdecl string_from_cstr(int self,uint *s); }
undefined4 * __cdecl FUN_004cf758(undefined4 *param_1,undefined4 *src,uint n);
int __cdecl FUN_004cf778(int param_1,undefined4 param_2);
namespace std::string { int * __cdecl __getRep(undefined4 alloc,uint capacity,uint length); }
int __stdcall FUN_004cf870(void);
namespace std::bad_alloc { undefined4 * __cdecl bad_alloc(undefined4 *self); }
undefined4 * __cdecl FUN_004cf91c(undefined4 *param_1,int param_2);
void __cdecl FUN_004cf950(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void __cdecl FUN_004cf968(undefined4 param_1,undefined4 *param_2);
undefined4 __cdecl FUN_004cf9b8(undefined4 param_1,undefined4 param_2);
undefined4 * __cdecl FUN_004cfa18(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_004cfa4c(undefined4 param_1,undefined4 param_2,undefined1 *param_3);
void __cdecl FUN_004cfa64(undefined4 param_1,undefined1 *param_2);
void __cdecl FUN_004cfa80(int *param_1,int param_2);
undefined4 __stdcall FUN_004cfa9c(void);
namespace std::string { int __cdecl __rep_data(int rep); }
int __cdecl FUN_004cfaac(int str,uint pos,uint n1,uint s,uint param_5);
namespace std::string { int __cdecl replace(int self,uint pos,uint n1,uint s,uint n2,uint param_6, uint param_7); }
namespace std::out_of_range { undefined4 * __cdecl out_of_range(undefined4 *self,int what); }
namespace std::length_error { undefined4 * __cdecl length_error(undefined4 *self,int what); }
undefined4 * __cdecl FUN_004cff5c(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 __cdecl FUN_004cff7c(int param_1);
undefined4 __cdecl FUN_004cff94(int param_1);
namespace std::string { undefined4 __cdecl data(int self); }
namespace __rwstd::locale_vector_std_string { void __cdecl _dtor(int *self,byte dtorFlags); }
namespace std::wstring { void __cdecl _dtor(int self,byte dtorFlags); }
void __cdecl FUN_004d00c0(int str);
undefined4 __cdecl FUN_004d0158(int param_1);
namespace std::string { int __cdecl __getRepOf_4d0164(int param_1); }
int __cdecl FUN_004d0178(int *param_1);
int __cdecl FUN_004d0184(int *param_1);
undefined * __stdcall FUN_004d01a8(void);
undefined4 * __cdecl FUN_004d01b0(undefined4 *param_1);
undefined4 * __cdecl FUN_004d01e8(undefined4 *param_1,undefined4 param_2);
int __cdecl FUN_004d021c(int *param_1);
namespace std::allocator { undefined4 __cdecl allocator_4d023c(undefined4 param_1); }
void __stdcall FUN_004d0264(void);
void __stdcall FUN_004d0274(void);
namespace std::allocator { undefined4 __cdecl allocator_4d027c(undefined4 param_1); }
void __stdcall FUN_004d02a4(void);
int __cdecl FUN_004d02b4(int param_1,int param_2,undefined4 *param_3);
int __cdecl FUN_004d02d8(int param_1,int param_2);
namespace std::allocator { undefined4 __cdecl allocator_4d030c(undefined4 param_1); }
namespace std::string { undefined4 __cdecl size_4d0334(int self); }
int __cdecl FUN_004d0348(int param_1);
int __cdecl FUN_004d03b8(int param_1,undefined4 *param_2);
int __cdecl FUN_004d03f4(int param_1);
int __cdecl FUN_004d0480(int param_1,undefined4 *param_2);
int __cdecl FUN_004d04bc(int param_1);
void __cdecl FUN_004d04c8(int *param_1);
namespace std::basic_filebuf_char { undefined4 * __cdecl basic_filebuf(undefined4 *self); }
undefined4 * __cdecl FUN_004d05d0(undefined4 *param_1,undefined4 param_2);
namespace std::basic_streambuf_char { undefined4 * __cdecl basic_streambuf(undefined4 *self); }
int * __cdecl FUN_004d0688(int *param_1);
void __cdecl FUN_004d06f0(int param_1,char param_2);
undefined4 __stdcall FUN_004d0724(void);
namespace std::basic_filebuf_char { undefined4 * __cdecl basic_filebuf_4d072c(undefined4 *self,int vbasesBuilt); }
namespace std::basic_filebuf_char { void __cdecl _dtor(int *self,byte dtorFlags); }
int * __cdecl FUN_004d08c4(int *param_1);
undefined4 __stdcall FUN_004d0a2c(void);
bool __cdecl FUN_004d0a30(undefined4 param_1,int param_2);
undefined4 __cdecl FUN_004d0a40(undefined4 param_1,uint param_2);
namespace std::basic_streambuf_char { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::basic_istream_char { undefined4 * __cdecl basic_istream(undefined4 *self,int vbasesBuilt); }
namespace std::basic_ostream_char { undefined4 * __cdecl basic_ostream(undefined4 *self,int vbasesBuilt); }
namespace std::basic_ios_char { undefined4 * __cdecl basic_ios(undefined4 *self); }
void __cdecl FUN_004d0be0(int param_1,undefined4 param_2);
undefined4 __cdecl FUN_004d0c30(int param_1);
undefined4 __cdecl FUN_004d0c94(int *param_1);
void __cdecl FUN_004d0cac(int param_1,uint param_2);
void __cdecl FUN_004d0cc4(int param_1,uint param_2);
undefined4 __cdecl FUN_004d0f44(int param_1);
undefined4 __cdecl FUN_004d0f50(int param_1);
int * __cdecl FUN_004d0f5c(int *param_1,LPCSTR fileName,uint param_3,uint param_4);
DWORD __cdecl FUN_004d1068(undefined4 param_1,uint param_2,LONG lDistanceToMove,int param_4);
void __cdecl FUN_004d1084(int param_1,uint param_2);
namespace std::basic_ostream_char { void __cdecl _dtor(undefined4 *self,uint dtorFlags); }
namespace std::basic_istream_char { void __cdecl _dtor(undefined4 *self,uint dtorFlags); }
namespace std::basic_ios_char { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::basic_ifstream_char { int * __cdecl basic_ifstream(int *self,int vbasesBuilt,LPCSTR fileName,uint param_4,uint param_5); }
void __cdecl FUN_004d12b8(int *param_1,LPCSTR fileName,uint param_3,uint param_4);
namespace std::basic_ifstream_char { void __cdecl _dtor(undefined4 *self,uint dtorFlags); }
namespace std::basic_istream_char { int * __cdecl basic_istream_4d13a0(int *self,int vbasesBuilt,int param_3); }
undefined4 __cdecl FUN_004d1450(int param_1);
namespace std::basic_ostream_char { int * __cdecl basic_ostream_4d145c(int *self,int vbasesBuilt,int param_3); }
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
namespace std::basic_istream_char::sentry { void __cdecl _dtor(int self,byte dtorFlags); }
void __cdecl FUN_004d187c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_004d1898(int param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_004d18b0(int param_1,int param_2);
namespace std::basic_ofstream_char { int * __cdecl basic_ofstream(int *self,int vbasesBuilt,LPCSTR fileName,uint param_4,uint param_5); }
void __cdecl FUN_004d198c(int *param_1,LPCSTR fileName,uint param_3,uint param_4);
namespace std::basic_ofstream_char { void __cdecl _dtor(undefined4 *self,uint dtorFlags); }
undefined4 * __cdecl FUN_004d1a74(undefined4 *param_1,int *param_2);
undefined1 __stdcall FUN_004d1b5c(void);
bool __cdecl FUN_004d1b68(undefined *param_1);
bool __cdecl FUN_004d1b7c(undefined4 *param_1);
undefined4 __cdecl FUN_004d1bb4(undefined4 param_1,int *param_2);
int __cdecl FUN_004d1bdc(int str,uint param_2,int param_3);
namespace std::string { int __cdecl string_from_buf(int self,undefined4 *s,uint n); }
int __cdecl FUN_004d1e40(int param_1,int str,uint param_3,uint param_4);
undefined4 * __cdecl FUN_004d1fb8(undefined4 *facet2,undefined4 param_2);
int __cdecl FUN_004d2000(int param_1,int str);
namespace std::num_put_char_std_ostreambuf_iterator_char { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __cdecl FUN_004d2174(undefined4 *facet2,byte param_2);
void __cdecl FUN_004d2218(undefined4 *facet,byte param_2);
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
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl num_put(undefined4 *self,undefined4 param_2); }
void __stdcall FUN_004d2ed8(void);
undefined4 * __cdecl FUN_004d2ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined1 __cdecl FUN_004d2f44(undefined1 *param_1);
bool __cdecl FUN_004d2f50(int param_1);
undefined4 __cdecl FUN_004d2f64(int param_1);
undefined1 __cdecl FUN_004d2f78(int param_1);
undefined1 __cdecl FUN_004d2f84(int param_1);
namespace std::basic_filebuf_char { void __cdecl vf9(int *self); }
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
bool __cdecl FUN_004d35dc(undefined4 param_1,uint param_2,char *buffer,int param_4,int param_5);
namespace std::basic_filebuf_char { int __cdecl vf10(int self,int param_2); }
namespace std::basic_filebuf_char { undefined4 __cdecl vf12(int *self); }
int * __cdecl FUN_004d39c0(int *param_1,int param_2);
undefined4 * __cdecl FUN_004d3a14(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_004d3a40(undefined4 *param_1);
bool __cdecl FUN_004d3a4c(int *param_1,int *param_2);
undefined4 * __cdecl FUN_004d3a64(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_004d3ab4(int *param_1,int *param_2);
bool __cdecl FUN_004d3b00(int *param_1,int *param_2);
namespace std::basic_filebuf_char { void __cdecl vf7(int *self); }
undefined4 __cdecl FUN_004d3f5c(int *param_1);
void __cdecl FUN_004d3f8c(undefined4 *param_1,undefined4 param_2);
char * __cdecl FUN_004d3f9c(undefined4 param_1,uint param_2,char *buffer,int param_4,int param_5);
int __cdecl FUN_004d3fc4(int param_1,char *param_2,char *param_3);
namespace std::basic_streambuf_char { void __stdcall vf9(void); }
namespace std::basic_streambuf_char { void __stdcall vf10(void); }
namespace std::basic_streambuf_char { undefined4 __stdcall vf12(void); }
namespace std::basic_streambuf_char { void __cdecl vf8(int *self); }
namespace std::basic_streambuf_char { void __stdcall vf7(void); }
namespace std::string { uint __cdecl compare(int str,uint param_2,uint param_3,byte *param_4,uint param_5); }
int __cdecl FUN_004d4204(byte *param_1,byte *param_2,int param_3);
uint __cdecl FUN_004d4220(int str,uint param_2,uint param_3,int str2);
namespace std::basic_filebuf_char { int __cdecl vf5(int self); }
namespace std::basic_filebuf_char { int __cdecl vf11(int *self,undefined1 *param_2,int param_3); }
undefined4 __cdecl FUN_004d44ec(int param_1);
int __cdecl FUN_004d44f8(int *param_1);
int * __cdecl FUN_004d4534(int *param_1,undefined1 *param_2,int param_3);
undefined1 __cdecl FUN_004d4740(int param_1);
namespace std::basic_streambuf_char { int __cdecl vf5(int self); }
namespace std::basic_streambuf_char { uint __cdecl vf6(int *self,undefined4 *param_2,uint param_3); }
namespace std::basic_streambuf_char { int __cdecl vf11(int *self,undefined1 *param_2,int param_3); }
namespace std::string { void __cdecl __unshare(int self); }
undefined4 __cdecl FUN_004d4948(int param_1);
undefined4 __cdecl FUN_004d4954(int param_1,undefined4 param_2);
int __stdcall FUN_004d4968(void);
int __cdecl FUN_004d4978(int str,uint s,uint param_3);
int * __cdecl FUN_004d49a4(int *param_1,int str);
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
int * __cdecl FUN_004d5374(int *param_1,uint *s);
undefined4 __cdecl FUN_004d562c(int param_1,undefined4 param_2);
namespace std::basic_filebuf_char { int * __cdecl vf2(int *self,int param_2,int param_3); }
namespace std::basic_streambuf_char { undefined4 __cdecl vf2(undefined4 self); }
namespace std::string { int __cdecl append(int self,int other); }
int __cdecl FUN_004d5850(int str,int str2,uint param_3,uint param_4);
namespace std::string { void __cdecl assign(int self,int other); }
namespace std::string { int __cdecl replace_str(int self,uint pos,uint n1,int other); }
namespace std::string { int __cdecl insert(int self,uint pos,int other); }
namespace std::string { int __cdecl replace_fill(int self,uint pos,uint n1,uint count,undefined1 ch); }
undefined4 * __cdecl FUN_004d5fc4(undefined4 *param_1,uint n,undefined1 ch);
int __cdecl FUN_004d5fe4(int *param_1,uint param_2);
namespace std::string { int __cdecl substr(int result,int self,uint pos,uint n); }
namespace std::string { void __cdecl string_fill(int self,uint n); }
int __cdecl FUN_004d6350(int param_1,int param_2);
int __cdecl FUN_004d6394(int param_1,int param_2);
int __cdecl FUN_004d63d8(int param_1,int param_2);
namespace std::basic_filebuf_char { int * __cdecl vf3(int *self,int *param_2,int param_3,int param_4); }
undefined4 __cdecl FUN_004d6a44(int *param_1);
undefined4 * __cdecl FUN_004d6a54(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_004d6a84(int *param_1,int param_2);
void __cdecl FUN_004d6a94(int *param_1,int param_2);
namespace std::basic_filebuf_char { int * __cdecl vf4(int *self,int *param_2); }
undefined4 * __cdecl FUN_004d6c8c(undefined4 *param_1,int param_2);
int * __cdecl FUN_004d6cac(int *param_1,int *param_2);
namespace std::basic_streambuf_char { int * __cdecl vf3(int *self); }
namespace std::basic_streambuf_char { int * __cdecl vf4(int *self); }
void __cdecl FUN_004d6d58(int str,uint param_2);
void __cdecl FUN_004d6dc8(int *param_1);
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf12(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9, undefined4 param_10); }
void __cdecl FUN_004d6e54(int param_1,undefined1 param_2);
undefined4 __cdecl FUN_004d71bc(int param_1);
undefined4 __cdecl FUN_004d71d4(int param_1);
void __cdecl FUN_004d71e8(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_004d7210(undefined4 param_1);
int __cdecl FUN_004d7218(int param_1,undefined1 param_2);
undefined4 __cdecl FUN_004d7264(int param_1);
namespace std::num_put_char_std_ostreambuf_iterator_char { undefined4 * __cdecl vf2(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined1 param_6,int param_7,undefined4 param_8,char param_9); }
void __stdcall FUN_004d7320(int param_1);
void __stdcall FUN_004d7326(void);
int __cdecl FUN_004d7414(int param_1,char param_2);
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
undefined4 * __cdecl FUN_004d7854(undefined4 *param_1,int *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_004d7a5c(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3);
undefined4 * __cdecl FUN_004d7a9c(undefined4 *param_1,undefined4 *param_2);
uint __cdecl FUN_004d7ae0(int str,undefined4 *param_2,uint param_3,uint param_4);
int __cdecl FUN_004d7be4(int str,byte *param_2,int param_3,int param_4);
int __cdecl FUN_004d7cf0(int str,byte *param_2,uint param_3,uint param_4);
void __cdecl FUN_004d7e24(int param_1);
void __cdecl FUN_004d7e64(int *param_1);
namespace std::basic_streambuf_char { void __cdecl vf1(int self,int *param_2); }
void __cdecl FUN_004d7ebc(int *param_1);
undefined4 __cdecl FUN_004d8000(int param_1,uint param_2);
undefined4 * __cdecl FUN_004d8030(undefined4 *param_1);
namespace __rwstd::facet_imp { undefined4 * __cdecl facet_imp(undefined4 *self,undefined4 param_2,undefined4 param_3); }
undefined4 __cdecl FUN_004d80dc(undefined4 param_1);
namespace std::exception { undefined4 * __cdecl exception(undefined4 *self); }
void __cdecl FUN_004d8174(int param_1);
namespace __rwstd::ref_counted { undefined4 * __cdecl ref_counted(undefined4 *self,undefined4 param_2); }
int __cdecl FUN_004d8200(int param_1,char *param_2);
namespace __rwstd::facet_imp { void vf2(int *self,undefined4 param_2,byte *param_3,byte *param_4,int param_5, undefined4 param_6,byte *param_7,byte *param_8,byte *param_9,byte *param_10, byte *param_11,int param_12,undefined4 param_13,byte *param_14,byte *param_15, byte *param_16,byte *param_17,byte *param_18,byte *param_19,byte *param_20, byte *param_21,byte *param_22,byte *param_23,byte *param_24,byte *param_25, byte *param_26); }
namespace std::basic_filebuf_char { void vf13(byte *self,byte *param_2,undefined4 param_3,char *param_4,byte *param_5, char *param_6,byte *param_7); }
void __cdecl FUN_004d89e4(int param_1,byte param_2);
namespace std::pair_const_int_std_string { void __cdecl _dtor(int self,byte dtorFlags); }
void __cdecl FUN_004d8ac8(int param_1,byte param_2);
namespace __rwstd::punct_data_char { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::ios_base::failure { undefined4 * __cdecl failure(undefined4 *self,int param_2); }
namespace std::ios_base::failure { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::ios_base::failure { undefined4 __cdecl vf1(int self); }
undefined4 __cdecl FUN_004d8d78(undefined4 param_1);
namespace std::ios_base::Init { void __cdecl _dtor(int self,byte dtorFlags); }
namespace std::ios_base { undefined4 * __cdecl ios_base(undefined4 *self); }
namespace std::ios_base { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __stdcall FUN_004d9030(void);
void __stdcall FUN_004d90fc(void);
void __stdcall FUN_004d91b4(void);
undefined1 * __cdecl FUN_004d91bc(uint *param_1);
namespace std::locale::facet { undefined4 * __cdecl facet_4d9614(undefined4 *self,undefined4 param_2,undefined1 param_3,undefined4 param_4); }
void __cdecl FUN_004d984c(int param_1,int *param_2);
void __cdecl FUN_004d9a28(undefined4 *refCounted,byte param_2);
uint __cdecl FUN_004d9abc(int param_1,uint param_2);
void __cdecl FUN_004d9af0(int param_1,byte *param_2,byte *param_3);
uint __cdecl FUN_004d9b2c(int param_1,uint param_2);
void __cdecl FUN_004d9b60(int param_1,byte *param_2,byte *param_3);
undefined1 __cdecl FUN_004d9b9c(undefined4 param_1,undefined1 param_2);
int __cdecl FUN_004d9ba4(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *dest);
undefined1 __cdecl FUN_004d9bc8(undefined4 param_1,undefined1 param_2);
int __cdecl FUN_004d9bd0(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4, undefined4 *dest);
undefined4 __cdecl FUN_004d9bf4(char *param_1);
undefined4 * __cdecl FUN_004d9c54(undefined4 *facet2,uint *param_2,undefined4 param_3);
void __cdecl FUN_004d9e14(undefined4 *refCounted,byte param_2);
uint * __cdecl FUN_004d9e74(uint *param_1);
void __stdcall FUN_004d9fc8(void);
void __stdcall FUN_004da004(void);
undefined4 * __cdecl FUN_004da038(undefined4 *param_1,LPCSTR libFileName);
namespace __rwstd::__rwcat { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined4 __cdecl FUN_004da204(undefined4 *param_1,undefined4 param_2,UINT id,undefined4 param_4);
uint __cdecl FUN_004da4c0(int param_1);
int * __cdecl FUN_004da4f8(LPCSTR libFileName);
undefined4 __cdecl FUN_004da604(int param_1,undefined4 param_2,UINT id,undefined4 param_4);
namespace std::map_int_std_string_std_less_int { void __cdecl _dtor(int self,byte dtorFlags); }
void __stdcall FUN_004daa54(void);
namespace std::string { int __cdecl string_4daac4(int self); }
namespace __rwstd::ref_counted { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
int * __cdecl FUN_004dab3c(int *param_1);
namespace __rwstd::locale_imp { undefined4 * __cdecl locale_imp(undefined4 *self,int param_2,undefined4 param_3); }
namespace __rwstd::locale_imp { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined * __cdecl FUN_004dae04(int param_1,uint param_2);
int * __cdecl FUN_004dae38(int *param_1,uint *param_2,int param_3);
namespace __rwstd::use_Clib_locale { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __stdcall FUN_004daff8(void);
int * __cdecl FUN_004db414(int *param_1,int *param_2);
int __cdecl FUN_004db488(int str,int *param_2);
int * __cdecl FUN_004db7f8(int *param_1,uint *param_2,char param_3,uint param_4,undefined *param_5);
void __cdecl FUN_004db998(int *param_1,int *param_2,uint *param_3);
void __cdecl FUN_004dba58(undefined4 *refCounted,byte param_2);
undefined4 __cdecl FUN_004dbabc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8);
undefined4 __cdecl FUN_004dbad8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8);
undefined4 __stdcall FUN_004dbaf4(void);
undefined1 __stdcall FUN_004dbb00(void);
undefined4 __stdcall FUN_004dbb08(void);
uint __cdecl FUN_004dbb14(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5);
undefined4 __stdcall FUN_004dbb28(void);
int __cdecl FUN_004dbb34(int param_1,int param_2);
namespace std::runtime_error { undefined4 __cdecl vf1(int self); }
undefined4 __cdecl FUN_004dbc60(int str,int *param_2);
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
namespace __rwstd::except_msg_string { undefined1 * __cdecl format(undefined1 *exceptMsg,byte *format2); }
char * __cdecl FUN_004dc358(char *param_1,UINT id);
namespace std::exception { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::bad_alloc { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::logic_error { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::domain_error { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::length_error { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::out_of_range { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
namespace std::runtime_error { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
char * __cdecl memchr(char *s,char ch,int n);
short * __cdecl FUN_004dc7b4(short *param_1,short param_2,int param_3);
undefined4 * __cdecl memcpy(undefined4 *dest,undefined4 *src,uint n);
undefined4 * __cdecl FUN_004dc7f8(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 * __cdecl memset(undefined4 *dest,undefined1 ch,uint n);
undefined2 * __cdecl FUN_004dc8d0(undefined2 *param_1,undefined2 param_2,int param_3);
char * __cdecl FUN_004dc8e8(char *param_1,char *param_2);
char * __cdecl strchr(char *s,char ch);
int __cdecl FUN_004dc978(char *param_1,char *param_2);
char * __cdecl FUN_004dc9c4(char *param_1,char *param_2);
char * __cdecl strlen(uint *s);
char * __cdecl FUN_004dca50(char *param_1,char *param_2,uint param_3);
uint __cdecl FUN_004dcac0(byte *param_1,byte *param_2,int param_3);
char * __cdecl thunk_memchr(char *param_1,char param_2,int param_3);
char * __cdecl thunk_memchr_4dcaed(char *param_1,char param_2,int param_3);
char * __cdecl thunk_strchr(char *param_1,char param_2);
char * __cdecl thunk_strchr_4dcb01(char *param_1,char param_2);
char * __cdecl thunk_FUN_004dcc90(char *param_1,char *param_2);
uint * __cdecl thunk_strrchr(uint *param_1,char param_2);
uint * __cdecl thunk_strrchr_4dcb19(uint *param_1,char param_2);
char * __cdecl thunk_FUN_004dcd18(char *param_1,char *param_2);
char * __cdecl thunk_FUN_004dcd18_4dcb25(char *param_1,char *param_2);
int __cdecl FUN_004dcb2c(byte *param_1,byte *param_2,int param_3);
int __cdecl strcspn(char *s,char *reject);
undefined4 * __cdecl FUN_004dcbc4(uint *param_1);
int __cdecl strcmp(char *s1,char *s2);
undefined4 * __cdecl strncpy(undefined4 *dest,uint *src,char *n);
char * __cdecl FUN_004dcc90(char *param_1,char *param_2);
uint * __cdecl strrchr(uint *s,char ch);
int __cdecl FUN_004dcce8(char *param_1,char *param_2);
char * __cdecl FUN_004dcd18(char *param_1,char *param_2);
char * __cdecl strtok(char *s,char *delimiters);
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
namespace std::type_info { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
undefined4 * __cdecl FUN_004dd5cc(int param_1,int param_2,int param_3);
char * __cdecl FUN_004dd6dc(int param_1);
undefined4 * __cdecl FUN_004dd744(int param_1,int param_2,int *param_3,int *param_4,int param_5);
int __cdecl FUN_004dd82c(int param_1,int param_2,int *param_3);
namespace type_info_hash { void __cdecl _dtor(undefined4 *self,byte dtorFlags); }
void __stdcall FUN_004dd974(void);
void __stdcall FUN_004dd99c(void);
void __stdcall FUN_004dda40(void);
void __stdcall FUN_004ddab4(void);
void __cdecl FUN_004ddaec(undefined4 *param_1);
void __cdecl FUN_004ddb38(undefined4 *param_1);
undefined4 __stdcall FUN_004ddb60(void);
LONG __cdecl FUN_004ddb6c(PEXCEPTION_RECORD exceptionRecord,PVOID targetFrame,PCONTEXT param_3);
void __cdecl FUN_004ddc5c(undefined4 *param_1);
void __cdecl FUN_004ddc78(undefined4 *param_1);
undefined4 __cdecl FUN_004ddc88(undefined4 param_1);
void __stdcall FUN_004ddcd4(void);
void __cdecl FUN_004ddce8(undefined4 *param_1);
void __cdecl FUN_004ddcfd(undefined4 *param_1);
void FUN_004ddd36(PVOID targetFrame,PEXCEPTION_RECORD exceptionRecord);
undefined4 __stdcall FUN_004ddd4b(void);
undefined4 __cdecl access(LPCSTR path,byte mode);
undefined4 __cdecl FUN_004ddd90(uint param_1);
uint __cdecl FUN_004dddf0(uint param_1);
bool __cdecl FUN_004dde78(uint param_1);
bool __cdecl FUN_004ddea8(HANDLE hFile);
DWORD __cdecl FUN_004ddec0(uint param_1,LONG lDistanceToMove,int param_3);
int __cdecl FUN_004ddf38(LPCSTR fileName,uint param_2,uint param_3);
char * __cdecl FUN_004de134(char *param_1,int param_2);
char * __cdecl FUN_004de1a0(uint param_1,char *buffer,char *numberOfBytesToRead);
int __cdecl FUN_004de2d0(LPCWSTR fileName,uint param_2,uint param_3);
int __cdecl FUN_004de4cc(uint param_1,char *buffer,uint numberOfBytesToWrite);
undefined4 __cdecl FUN_004de5e8(undefined1 *param_1);
int __stdcall FUN_004de5fc(void);
undefined4 __cdecl FUN_004de634(uint param_1,LPVOID buffer,DWORD numberOfBytesToRead);
void __cdecl FUN_004de67c(uint param_1,char *buffer,char *numberOfBytesToRead);
undefined4 __cdecl thunk_FUN_004e0588(LPCSTR fileName);
void __cdecl FUN_004de6a0(LPCWSTR fileName,uint param_2);
void __cdecl FUN_004de6c0(LPCWSTR owner,uint key);
undefined4 __cdecl FUN_004de6d8(uint param_1,LPCVOID buffer,DWORD numberOfBytesToWrite);
void __cdecl FUN_004de720(uint param_1,char *buffer,uint numberOfBytesToWrite);
undefined4 __cdecl thunk_access(LPCSTR fileName,byte param_2);
undefined4 __cdecl FUN_004de744(int *param_1,int mem,int param_3,int param_4);
undefined4 __cdecl thunk_FUN_004ddd90(uint param_1);
undefined4 __cdecl FUN_004de7cc(int *param_1);
undefined4 __cdecl FUN_004de85c(int *param_1);
int __stdcall FUN_004de8dc(void);
void __cdecl FUN_004de938(undefined *param_1);
void __cdecl FUN_004de948(undefined4 *param_1);
uint __cdecl FUN_004de95c(char *param_1,uint *param_2,undefined4 *param_3);
int * __cdecl FUN_004dea38(int *param_1,LPCSTR fileName,char *param_3,uint param_4);
undefined4 * __stdcall FUN_004deae4(void);
int * __cdecl fopen(LPCSTR fileName,char *param_2);
uint __cdecl FUN_004deb3c(byte *buffer,uint numberOfBytesToWrite,int *param_3);
char * __cdecl FUN_004dec18(char *param_1,char *param_2,int *param_3);
uint __cdecl FUN_004ded48(char *param_1,int param_2,int param_3,int *param_4);
int __cdecl FUN_004ded7c(undefined4 *param_1);
undefined4 __cdecl fseek(int *param_1,LONG lDistanceToMove,int param_3);
DWORD __cdecl FUN_004dee3c(undefined4 *param_1);
char * __cdecl FUN_004deebc(char *param_1,LPCSTR fileName,uint param_3);
uint __cdecl FUN_004def90(byte *buffer,uint param_2,uint param_3,int *param_4);
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
DWORD __cdecl thunk_FUN_004ddec0(uint param_1,LONG lDistanceToMove,int param_3);
char * __cdecl FUN_004df5b0(char *param_1,char *param_2,ushort param_3);
char * __cdecl FUN_004df600(char *fileName,ushort *param_2);
int __cdecl thunk_FUN_004ddf38(LPCSTR fileName,uint param_2,uint param_3);
char * __cdecl thunk_FUN_004de1a0(uint param_1,char *buffer,char *numberOfBytesToRead);
undefined4 __cdecl FUN_004df65c(LPCSTR existingFileName,LPCSTR newFileName);
void __cdecl FUN_004df67c(int *param_1);
int __cdecl FUN_004df6a0(undefined *param_1,undefined *param_2,byte *param_3,byte *param_4,int *param_5);
uint __cdecl FUN_004dfed8(undefined *param_1,undefined *param_2,undefined4 param_3,uint param_4,int param_5, int *param_6,int *param_7);
uint __cdecl FUN_004e00a0(undefined *param_1,undefined *param_2,uint param_3,uint param_4,int param_5, int *param_6,int *param_7);
undefined4 __cdecl setvbuf(int *param_1,int mem,int param_3,uint param_4);
uint __cdecl FUN_004e031c(undefined4 *src,uint param_2,int *param_3);
uint __cdecl sprintf(undefined1 *buf,byte *format);
void __cdecl FUN_004e036c(undefined1 *param_1,byte *param_2,uint *param_3);
uint __cdecl FUN_004e0394(int *param_1);
void __cdecl FUN_004e03b4(undefined4 param_1,int *param_2);
int __cdecl FUN_004e03c0(undefined4 param_1,byte *param_2);
void __cdecl FUN_004e03e4(undefined4 param_1,byte *param_2,int *param_3);
char * __cdecl FUN_004e0520(char *fileName);
int __cdecl FUN_004e0538(int param_1,uint *param_2);
undefined4 __cdecl FUN_004e0588(LPCSTR fileName);
void __cdecl FUN_004e05a4(int param_1);
void __cdecl FUN_004e05ec(undefined1 param_1,int param_2);
void __cdecl FUN_004e0620(uint param_1,int param_2);
uint __cdecl FUN_004e0654(undefined4 param_1,undefined4 param_2,byte *param_3,int param_4,undefined4 param_5, uint *param_6);
int __cdecl thunk_FUN_004de4cc(uint param_1,char *buffer,uint numberOfBytesToWrite);
undefined ** __stdcall FUN_004e0ff0(void);
char * __cdecl FUN_004e0ff8(char *param_1,char *param_2,uint n);
undefined4 __cdecl FUN_004e12bc(int param_1);
undefined4 __cdecl isalnum(uint ch);
bool __cdecl FUN_004e1328(uint param_1);
undefined4 __cdecl isalpha(uint ch);
undefined4 __cdecl FUN_004e1354(uint ch);
undefined4 __cdecl FUN_004e1368(uint ch);
undefined4 __cdecl FUN_004e137c(uint ch);
undefined4 __cdecl FUN_004e1394(uint ch);
undefined4 __cdecl FUN_004e13a8(uint ch);
undefined4 __cdecl FUN_004e13c0(uint ch);
undefined4 __cdecl FUN_004e13d4(uint ch);
undefined4 __cdecl FUN_004e13e8(uint ch);
undefined4 __cdecl FUN_004e13fc(uint ch);
void __cdecl FUN_004e1414(ushort srcStr);
bool __cdecl FUN_004e142c(ushort param_1);
void __cdecl FUN_004e1440(ushort srcStr);
void __cdecl FUN_004e1458(ushort srcStr);
void __cdecl FUN_004e146c(ushort srcStr);
void __cdecl FUN_004e1480(ushort srcStr);
void __cdecl FUN_004e1498(ushort srcStr);
void __cdecl FUN_004e14ac(ushort srcStr);
void __cdecl FUN_004e14c4(ushort srcStr);
uint __cdecl FUN_004e14d8(ushort srcStr);
void __cdecl FUN_004e14ec(ushort srcStr);
void __cdecl FUN_004e1500(ushort srcStr);
ushort __cdecl _isctype(uint ch,ushort mask);
uint __cdecl FUN_004e155c(WCHAR srcStr,uint param_2);
undefined4 __cdecl FUN_004e15b4(ushort param_1,LPCWSTR wideCharStr);
undefined4 __cdecl FUN_004e1664(ushort param_1,uint *param_2);
uint __cdecl FUN_004e1bb4(int *param_1,byte *param_2);
int __cdecl FUN_004e1e0c(uint *param_1,ushort param_2);
void __cdecl FUN_004e1fc8(int param_1);
undefined4 __cdecl FUN_004e2374(int *param_1,char *param_2);
undefined4 __cdecl FUN_004e2594(uint *param_1,uint *param_2);
undefined4 __cdecl FUN_004e2734(LCID locale,LCTYPE lcType,undefined4 *param_3);
undefined4 __cdecl FUN_004e2790(LCID locale,LCTYPE lcType,undefined2 *param_3,int param_4);
undefined4 __cdecl FUN_004e27ec(LCID locale,UINT codePage,undefined4 *param_3);
bool __cdecl FUN_004e28d4(LCID locale,undefined2 *param_2);
bool __cdecl FUN_004e2a54(LCID locale,undefined4 *param_2);
bool __cdecl FUN_004e2eb0(LCID locale,undefined4 *param_2);
undefined4 __stdcall FUN_004e2f38(void);
undefined ** __stdcall FUN_004e2f44(void);
byte * __cdecl FUN_004e2fdc(byte *param_1);
uint __cdecl tolower(uint ch);
uint __cdecl toupper(uint ch);
undefined4 __cdecl FUN_004e30a8(byte *multiByteStr,int param_2);
undefined4 __cdecl FUN_004e3124(LPWSTR wideCharStr,byte *multiByteStr,int param_3);
int __cdecl FUN_004e31f8(LPSTR multiByteStr,ushort wideCharStr);
char * __cdecl FUN_004e326c(LPWSTR wideCharStr,uint *multiByteStr,char *wideChar);
int __cdecl FUN_004e3398(short *param_1,int param_2);
uint __cdecl FUN_004e33d4(LPSTR multiByteStr,LPCWSTR wideCharStr,uint multiByte);
undefined4 __cdecl FUN_004e3578(ushort param_1,uint *param_2);
int FUN_004e3590(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
int FUN_004e362b(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5);
uint FUN_004e36ee(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5);
void __cdecl thunk_FUN_004e3fb0(uint param_1,char *param_2,uint param_3);
void __cdecl FUN_004e3798(int param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4, undefined4 param_5,undefined4 param_6);
void __stdcall FUN_004e3848(void);
int __cdecl atoi(char *s);
void __cdecl FUN_004e3a38(char *s);
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
undefined4 __stdcall __ftol(void);
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
undefined4 __cdecl FUN_004e5980(UINT codePage);
undefined4 __cdecl FUN_004e5abc(uint param_1);
undefined4 __cdecl FUN_004e5afc(uint ch);
undefined4 __cdecl FUN_004e5b18(uint ch);
byte * __cdecl FUN_004e5b34(byte *param_1,byte *param_2,uint param_3);
undefined4 __cdecl FUN_004e5b88(byte *param_1,byte *param_2,int param_3);
byte * __cdecl FUN_004e5c48(byte *param_1,uint param_2);
void __cdecl FUN_004e5ca0(uint *param_1,int param_2);
void __cdecl FUN_004e5ce8(undefined4 param_1,undefined4 param_2,uint param_3);
undefined * __stdcall FUN_004e5d48(void);
void __cdecl FUN_004e5d98(LPCSTR fileName,uint *buffer);
undefined4 __stdcall FUN_004e5e00(undefined4 param_1,undefined4 *param_2);
undefined4 __stdcall FUN_004e5e14(void);
void __cdecl FUN_004e5e58(uint *buffer);
void __cdecl FUN_004e5f74(uint *buffer);
void __cdecl FUN_004e5f84(uint *buffer);
void __stdcall __vstub_4e6028(void);
void __cdecl FUN_004e6038(undefined1 *param_1,undefined1 *param_2);
void __cdecl FUN_004e6060(undefined1 *param_1,uint param_2);
void __cdecl FUN_004e6244(undefined1 *param_1,uint param_2,int param_3,undefined4 param_4);
void __stdcall FUN_004e6270(void);
void __stdcall FUN_004e6284(void);
void __stdcall FUN_004e6294(void);
void __cdecl FUN_004e6298(int param_1,int param_2,UINT exitCode);
void __cdecl FUN_004e62ec(UINT exitCode);
void __cdecl FUN_004e6304(UINT exitCode);
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
void __stdcall FUN_004e6e5c(UINT exitCode);
undefined4 __stdcall FUN_004e6e6c(void);
undefined4 __stdcall FUN_004e6e70(void);
void __cdecl FUN_004e6e74(int *param_1,int param_2);
void __stdcall FUN_004e6f48(void);
void __cdecl FUN_004e6fb4(int param_1);
WORD __stdcall FUN_004e7138(void);
void __stdcall FUN_004e7160(DWORD tlsIndex);
void __stdcall FUN_004e7170(DWORD tlsIndex);
void __stdcall FUN_004e7180(DWORD tlsIndex,LPVOID tlsValue);
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
void __cdecl FUN_004e7909(undefined4 arguments,int param_2);
void __cdecl FUN_004e7926(undefined4 param_1,int param_2,byte param_3,undefined *param_4,uint param_5,int param_6 );
void __cdecl FUN_004e79f6(undefined4 param_1,undefined *param_2,uint param_3);
void __cdecl __raiseException(uint *typeDesc,undefined4 *object,undefined4 objectDtor,undefined *copyCtor,uint copyCtorMask, undefined4 throwFlags,undefined4 throwFile,undefined4 throwLine,undefined4 throwReturn);
void __cdecl _ThrowExceptionLDTC(uint *typeDesc,undefined4 *object,undefined4 objectDtor,undefined *copyCtor,uint copyCtorMask, undefined4 throwFlags,undefined4 throwFile,undefined4 throwLine);
void __cdecl FUN_004e7cf9(undefined4 throwFile,undefined4 throwLine);
void __cdecl FUN_004e7d64(PVOID targetFrame,PEXCEPTION_RECORD exceptionRecord);
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
BOOL __stdcall import_DrawFrameControl(HDC hdc,LPRECT param_2,UINT param_3,UINT param_4);
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
namespace TEADictionaryPropertiesWindows { extern undefined * vftable_TWindow; }   // 0x004ea8a8  PTR_LAB_004ea8a8
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
namespace TEAPropertiesViewWindows { extern undefined * vftable_TWindow; }   // 0x004eb2e0  PTR_LAB_004eb2e0
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
extern char g_fileHistoryInitialised;   // 0x004ecb08  DAT_004ecb08
extern undefined DAT_004ecb45;   // 0x004ecb45
extern undefined DAT_004ece89;   // 0x004ece89
namespace IntroductionViewWindows { extern undefined __entries; }   // 0x004ecf4c  DAT_004ecf4c
namespace IntroductionViewWindows { extern undefined * vftable; }   // 0x004ed04c  PTR_FUN_004ed04c
extern pointer PTR_LAB_004ed114;   // 0x004ed114
extern pointer PTR_LAB_004ed120;   // 0x004ed120
namespace IntroductionViewWindows { extern undefined * vftable_TWindow; }   // 0x004ed12c  PTR_LAB_004ed12c
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
namespace PVWPathListBox { extern undefined * vftable_TWindow; }   // 0x004efe80  PTR_LAB_004efe80
namespace PVWTabs { extern undefined * vftable; }   // 0x004eff14  PTR_FUN_004eff14
extern pointer PTR_LAB_004eff48;   // 0x004eff48
extern pointer PTR_LAB_004eff54;   // 0x004eff54
namespace PVWTabs { extern undefined * vftable_TWindow; }   // 0x004eff60  PTR_LAB_004eff60
namespace PVWURL { extern undefined * vftable; }   // 0x004efff4  PTR_FUN_004efff4
extern pointer PTR_LAB_004f0064;   // 0x004f0064
extern pointer PTR_LAB_004f0070;   // 0x004f0070
namespace PVWURL { extern undefined * vftable_TWindow; }   // 0x004f007c  PTR_LAB_004f007c
namespace PVWCombo { extern undefined * vftable; }   // 0x004f0110  PTR_FUN_004f0110
extern pointer PTR_LAB_004f01a8;   // 0x004f01a8
extern pointer PTR_LAB_004f01b4;   // 0x004f01b4
namespace PVWCombo { extern undefined * vftable_TWindow; }   // 0x004f01c0  PTR_LAB_004f01c0
namespace PVWEnumeration { extern undefined * vftable; }   // 0x004f0254  PTR_FUN_004f0254
extern pointer PTR_LAB_004f02e8;   // 0x004f02e8
extern pointer PTR_LAB_004f02f4;   // 0x004f02f4
namespace PVWEnumeration { extern undefined * vftable_TWindow; }   // 0x004f0300  PTR_LAB_004f0300
namespace PVWUpDown { extern undefined * vftable; }   // 0x004f0394  PTR_FUN_004f0394
extern pointer PTR_LAB_004f03cc;   // 0x004f03cc
extern pointer PTR_LAB_004f03d8;   // 0x004f03d8
namespace PVWUpDown { extern undefined * vftable_TWindow; }   // 0x004f03e4  PTR_LAB_004f03e4
namespace PVWStatic { extern undefined * vftable; }   // 0x004f0478  PTR_FUN_004f0478
extern pointer PTR_LAB_004f04b0;   // 0x004f04b0
extern pointer PTR_LAB_004f04bc;   // 0x004f04bc
namespace PVWStatic { extern undefined * vftable_TWindow; }   // 0x004f04c8  PTR_LAB_004f04c8
namespace PVWEdit { extern undefined * vftable; }   // 0x004f055c  PTR_FUN_004f055c
extern pointer PTR_LAB_004f05c0;   // 0x004f05c0
extern pointer PTR_LAB_004f05cc;   // 0x004f05cc
namespace PVWEdit { extern undefined * vftable_TWindow; }   // 0x004f05d8  PTR_LAB_004f05d8
namespace PVWRichEdit { extern undefined * vftable; }   // 0x004f066c  PTR_FUN_004f066c
extern pointer PTR_LAB_004f06f8;   // 0x004f06f8
extern pointer PTR_LAB_004f0704;   // 0x004f0704
namespace PVWRichEdit { extern undefined * vftable_TWindow; }   // 0x004f0710  PTR_LAB_004f0710
namespace PVWFontButton { extern undefined * vftable; }   // 0x004f07a4  PTR_FUN_004f07a4
extern pointer PTR_LAB_004f07dc;   // 0x004f07dc
extern pointer PTR_LAB_004f07e8;   // 0x004f07e8
namespace PVWFontButton { extern undefined * vftable_TWindow; }   // 0x004f07f4  PTR_LAB_004f07f4
namespace PVWColourButton { extern undefined * vftable; }   // 0x004f0888  PTR_FUN_004f0888
extern pointer PTR_LAB_004f08c0;   // 0x004f08c0
extern pointer PTR_LAB_004f08cc;   // 0x004f08cc
namespace PVWColourButton { extern undefined * vftable_TWindow; }   // 0x004f08d8  PTR_LAB_004f08d8
namespace PVWCheckBox { extern undefined * vftable; }   // 0x004f096c  PTR_FUN_004f096c
extern pointer PTR_LAB_004f09a4;   // 0x004f09a4
extern pointer PTR_LAB_004f09b0;   // 0x004f09b0
namespace PVWCheckBox { extern undefined * vftable_TWindow; }   // 0x004f09bc  PTR_LAB_004f09bc
namespace PVWRadioButton { extern undefined * vftable; }   // 0x004f0a50  PTR_FUN_004f0a50
extern pointer PTR_LAB_004f0a90;   // 0x004f0a90
extern pointer PTR_LAB_004f0a9c;   // 0x004f0a9c
namespace PVWRadioButton { extern undefined * vftable_TWindow; }   // 0x004f0aa8  PTR_LAB_004f0aa8
namespace PVWPushButton { extern undefined * vftable; }   // 0x004f0b3c  PTR_FUN_004f0b3c
extern pointer PTR_LAB_004f0b74;   // 0x004f0b74
extern pointer PTR_LAB_004f0b80;   // 0x004f0b80
namespace PVWPushButton { extern undefined * vftable_TWindow; }   // 0x004f0b8c  PTR_LAB_004f0b8c
namespace PropertiesViewWindows { extern undefined * vftable; }   // 0x004f0c20  PTR_FUN_004f0c20
extern pointer PTR_LAB_004f0ce8;   // 0x004f0ce8
extern pointer PTR_LAB_004f0cf4;   // 0x004f0cf4
namespace PropertiesViewWindows { extern undefined * vftable_TWindow; }   // 0x004f0d00  PTR_LAB_004f0d00
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
namespace PrintPreviewWindow { extern undefined * vftable_TWindow; }   // 0x004f1f74  PTR_LAB_004f1f74
namespace PrintPreviewWindow { extern undefined * vftable_TFrameWindow; }   // 0x004f2004  PTR_LAB_004f2004
extern undefined DAT_004f2070;   // 0x004f2070
namespace MatchListLabelWindows { extern undefined * vftable; }   // 0x004f2138  PTR_FUN_004f2138
extern pointer PTR_LAB_004f2170;   // 0x004f2170
extern pointer PTR_LAB_004f217c;   // 0x004f217c
namespace MatchListLabelWindows { extern undefined * vftable_TWindow; }   // 0x004f2188  PTR_LAB_004f2188
extern undefined DAT_004f223c;   // 0x004f223c
namespace MatchListWindows { extern undefined __entries; }   // 0x004f2240  DAT_004f2240
namespace MatchListWindows { extern undefined * vftable; }   // 0x004f2c28  PTR_FUN_004f2c28
extern pointer PTR_LAB_004f2c68;   // 0x004f2c68
extern pointer PTR_LAB_004f2c74;   // 0x004f2c74
namespace MatchListWindows { extern undefined * vftable_TWindow; }   // 0x004f2c80  PTR_LAB_004f2c80
extern undefined * PTR_s_ptr_004f2d24;   // 0x004f2d24
extern undefined4 DAT_004f2d28;   // 0x004f2d28
extern undefined1 DAT_004f2d2c;   // 0x004f2d2c
namespace GridAboutBoxViewWindows { extern undefined * vftable; }   // 0x004f3248  PTR_FUN_004f3248
extern pointer PTR_LAB_004f3310;   // 0x004f3310
extern pointer PTR_LAB_004f331c;   // 0x004f331c
namespace GridAboutBoxViewWindows { extern undefined * vftable_TWindow; }   // 0x004f3328  PTR_LAB_004f3328
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
namespace PrintPreviewWindowTEA { extern undefined * vftable_TWindow; }   // 0x004f4d3c  PTR_LAB_004f4d3c
namespace PrintPreviewWindowTEA { extern undefined * vftable_TFrameWindow; }   // 0x004f4dcc  PTR_LAB_004f4dcc
namespace TEAPrintoutFeeder { extern undefined * vftable; }   // 0x004f4ec0  PTR_FUN_004f4ec0
extern undefined1 DAT_004f50d8;   // 0x004f50d8
namespace TSDictionarySaveTEADialog { extern undefined * vftable; }   // 0x004f5280  PTR_FUN_004f5280
extern undefined * PTR_LAB_004f5358;   // 0x004f5358
extern pointer PTR_LAB_004f5374;   // 0x004f5374
extern pointer PTR_LAB_004f5380;   // 0x004f5380
namespace TSDictionarySaveTEADialog { extern undefined * vftable_TWindow; }   // 0x004f538c  PTR_LAB_004f538c
namespace TSDictionarySaveDialog { extern undefined __entries; }   // 0x004f551c  DAT_004f551c
namespace TSDictionarySaveDialog { extern undefined * vftable; }   // 0x004f5990  PTR_FUN_004f5990
extern undefined * PTR_LAB_004f5a68;   // 0x004f5a68
extern pointer PTR_LAB_004f5a84;   // 0x004f5a84
extern pointer PTR_LAB_004f5a90;   // 0x004f5a90
namespace TSDictionarySaveDialog { extern undefined * vftable_TWindow; }   // 0x004f5a9c  PTR_LAB_004f5a9c
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
extern DWORD g_ddeInstance;   // 0x004f74f8  DAT_004f74f8
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
namespace TEAViewWindows { extern undefined * vftable_TWindow; }   // 0x004fa0ac  PTR_LAB_004fa0ac
namespace SearchModeButton { extern undefined * vftable; }   // 0x004fa140  PTR_FUN_004fa140
extern pointer PTR_LAB_004fa17c;   // 0x004fa17c
extern pointer PTR_LAB_004fa188;   // 0x004fa188
extern undefined * PTR_LAB_004fa194;   // 0x004fa194
namespace TEAProgressBar { extern undefined * vftable; }   // 0x004fa228  PTR_FUN_004fa228
extern pointer PTR_LAB_004fa260;   // 0x004fa260
extern pointer PTR_LAB_004fa26c;   // 0x004fa26c
namespace TEAProgressBar { extern undefined * vftable_TWindow; }   // 0x004fa278  PTR_LAB_004fa278
extern undefined * g_anagramStageOps;   // 0x004fa308  PTR_FUN_004fa308
namespace LookupPropertiesViewWindows { extern undefined * vftable; }   // 0x004fb100  PTR_FUN_004fb100
extern pointer PTR_LAB_004fb1c8;   // 0x004fb1c8
extern pointer PTR_LAB_004fb1d4;   // 0x004fb1d4
namespace LookupPropertiesViewWindows { extern undefined * vftable_TWindow; }   // 0x004fb1e0  PTR_LAB_004fb1e0
extern undefined DAT_004fb288;   // 0x004fb288
extern undefined4 DAT_004fb350;   // 0x004fb350
extern undefined DAT_004fb4e9;   // 0x004fb4e9
namespace TEAQuickReferenceViewWindows { extern undefined * vftable; }   // 0x004fc6fc  PTR_FUN_004fc6fc
extern pointer PTR_LAB_004fc7c4;   // 0x004fc7c4
extern pointer PTR_LAB_004fc7d0;   // 0x004fc7d0
namespace TEAQuickReferenceViewWindows { extern undefined * vftable_TWindow; }   // 0x004fc7dc  PTR_LAB_004fc7dc
namespace TabbyPropertiesViewWindows { extern undefined __entries; }   // 0x004fc888  DAT_004fc888
namespace TabbyPropertiesViewWindows { extern undefined * vftable; }   // 0x004fca18  PTR_FUN_004fca18
extern pointer PTR_LAB_004fcae4;   // 0x004fcae4
extern pointer PTR_LAB_004fcaf0;   // 0x004fcaf0
namespace TabbyPropertiesViewWindows { extern undefined * vftable_TWindow; }   // 0x004fcafc  PTR_LAB_004fcafc
extern int g_exclusiveVariables;   // 0x004fcb84  DAT_004fcb84
extern char DAT_004fcb88;   // 0x004fcb88
extern undefined DAT_004fcb8c;   // 0x004fcb8c
extern undefined4 DAT_004fcbe8;   // 0x004fcbe8
extern char DAT_004fcbec;   // 0x004fcbec
namespace OWL::TRichEdit { extern undefined __entries; }   // 0x004fcc28  DAT_004fcc28
namespace OWL::TRichEditModule { extern undefined * vftable; }   // 0x004fcfe8  PTR_FUN_004fcfe8
namespace OWL::TEditSearch { extern undefined * vftable; }   // 0x004fcffc  PTR_FUN_004fcffc
extern pointer PTR_LAB_004fd05c;   // 0x004fd05c
extern pointer PTR_LAB_004fd068;   // 0x004fd068
namespace OWL::TEditSearch { extern undefined * vftable_TWindow; }   // 0x004fd074  PTR_LAB_004fd074
namespace OWL::TEditFile { extern undefined * vftable; }   // 0x004fd108  PTR_FUN_004fd108
extern pointer PTR_LAB_004fd188;   // 0x004fd188
extern pointer PTR_LAB_004fd194;   // 0x004fd194
namespace OWL::TEditFile { extern undefined * vftable_TWindow; }   // 0x004fd1a0  PTR_LAB_004fd1a0
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
namespace DefinitionViewFrame { extern undefined * vftable_TWindow; }   // 0x004fef68  PTR_LAB_004fef68
namespace DefinitionViewFrame { extern undefined * vftable_TFrameWindow; }   // 0x004feff8  PTR_LAB_004feff8
namespace DefinitionViewWindows { extern undefined * vftable; }   // 0x004ff050  PTR_FUN_004ff050
extern pointer PTR_LAB_004ff124;   // 0x004ff124
extern pointer PTR_LAB_004ff130;   // 0x004ff130
namespace DefinitionViewWindows { extern undefined * vftable_TWindow; }   // 0x004ff13c  PTR_LAB_004ff13c
namespace DefinitionRichEdit { extern undefined * vftable; }   // 0x004ff1d0  PTR_FUN_004ff1d0
extern pointer PTR_LAB_004ff25c;   // 0x004ff25c
extern pointer PTR_LAB_004ff268;   // 0x004ff268
namespace DefinitionRichEdit { extern undefined * vftable_TWindow; }   // 0x004ff274  PTR_LAB_004ff274
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
namespace TEAFrameWindow { extern undefined * vftable_TWindow; }   // 0x004ffd58  PTR_LAB_004ffd58
namespace TEAFrameWindow { extern undefined * vftable_TFrameWindow; }   // 0x004ffde8  PTR_LAB_004ffde8
extern undefined DAT_004ffe56;   // 0x004ffe56
namespace ExternalLookupViewWindows { extern undefined * vftable; }   // 0x00500064  PTR_FUN_00500064
extern pointer PTR_LAB_0050012c;   // 0x0050012c
extern pointer PTR_LAB_00500138;   // 0x00500138
namespace ExternalLookupViewWindows { extern undefined * vftable_TWindow; }   // 0x00500144  PTR_LAB_00500144
namespace DictionaryListViewWindows { extern undefined __entries; }   // 0x00500270  DAT_00500270
namespace DictionaryListViewWindows { extern undefined * vftable; }   // 0x0050067c  PTR_FUN_0050067c
extern pointer PTR_LAB_00500744;   // 0x00500744
extern pointer PTR_LAB_00500750;   // 0x00500750
namespace DictionaryListViewWindows { extern undefined * vftable_TWindow; }   // 0x0050075c  PTR_LAB_0050075c
extern undefined DAT_005007e4;   // 0x005007e4
namespace TEAStartupTipsViewWindows { extern undefined * vftable; }   // 0x00501188  PTR_FUN_00501188
extern pointer PTR_LAB_00501250;   // 0x00501250
extern pointer PTR_LAB_0050125c;   // 0x0050125c
namespace TEAStartupTipsViewWindows { extern undefined * vftable_TWindow; }   // 0x00501268  PTR_LAB_00501268
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
extern undefined4 g_rtfSymbols;   // 0x0050171c  DAT_0050171c
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
namespace LicenseViewWindows { extern undefined * vftable_TWindow; }   // 0x00503c98  PTR_LAB_00503c98
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
namespace OWL::TChooseColorDialog { extern undefined * vftable_TWindow; }   // 0x00505510  PTR_LAB_00505510
extern undefined DAT_00505598;   // 0x00505598
namespace OWL::TChooseFontDialog { extern undefined * vftable; }   // 0x00505604  PTR_FUN_00505604
extern pointer PTR_LAB_00505648;   // 0x00505648
extern pointer PTR_LAB_00505654;   // 0x00505654
namespace OWL::TChooseFontDialog { extern undefined * vftable_TWindow; }   // 0x00505660  PTR_LAB_00505660
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
namespace OWL::TCommonDialog { extern undefined * vftable_TWindow; }   // 0x005059c4  PTR_LAB_005059c4
namespace OWL::TFile { extern pointer vftable; }   // 0x00505a90  PTR_FUN_00505a90
extern undefined * PTR_FUN_00505a98;   // 0x00505a98
namespace OWL::TControlBar { extern undefined * vftable; }   // 0x00505b90  PTR_FUN_00505b90
extern undefined * PTR_LAB_00505c04;   // 0x00505c04
extern pointer PTR_LAB_00505c24;   // 0x00505c24
extern pointer PTR_LAB_00505c30;   // 0x00505c30
namespace OWL::TControlBar { extern undefined * vftable_TWindow; }   // 0x00505c3c  PTR_LAB_00505c3c
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
namespace OWL::TGadgetWindow { extern undefined * vftable_TWindow; }   // 0x00507034  PTR_LAB_00507034
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
namespace OWL::TLayoutWindow { extern undefined * vftable_TWindow; }   // 0x005076f0  PTR_LAB_005076f0
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
namespace OWL::TMessageBar { extern undefined * vftable_TWindow; }   // 0x005081e4  PTR_LAB_005081e4
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
namespace OWL::TTabControl { extern undefined * vftable_TWindow; }   // 0x005095b8  PTR_LAB_005095b8
extern uint DAT_00509640;   // 0x00509640
extern undefined4 DAT_00509644;   // 0x00509644
extern undefined4 DAT_00509648;   // 0x00509648
namespace OWL::TTextGadget { extern undefined * vftable; }   // 0x005096c8  PTR_FUN_005096c8
extern undefined DAT_00509730;   // 0x00509730
namespace OWL::TTooltip { extern undefined * vftable; }   // 0x0050980c  PTR_FUN_0050980c
extern pointer PTR_LAB_0050983c;   // 0x0050983c
extern pointer PTR_LAB_00509848;   // 0x00509848
namespace OWL::TTooltip { extern undefined * vftable_TWindow; }   // 0x00509854  PTR_LAB_00509854
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
namespace OWL::TUrlLink { extern undefined * vftable_TWindow; }   // 0x0050aad8  PTR_LAB_0050aad8
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
namespace OWL::TButton { extern undefined * vftable_TWindow; }   // 0x0050c064  PTR_LAB_0050c064
namespace OWL::TButton::Streamer { extern undefined * vftable; }   // 0x0050c1f4  PTR_FUN_0050c1f4
extern undefined DAT_0050c204;   // 0x0050c204
namespace OWL::TCheckBox { extern undefined * vftable; }   // 0x0050c258  PTR_FUN_0050c258
extern pointer PTR_LAB_0050c290;   // 0x0050c290
extern pointer PTR_LAB_0050c29c;   // 0x0050c29c
namespace OWL::TCheckBox { extern undefined * vftable_TWindow; }   // 0x0050c2a8  PTR_LAB_0050c2a8
extern undefined DAT_0050c388;   // 0x0050c388
namespace OWL::TComboBox { extern undefined * vftable; }   // 0x0050c420  PTR_FUN_0050c420
extern pointer PTR_LAB_0050c4b4;   // 0x0050c4b4
extern pointer PTR_LAB_0050c4c0;   // 0x0050c4c0
namespace OWL::TComboBox { extern undefined * vftable_TWindow; }   // 0x0050c4cc  PTR_LAB_0050c4cc
extern undefined DAT_0050c59c;   // 0x0050c59c
namespace OWL::TComboBox::Streamer { extern undefined * vftable; }   // 0x0050c790  PTR_FUN_0050c790
extern undefined DAT_0050c7a0;   // 0x0050c7a0
namespace OWL::TControl { extern undefined * vftable; }   // 0x0050c860  PTR_FUN_0050c860
extern pointer PTR_LAB_0050c88c;   // 0x0050c88c
extern pointer PTR_LAB_0050c898;   // 0x0050c898
namespace OWL::TControl { extern undefined * vftable_TWindow; }   // 0x0050c8a4  PTR_LAB_0050c8a4
namespace OWL::TControl::Streamer { extern undefined * vftable; }   // 0x0050ca24  PTR_FUN_0050ca24
extern undefined DAT_0050ca80;   // 0x0050ca80
namespace OWL::TDecoratedFrame { extern undefined __entries; }   // 0x0050ca84  DAT_0050ca84
namespace OWL::TDecoratedFrame { extern undefined * vftable; }   // 0x0050cc2c  PTR_FUN_0050cc2c
extern undefined * PTR_LAB_0050cc70;   // 0x0050cc70
extern pointer PTR_LAB_0050cc88;   // 0x0050cc88
extern pointer PTR_LAB_0050cc94;   // 0x0050cc94
namespace OWL::TDecoratedFrame { extern undefined * vftable_TWindow; }   // 0x0050cca0  PTR_LAB_0050cca0
namespace OWL::TDecoratedFrame { extern undefined * vftable_TFrameWindow; }   // 0x0050cd30  PTR_LAB_0050cd30
extern int * DAT_0050cd7c;   // 0x0050cd7c
extern undefined DAT_0050cd80;   // 0x0050cd80
namespace OWL::TDialog { extern undefined * vftable; }   // 0x0050cea0  PTR_FUN_0050cea0
extern pointer PTR_LAB_0050cee4;   // 0x0050cee4
extern pointer PTR_LAB_0050cef0;   // 0x0050cef0
namespace OWL::TDialog { extern undefined * vftable_TWindow; }   // 0x0050cefc  PTR_LAB_0050cefc
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
namespace OWL::TEdit { extern undefined * vftable_TWindow; }   // 0x0050e3bc  PTR_LAB_0050e3bc
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
namespace OWL::TFrameWindow { extern undefined * vftable_TWindow; }   // 0x0050faec  PTR_LAB_0050faec
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
namespace OWL::TFormattedStatic { extern undefined * vftable_TWindow; }   // 0x00511570  PTR_LAB_00511570
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
namespace OWL::TTinyCaption { extern undefined * vftable_TWindow; }   // 0x00511e40  PTR_LAB_00511e40
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
namespace OWL::TTreeWindow { extern undefined * vftable_TWindow; }   // 0x00512994  PTR_LAB_00512994
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
extern int g_nullStringRep;   // 0x00513d58  DAT_00513d58
extern undefined g_emptyStringData;   // 0x00513d64  DAT_00513d64
extern undefined DAT_00513dc4;   // 0x00513dc4
extern uint g_stringNpos;   // 0x005140ac  DAT_005140ac
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
extern undefined g_fileHistory;   // 0x00519858  DAT_00519858
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
extern undefined4 g_balance;   // 0x0051a860  DAT_0051a860
extern int g_balanceCount;   // 0x0051ac60  DAT_0051ac60
extern undefined4 g_varsActive;   // 0x0051ac64  DAT_0051ac64
extern undefined1 g_varValues;   // 0x0051ac68  DAT_0051ac68
extern undefined g_varValuesEnd;   // 0x0051ac72  DAT_0051ac72
extern undefined DAT_0051ac74;   // 0x0051ac74
extern UINT g_helpMessageId;   // 0x0051ac78  DAT_0051ac78
extern HHOOK DAT_0051ac7c;   // 0x0051ac7c
extern undefined4 DAT_0051ac80;   // 0x0051ac80
extern int g_contextMenuId;   // 0x0051ac84  DAT_0051ac84
extern undefined4 DAT_0051ac88;   // 0x0051ac88
extern HWND g_hWndMain;   // 0x0051ac8c  DAT_0051ac8c
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

// ---- member offsets (8 classes): byte offset of each known member from the start of the object ----
// Member functions write `self + m_name` (or `self[m_name / 4]` when Ghidra typed `self` as an int pointer).
namespace Common { enum : int {
  m_path = 0x0,   // std::string — path of common.ini
  m_pathData = 0x8,   // char* — character data of path
}; }
namespace InputEngine { enum : int {
  m_next = 0x0,   // InputEngine* — next engine in the global list
  m_prev = 0x4,   // InputEngine* — previous engine in the global list
  m_dictList = 0x8,   // TSDictionaryList* — dictionary list
  m_dictIndex = 0xc,   // int — dictionary within the list
  m_dict = 0x10,   // Dictionary* — the dictionary being read
  m_hFile = 0x14,   // HANDLE — the open .tsd file (INVALID_HANDLE_VALUE when closed)
  m_fileOffset = 0x18,   // uint — file position to resume reading at
  m_wordsScanned = 0x1c,   // int — words decoded so far
  m_letters = 0x20,   // byte[] — the current word's letter classes (0xff-terminated), followed by punctuation and filtered copies
  m_rawWord = 0x408,   // char[] — the current word as stored, then its annotation
  m_readBuf = 0x7f0,   // byte[0x4000] — file read buffer
  m_bitPtr = 0x47f0,   // uint* — next 32-bit word of the bit stream
  m_bitEnd = 0x47f4,   // uint* — end of the buffered bit stream
  m_bitPos = 0x47f8,   // int — bits already used of the current word
  m_length = 0x47fc,   // int — word length being read
  m_linkMode = 0x4800,   // char — TSD1 link bits: 2 while reading words with link flags
  m_hasLinks = 0x4804,   // int — the current word has definitions or an occurrence list
  m_linkIndex = 0x4808,   // int — 1-based count of linked words so far
}; }
namespace MatchEngine { enum : int {
  m_bc = 0x1008,   // std::string — compiled bytecode of the leaf
  m_bcData = 0x1010,   // char* — character data of bc
  m_minLen = 0x1018,   // int — fewest letters a match can have
  m_maxLen = 0x101c,   // int — most letters a match can have (above 100: unlimited)
  m_valid = 0x1020,   // int — the pattern compiled
  m_status = 0x1024,   // char — pattern error code (0 = none)
  m_punctMode = 0x1025,   // char[256] — per byte: 0 ignore, 0xff significant punctuation, 0xfe case-exact letter
  m_needsRaw = 0x1128,   // int — the pattern looks at punctuation or exact case
  m_dictList = 0x112c,   // TSDictionaryList* — dictionaries the leaf was compiled for
  m_dictIndex = 0x1130,   // int — which dictionary of the list
  m_shortest = 0x1134,   // int — shortest-word setting
  m_longest = 0x1138,   // int — longest-word setting
  m_curLen = 0x113c,   // int — length of the words being tested
  m_slack = 0x1140,   // int — curLen - minLen
  m_lastOp = 0x1144,   // char — last opcode emitted while compiling
  m_opCount = 0x1148,   // int — opcodes emitted while compiling
  m_matcher = 0x114c,   // code* — matcher chosen by Compile (MatchGeneral or a fast path)
}; }
namespace MatchEngineSet { enum : int {
  m_engines = 0x0,   // std::vector — one MatchEngine per leaf (null where the logic has a parenthesis)
  m_enginesBegin = 0x4,   // MatchEngine** — engines begin
  m_enginesEnd = 0x8,   // MatchEngine** — engines end
  m_enginesCapacityEnd = 0x18,   // MatchEngine** — engines end of storage
  m_ops = 0x20,   // std::string — logic opcodes, one per leaf slot
  m_opsData = 0x28,   // char* — character data of ops
  m_status = 0x30,   // char — error code of the first invalid leaf
}; }
namespace Pattern { enum : int {
  m_count = 0x0,   // int — number of pooled strings
  m_pool = 0x8,   // std::string[256] — the pooled sub-patterns and choice-list letter sets (16 bytes each)
}; }
namespace Persist { enum : int {
  m_create = 0x0,   // char — create the key when missing
  m_hKey = 0x4,   // HKEY — the open registry key
}; }
namespace TSDictionaryList { enum : int {
  m_paths = 0x0,   // char* — the ';'-separated path list
  m_dicts = 0x8,   // std::vector — the dictionaries (Dictionary pointers)
  m_dictsBegin = 0xc,   // Dictionary** — dicts begin
  m_dictsEnd = 0x10,   // Dictionary** — dicts end
  m_dictsCapacityEnd = 0x20,   // Dictionary** — dicts end of storage
}; }
namespace TSDictionaryList { namespace Dictionary { enum : int {
  m_huffman = 0x4,   // int[768][2] — per symbol {code length, letter class}, then decoding-tree nodes {child0, child1} (root 256)
  m_lookahead8 = 0x1804,   // int[256] — node or symbol reached after 8 bits
  m_lookahead8Len = 0x1c04,   // int[256] — code length of that symbol
  m_loaded = 0x2004,   // int — the header loaded
  m_fileTime = 0x2008,   // FILETIME — last-write time when loaded
  m_refCount = 0x2010,   // int — lists sharing this dictionary
  m_description = 0x2014,   // char[1000] — header description
  m_format = 0x23fc,   // int — 0 = TSD0, 1 = TSD1
  m_defStart = 0x2400,   // uint — definition section start (TSD1)
  m_defPass2 = 0x2404,   // uint — start of headword definitions
  m_defEnd = 0x2408,   // uint — definition section end
  m_numLengths = 0x240c,   // ushort — longest word length + 1
  m_wordStreamOffset = 0x2410,   // uint[101] — file offset of each length's word stream
  m_wordCount = 0x25a4,   // uint[101] — words of each length
  m_occIndexOffset = 0x2738,   // uint[101] — full-text index of words found only in definitions
  m_defLinkOffset = 0x28cc,   // uint[101] — link table of words with definitions
  m_defLinkCount = 0x2a60,   // uint[101] — entries in that table
  m_numUsedLetters = 0x2bf4,   // short — letter classes used
  m_numTotalLetters = 0x2bf6,   // short — letter classes in the alphabet
  m_canonical = 0x2bf8,   // char[256] — letter class -> display byte
  m_symbolByte = 0x2cf8,   // char[256] — Huffman symbol -> byte value
  m_numCalibrationRows = 0x2df8,   // ushort — rows of the calibration matrix
  m_calibration = 0x2dfc,   // char** — the calibration matrix
  m_lengthTables = 0x2e00,   // void*[101] — per-length tables loaded on demand
  m_path = 0x2f94,   // std::string — the .tsd path
  m_pathData = 0x2f9c,   // char* — character data of path
}; }}

} // namespace tea
