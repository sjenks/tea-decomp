// TSMerge.exe — runtime / library code "OWL_TView"
// 11 functions, 0x004244c8..0x0044a1e4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004244c8  OWL::TView::vf1   (11 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TView::vf1(int self)

{
  return *(undefined4 *)(self + 0x1c);
}

// ----------------------------------------------------------------------------------------------------
// 0x004244d4  OWL::TView::vf2   (11 bytes)   [rtti:vtable virtual slot 2]
undefined4 __cdecl OWL::TView::vf2(int self)

{
  return *(undefined4 *)(self + 0x20);
}

// ----------------------------------------------------------------------------------------------------
// 0x004244e0  OWL::TView::vf6   (10 bytes)   [rtti:vtable virtual slot 6]
undefined4 __stdcall OWL::TView::vf6(void)

{
  return 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004244ec  OWL::TView::vf11   (7 bytes)   [rtti:vtable virtual slot 11]
undefined4 __stdcall OWL::TView::vf11(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449f94  OWL::TView::~TView   (298 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TView::_dtor
void __cdecl OWL::TView::_dtor(undefined4 *self,uint dtorFlags)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4703b8);
  if (self != (undefined4 *)0x0) {
    self[2] = &OWL::TView::vftable;
    *(undefined ***)*self = &PTR_FUN_00470458;
    *(undefined ***)self[1] = &PTR_LAB_00470464;
    if ((undefined4 *)self[7] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)self[7])();
    }
    if ((undefined4 *)self[8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)self[8])();
    }
    uVar1 = FUN_00439e4c((int *)self[3],(int)self);
    if (((char)uVar1 != '\0') && ((undefined4 *)self[3] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)self[3])();
    }
    if ((dtorFlags & 2) != 0) {
      OWL::TStreamableBase::_dtor(self + 10,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a0c0  OWL::TView::vf9   (32 bytes)   [rtti:vtable virtual slot 9]
undefined * __cdecl OWL::TView::vf9(undefined4 self,int param_2)

{
  if (param_2 < 1) {
    return (undefined *)0x0;
  }
  if (param_2 < 3) {
    return (&PTR_FUN_00470348)[param_2];
  }
  return (undefined *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a0e0  OWL::TView::vf8   (32 bytes)   [rtti:vtable virtual slot 8]
undefined * __cdecl OWL::TView::vf8(undefined4 self,int param_2)

{
  if (param_2 < 1) {
    return (undefined *)0x0;
  }
  if (param_2 < 3) {
    return (&PTR_s_View_Name_00470350)[param_2];
  }
  return (undefined *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a100  OWL::TView::vf7   (47 bytes)   [rtti:vtable virtual slot 7]
int __cdecl OWL::TView::vf7(undefined4 self,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_00455b74((&PTR_s_View_Class_0047034c)[iVar2],param_2);
    if (iVar1 == 0) {
      return iVar2 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a130  OWL::TView::vf10   (138 bytes)   [rtti:vtable virtual slot 10]
char * __cdecl OWL::TView::vf10(int self,int param_2,undefined4 *param_3,char *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  
  if (param_2 == 1) {
    if (self == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(self + 8);
    }
    puVar1 = FUN_0045666c(self,iVar4,0x4244f4);
    puVar2 = (uint *)FUN_0045677c((int)puVar1);
  }
  else {
    if (param_2 != 2) {
      return (char *)0x0;
    }
    puVar2 = (uint *)(**(code **)(*(int *)(self + 8) + 0xc))();
  }
  if (param_4 == (char *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    if (puVar2 == (uint *)0x0) {
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3 = strlen(puVar2);
    }
    if ((int)pcVar3 < (int)param_4) {
      param_4 = pcVar3;
    }
    if (param_4 != (char *)0x0) {
      memcpy(param_3,puVar2,(uint)param_4);
    }
    *(char *)((int)param_3 + (int)param_4) = '\0';
  }
  return pcVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a1dc  OWL::TView::vf4   (7 bytes)   [rtti:vtable virtual slot 4]
undefined4 __stdcall OWL::TView::vf4(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a1e4  OWL::TView::vf5   (7 bytes)   [rtti:vtable virtual slot 5]
undefined4 __stdcall OWL::TView::vf5(void)

{
  return 0;
}

} // namespace tea
