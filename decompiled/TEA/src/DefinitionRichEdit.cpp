// TEA.exe — application module "DefinitionRichEdit"
// 5 functions, 0x0046a010..0x0046a360. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0046a010  DefinitionRichEdit::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: DefinitionRichEdit::Find [rtti:vtable]; DefinitionRichEdit::vf8 [rtti:vtable]
undefined4 __cdecl DefinitionRichEdit::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&DefinitionRichEdit::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = PVWRichEdit::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a058  DefinitionRichEdit::DefinitionRichEdit   (293 bytes)   [rtti:vtable-store constructor]
//   constructor: stores DefinitionRichEdit's vtable at its vptr offset (+0xc) in this
int * __cdecl DefinitionRichEdit::DefinitionRichEdit(int *self,int vbasesBuilt,undefined4 *param_3,int *param_4)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fd480);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x20);
    self[0x20] = (int)(self + 0x1d);
    self[0x21] = (int)(self + 0x1e);
    self[1] = (int)(self + 0x1d);
    self[2] = (int)(self + 0x1e);
    self[0x1c] = 0;
    self[0x1f] = 0;
    self[0x1d] = (int)&OWL::TEventHandler::vftable;
    self[0x1e] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x20,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  PVWRichEdit::PVWRichEdit(self,1,param_3,0x240e,param_4,1);
  self[3] = (int)&DefinitionRichEdit::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004ff25c;
  *(undefined ***)self[2] = &PTR_LAB_004ff268;
  *(undefined ***)(*self + 8) = &DefinitionRichEdit::vftable_TWindow;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a1a4  DefinitionRichEdit::~DefinitionRichEdit   (215 bytes)   [rtti:dtor destructor]
//   written in code as DefinitionRichEdit::_dtor
void __cdecl DefinitionRichEdit::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fd4a4);
  if (self != (int *)0x0) {
    self[3] = (int)&DefinitionRichEdit::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004ff25c;
    *(undefined ***)self[2] = &PTR_LAB_004ff268;
    *(undefined ***)(*self + 8) = &DefinitionRichEdit::vftable_TWindow;
    PVWRichEdit::_dtor(self,0);
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x20,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x1e,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a27c  DefinitionRichEdit::vf31   (64 bytes)   [rtti:vtable virtual slot 31]
void __cdecl DefinitionRichEdit::vf31(int *self,int hMenu)

{
  undefined4 *definitionViewWindows;
  int iVar2;
  
  if (*(int *)(*self + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*self + 0x14) + 8);
  }
  definitionViewWindows = FUN_004dd744(*(int *)(*self + 0x14),iVar2,(int *)&DAT_0040299c,(int *)&DAT_0046a2bc,0)
  ;
  DefinitionViewWindows::BuildContextMenu((int)definitionViewWindows,hMenu);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a360  DefinitionRichEdit::EvKeyDown   (97 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_KEYDOWN
void __cdecl DefinitionRichEdit::EvKeyDown(int *self,int param_2)

{
  int *definitionViewWindows;
  int iVar2;
  
  if (*(int *)(*self + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*self + 0x14) + 8);
  }
  definitionViewWindows = FUN_004dd744(*(int *)(*self + 0x14),iVar2,(int *)&DAT_0040299c,(int *)&DAT_0046a2bc,0)
  ;
  if (param_2 == 8) {
    DefinitionViewWindows::CmShared_46a924(definitionViewWindows,0x316a);
  }
  else {
    OWL::TRichEdit::EvKeyDown(self);
  }
  return;
}

} // namespace tea
