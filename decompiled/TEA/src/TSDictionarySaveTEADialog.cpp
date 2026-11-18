// TEA.exe — application module "TSDictionarySaveTEADialog"
// 4 functions, 0x0043c6fc..0x0043ca6c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043c6fc  TSDictionarySaveTEADialog::TSDictionarySaveTEADialog   (383 bytes)   [rtti:vtable-store constructor]
//   constructor: stores TSDictionarySaveTEADialog's vtable at its vptr offset (+0xc) in this
int * __cdecl TSDictionarySaveTEADialog::TSDictionarySaveTEADialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7,int param_8,int param_9,int param_10,int param_11)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f523c);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x1da);
    self[0x1da] = (int)(self + 0x1d7);
    self[0x1db] = (int)(self + 0x1d8);
    self[1] = (int)(self + 0x1d7);
    self[2] = (int)(self + 0x1d8);
    self[0x1d6] = 0;
    self[0x1d9] = 0;
    self[0x1d7] = (int)&OWL::TEventHandler::vftable;
    self[0x1d8] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x1da,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -8;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -8;
  TSDictionarySaveDialog::TSDictionarySaveDialog(self,1,param_3,param_4,(uint *)"Save TEA&Sympathy Dictionary",param_6,
               param_7,param_8,param_9,param_10,param_11);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 8;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 8;
  self[3] = (int)&TSDictionarySaveTEADialog::vftable;
  self[0x18] = (int)&PTR_LAB_004f5358;
  *(undefined ***)self[1] = &PTR_LAB_004f5374;
  *(undefined ***)self[2] = &PTR_LAB_004f5380;
  *(undefined ***)(*self + 8) = &TSDictionarySaveTEADialog::vftable_TWindow;
  self[0x1d4] = param_5;
  self[0x1d5] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c8a4  TSDictionarySaveTEADialog::~TSDictionarySaveTEADialog   (267 bytes)   [rtti:dtor destructor]
//   written in code as TSDictionarySaveTEADialog::_dtor
void __cdecl TSDictionarySaveTEADialog::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f5260);
  if (self != (int *)0x0) {
    self[3] = (int)&TSDictionarySaveTEADialog::vftable;
    self[0x18] = (int)&PTR_LAB_004f5358;
    *(undefined ***)self[1] = &PTR_LAB_004f5374;
    *(undefined ***)self[2] = &PTR_LAB_004f5380;
    *(undefined ***)(*self + 8) = &TSDictionarySaveTEADialog::vftable_TWindow;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -8;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -8;
    TSDictionarySaveDialog::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 8;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 8;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x1da,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x1d8,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c9b0  TSDictionarySaveTEADialog::vf50   (187 bytes)   [rtti:vtable virtual slot 50]
undefined4 __cdecl TSDictionarySaveTEADialog::vf50(int *self,undefined4 *param_2,int param_3,uint param_4)

{
  undefined1 entryFlag;
  undefined4 uVar2;
  int lineCount;
  uint *entryText;
  undefined3 regHigh;
  char *pcVar5;
  
  if (self[0x19] == 2) {
    if (param_2 != (undefined4 *)0x0) {
      lineCount = MatchListWindows::GetLineCount(self[0x1d4]);
      if (lineCount <= self[0x1d5]) {
        return 1;
      }
      entryText = (uint *)MatchListWindows::GetEntryText(self[0x1d4],self[0x1d5]);
      entryFlag = MatchListWindows::GetEntryFlag(self[0x1d4],self[0x1d5]);
      pcVar5 = (char *)CONCAT31(regHigh,entryFlag);
      if (param_3 + -2 < (int)pcVar5) {
        pcVar5 = (char *)(param_3 + -2);
      }
      strncpy(param_2,entryText,pcVar5);
      *(char *)((int)param_2 + (int)pcVar5) = '\n';
      *(char *)((int)param_2 + (int)(pcVar5 + 1)) = '\0';
      self[0x1d5] = self[0x1d5] + 1;
    }
    if ((param_4 & 0xfff) == 0) {
      FUN_00498d7c((int *)(*(int *)(*self + 0x6c) + 0x11));
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ca6c  TSDictionarySaveTEADialog::vf51   (16 bytes)   [rtti:vtable virtual slot 51]
void __cdecl TSDictionarySaveTEADialog::vf51(int self)

{
  *(undefined4 *)(self + 0x754) = 0;
  return;
}

} // namespace tea
