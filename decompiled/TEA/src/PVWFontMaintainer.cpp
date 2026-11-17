// TEA.exe — application module "PVWFontMaintainer"
// 4 functions, 0x0041e8d8..0x0041ea74. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041e8d8  PVWFontMaintainer::~PVWFontMaintainer   (102 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as PVWFontMaintainer::_dtor
void __cdecl PVWFontMaintainer::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4ef42c);
  if (param_1 != (undefined4 *)0x0) {
    if ((uint *)*param_1 != (uint *)0x0) {
      OWL::TGdiObject::_dtor((uint *)*param_1,0);
      operator_delete();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e940  FUN_0041e940   (156 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041e940(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 local_30;
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x4ef46c);
  puVar4 = param_1 + 1;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar1 = (uint *)*param_1;
  puVar2 = (uint *)operator_new();
  if (puVar2 != (uint *)0x0) {
    FUN_0048f7fc(puVar2,(LOGFONTA *)(param_1 + 2));
  }
  *param_1 = puVar2;
  if (puVar1 != (uint *)0x0) {
    OWL::TGdiObject::_dtor(puVar1,0);
    operator_delete();
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e9dc  FUN_0041e9dc   (152 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041e9dc(int *param_1,int *param_2)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  byte bVar4;
  tagRECT local_40;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [16];
  int local_10;
  int local_c;
  undefined4 local_8;
  
  bVar4 = 0;
  if ((WPARAM *)*param_1 != (WPARAM *)0x0) {
    FUN_004a76a8(*param_2,0x30,*(WPARAM *)*param_1,0);
    (**(code **)(*(int *)(*param_2 + 8) + 0x68))();
    local_8 = 0x216;
    local_40.left = 0;
    local_40.top = 0;
    local_40.right = 0;
    local_40.bottom = 0;
    FUN_004a7a30(*param_2,&local_40);
    ptVar2 = &local_40;
    pLVar3 = &local_30;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pLVar3 = ptVar2->left;
      ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
      pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
    }
    local_10 = local_28 - local_30;
    local_c = local_24 - local_2c;
    FUN_004a76a8(*param_2,0x47,0,(LPARAM)local_20);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ea74  FUN_0041ea74   (10 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0041ea74(undefined4 *param_1)

{
  return *param_1;
}

} // namespace tea
