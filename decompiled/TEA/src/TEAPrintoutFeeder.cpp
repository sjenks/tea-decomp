// TEA.exe — application module "TEAPrintoutFeeder"
// 11 functions, 0x004047bc..0x0043c6d4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004047bc  TEAPrintoutFeeder::GetLine   (179 bytes)   [analysis]
//   text of a result line to print
char * __cdecl TEAPrintoutFeeder::GetLine(int self,int line,int column)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint i;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  if (*(int *)(self + 4) == *(int *)(line + 4)) {
    *(undefined4 *)(self + 4) = *(undefined4 *)(column + 4);
  }
  if (*(int *)(self + 0x14) == *(int *)(line + 0x14)) {
    *(undefined4 *)(self + 0x14) = *(undefined4 *)(column + 0x14);
  }
  if (*(char *)(self + 0x18) == *(char *)(line + 0x18)) {
    *(undefined1 *)(self + 0x18) = *(undefined1 *)(column + 0x18);
  }
  if (*(char *)(self + 0x19) == *(char *)(line + 0x19)) {
    *(undefined1 *)(self + 0x19) = *(undefined1 *)(column + 0x19);
  }
  if (*(char *)(self + 0x1a) == *(char *)(line + 0x1a)) {
    *(undefined1 *)(self + 0x1a) = *(undefined1 *)(column + 0x1a);
  }
  if (*(char *)(self + 0x1b) == *(char *)(line + 0x1b)) {
    *(undefined1 *)(self + 0x1b) = *(undefined1 *)(column + 0x1b);
  }
  pcVar2 = (char *)(self + 0x20);
  pcVar5 = (char *)(line + 0x20);
  do {
    if (*pcVar2 != *pcVar5) {
      return pcVar2;
    }
    bVar7 = true;
    if (*pcVar2 == '\0') break;
    pcVar6 = pcVar2 + 1;
    if (*pcVar6 != pcVar5[1]) {
      return pcVar2;
    }
    pcVar2 = pcVar2 + 2;
    pcVar5 = pcVar5 + 2;
    bVar7 = *pcVar6 == '\0';
  } while (!bVar7);
  if (bVar7) {
    pcVar2 = (char *)(self + 0x20);
    uVar3 = 0xffffffff;
    pcVar5 = (char *)(column + 0x20);
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    pcVar6 = pcVar2;
    for (i = uVar3 >> 2; i != 0; i = i - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  return pcVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c330  TEAPrintoutFeeder::TEAPrintoutFeeder   (87 bytes)   [rtti:vtable-store constructor]
//   constructor: stores TEAPrintoutFeeder's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl TEAPrintoutFeeder::TEAPrintoutFeeder(undefined4 *self,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f4e28);
  *self = &PrintoutFeeder::vftable;
  *self = &TEAPrintoutFeeder::vftable;
  self[1] = param_2;
  self[2] = 0;
  self[3] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c3a8  TEAPrintoutFeeder::~TEAPrintoutFeeder   (105 bytes)   [rtti:dtor destructor]
//   written in code as TEAPrintoutFeeder::_dtor
undefined4 __cdecl TEAPrintoutFeeder::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  uVar1 = __InitExceptBlockLDTC(0x4f4e4c);
  if (self != (undefined4 *)0x0) {
    *self = &TEAPrintoutFeeder::vftable;
    uVar1 = operator_delete();
    PrintoutFeeder::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      uVar1 = operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c414  TEAPrintoutFeeder::vf1   (18 bytes)   [rtti:vtable virtual slot 1]
void __cdecl TEAPrintoutFeeder::vf1(int self)

{
  MatchListWindows::GetLineCount(*(int *)(self + 4));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c428  TEAPrintoutFeeder::vf2   (18 bytes)   [rtti:vtable virtual slot 2]
int __cdecl TEAPrintoutFeeder::vf2(int self)

{
  int entryCount;
  
  entryCount = MatchListWindows::GetEntryCount(*(int *)(self + 4));
  return entryCount;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c43c  TEAPrintoutFeeder::vf3   (122 bytes)   [rtti:vtable virtual slot 3]
void __cdecl TEAPrintoutFeeder::vf3(int self,int param_2)

{
  int *selectionIterator;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f4e70);
  operator_delete();
  if (param_2 == 0) {
    *(undefined4 *)(self + 8) = 0;
    *(undefined4 *)(self + 0xc) = 0;
  }
  else {
    selectionIterator = (int *)operator_new();
    if (selectionIterator != (int *)0x0) {
      MatchListWindows::SelectionIterator::SelectionIterator(selectionIterator,*(int *)(self + 4));
    }
    *(int **)(self + 8) = selectionIterator;
    *(undefined4 *)(self + 0xc) = 0;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c4ec  TEAPrintoutFeeder::vf4   (33 bytes)   [rtti:vtable virtual slot 4]
void __cdecl TEAPrintoutFeeder::vf4(int self,int n)

{
  if (*(int **)(self + 8) != (int *)0x0) {
    MatchListWindows::SelectionIterator::Seek(*(int **)(self + 8),n);
    return;
  }
  *(int *)(self + 0xc) = n;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c510  TEAPrintoutFeeder::vf5   (106 bytes)   [rtti:vtable virtual slot 5]
int __cdecl TEAPrintoutFeeder::vf5(int self,int param_2)

{
  int index;
  uint *entryText;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f4ea0);
  if (*(int **)(param_2 + 8) == (int *)0x0) {
    index = *(int *)(param_2 + 0xc);
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  }
  else {
    index = MatchListWindows::SelectionIterator::Next(*(int **)(param_2 + 8));
  }
  entryText = (uint *)MatchListWindows::GetEntryText(*(int *)(param_2 + 4),index);
  std::string::string_from_cstr(self,entryText);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c624  CollationCompare   (126 bytes)   [analysis]
//   compares two words letter by letter with the Windows-1252 collation table
//   file placement: inferred (address adjacency)
int __cdecl CollationCompare(byte *param_1,int param_2,byte *param_3,int param_4)

{
  uint in_ECX;
  undefined4 uStack_8;
  
  uStack_8 = in_ECX;
  while( true ) {
    while ((param_2 != 0 &&
           (in_ECX = (uint)(byte)(&DAT_004f50d8)[*param_1], (&DAT_004f50d8)[*param_1] == 0))) {
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    }
    while ((param_4 != 0 &&
           (uStack_8 = (uint)(byte)(&DAT_004f50d8)[*param_3] << 0x18, (&DAT_004f50d8)[*param_3] == 0
           ))) {
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
    }
    if ((param_2 == 0) || (param_4 == 0)) break;
    if ((byte)in_ECX != GH_PIECE(uStack_8, 3, undefined1)) {
      return (in_ECX & 0xff) - (uint)GH_PIECE(uStack_8, 3, undefined1);
    }
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
    param_4 = param_4 + -1;
    param_3 = param_3 + 1;
  }
  if (param_2 != 0) {
    return 1;
  }
  if (param_4 == 0) {
    return 0;
  }
  return -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c6a4  CollationLength   (46 bytes)   [analysis]
//   number of letters of a word under the collation table (punctuation not counted)
//   file placement: inferred (address adjacency)
int __cdecl CollationLength(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while (iVar2 = param_2 + -1, param_2 != 0) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    param_2 = iVar2;
    if ((&DAT_004f50d8)[bVar1] != '\0') {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c6d4  CollationCode   (38 bytes)   [analysis]
//   collation code of a byte (0 for non-letters)
//   file placement: inferred (address adjacency)
undefined4 __cdecl CollationCode(byte ch)

{
  undefined4 uVar1;
  
  if (((&DAT_004f50d8)[ch] == '\0') && ((ch < 0x30 || (0x39 < ch)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

} // namespace tea
