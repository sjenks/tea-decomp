// TSMerge.exe — runtime / library code "OWL_TMemoryDC"
// 3 functions, 0x00417368..0x00420a04. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00417368  OWL::TMemoryDC::vf5   (20 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TMemoryDC::vf5(undefined4 *self,uint *param_2)

{
  OWL::TDC::vf5(self,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420914  OWL::TMemoryDC::~TMemoryDC   (147 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TMemoryDC::_dtor
int * __cdecl OWL::TMemoryDC::_dtor(int *self,byte dtorFlags)

{
  int *piVar1;
  undefined4 *sehChainHead;
  int iVar2;
  undefined4 sehPrevFrame;
  
  piVar1 = (int *)__InitExceptBlockLDTC(0x468294);
  if (self != (int *)0x0) {
    *(undefined ***)((int)self + 5) = &OWL::TMemoryDC::vftable;
    FUN_004208e8(self);
    FUN_00416d80(self);
    FUN_004208e8(self);
    piVar1 = self;
    if ((char)self[1] == '\0') {
      iVar2 = *self;
      piVar1 = (int *)FUN_00420530();
      FUN_00420708((int)piVar1,iVar2);
    }
    OWL::TCreatedDC::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      piVar1 = (int *)operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420a04  OWL::TMemoryDC::vf24   (28 bytes)   [rtti:vtable virtual slot 24; function defined from vtable-slot]
undefined4 OWL::TMemoryDC::vf24(byte *self,undefined **menu,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  HMENU hMenu;
  int unaff_EBP;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined1 *unaff_ESI;
  int unaff_EDI;
  undefined4 *sehChainHead;
  undefined1 *puStack_11;
  undefined1 *unused;
  undefined1 uStack_9;
  int unused2;
  byte *unused3;
  
  bVar1 = *self;
  bVar2 = (byte)self;
  *self = *self + bVar2;
  *self = *self + bVar2 + CARRY1(bVar1,bVar2);
  unused3 = self;
  *param_3 = *param_3 | bVar2;
  unused2 = unaff_EDI + -1;
  unused = &uStack_9;
  puVar4 = (undefined1 *)(unaff_EBP + -1);
  out(*unaff_ESI,(short)menu);
  ppuVar5 = (undefined1 **)puVar4;
  if (puVar4 == (undefined1 *)0x0) {
    ppuVar5 = &puStack_11;
    puStack_11 = puVar4;
    __InitExceptBlockLDTC(0x468354);
    menu = &OWL::TMenu::vftable;
  }
  **(undefined4 **)((int)ppuVar5 + 8) = menu;
  hMenu = CreateMenu();
  *(HMENU *)(*(int *)((int)ppuVar5 + 8) + 4) = hMenu;
  *(bool *)(*(int *)((int)ppuVar5 + 8) + 8) = *(int *)((int)ppuVar5 + 0x10) != 0;
  FUN_00420c24(*(int *)((int)ppuVar5 + 8),0x7fe8);
  FUN_00420c4c(*(int *)((int)ppuVar5 + 8),*(int **)((int)ppuVar5 + 0xc),0,-1);
  *sehChainHead = *(undefined4 *)((int)ppuVar5 + -0x24);
  return *(undefined4 *)((int)ppuVar5 + 8);
}

} // namespace tea
