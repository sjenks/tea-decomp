// TSBuild.exe — runtime / library code "OWL_TEditSearch"
// 12 functions, 0x004488a4..0x004497f4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004488a4  OWL::TEditSearch::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TEditSearch::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TEditSearch::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_00422b68(param_1[1],(int *)&OWL::TEditSearch::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TEdit::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044890c  OWL::TEditSearch::~TEditSearch   (318 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TEditSearch::_dtor
void __cdecl OWL::TEditSearch::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x481bc0);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&OWL::TEditSearch::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004782e4;
    *(undefined ***)param_1[2] = &PTR_LAB_004782f0;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004782fc;
    if (param_1[0xc] != 0) {
      (*(code *)**(undefined4 **)(param_1[0xc] + 0xc))();
    }
    OWL::TFindReplaceDialog::TData::_dtor((int)(param_1 + 7),2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1c;
    OWL::TEdit::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1c;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x12,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x10,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448a7c  OWL::TEditSearch::vf20   (54 bytes)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TEditSearch::vf20(int *param_1)

{
  OWL::TEdit::vf20(param_1);
  if (param_1[0xd] != 0) {
    PostMessageA(*(HWND *)(*param_1 + 0xc),0x111,param_1[0xd],0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448d94  OWL::TEditSearch::Cmd24351   (181 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24351)
void __cdecl OWL::TEditSearch::Cmd24351(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  __InitExceptBlockLDTC(0x481c7c);
  if (param_1[0xd] == 0) {
    param_1[0xd] = 0x5f1f;
    if (param_1[0xc] != 0) {
      (*(code *)**(undefined4 **)(param_1[0xc] + 0xc))();
    }
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_0044c248(piVar1,0,*param_1,(int)(param_1 + 7),0,0,0);
    }
    param_1[0xc] = piVar1;
    (**(code **)(*(int *)(param_1[0xc] + 0xc) + 0xc))();
  }
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448e6c  OWL::TEditSearch::Cmd24352   (181 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24352)
void __cdecl OWL::TEditSearch::Cmd24352(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  __InitExceptBlockLDTC(0x481cd4);
  if (param_1[0xd] == 0) {
    param_1[0xd] = 0x5f20;
    if (param_1[0xc] != 0) {
      (*(code *)**(undefined4 **)(param_1[0xc] + 0xc))();
    }
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_0044c38c(piVar1,0,*param_1,(int)(param_1 + 7),0,0,0);
    }
    param_1[0xc] = piVar1;
    (**(code **)(*(int *)(param_1[0xc] + 0xc) + 0xc))();
  }
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448f48  OWL::TEditSearch::CeRange24351to24352   (30 bytes)   [owl:response-table message-handler]
//   one handler for 2 table entries: id 24351; id 24352
//   also: OWL::TEditSearch::CeRange24351to24352 [owl:response-table]
void __cdecl OWL::TEditSearch::CeRange24351to24352(undefined4 param_1,undefined4 *param_2)

{
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448f68  OWL::TEditSearch::Cmd24353   (40 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24353)
void __cdecl OWL::TEditSearch::Cmd24353(int *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_0044c224(param_1[0xc],0);
  }
  param_1[7] = param_1[7] | 8;
  FUN_00448ab4(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448f90  OWL::TEditSearch::CeCmd24353   (43 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24353)
void __cdecl OWL::TEditSearch::CeCmd24353(int param_1,undefined4 *param_2)

{
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448fbc  OWL::TEditSearch::EvRegisteredMsg_448fbc   (46 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
undefined4 __cdecl OWL::TEditSearch::EvRegisteredMsg_448fbc(int *param_1,undefined4 param_2,int param_3)

{
  FUN_0044c224(param_1[0xc],param_3);
  if ((*(byte *)(param_1 + 7) & 0x40) == 0) {
    FUN_00448ab4(param_1);
  }
  else {
    param_1[0xd] = 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004495ac  OWL::TEditSearch::Streamer::vf1   (71 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TEditSearch::Streamer::vf1(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_004495f4(*(int *)(param_1 + 8),param_2);
  FUN_0044c80c(*(int *)(param_1 + 8) + 0x1c,param_2);
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = FUN_0042da9c(param_2);
  *(uint *)(iVar1 + 0x34) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x30) = 0;
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044964c  OWL::TEditSearch::Streamer::vf2   (61 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TEditSearch::Streamer::vf2(int param_1,int *param_2)

{
  FUN_0044968c(*(int *)(param_1 + 8),param_2);
  FUN_0044c88c((undefined4 *)(*(int *)(param_1 + 8) + 0x1c),param_2);
  FUN_0042df1c(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004497f4  OWL::TEditSearch::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TEditSearch::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea
