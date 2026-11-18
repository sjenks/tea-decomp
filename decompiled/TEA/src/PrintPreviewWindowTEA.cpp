// TEA.exe — application module "PrintPreviewWindowTEA"
// 5 functions, 0x0043bbb4..0x0043c04c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043bbb4  PrintPreviewWindowTEA::Find   (70 bytes)   [owl:response-table response-table-find; function defined from vtable-slot]
//   also: PrintPreviewWindowTEA::Find [rtti:vtable]; PrintPreviewWindowTEA::vf14 [rtti:vtable]
undefined4 __cdecl PrintPreviewWindowTEA::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_0048e808(self[2],(int *)&PrintPreviewWindowTEA::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = PrintPreviewWindow::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043bbfc  PrintPreviewWindowTEA::PrintPreviewWindowTEA   (551 bytes)   [analysis]
//   constructor
int * __cdecl PrintPreviewWindowTEA::PrintPreviewWindowTEA(int *self,int vbasesBuilt,uint *title,int parent,int printer,int client,int module, undefined1 flag,uint *caption,undefined4 flags,int *rect)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f4c68);
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x14a;
    *(int **)((int)self + 0x14a) = self + 0x30;
    self[0x30] = (int)(self + 0x2d);
    self[0x31] = (int)(self + 0x2e);
    *(int **)((int)self + 0x14e) = self + 0x2d;
    *(int **)((int)self + 0x152) = self + 0x2e;
    self[1] = (int)(self + 0x30);
    self[2] = (int)(self + 0x2d);
    self[3] = (int)(self + 0x2e);
    self[0x2c] = 0;
    self[0x2f] = 0;
    *(undefined4 *)((int)self + 0x146) = 0;
    self[0x2d] = (int)&OWL::TEventHandler::vftable;
    self[0x2e] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x30,1);
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0x96;
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0xe4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xe4;
    OWL::TFrameWindow::TFrameWindow_4bda48((int *)((int)self + 0x14a),1);
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0xe4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xe4;
  }
  *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -8;
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -8;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -8;
  PrintPreviewWindow::PrintPreviewWindow(self,1,title,parent,printer,0x2c42,client,module,caption,flags,rect);
  *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 8;
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 8;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 8;
  *(undefined ***)((int)self + 0x35) = &PrintPreviewWindowTEA::vftable;
  self[4] = (int)&PTR_LAB_004f4d0c;
  *(undefined ***)self[2] = &PTR_LAB_004f4d24;
  *(undefined ***)self[3] = &PTR_LAB_004f4d30;
  *(undefined ***)(self[1] + 8) = &PrintPreviewWindowTEA::vftable_TWindow;
  *(undefined ***)(*self + 0xc) = &PrintPreviewWindowTEA::vftable_TFrameWindow;
  *(undefined1 *)(self + 0x2a) = flag;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043be48  PrintPreviewWindowTEA::~PrintPreviewWindowTEA   (382 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as PrintPreviewWindowTEA::_dtor
void __cdecl PrintPreviewWindowTEA::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f4c8c);
  if (self != (int *)0x0) {
    *(undefined ***)((int)self + 0x35) = &PrintPreviewWindowTEA::vftable;
    self[4] = (int)&PTR_LAB_004f4d0c;
    *(undefined ***)self[2] = &PTR_LAB_004f4d24;
    *(undefined ***)self[3] = &PTR_LAB_004f4d30;
    *(undefined ***)(self[1] + 8) = &PrintPreviewWindowTEA::vftable_TWindow;
    *(undefined ***)(*self + 0xc) = &PrintPreviewWindowTEA::vftable_TFrameWindow;
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -8;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -8;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -8;
    PrintPreviewWindow::_dtor(self,0);
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 8;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 8;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 8;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0xe4;
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xe4;
      OWL::TFrameWindow::_dtor((int *)((int)self + 0x14a),0);
      *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0xe4;
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xe4;
      *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x30,0);
      *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x2e,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043bfc8  PrintPreviewWindowTEA::CmShared_43bfc8   (132 bytes)   [owl:response-table message-handler]
//   one handler for 2 table entries: id 9840; id 9850
//   also: PrintPreviewWindowTEA::CmShared_43bfc8 [owl:response-table]
void __cdecl PrintPreviewWindowTEA::CmShared_43bfc8(int self,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = *(uint **)(*(int *)(self + 0x50) + 8);
  if (param_2 == 0x2670) {
    uVar2 = *puVar1 & 0xfffffffe;
  }
  else {
    uVar2 = *puVar1 | 1;
  }
  if (uVar2 != *puVar1) {
    *puVar1 = uVar2;
    (**(code **)(**(int **)(self + 0x54) + 4))();
    (**(code **)(**(int **)(self + 0x54) + 0x24))();
    puVar1[3] = 1;
    puVar1[2] = 1;
    FUN_0049c744(*(int *)(self + 0x68),1);
    (**(code **)(*(int *)(self + 0x35) + 0x50))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c04c  PrintPreviewWindowTEA::CeCmd9850   (26 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(9850)
void __cdecl PrintPreviewWindowTEA::CeCmd9850(undefined4 self,undefined4 *commandEnabler)

{
  (**(code **)*commandEnabler)();
  return;
}

} // namespace tea
