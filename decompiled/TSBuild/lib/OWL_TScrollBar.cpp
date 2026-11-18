// TSBuild.exe — runtime / library code "OWL_TScrollBar"
// 23 functions, 0x00451728..0x00451c8c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00451728  OWL::TScrollBar::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TScrollBar::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TScrollBar::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_00422b68(self[1],(int *)&OWL::TScrollBar::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TControl::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451770  OWL::TScrollBar::TScrollBar   (308 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TScrollBar's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TScrollBar::TScrollBar(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x48389c);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0xb);
    self[0xb] = (int)(self + 8);
    self[0xc] = (int)(self + 9);
    self[1] = (int)(self + 8);
    self[2] = (int)(self + 9);
    self[7] = 0;
    self[10] = 0;
    self[8] = (int)&OWL::TEventHandler::vftable;
    self[9] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_435d18(self + 0xb,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -8;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -8;
  OWL::TControl::TControl_43d5a8(self,1,param_3,param_4,param_5);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 8;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 8;
  self[3] = (int)&OWL::TScrollBar::vftable;
  *(undefined ***)self[1] = &PTR_LAB_00483934;
  *(undefined ***)self[2] = &PTR_LAB_00483940;
  *(undefined ***)(*self + 8) = &PTR_LAB_0048394c;
  self[5] = 1;
  self[6] = 10;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004518a4  OWL::TScrollBar::vf16   (90 bytes)   [rtti:vtable virtual slot 16]
undefined4 __cdecl OWL::TScrollBar::vf16(int self,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    (**(code **)(*(int *)(self + 0xc) + 0x24))();
    uVar1 = (**(code **)(*(int *)(self + 0xc) + 0x28))();
    *(undefined4 *)(param_2 + 8) = uVar1;
  }
  else if (param_3 == 1) {
    (**(code **)(*(int *)(self + 0xc) + 0x2c))();
    (**(code **)(*(int *)(self + 0xc) + 0x30))();
  }
  return 0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451900  OWL::TScrollBar::vf26   (10 bytes)   [rtti:vtable virtual slot 26]
char * __stdcall OWL::TScrollBar::vf26(void)

{
  return "SCROLLBAR";
}

// ----------------------------------------------------------------------------------------------------
// 0x0045190c  OWL::TScrollBar::vf27   (34 bytes)   [rtti:vtable virtual slot 27]
void __cdecl OWL::TScrollBar::vf27(int *self)

{
  (**(code **)(self[3] + 0x2c))();
  OWL::TWindow::SetupWindow(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451930  OWL::TScrollBar::vf15   (29 bytes)   [rtti:vtable virtual slot 15]
void __cdecl OWL::TScrollBar::vf15(int *self,LPCSCROLLINFO lpsi,byte redraw)

{
  SetScrollInfo(*(HWND *)(*self + 0xc),2,lpsi,(uint)redraw);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451950  OWL::TScrollBar::vf14   (23 bytes)   [rtti:vtable virtual slot 14]
void __cdecl OWL::TScrollBar::vf14(int *self,LPSCROLLINFO lpsi)

{
  GetScrollInfo(*(HWND *)(*self + 0xc),2,lpsi);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451968  OWL::TScrollBar::vf10   (62 bytes)   [rtti:vtable virtual slot 10]
undefined4 __cdecl OWL::TScrollBar::vf10(int self)

{
  undefined4 dest;
  undefined4 unused;
  undefined4 local_c;
  
  memset(&dest,0,0x1c);
  dest = 0x1c;
  unused = 4;
  (**(code **)(*(int *)(self + 0xc) + 0x38))();
  return local_c;
}

// ----------------------------------------------------------------------------------------------------
// 0x004519a8  OWL::TScrollBar::vf12   (119 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TScrollBar::vf12(int self,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 dest;
  undefined4 unused;
  int unused2;
  int local_c;
  int local_8;
  
  (**(code **)(*(int *)(self + 0xc) + 0x24))();
  iVar2 = local_c;
  if ((param_2 <= local_c) && (iVar2 = param_2, param_2 < local_8)) {
    iVar2 = local_8;
  }
  iVar1 = (**(code **)(*(int *)(self + 0xc) + 0x28))();
  if (iVar2 != iVar1) {
    memset(&dest,0,0x1c);
    dest = 0x1c;
    unused = 4;
    unused2 = iVar2;
    (**(code **)(*(int *)(self + 0xc) + 0x3c))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451a20  OWL::TScrollBar::vf9   (75 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TScrollBar::vf9(int self,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 dest;
  undefined4 unused;
  undefined4 local_18;
  undefined4 local_14;
  
  memset(&dest,0,0x1c);
  dest = 0x1c;
  unused = 1;
  (**(code **)(*(int *)(self + 0xc) + 0x38))();
  *param_2 = local_18;
  *param_3 = local_14;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451a6c  OWL::TScrollBar::vf11   (75 bytes)   [rtti:vtable virtual slot 11]
void __cdecl OWL::TScrollBar::vf11(int self,undefined4 param_2,undefined4 param_3)

{
  undefined4 dest;
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  
  memset(&dest,0,0x1c);
  dest = 0x1c;
  unused = 1;
  unused2 = param_2;
  unused3 = param_3;
  (**(code **)(*(int *)(self + 0xc) + 0x3c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451ab8  OWL::TScrollBar::vf13   (50 bytes)   [rtti:vtable virtual slot 13]
void __cdecl OWL::TScrollBar::vf13(int self,int param_2)

{
  int iVar1;
  int self2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    uVar3 = 1;
    self2 = self;
    iVar1 = (**(code **)(*(int *)(self + 0xc) + 0x28))();
    (**(code **)(*(int *)(self + 0xc) + 0x30))
              (iVar1,*(int *)(self + 0xc),self2,self,param_2 + iVar1,uVar3);
  }
  (**(code **)(*(int *)(self + 0xc) + 0x28))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451aec  OWL::TScrollBar::vf17   (24 bytes)   [rtti:vtable virtual slot 17]
void __cdecl OWL::TScrollBar::vf17(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451b04  OWL::TScrollBar::vf18   (21 bytes)   [rtti:vtable virtual slot 18]
void __cdecl OWL::TScrollBar::vf18(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451b1c  OWL::TScrollBar::vf19   (24 bytes)   [rtti:vtable virtual slot 19]
void __cdecl OWL::TScrollBar::vf19(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451b34  OWL::TScrollBar::vf20   (21 bytes)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TScrollBar::vf20(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451b4c  OWL::TScrollBar::vf21   (23 bytes)   [rtti:vtable virtual slot 21]
void __cdecl OWL::TScrollBar::vf21(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x30))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451b64  OWL::TScrollBar::vf22   (23 bytes)   [rtti:vtable virtual slot 22]
void __cdecl OWL::TScrollBar::vf22(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x30))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451b7c  OWL::TScrollBar::vf23   (48 bytes)   [rtti:vtable virtual slot 23]
void __cdecl OWL::TScrollBar::vf23(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x24))();
  (**(code **)(*(int *)(self + 0xc) + 0x30))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451bac  OWL::TScrollBar::vf24   (48 bytes)   [rtti:vtable virtual slot 24]
void __cdecl OWL::TScrollBar::vf24(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x24))();
  (**(code **)(*(int *)(self + 0xc) + 0x30))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451bdc  OWL::TScrollBar::vf25   (5 bytes)   [rtti:vtable virtual slot 25]
void __stdcall OWL::TScrollBar::vf25(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451be4  OWL::TScrollBar::EvHScroll   (129 bytes, 2 ranges)   [owl:response-table message-handler]
//   WM_HSCROLL
void __cdecl OWL::TScrollBar::EvHScroll(int self,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    (**(code **)(*(int *)(self + 0xc) + 0x44))();
    return;
  case 1:
    (**(code **)(*(int *)(self + 0xc) + 0x48))();
    return;
  case 2:
    (**(code **)(*(int *)(self + 0xc) + 0x4c))();
    return;
  case 3:
    (**(code **)(*(int *)(self + 0xc) + 0x50))();
    return;
  case 4:
    (**(code **)(*(int *)(self + 0xc) + 0x54))();
    return;
  case 5:
    (**(code **)(*(int *)(self + 0xc) + 0x58))();
    return;
  case 6:
    (**(code **)(*(int *)(self + 0xc) + 0x5c))();
    return;
  case 7:
    (**(code **)(*(int *)(self + 0xc) + 0x60))();
    return;
  case 8:
    (**(code **)(*(int *)(self + 0xc) + 100))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451c8c  OWL::TScrollBar::EvVScroll   (26 bytes)   [owl:response-table message-handler]
//   WM_VSCROLL
void __cdecl OWL::TScrollBar::EvVScroll(int self,undefined4 param_2)

{
  OWL::TScrollBar::EvHScroll(self,param_2);
  return;
}

} // namespace tea
