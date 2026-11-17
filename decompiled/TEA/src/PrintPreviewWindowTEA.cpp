// TEA.exe — application module "PrintPreviewWindowTEA"
// 6 functions, 0x0043bbb4..0x0043c330. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043bbb4  PrintPreviewWindowTEA::Find   (70 bytes)   [owl:response-table response-table-find; function defined from vtable-slot]
//   also: PrintPreviewWindowTEA::vf14 [rtti:vtable]
undefined4 __cdecl PrintPreviewWindowTEA::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[2],(int *)&PrintPreviewWindowTEA::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = PrintPreviewWindow::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043bbfc  FUN_0043bbfc   (551 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0043bbfc(int *param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,int param_7, undefined1 param_8,uint *param_9,undefined4 param_10,int *param_11)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f4c68);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x14a;
    *(int **)((int)param_1 + 0x14a) = param_1 + 0x30;
    param_1[0x30] = (int)(param_1 + 0x2d);
    param_1[0x31] = (int)(param_1 + 0x2e);
    *(int **)((int)param_1 + 0x14e) = param_1 + 0x2d;
    *(int **)((int)param_1 + 0x152) = param_1 + 0x2e;
    param_1[1] = (int)(param_1 + 0x30);
    param_1[2] = (int)(param_1 + 0x2d);
    param_1[3] = (int)(param_1 + 0x2e);
    param_1[0x2c] = 0;
    param_1[0x2f] = 0;
    *(undefined4 *)((int)param_1 + 0x146) = 0;
    param_1[0x2d] = (int)&OWL::TEventHandler::vftable;
    param_1[0x2e] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x30,1);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
    FUN_004bda48((int *)((int)param_1 + 0x14a),1);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
  }
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -8;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
  FUN_004264ec(param_1,1,param_3,param_4,param_5,0x2c42,param_6,param_7,param_9,param_10,param_11);
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 8;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
  *(undefined ***)((int)param_1 + 0x35) = &PrintPreviewWindowTEA::vftable;
  param_1[4] = (int)&PTR_LAB_004f4d0c;
  *(undefined ***)param_1[2] = &PTR_LAB_004f4d24;
  *(undefined ***)param_1[3] = &PTR_LAB_004f4d30;
  *(undefined ***)(param_1[1] + 8) = &PTR_LAB_004f4d3c;
  *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_004f4dcc;
  *(undefined1 *)(param_1 + 0x2a) = param_8;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043be48  PrintPreviewWindowTEA::~PrintPreviewWindowTEA   (382 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as PrintPreviewWindowTEA::_dtor
void __cdecl PrintPreviewWindowTEA::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f4c8c);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 0x35) = &PrintPreviewWindowTEA::vftable;
    param_1[4] = (int)&PTR_LAB_004f4d0c;
    *(undefined ***)param_1[2] = &PTR_LAB_004f4d24;
    *(undefined ***)param_1[3] = &PTR_LAB_004f4d30;
    *(undefined ***)(param_1[1] + 8) = &PTR_LAB_004f4d3c;
    *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_004f4dcc;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -8;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
    PrintPreviewWindow::_dtor(param_1,0);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 8;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
      OWL::TFrameWindow::_dtor((int *)((int)param_1 + 0x14a),0);
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x30,0);
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x2e,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043bfc8  PrintPreviewWindowTEA::CmShared_43bfc8   (132 bytes)   [owl:response-table message-handler]
//   one handler for 2 table entries: id 9840; id 9850
//   also: PrintPreviewWindowTEA::CmShared_43bfc8 [owl:response-table]
void __cdecl PrintPreviewWindowTEA::CmShared_43bfc8(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = *(uint **)(*(int *)(param_1 + 0x50) + 8);
  if (param_2 == 0x2670) {
    uVar2 = *puVar1 & 0xfffffffe;
  }
  else {
    uVar2 = *puVar1 | 1;
  }
  if (uVar2 != *puVar1) {
    *puVar1 = uVar2;
    (**(code **)(**(int **)(param_1 + 0x54) + 4))();
    (**(code **)(**(int **)(param_1 + 0x54) + 0x24))();
    puVar1[3] = 1;
    puVar1[2] = 1;
    FUN_0049c744(*(int *)(param_1 + 0x68),1);
    (**(code **)(*(int *)(param_1 + 0x35) + 0x50))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c04c  PrintPreviewWindowTEA::CeCmd9850   (26 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(9850)
void __cdecl PrintPreviewWindowTEA::CeCmd9850(undefined4 param_1,undefined4 *param_2)

{
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c330  FUN_0043c330   (87 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0043c330(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f4e28);
  *param_1 = &PrintoutFeeder::vftable;
  *param_1 = &TEAPrintoutFeeder::vftable;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
