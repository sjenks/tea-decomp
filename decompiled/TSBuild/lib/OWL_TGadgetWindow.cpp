// TSBuild.exe — runtime / library code "OWL_TGadgetWindow"
// 38 functions, 0x00421318..0x00427604. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00421318  OWL::TGadgetWindow::GetTooltip   (11 bytes)   [rtti:vtable virtual slot 1]
//   override of OWL::TWindow vtable slot 1, from OWL::TGadgetWindow's OWL::TWindow subobject vtable at 0x0047b408 (through the this-adjusting thunk at 0x004277ca); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TGadgetWindow::vf3 [rtti:vtable]
undefined4 __cdecl OWL::TGadgetWindow::GetTooltip(int self)

{
  return *(undefined4 *)(self + 0x3b);
}

// ----------------------------------------------------------------------------------------------------
// 0x004251dc  OWL::TGadgetWindow::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: OWL::TGadgetWindow::Find [rtti:vtable]; OWL::TGadgetWindow::vf26 [rtti:vtable]
undefined4 __cdecl OWL::TGadgetWindow::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_00422b68(self[4],(int *)&OWL::TGadgetWindow::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') &&
     (uVar1 = OWL::TWindow::Find((undefined4 *)*self,param_2,param_3), (char)uVar1 == '\0')) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004253f4  OWL::TGadgetWindow::TGadgetWindow   (757 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TGadgetWindow's vtable at its vptr offset (+0x18) in this
int * __cdecl OWL::TGadgetWindow::TGadgetWindow(int *self,int vbasesBuilt,undefined4 param_3,undefined1 param_4,uint *param_5, int param_6)

{
  bool bVar1;
  int metric;
  undefined4 *sehChainHead;
  tagTEXTMETRICA textMetrics;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint *local_8;
  
  __InitExceptBlockLDTC(0x47b0cc);
  ehContext = 8;
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x5d;
    *(int *)((int)self + 0x5d) = (int)self + 0x51;
    *(int *)((int)self + 0x61) = (int)self + 0x55;
    self[4] = (int)self + 0x51;
    self[5] = (int)self + 0x55;
    *(undefined4 *)((int)self + 0x4d) = 0;
    *(undefined4 *)((int)self + 0x59) = 0;
    *(undefined ***)((int)self + 0x51) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)self + 0x55) = &OWL::TStreamableBase::vftable;
    ehDtorCount = ehDtorCount + 1;
    *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + 0x96;
    OWL::TWindow::TWindow_435d18((int *)((int)self + 0x5d),1);
    ehDtorCount = ehDtorCount + 1;
    *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + -0x96;
  }
  OWL::TGadgetList::TGadgetList(self + 1);
  ehDtorCount = ehDtorCount + 1;
  self[6] = (int)&OWL::TGadgetWindow::vftable;
  self[1] = (int)&PTR_LAB_0047b3d0;
  *(undefined ***)self[4] = &PTR_LAB_0047b3f0;
  *(undefined ***)self[5] = &PTR_LAB_0047b3fc;
  *(undefined ***)(*self + 8) = &OWL::TGadgetWindow::vftable_TWindow;
  self[10] = 1;
  *(undefined1 *)((int)self + 0x2f) = 0;
  *(undefined1 *)((int)self + 0x2e) = 0;
  *(undefined1 *)((int)self + 0x2d) = *(undefined1 *)((int)self + 0x2e);
  *(undefined1 *)(self + 0xb) = *(undefined1 *)((int)self + 0x2d);
  *(undefined1 *)(self + 0x12) = 0;
  *(undefined4 *)((int)self + 0x49) = 0;
  FUN_00435df4(*self,param_3,(uint *)0x0,param_6);
  FUN_00438618(*self,0,0x2000000,0);
  bVar1 = FUN_0041b9e4();
  if (!bVar1) {
    FUN_00438618(*self,0,0x800000,0);
  }
  self[8] = 0;
  self[9] = 0;
  if ((param_5 == (uint *)0x0) &&
     (param_5 = (uint *)operator_new(), local_8 = param_5, param_5 != (uint *)0x0)) {
    ehContext = 0x20;
    FUN_00425224(param_5,6,'\0',0);
    ehContext = 0x14;
    param_5 = local_8;
  }
  self[7] = (int)param_5;
  *(undefined1 *)((int)self + 0x35) = param_4;
  *(bool *)((int)self + 0x31) = *(char *)((int)self + 0x35) != '\0';
  *(bool *)((int)self + 0x32) = *(char *)((int)self + 0x35) != '\x01';
  *(undefined1 *)((int)self + 0x36) = 1;
  *(undefined1 *)((int)self + 0x33) = 0;
  *(undefined1 *)(self + 0xd) = 1;
  FUN_00423bf8(self[7],&textMetrics);
  *(char *)(self + 0xc) = (char)textMetrics.tmHeight + (char)textMetrics.tmExternalLeading;
  *(uint *)(*self + 0x2c) = (uint)*(byte *)(self + 0xc);
  if ((*(byte *)(*self + 0x1a) & 0x80) != 0) {
    metric = GetSystemMetrics(DAT_0047d520);
    *(int *)(*self + 0x2c) = *(int *)(*self + 0x2c) + metric * 2;
  }
  *(undefined4 *)(*self + 0x5c) = DAT_0048c698;
  *(undefined4 *)((int)self + 0x37) = 0;
  *(undefined4 *)((int)self + 0x3b) = 0;
  *(undefined1 *)((int)self + 0x3f) = 0;
  self[0x10] = 0;
  self[0x11] = 4;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425710  OWL::TGadgetWindow::~TGadgetWindow   (325 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TGadgetWindow::_dtor
void __cdecl OWL::TGadgetWindow::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47b128);
  if (self != (int *)0x0) {
    self[6] = (int)&OWL::TGadgetWindow::vftable;
    self[1] = (int)&PTR_LAB_0047b3d0;
    *(undefined ***)self[4] = &PTR_LAB_0047b3f0;
    *(undefined ***)self[5] = &PTR_LAB_0047b3fc;
    *(undefined ***)(*self + 8) = &OWL::TGadgetWindow::vftable_TWindow;
    if ((uint *)self[7] != (uint *)0x0) {
      OWL::TGdiObject::_dtor((uint *)self[7],0);
      operator_delete();
    }
    if (*(undefined4 **)((int)self + 0x37) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)self + 0x37))();
    }
    OWL::TGadgetList::_dtor(self + 1,0);
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)self + 0x5d),0);
      *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x55),0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425858  OWL::TGadgetWindow::EvSysColorChange   (31 bytes)   [owl:response-table message-handler]
