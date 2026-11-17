// TEA.exe — application module "FormattedTextSegment"
// 2 functions, 0x00481ebc..0x00481f7c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00481ebc  FormattedTextSegment::~FormattedTextSegment   (191 bytes)   [rtti:dtor destructor]
//   written in code as FormattedTextSegment::_dtor
void __cdecl FormattedTextSegment::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x502f20);
  if (param_1 == 0) goto LAB_00481f6a;
  if (*(int *)(param_1 + 0x48) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x48) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x48) + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00481f5a;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
LAB_00481f5a:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_00481f6a:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00481f7c  FUN_00481f7c   (287 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00481fd7) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x00481fdf */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 * __cdecl FUN_00481f7c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  byte bVar3;
  undefined4 local_2c;
  undefined4 *local_8;
  
  bVar3 = 0;
  __InitExceptBlockLDTC(0x502f60);
  puVar2 = param_1;
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x28] = 0x100;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x2d0;
  for (iVar1 = 0; iVar1 < *(short *)((int)param_1 + 0x1a); iVar1 = iVar1 + 1) {
    param_1[iVar1 + 0x33] = *param_3;
    param_3 = param_3 + 1;
  }
  local_8 = (undefined4 *)operator_new();
  if (local_8 != (undefined4 *)0x0) {
    FUN_00481c1c(local_8,param_4);
  }
  puVar2 = (undefined4 *)param_1[0x2a];
  if (puVar2 == (undefined4 *)param_1[0x2e]) {
    FUN_00480144((int)(param_1 + 0x28),puVar2,(undefined4*)&local_8);
  }
  else {
    *puVar2 = local_8;
    param_1[0x2a] = param_1[0x2a] + 4;
  }
  *in_FS_OFFSET = local_2c;
  return param_1;
}

} // namespace tea
