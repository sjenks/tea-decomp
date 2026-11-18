// TEA.exe — runtime / library code "OWL_TControl"
// 16 functions, 0x004ad690..0x004ae070. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004ad690  OWL::TControl::Find   (70 bytes)   [rtti:vtable virtual slot 33]
//   override of OWL::TWindow vtable slot 33, from OWL::TControl's OWL::TWindow subobject vtable at 0x0050c8a4 (through the this-adjusting thunk at 0x004ad838); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TControl::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TControl::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_0048e808(self[1],(int *)&DAT_0050c7a0,param_2,param_3);
  if (((char)uVar1 == '\0') &&
     (uVar1 = OWL::TWindow::Find((undefined4 *)*self,param_2,param_3), (char)uVar1 == '\0')) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad6d8  OWL::TControl::TControl   (323 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TControl's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TControl::TControl(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10 )

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c840);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 9);
    self[9] = (int)(self + 6);
    self[10] = (int)(self + 7);
    self[1] = (int)(self + 6);
    self[2] = (int)(self + 7);
    self[5] = 0;
    self[8] = 0;
    self[6] = (int)&OWL::TEventHandler::vftable;
    self[7] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 9,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  self[3] = (int)&OWL::TControl::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0050c88c;
  *(undefined ***)self[2] = &PTR_LAB_0050c898;
  *(undefined ***)(*self + 8) = &OWL::TControl::vftable_TWindow;
  FUN_004a5098(*self,param_3,param_5,param_10);
  *(undefined4 *)(*self + 0x34) = param_4;
  *(undefined4 *)(*self + 0x20) = param_6;
  *(undefined4 *)(*self + 0x24) = param_7;
  *(undefined4 *)(*self + 0x28) = param_8;
  *(undefined4 *)(*self + 0x2c) = param_9;
  *(undefined4 *)(*self + 0x18) = 0x50030000;
  self[4] = 2;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad87c  OWL::TControl::TControl_4ad87c   (347 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TControl's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TControl::TControl_4ad87c(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c93c);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 9);
    self[9] = (int)(self + 6);
    self[10] = (int)(self + 7);
    self[1] = (int)(self + 6);
    self[2] = (int)(self + 7);
    self[5] = 0;
    self[8] = 0;
    self[6] = (int)&OWL::TEventHandler::vftable;
    self[7] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 9,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  self[3] = (int)&OWL::TControl::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0050c88c;
  *(undefined ***)self[2] = &PTR_LAB_0050c898;
  *(undefined ***)(*self + 8) = &OWL::TControl::vftable_TWindow;
  FUN_004a5098(*self,param_3,(uint *)0x0,param_5);
  if ((short)((uint)*(undefined4 *)(*self + 0x10) >> 0x10) != 0) {
    operator_delete_array();
  }
  *(undefined4 *)(*self + 0x10) = 0;
  *(uint *)(*self + 0x74) = *(uint *)(*self + 0x74) | 4;
  memset((undefined4 *)(*self + 0x18),0,0x28);
  *(undefined4 *)(*self + 0x34) = param_4;
  *(uint *)(*self + 0x74) = *(uint *)(*self + 0x74) | 0x100;
  self[4] = 2;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad9d8  OWL::TControl::~TControl   (193 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TControl::_dtor
void __cdecl OWL::TControl::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c960);
  if (self != (int *)0x0) {
    self[3] = (int)&OWL::TControl::vftable;
    *(undefined ***)self[1] = &PTR_LAB_0050c88c;
    *(undefined ***)self[2] = &PTR_LAB_0050c898;
    *(undefined ***)(*self + 8) = &OWL::TControl::vftable_TWindow;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 9,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 7,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004adae0  OWL::TControl::vf1   (68 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TControl::vf1(int *self,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *lp;
  
  if ((*(int *)(*self + 0xc) != 0) && (*(int *)(param_2 + 0x10) != *(int *)(param_2 + 0x18))) {
    if (*(int *)(param_2 + 0x10) != 0) {
      lp = *(undefined4 **)(param_2 + 0x10);
      piVar1 = FUN_004a8294(lp);
      if (piVar1 != (int *)0x0) {
        uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,*piVar1,lp,piVar1,param_2);
        return uVar2;
      }
    }
    return 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004adb3c  OWL::TControl::vf2   (5 bytes)   [rtti:vtable virtual slot 2]
void __stdcall OWL::TControl::vf2(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004adb5c  OWL::TControl::vf3   (39 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TControl::vf3(undefined4 self,int param_2)

{
  int *piVar1;
  undefined4 extraout_EDX;
  undefined4 *lp;
  
  if (*(int *)(param_2 + 0x14) != 0) {
    lp = *(undefined4 **)(param_2 + 0x14);
    piVar1 = FUN_004a8294(lp);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(*piVar1,extraout_EDX,lp,piVar1,param_2);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004adb9c  OWL::TControl::vf4   (64 bytes)   [rtti:vtable virtual slot 4]
void __cdecl OWL::TControl::vf4(int self,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 == 1) {
    (**(code **)(*(int *)(self + 0xc) + 0x14))();
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 != 4) {
      return;
    }
    (**(code **)(*(int *)(self + 0xc) + 0x18))();
    return;
  }
  (**(code **)(*(int *)(self + 0xc) + 0x1c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004adbdc  OWL::TControl::vf5   (48 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TControl::vf5(undefined4 self,int param_2)

{
  int *piVar1;
  undefined4 extraout_EDX;
  undefined4 *lp;
  
  if ((*(int *)(param_2 + 0x2c) != 0) && (*(int *)(param_2 + 8) != 0xffff)) {
    lp = *(undefined4 **)(param_2 + 0x2c);
    piVar1 = FUN_004a8294(lp);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(*piVar1,extraout_EDX,lp,piVar1,param_2);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004adc0c  OWL::TControl::vf6   (39 bytes)   [rtti:vtable virtual slot 6]
void __cdecl OWL::TControl::vf6(undefined4 self,int param_2)

{
  int *piVar1;
  undefined4 extraout_EDX;
  undefined4 *lp;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    lp = *(undefined4 **)(param_2 + 0x2c);
    piVar1 = FUN_004a8294(lp);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(*piVar1,extraout_EDX,lp,piVar1,param_2);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004adc34  OWL::TControl::vf7   (39 bytes)   [rtti:vtable virtual slot 7]
void __cdecl OWL::TControl::vf7(undefined4 self,int param_2)

{
  int *piVar1;
  undefined4 extraout_EDX;
  undefined4 *lp;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    lp = *(undefined4 **)(param_2 + 0x2c);
    piVar1 = FUN_004a8294(lp);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(*piVar1,extraout_EDX,lp,piVar1,param_2);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004adce4  OWL::TControl::Streamer::Streamer   (102 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TControl::Streamer's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TControl::Streamer::Streamer(undefined4 *self,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c9a0);
  *self = &OWL::TStreamer::vftable;
  self[1] = param_2;
  *self = &OWL::TNewStreamer::vftable;
  *self = &OWL::TControl::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_00402be8,0);
  self[2] = puVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004add4c  OWL::TControl::TControl_4add4c   (250 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TControl's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TControl::TControl_4add4c(int *self,int vbasesBuilt)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c9b8);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 9);
    self[9] = (int)(self + 6);
    self[10] = (int)(self + 7);
    self[1] = (int)(self + 6);
    self[2] = (int)(self + 7);
    self[5] = 0;
    self[8] = 0;
    self[6] = (int)&OWL::TEventHandler::vftable;
    self[7] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow(self + 9,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  self[3] = (int)&OWL::TControl::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0050c88c;
  *(undefined ***)self[2] = &PTR_LAB_0050c898;
  *(undefined ***)(*self + 8) = &OWL::TControl::vftable_TWindow;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ade48  OWL::TControl::Streamer::vf1   (56 bytes)   [rtti:vtable virtual slot 1]
int * __cdecl OWL::TControl::Streamer::vf1(int self,int *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = *(int **)(self + 8);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  FUN_004ade80(iVar2,param_2);
  if (1 < param_3) {
    uVar3 = FUN_00499e9c(param_2);
    piVar1[4] = uVar3;
  }
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aded8  OWL::TControl::Streamer::vf2   (53 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TControl::Streamer::vf2(int self,int *param_2)

{
  int iVar1;
  
  if (*(int **)(self + 8) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int **)(self + 8);
  }
  FUN_004adf10(iVar1,param_2);
  FUN_0049a31c(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ae070  OWL::TControl::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TControl::Streamer::vf3(void)

{
  return 2;
}

} // namespace tea