//   WM_SYSCOLORCHANGE
void OWL::TGadgetWindow::EvSysColorChange(undefined4 self,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_4 + 8); piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)
      ) {
    (**(code **)(*piVar1 + 0x18))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425878  OWL::TGadgetWindow::IdleAction   (145 bytes)   [rtti:vtable virtual slot 11]
//   override of OWL::TWindow vtable slot 11, from OWL::TGadgetWindow's OWL::TWindow subobject vtable at 0x0047b408 (through the this-adjusting thunk at 0x0042777e); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TGadgetWindow::vf12 [rtti:vtable]
void __cdecl OWL::TGadgetWindow::IdleAction(int *self,int param_2)

{
  int *piVar1;
  POINT Point;
  HWND hWnd;
  tagPOINT pt;
  
  if ((param_2 == 0) && (self[9] != 0)) {
    pt.x = 0;
    pt.y = 0;
    GetCursorPos(&pt);
    Point.y = pt.y;
    Point.x = pt.x;
    hWnd = WindowFromPoint(Point);
    if (hWnd != *(HWND *)(*self + 0xc)) {
      FUN_00436d48(*self,0x200,0,0xffffffff);
    }
  }
  for (piVar1 = (int *)self[2]; piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)) {
    (**(code **)(*piVar1 + 0x10))();
  }
  OWL::TWindow::IdleAction(*self,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425a50  OWL::TGadgetWindow::vf13   (55 bytes)   [rtti:vtable virtual slot 13]
void __cdecl OWL::TGadgetWindow::vf13(int *self)

{
  if (*(int *)(*self + 0xc) != 0) {
    (**(code **)(self[6] + 0x48))();
    (**(code **)(*(int *)(*self + 8) + 0x6c))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425a88  OWL::TGadgetWindow::vf14   (204 bytes)   [rtti:vtable virtual slot 14]
void __cdecl OWL::TGadgetWindow::vf14(int *self,undefined4 *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47b18c);
  _vector_new_ldtc_((int *)0x0,0x10,self[3],1,(undefined*)FUN_00425b54);
  if ((*(char *)((int)self + 0x31) != '\0') || (*(char *)((int)self + 0x32) != '\0')) {
    (**(code **)(self[6] + 0x44))();
  }
  if (*(char *)((int)self + 0x31) == '\0') {
    *param_2 = *(undefined4 *)(*self + 0x28);
  }
  else {
    *param_2 = 0;
  }
  if (*(char *)((int)self + 0x32) == '\0') {
    param_2[1] = *(undefined4 *)(*self + 0x2c);
  }
  else if (self[3] == 0) {
    param_2[1] = 0;
  }
  else {
    param_2[1] = 0;
  }
  operator_delete_array();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425c40  OWL::TGadgetWindow::Create   (25 bytes)   [rtti:vtable virtual slot 4]
//   override of OWL::TWindow vtable slot 4, from OWL::TGadgetWindow's OWL::TWindow subobject vtable at 0x0047b408 (through the this-adjusting thunk at 0x004277a4); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TGadgetWindow::vf1 [rtti:vtable]
void __cdecl OWL::TGadgetWindow::Create(int *self)

{
  FUN_00425bf0(self);
  OWL::TWindow::Create(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425c5c  OWL::TGadgetWindow::vf2   (131 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TGadgetWindow::vf2(int *self,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *self2;
  
  if ((param_2 != *(char *)((int)self + 0x35)) || ((char)self[0xd] != '\0')) {
    if (param_2 != *(char *)((int)self + 0x35)) {
      uVar1 = *(undefined1 *)((int)self + 0x31);
      *(undefined1 *)((int)self + 0x31) = *(undefined1 *)((int)self + 0x32);
      *(undefined1 *)((int)self + 0x32) = uVar1;
      *(char *)((int)self + 0x35) = (char)param_2;
      *(undefined1 *)(self + 0xd) = 1;
    }
    self2 = self;
    uVar2 = FUN_00425bf0(self);
    (**(code **)(self[6] + 0x34))(uVar2,self[6],self2,self);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425ce0  OWL::TGadgetWindow::vf16   (182 bytes)   [rtti:vtable virtual slot 16]
void __cdecl OWL::TGadgetWindow::vf16(int *self,int *param_2)

{
  int metric;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_00423fac(self + 10,&local_8,&local_c,&local_10,&local_14,(uint)*(byte *)(self + 0xc));
  if (*(int *)(*self + 0x28) == 0) {
    *param_2 = 0;
    param_2[2] = 0;
  }
  else {
    *param_2 = local_8;
    param_2[2] = *(int *)(*self + 0x28) - local_c;
    if ((*(byte *)(*self + 0x1a) & 0x80) != 0) {
      metric = GetSystemMetrics(DAT_0047d520);
      param_2[2] = param_2[2] + metric * -2;
    }
  }
  if (*(int *)(*self + 0x2c) == 0) {
    param_2[1] = 0;
    param_2[3] = 0;
  }
  else {
    param_2[1] = local_10;
    param_2[3] = *(int *)(*self + 0x2c) - local_14;
    if ((*(byte *)(*self + 0x1a) & 0x80) != 0) {
      metric = GetSystemMetrics(DAT_0047d518);
      param_2[3] = param_2[3] + metric * -2;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425d98  OWL::TGadgetWindow::vf20   (70 bytes)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TGadgetWindow::vf20(int self,int param_2,int param_3,int *param_4)

{
  int metric;
  
  if ((*(int *)(param_2 + 0x1a) == 1) && (*(int *)(param_3 + 0x1a) == 1)) {
    if (*(char *)(self + 0x35) == '\0') {
      metric = GetSystemMetrics(DAT_0047d518);
      *param_4 = *param_4 - metric;
    }
    else {
      metric = GetSystemMetrics(DAT_0047d520);
      param_4[1] = param_4[1] - metric;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425de0  OWL::TGadgetWindow::vf18   (402 bytes)   [rtti:vtable virtual slot 18]
int * __cdecl OWL::TGadgetWindow::vf18(int *self,int param_2)

{
  bool bVar1;
  int i;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *sehChainHead;
  byte bVar7;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  undefined4 unused4;
  undefined4 unused5;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 unused6;
  undefined4 unused7;
  int *local_8;
  
  bVar7 = 0;
  __InitExceptBlockLDTC(0x47b1f0);
  ehContext = 8;
  unused6 = 0;
  unused7 = 0;
  local_8 = _vector_new_ldtc_((int *)0x0,0x10,*(int *)(param_2 + 0xc),1,(undefined*)FUN_00425b54);
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x2c;
  (**(code **)(*(int *)(param_2 + 0x18) + 0x44))();
  local_4c = 0;
  unused = 0;
  unused2 = 0;
  unused3 = 0;
  iVar3 = 0;
  for (piVar5 = *(int **)(param_2 + 8); piVar5 != (int *)0x0; piVar5 = *(int **)((int)piVar5 + 0x3e)
      ) {
    piVar4 = (int *)((int)piVar5 + 10);
    piVar6 = &local_5c;
    for (i = 4; i != 0; i = i + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    ehContext = 0x2c;
    piVar4 = local_8 + iVar3 * 4;
    piVar6 = &local_6c;
    for (i = 4; i != 0; i = i + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    if ((((local_5c == local_6c) && (local_58 == local_68)) && (local_54 == local_64)) &&
       (local_50 == local_60)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      (**(code **)(*piVar5 + 0xc))();
      unused4 = 0;
      unused5 = 0;
      if ((local_5c == 0) && (local_58 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_00428984(&local_4c,&local_5c);
      }
      FUN_00428984(&local_4c,&local_6c);
    }
    iVar3 = iVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x34) = 0;
  piVar5 = &local_4c;
  piVar4 = self;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *piVar5;
    piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
  }
  ehDtorCount = ehDtorCount + -2;
  operator_delete_array();
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426880  OWL::TGadgetWindow::vf17   (57 bytes)   [rtti:vtable virtual slot 17]
void __cdecl OWL::TGadgetWindow::vf17(int self,int param_2,int *param_3)

{
  if (param_2 == 0) {
    FUN_00425f74(self,param_3);
    return;
  }
  if (param_2 != 1) {
    FUN_0042652c(self,param_3);
    return;
  }
  FUN_00426244(self,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004268cc  OWL::TGadgetWindow::vf5   (38 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TGadgetWindow::vf5(int *self,int param_2,int param_3,int param_4)

{
  OWL::TGadgetList::vf1(self + 1,param_2,param_3,param_4);
  FUN_00425bf0(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004268f4  OWL::TGadgetWindow::vf6   (38 bytes)   [rtti:vtable virtual slot 6]
void OWL::TGadgetWindow::vf6(undefined4 self,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5 ,int param_6,int param_7)

{
  OWL::TGadgetList::vf2((int)(param_4 + 1),param_2,param_3,param_4 + 1,param_5,param_6,param_7);
  FUN_00425bf0(param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042691c  OWL::TGadgetWindow::vf8   (63 bytes)   [rtti:vtable virtual slot 8]
void __cdecl OWL::TGadgetWindow::vf8(int *self,int *param_2)

{
  *(int **)((int)param_2 + 6) = self;
  (**(code **)(*param_2 + 0x20))();
  if (*(int *)(*self + 0xc) != 0) {
    (**(code **)(*param_2 + 0x1c))();
  }
  if (*(char *)((int)param_2 + 5) != '\0') {
    *(char *)((int)self + 0x33) = *(char *)((int)self + 0x33) + '\x01';
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042695c  OWL::TGadgetWindow::vf7   (33 bytes)   [rtti:vtable virtual slot 7]
int __cdecl OWL::TGadgetWindow::vf7(int self,int param_2)

{
  int iVar1;
  
  if (self != *(int *)(param_2 + 6)) {
    return 0;
  }
  iVar1 = OWL::TGadgetList::vf3((int *)(self + 4),param_2);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426980  OWL::TGadgetWindow::vf9   (127 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TGadgetWindow::vf9(int self,int *param_2)

{
  if (*(char *)((int)param_2 + 5) != '\0') {
    *(char *)(self + 0x33) = *(char *)(self + 0x33) + -1;
  }
  if (param_2 == *(int **)(self + 0x24)) {
    *(undefined4 *)(self + 0x24) = 0;
  }
  FUN_00425974(self,(int)param_2);
  (**(code **)(*param_2 + 0x28))();
  *(undefined4 *)((int)param_2 + 6) = 0;
  *(undefined4 *)((int)param_2 + 0x3e) = 0;
  FUN_00428898((int *)((int)param_2 + 10),-*(int *)((int)param_2 + 10),-*(int *)((int)param_2 + 0xe)
              );
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426a00  OWL::TGadgetWindow::vf10   (86 bytes)   [rtti:vtable virtual slot 10]
void __cdecl OWL::TGadgetWindow::vf10(int self,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47b244);
  if (*(undefined4 **)(self + 0x37) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(self + 0x37))();
  }
  *(undefined4 *)(self + 0x37) = param_2;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426a58  OWL::TGadgetWindow::vf11   (151 bytes)   [rtti:vtable virtual slot 11]
undefined4 __cdecl OWL::TGadgetWindow::vf11(int self,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  int local_3c;
  int unused;
  int unused2;
  int unused3;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  undefined4 *celArray;
  
  __InitExceptBlockLDTC(0x47b274);
  if (*(int *)(self + 0x37) == 0) {
    if (param_2 == 0) {
      param_2 = 10;
    }
    if (param_3 == 0) {
      param_3 = 10;
    }
    celArray = (undefined4 *)operator_new();
    if (celArray != (undefined4 *)0x0) {
      ehContext = 0x14;
      local_3c = param_2;
      unused = param_3;
      unused2 = param_2;
      unused3 = param_3;
      OWL::TCelArray::TCelArray_41eb38(celArray,&local_3c,1,10,5,1);
    }
    *(undefined4 **)(self + 0x37) = celArray;
  }
  uVar1 = *(undefined4 *)(self + 0x37);
  *sehChainHead = sehPrevFrame;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426af0  OWL::TGadgetWindow::SetupWindow   (193 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from OWL::TGadgetWindow's OWL::TWindow subobject vtable at 0x0047b408 (through the this-adjusting thunk at 0x00427732); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TGadgetWindow::vf21 [rtti:vtable]
bool __cdecl OWL::TGadgetWindow::SetupWindow(int *self)

{
  BOOL ok;
  
  OWL::TWindow::SetupWindow(*self);
  if ((char)self[0x12] != '\0') {
    FUN_0042590c(self);
  }
  if ((char)self[0xd] != '\0') {
    (**(code **)(self[6] + 0x34))();
  }
  (**(code **)(self[6] + 0x38))();
  if (*(char *)((int)self + 0x31) == '\0') {
LAB_00426b45:
    if ((*(char *)((int)self + 0x32) == '\0') || (*(int *)(*self + 0x2c) == 0))
    goto LAB_00426b91;
  }
  else if (*(int *)(*self + 0x28) == 0) goto LAB_00426b45;
  if (*(char *)((int)self + 0x31) != '\0') {
    *(undefined4 *)(*self + 0x28) = 0;
  }
  if (*(char *)((int)self + 0x32) != '\0') {
    *(undefined4 *)(*self + 0x2c) = 0;
  }
  (**(code **)(self[6] + 0x34))();
  FUN_00438730(*self,(HWND)0x0,0,0,0,0,0x16);
LAB_00426b91:
  ok = PostMessageA(*(HWND *)(*self + 0xc),0x7ef2,0,0);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426bb4  OWL::TGadgetWindow::CleanupWindow   (105 bytes)   [rtti:vtable virtual slot 31]
//   override of OWL::TWindow vtable slot 31, from OWL::TGadgetWindow's OWL::TWindow subobject vtable at 0x0047b408 (through the this-adjusting thunk at 0x0042771f); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TGadgetWindow::vf22 [rtti:vtable]
void __cdecl OWL::TGadgetWindow::CleanupWindow(int *self)

{
  BOOL ok;
  
  if (*(int *)((int)self + 0x49) != 0) {
    ok = KillTimer(*(HWND *)(*self + 0xc),*(UINT_PTR *)((int)self + 0x49));
    if (ok != 0) {
      *(undefined4 *)((int)self + 0x49) = 0;
    }
  }
  if (self[9] != 0) {
    (**(code **)(*(int *)self[9] + 0x40))();
    self[9] = 0;
  }
  OWL::TWindow::CleanupWindow();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426c20  OWL::TGadgetWindow::PreProcessMsg   (134 bytes)   [rtti:vtable virtual slot 10]
//   override of OWL::TWindow vtable slot 10, from OWL::TGadgetWindow's OWL::TWindow subobject vtable at 0x0047b408 (through the this-adjusting thunk at 0x00427791); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TGadgetWindow::vf23 [rtti:vtable]
void __cdecl OWL::TGadgetWindow::PreProcessMsg(int *self,LPMSG lParam)

{
  BOOL ok;
  
  if (*(int *)((int)self + 0x3b) != 0) {
    ok = IsWindow(*(HWND *)(**(int **)((int)self + 0x3b) + 0xc));
    if (ok != 0) {
      if (*(HWND *)(*self + 0xc) != lParam->hwnd) {
        ok = IsChild(*(HWND *)(*self + 0xc),lParam->hwnd);
        if (ok == 0) goto LAB_00426c96;
      }
      if ((0x1ff < lParam->message) && (lParam->message < 0x20e)) {
        FUN_00438338(**(int **)((int)self + 0x3b),0x407,0,(LPARAM)lParam);
      }
    }
  }
LAB_00426c96:
  OWL::TWindow::PreProcessMsg(*self,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426ca8  OWL::TGadgetWindow::EvMsg_7ef2   (49 bytes)   [owl:response-table message-handler]
//   message 0x7ef2
void __cdecl OWL::TGadgetWindow::EvMsg_7ef2(int self)

{
  int *piVar1;
  
  if (*(char *)(self + 0x3f) != '\0') {
    (**(code **)(*(int *)(self + 0x18) + 0x10))();
  }
  for (piVar1 = *(int **)(self + 8); piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)
      ) {
    (**(code **)(*piVar1 + 0x1c))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426cdc  OWL::TGadgetWindow::EvWindowPosChanging   (129 bytes)   [owl:response-table message-handler]
//   WM_WINDOWPOSCHANGING
void __cdecl OWL::TGadgetWindow::EvWindowPosChanging(int *self,int windowPos)

{
  FUN_00436428(*self);
  if ((*(byte *)(windowPos + 0x18) & 1) == 0) {
    *(undefined4 *)(*self + 0x28) = *(undefined4 *)(windowPos + 0x10);
    *(undefined4 *)(*self + 0x2c) = *(undefined4 *)(windowPos + 0x14);
    if (((char)self[0xd] != '\0') || (*(char *)((int)self + 0x33) != '\0')) {
      (**(code **)(self[6] + 0x48))();
      (**(code **)(*(int *)(*self + 8) + 0x6c))();
    }
    FUN_00425bf0(self);
    if (*(char *)((int)self + 0x31) != '\0') {
      *(undefined4 *)(windowPos + 0x10) = *(undefined4 *)(*self + 0x28);
    }
    if (*(char *)((int)self + 0x32) != '\0') {
      *(undefined4 *)(windowPos + 0x14) = *(undefined4 *)(*self + 0x2c);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426d60  OWL::TGadgetWindow::vf15   (313 bytes)   [rtti:vtable virtual slot 15]
void __cdecl OWL::TGadgetWindow::vf15(int self,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  bool bVar2;
  HDC hdc;
  undefined4 *sehChainHead;
  tagPOINT *lppoint;
  tagPOINT pt;
  LONG unused;
  LONG unused2;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  HRGN region [2];
  
  __InitExceptBlockLDTC(0x47b2b4);
  pt.x = 0;
  pt.y = 0;
  lppoint = &pt;
  hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  GetViewportOrgEx(hdc,lppoint);
  unused = pt.x;
  unused2 = pt.y;
  for (piVar1 = *(int **)(self + 8); piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)
      ) {
    if ((((*(int *)((int)piVar1 + 10) < param_4[2]) && (*param_4 < *(int *)((int)piVar1 + 0x12))) &&
        (*(int *)((int)piVar1 + 0xe) < param_4[3])) && (param_4[1] < *(int *)((int)piVar1 + 0x16)))
    {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x2c))();
      if ((char)piVar1[1] == '\0') {
        (**(code **)(*piVar1 + 0x30))();
      }
      else {
        ehContext = 8;
        FUN_0042f998((int *)region);
        ehDtorCount = ehDtorCount + 1;
        ehContext = 0x14;
        GetClipRgn((HDC)*param_2,region[0]);
        IntersectClipRect((HDC)*param_2,*(int *)((int)piVar1 + 10),*(int *)((int)piVar1 + 0xe),
                          *(int *)((int)piVar1 + 0x12),*(int *)((int)piVar1 + 0x16));
        (**(code **)(*piVar1 + 0x30))();
        SelectClipRgn((HDC)*param_2,region[0]);
        ehDtorCount = ehDtorCount + -1;
        OWL::TRegion::_dtor((undefined4*)region,2);
        ehContext = 0;
      }
    }
  }
  (**(code **)(*(int *)((int)param_2 + 5) + 0x2c))();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426ef4  OWL::TGadgetWindow::Paint   (46 bytes)   [rtti:vtable virtual slot 21]
//   override of OWL::TWindow vtable slot 21, from OWL::TGadgetWindow's OWL::TWindow subobject vtable at 0x0047b408 (through the this-adjusting thunk at 0x00427745); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TGadgetWindow::vf19 [rtti:vtable]
void __cdecl OWL::TGadgetWindow::Paint(int self,int param_2)

{
  (**(code **)(*(int *)(param_2 + 5) + 0x14))();
  (**(code **)(*(int *)(self + 0x18) + 0x3c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426f24  OWL::TGadgetWindow::EvLButtonDown   (125 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONDOWN
void __cdecl OWL::TGadgetWindow::EvLButtonDown(int *self)

{
  int *piVar1;
  
  if (self[8] == 0) {
    piVar1 = FUN_0042503c((int)(self + 1));
  }
  else {
    piVar1 = (int *)self[8];
  }
  if ((piVar1 != (int *)0x0) && (((*(byte *)((int)piVar1 + 0x42) & 1) != 0 || (self[8] != 0)))) {
    (**(code **)(*piVar1 + 0x44))();
  }
  OWL::TWindow::EvLButtonDown(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426fa4  OWL::TGadgetWindow::EvLButtonUp   (109 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONUP
void __cdecl OWL::TGadgetWindow::EvLButtonUp(int *self)

{
  int *piVar1;
  
  if (self[8] == 0) {
    piVar1 = FUN_0042503c((int)(self + 1));
  }
  else {
    piVar1 = (int *)self[8];
  }
  if ((piVar1 != (int *)0x0) && (((*(byte *)((int)piVar1 + 0x42) & 1) != 0 || (self[8] != 0)))) {
    (**(code **)(*piVar1 + 0x4c))();
  }
  FUN_00436428(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427014  OWL::TGadgetWindow::EvLButtonDblClk   (42 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONDBLCLK
void __cdecl OWL::TGadgetWindow::EvLButtonDblClk(int *self)

{
  OWL::TGadgetWindow::EvLButtonUp(self);
  OWL::TGadgetWindow::EvLButtonDown(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427040  OWL::TGadgetWindow::EvRButtonDown   (119 bytes)   [owl:response-table message-handler]
//   WM_RBUTTONDOWN
void __cdecl OWL::TGadgetWindow::EvRButtonDown(int *self)

{
  int *piVar1;
  
  if (self[8] == 0) {
    piVar1 = FUN_0042503c((int)(self + 1));
  }
  else {
    piVar1 = (int *)self[8];
  }
  if ((piVar1 != (int *)0x0) && (((*(byte *)((int)piVar1 + 0x42) & 1) != 0 || (self[8] != 0)))) {
    (**(code **)(*piVar1 + 0x48))();
  }
  FUN_00436428(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004270b8  OWL::TGadgetWindow::EvRButtonUp   (109 bytes)   [owl:response-table message-handler]
//   WM_RBUTTONUP
void __cdecl OWL::TGadgetWindow::EvRButtonUp(int *self)

{
  int *piVar1;
  
  if (self[8] == 0) {
    piVar1 = FUN_0042503c((int)(self + 1));
  }
  else {
    piVar1 = (int *)self[8];
  }
  if ((piVar1 != (int *)0x0) && (((*(byte *)((int)piVar1 + 0x42) & 1) != 0 || (self[8] != 0)))) {
    (**(code **)(*piVar1 + 0x50))();
  }
  FUN_00436428(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427128  OWL::TGadgetWindow::EvMouseMove   (298 bytes)   [owl:response-table message-handler]
//   WM_MOUSEMOVE
void __cdecl OWL::TGadgetWindow::EvMouseMove(int *self)

{
  int *piVar1;
  
  if (self[8] == 0) {
    piVar1 = FUN_0042503c((int)(self + 1));
    if (piVar1 != (int *)self[9]) {
      if (self[9] != 0) {
        (*(code *)PTR_FUN_0047af14)();
      }
      self[9] = (int)piVar1;
      if (self[9] != 0) {
        (*(code *)PTR_FUN_0047af20)();
      }
    }
  }
  else if (self[8] != 0) {
    (*(code *)PTR_FUN_0047af08)();
  }
  FUN_00436428(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427278  OWL::TGadgetWindow::EnableTooltip   (178 bytes)   [rtti:vtable virtual slot 2]
//   override of OWL::TWindow vtable slot 2, from OWL::TGadgetWindow's OWL::TWindow subobject vtable at 0x0047b408 (through the this-adjusting thunk at 0x004277b7); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TGadgetWindow::vf4 [rtti:vtable]
void __cdecl OWL::TGadgetWindow::EnableTooltip(int *self,byte wParam)

{
  int *tooltip;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47b2e4);
  if (*(int *)((int)self + 0x3b) == 0) {
    iVar2 = *self;
    do {
      if (*(int *)(iVar2 + 0x14) == 0) break;
      iVar2 = *(int *)(iVar2 + 0x14);
    } while ((*(byte *)(iVar2 + 0x74) & 0x10) == 0);
    tooltip = (int *)operator_new();
    if (tooltip != (int *)0x0) {
      OWL::TTooltip::TTooltip(tooltip,0,iVar2,'\x01',0);
    }
    FUN_00427348(self,tooltip);
  }
  else if (*(int *)(**(int **)((int)self + 0x3b) + 0xc) != 0) {
    FUN_00438338(**(int **)((int)self + 0x3b),0x401,(uint)wParam,0);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427428  OWL::TGadgetWindow::EvCommand   (203 bytes)   [rtti:vtable virtual slot 18]
//   override of OWL::TWindow vtable slot 18, from OWL::TGadgetWindow's OWL::TWindow subobject vtable at 0x0047b408 (through the this-adjusting thunk at 0x0042776b); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TGadgetWindow::vf24 [rtti:vtable]
undefined4 __cdecl OWL::TGadgetWindow::EvCommand(int *self,int param_2,HWND hWnd,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *unaff_ESI;
  undefined4 local_14;
  int unused;
  undefined4 unused2;
  
  local_14 = 0;
  unused = param_2;
  unused2 = 0;
  cVar2 = (**(code **)(self[6] + 0x68))();
  if (cVar2 == '\0') {
    for (iVar1 = *(int *)(*self + 0x14); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar1 + 8);
      }
      unaff_ESI = FUN_00468488(iVar1,iVar4,(int *)&DAT_00403c70,(int *)&DAT_00403a74,0);
      if ((unaff_ESI != (undefined4 *)0x0) || (*(int *)(iVar1 + 0x14) == 0)) break;
    }
    if ((iVar1 == 0) ||
       ((unaff_ESI != (undefined4 *)0x0 &&
        (iVar4 = (**(code **)(unaff_ESI[3] + 0x24))(), iVar4 == *(int *)(*self + 0xc))))) {
      uVar3 = OWL::TWindow::EvCommand((undefined4 *)*self,param_2,hWnd,param_4);
    }
    else {
      uVar3 = (**(code **)(*(int *)(iVar1 + 8) + 0x48))();
    }
  }
  else {
    FUN_00422b40(self[4],(int)&local_14);
    uVar3 = 0;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004274f4  OWL::TGadgetWindow::EvCommandEnable   (147 bytes)   [rtti:vtable virtual slot 20]
//   override of OWL::TWindow vtable slot 20, from OWL::TGadgetWindow's OWL::TWindow subobject vtable at 0x0047b408 (through the this-adjusting thunk at 0x00427758); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TGadgetWindow::vf25 [rtti:vtable]
void __cdecl OWL::TGadgetWindow::EvCommandEnable(int *self,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 local_14;
  undefined4 unused;
  undefined4 unused2;
  
  unused = *(undefined4 *)(param_2 + 4);
  local_14 = 0x7fff;
  unused2 = 0;
  cVar2 = (**(code **)(self[6] + 0x68))();
  if (cVar2 == '\0') {
    iVar1 = *(int *)(*self + 0x14);
    if ((iVar1 != 0) && (*(int *)(*self + 0xc) == *(int *)(param_2 + 8))) {
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 0xc);
      (**(code **)(*(int *)(iVar1 + 8) + 0x50))();
      if ((*(byte *)(param_2 + 0xc) & 1) != 0) {
        return;
      }
    }
    OWL::TWindow::EvCommandEnable((undefined4 *)*self,param_2);
  }
  else {
    FUN_00422b40(self[4],(int)&local_14);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427604  OWL::TGadgetWindow::TLayoutInfo::~TLayoutInfo   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TGadgetWindow::TLayoutInfo::_dtor
void __cdecl OWL::TGadgetWindow::TLayoutInfo::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47b33c);
  if (self != 0) {
    operator_delete_array();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
