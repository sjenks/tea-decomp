// TEA.exe — runtime / library code "OWL_TButton"
// 8 functions, 0x004abb94..0x004ac3b4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004abb94  OWL::TButton::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TButton::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TButton::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&OWL::TButton::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TControl::vf8(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004abd9c  OWL::TButton::~TButton   (249 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TButton::_dtor
void __cdecl OWL::TButton::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50c130);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&OWL::TButton::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_0050c04c;
    *(undefined ***)param_1[2] = &PTR_LAB_0050c058;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050c064;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -2;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -2;
    OWL::TControl::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 2;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 2;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x26),0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x1e),0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004abe98  OWL::TButton::vf9   (31 bytes)   [rtti:vtable virtual slot 9]
char * __cdecl OWL::TButton::vf9(int *param_1)

{
  if (*(char *)(*(int *)(*param_1 + 0x6c) + 0x4d) != '\0') {
    return "BorBtn";
  }
  return "BUTTON";
}

// ----------------------------------------------------------------------------------------------------
// 0x004abeb8  OWL::TButton::vf10   (52 bytes)   [rtti:vtable virtual slot 10]
void __cdecl OWL::TButton::vf10(int *param_1)

{
  if (((char)param_1[5] != '\0') && ((*(uint *)(*param_1 + 0x18) & 0xb) == 0xb)) {
    FUN_004a6094(*(int *)(*param_1 + 0x14),0x401,*(undefined4 *)(*param_1 + 0x34),0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004abeec  OWL::TButton::EvGetDlgCode   (53 bytes)   [owl:response-table message-handler]
//   WM_GETDLGCODE
undefined4 __cdecl OWL::TButton::EvGetDlgCode(int *param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(*param_1 + 0x18) & 0xb) != 0xb) {
    uVar1 = FUN_004a5774(*param_1);
    return uVar1;
  }
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    return 0x2010;
  }
  return 0x2020;
}

// ----------------------------------------------------------------------------------------------------
// 0x004abf24  OWL::TButton::EvMsg_f4   (93 bytes)   [owl:response-table message-handler]
//   message 0x00f4
undefined4 __cdecl OWL::TButton::EvMsg_f4(int *param_1,int param_2)

{
  if ((*(uint *)(*param_1 + 0x18) & 0xb) == 0xb) {
    if (param_2 == 1) {
      *(undefined1 *)((int)param_1 + 0x15) = 1;
      (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
    }
    else if (param_2 == 0) {
      *(undefined1 *)((int)param_1 + 0x15) = 0;
      (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
    }
    else {
      FUN_004a5774(*param_1);
    }
  }
  else {
    FUN_004a5774(*param_1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ac220  OWL::TButton::Streamer::vf2   (50 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TButton::Streamer::vf2(int param_1,int *param_2)

{
  FUN_004ac254(*(int *)(param_1 + 8),param_2);
  FUN_0049a31c(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ac3b4  OWL::TButton::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TButton::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea
