// TSBuild.exe — runtime / library code "OWL_TMemoryDC"
// 3 functions, 0x004224dc..0x0042bb78. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004224dc  OWL::TMemoryDC::vf5   (20 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TMemoryDC::vf5(undefined4 *param_1,uint *param_2)

{
  OWL::TDC::vf5(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ba88  OWL::TMemoryDC::~TMemoryDC   (147 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TMemoryDC::_dtor
int * __cdecl OWL::TMemoryDC::_dtor(int *param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  undefined4 local_28;
  
  piVar1 = (int *)__InitExceptBlockLDTC(0x47c070);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &OWL::TMemoryDC::vftable;
    FUN_0042ba5c(param_1);
    FUN_00421ef4(param_1);
    FUN_0042ba5c(param_1);
    piVar1 = param_1;
    if ((char)param_1[1] == '\0') {
      iVar2 = *param_1;
      piVar1 = (int *)FUN_0042b6a4();
      FUN_0042b87c((int)piVar1,iVar2);
    }
    OWL::TCreatedDC::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      piVar1 = (int *)operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bb78  OWL::TMemoryDC::vf24   (28 bytes)   [rtti:vtable virtual slot 24; function defined from vtable-slot]
undefined4 OWL::TMemoryDC::vf24(byte *param_1,undefined **param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  HMENU pHVar3;
  int unaff_EBP;
  undefined1 *puVar4;
  undefined1 *unaff_ESI;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_c;
  
  bVar1 = *param_1;
  bVar2 = (byte)param_1;
  *param_1 = *param_1 + bVar2;
  *param_1 = *param_1 + bVar2 + CARRY1(bVar1,bVar2);
  if (bVar2 != 0) {
    *(char *)(unaff_EDI + 0x57) = *(char *)(unaff_EDI + 0x57) + (char)param_3 + '\x01';
    puVar4 = (undefined1 *)(unaff_EBP + -1);
    out(*unaff_ESI,(short)param_2);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((int)&uStack_c + 3);
      uStack_c = uStack_c & 0xffffff;
      __InitExceptBlockLDTC(0x47c130);
      param_2 = &OWL::TMenu::vftable;
    }
    **(undefined4 **)(puVar4 + 8) = param_2;
    pHVar3 = CreateMenu();
    *(HMENU *)(*(int *)(puVar4 + 8) + 4) = pHVar3;
    *(bool *)(*(int *)(puVar4 + 8) + 8) = *(int *)(puVar4 + 0x10) != 0;
    FUN_0042bd98(*(int *)(puVar4 + 8),0x7fe8);
    FUN_0042bdc0(*(int *)(puVar4 + 8),*(int **)(puVar4 + 0xc),0,-1);
    *in_FS_OFFSET = *(undefined4 *)(puVar4 + -0x24);
    return *(undefined4 *)(puVar4 + 8);
  }
  *param_3 = param_2;
  pHVar3 = CreateMenu();
  *(HMENU *)(*(int *)(unaff_EBP + 8) + 4) = pHVar3;
  *(bool *)(*(int *)(unaff_EBP + 8) + 8) = *(int *)(unaff_EBP + 0xc) != 0;
  uStack_c = 0x42bb64;
  FUN_0042bd98(*(int *)(unaff_EBP + 8),0x7fe8);
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x24);
  return *(undefined4 *)(unaff_EBP + 8);
}

} // namespace tea
