// name: FUN_00481f7c
// address: 0x481f7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00481fd7) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x00481fdf */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * __cdecl
FUN_00481f7c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  byte bVar3;
  undefined4 local_2c;
  undefined4 *local_8;
  
  bVar3 = 0;
  FUN_004dce64(0x502f60);
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
  local_8 = (undefined4 *)FUN_004cc0f0();
  if (local_8 != (undefined4 *)0x0) {
    FUN_00481c1c(local_8,param_4);
  }
  puVar2 = (undefined4 *)param_1[0x2a];
  if (puVar2 == (undefined4 *)param_1[0x2e]) {
    FUN_00480144((int)(param_1 + 0x28),puVar2,&local_8);
  }
  else {
    *puVar2 = local_8;
    param_1[0x2a] = param_1[0x2a] + 4;
  }
  *in_FS_OFFSET = local_2c;
  return param_1;
}

