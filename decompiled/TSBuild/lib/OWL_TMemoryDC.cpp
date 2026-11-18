// TSBuild.exe — runtime / library code "OWL_TMemoryDC"
// 3 functions, 0x004224dc..0x0042bb78. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004224dc  OWL::TMemoryDC::vf5   (20 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TMemoryDC::vf5(undefined4 *self,uint *param_2)

{
  OWL::TDC::vf5(self,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ba88  OWL::TMemoryDC::~TMemoryDC   (147 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TMemoryDC::_dtor
int * __cdecl OWL::TMemoryDC::_dtor(int *self,byte dtorFlags)

{
  int *piVar1;
  undefined4 *sehChainHead;
  int iVar2;
  undefined4 sehPrevFrame;
  
  piVar1 = (int *)__InitExceptBlockLDTC(0x47c070);
  if (self != (int *)0x0) {
    *(undefined ***)((int)self + 5) = &OWL::TMemoryDC::vftable;
    FUN_0042ba5c(self);
    FUN_00421ef4(self);
    FUN_0042ba5c(self);
    piVar1 = self;
    if ((char)self[1] == '\0') {
      iVar2 = *self;
      piVar1 = (int *)FUN_0042b6a4();
      FUN_0042b87c((int)piVar1,iVar2);
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
// 0x0042bb78  OWL::TMemoryDC::vf24   (28 bytes)   [rtti:vtable virtual slot 24; function defined from vtable-slot]
undefined4 OWL::TMemoryDC::vf24(byte *self,undefined **menu,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  HMENU hMenu;
  int unaff_EBP;
  undefined1 *puVar4;
  undefined1 *unaff_ESI;
  int unaff_EDI;
  undefined4 *sehChainHead;
  undefined4 uStack_c;
  
  bVar1 = *self;
  bVar2 = (byte)self;
  *self = *self + bVar2;
  *self = *self + bVar2 + CARRY1(bVar1,bVar2);
  if (bVar2 != 0) {
    *(char *)(unaff_EDI + 0x57) = *(char *)(unaff_EDI + 0x57) + (char)param_3 + '\x01';
    puVar4 = (undefined1 *)(unaff_EBP + -1);
    out(*unaff_ESI,(short)menu);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((int)&uStack_c + 3);
      uStack_c = uStack_c & 0xffffff;
      __InitExceptBlockLDTC(0x47c130);
      menu = &OWL::TMenu::vftable;
    }
    **(undefined4 **)(puVar4 + 8) = menu;
    hMenu = CreateMenu();
    *(HMENU *)(*(int *)(puVar4 + 8) + 4) = hMenu;
    *(bool *)(*(int *)(puVar4 + 8) + 8) = *(int *)(puVar4 + 0x10) != 0;
    FUN_0042bd98(*(int *)(puVar4 + 8),0x7fe8);
    FUN_0042bdc0(*(int *)(puVar4 + 8),*(int **)(puVar4 + 0xc),0,-1);
    *sehChainHead = *(undefined4 *)(puVar4 + -0x24);
    return *(undefined4 *)(puVar4 + 8);
  }
  *param_3 = menu;
  hMenu = CreateMenu();
  *(HMENU *)(*(int *)(unaff_EBP + 8) + 4) = hMenu;
  *(bool *)(*(int *)(unaff_EBP + 8) + 8) = *(int *)(unaff_EBP + 0xc) != 0;
  uStack_c = 0x42bb64;
  FUN_0042bd98(*(int *)(unaff_EBP + 8),0x7fe8);
  *sehChainHead = *(undefined4 *)(unaff_EBP + -0x24);
  return *(undefined4 *)(unaff_EBP + 8);
}

} // namespace tea
