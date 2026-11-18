// TSBuild.exe — runtime / library code "OWL_TTooltip"
// 3 functions, 0x00430958..0x00430b94. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00430958  OWL::TTooltip::TTooltip   (357 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TTooltip's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TTooltip::TTooltip(int *self,int vbasesBuilt,undefined4 param_3,char param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47cef8);
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
    OWL::TWindow::TWindow_435d18(self + 9,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  OWL::TControl::TControl(self,1,param_3,0,(uint *)&DAT_0047ce84,0,0,0,0,param_5);
  self[3] = (int)&OWL::TTooltip::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0047cf6c;
  *(undefined ***)self[2] = &PTR_LAB_0047cf78;
  *(undefined ***)(*self + 8) = &OWL::TTooltip::vftable_TWindow;
  *(undefined4 *)(*self + 0x18) = 0x88000000;
  if (param_4 != '\0') {
    *(uint *)(*self + 0x18) = *(uint *)(*self + 0x18) | 1;
  }
  bVar1 = FUN_0041b9e4();
  if (bVar1) {
    *(uint *)(*self + 0x1c) = *(uint *)(*self + 0x1c) | 0x100;
  }
  else {
    *(uint *)(*self + 0x18) = *(uint *)(*self + 0x18) | 0x800000;
  }
  *(uint *)(*self + 0x1c) = *(uint *)(*self + 0x1c) | 8;
  bVar1 = FUN_0041b778();
  if (bVar1) {
    iVar2 = 4;
  }
  else {
    iVar2 = 0;
  }
  self[4] = iVar2;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430ac0  OWL::TTooltip::~TTooltip   (210 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TTooltip::_dtor
void __cdecl OWL::TTooltip::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47cf1c);
  if (self != (int *)0x0) {
    self[3] = (int)&OWL::TTooltip::vftable;
    *(undefined ***)self[1] = &PTR_LAB_0047cf6c;
    *(undefined ***)self[2] = &PTR_LAB_0047cf78;
    *(undefined ***)(*self + 8) = &OWL::TTooltip::vftable_TWindow;
    OWL::TControl::_dtor(self,0);
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
// 0x00430b94  OWL::TTooltip::GetClassName   (10 bytes)   [rtti:vtable virtual slot 29]
//   override of OWL::TWindow vtable slot 29, from OWL::TTooltip's OWL::TWindow subobject vtable at 0x0047cf84 (through the this-adjusting thunk at 0x00430bb3); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TTooltip::vf9 [rtti:vtable]
char * __stdcall OWL::TTooltip::GetClassName(void)

{
  return "tooltips_class32";
}

} // namespace tea
