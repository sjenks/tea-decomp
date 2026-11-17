// TEA.exe — application module "DefinitionRichEdit"
// 5 functions, 0x0046a010..0x0046a360. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0046a010  DefinitionRichEdit::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: DefinitionRichEdit::vf8 [rtti:vtable]
undefined4 __cdecl DefinitionRichEdit::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&DefinitionRichEdit::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = PVWRichEdit::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a058  FUN_0046a058   (293 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0046a058(int *param_1,int param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fd480);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x20);
    param_1[0x20] = (int)(param_1 + 0x1d);
    param_1[0x21] = (int)(param_1 + 0x1e);
    param_1[1] = (int)(param_1 + 0x1d);
    param_1[2] = (int)(param_1 + 0x1e);
    param_1[0x1c] = 0;
    param_1[0x1f] = 0;
    param_1[0x1d] = (int)&OWL::TEventHandler::vftable;
    param_1[0x1e] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x20,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_00419c00(param_1,1,param_3,0x240e,param_4,1);
  param_1[3] = (int)&DefinitionRichEdit::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004ff25c;
  *(undefined ***)param_1[2] = &PTR_LAB_004ff268;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004ff274;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a1a4  DefinitionRichEdit::~DefinitionRichEdit   (215 bytes)   [rtti:dtor destructor]
//   written in code as DefinitionRichEdit::_dtor
void __cdecl DefinitionRichEdit::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fd4a4);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&DefinitionRichEdit::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004ff25c;
    *(undefined ***)param_1[2] = &PTR_LAB_004ff268;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004ff274;
    PVWRichEdit::_dtor(param_1,0);
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x20,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x1e,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a27c  DefinitionRichEdit::vf31   (64 bytes)   [rtti:vtable virtual slot 31]
void __cdecl DefinitionRichEdit::vf31(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 8);
  }
  puVar1 = FUN_004dd744(*(int *)(*param_1 + 0x14),iVar2,(int *)&DAT_0040299c,(int *)&DAT_0046a2bc,0)
  ;
  FUN_0046b2ec((int)puVar1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a360  DefinitionRichEdit::EvKeyDown   (97 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_KEYDOWN
void __cdecl DefinitionRichEdit::EvKeyDown(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 8);
  }
  piVar1 = FUN_004dd744(*(int *)(*param_1 + 0x14),iVar2,(int *)&DAT_0040299c,(int *)&DAT_0046a2bc,0)
  ;
  if (param_2 == 8) {
    DefinitionViewWindows::CmShared_46a924(piVar1,0x316a);
  }
  else {
    OWL::TRichEdit::EvKeyDown(param_1);
  }
  return;
}

} // namespace tea
