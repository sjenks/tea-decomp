// name: FUN_00402fa0
// address: 0x402fa0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00403078) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00403080 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * __cdecl
FUN_00402fa0(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 local_28;
  
  bVar4 = 0;
  FUN_004dce64(0x4ea970);
  FUN_004c6484(param_1,param_2);
  *param_1 = &PTR_FUN_004eacbc;
  *param_1 = &PTR_FUN_004eac88;
  param_1[6] = param_3;
  puVar2 = param_5;
  puVar3 = param_1 + 7;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar2 = param_1 + 0x17;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_5;
    param_5 = param_5 + (uint)bVar4 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
  }
  param_1[0x27] = param_6;
  puVar2 = param_1 + 0x28;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_7;
    param_7 = param_7 + (uint)bVar4 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
  }
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = param_4;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x36] = 0;
  param_1[0x30] = 0x80;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 1;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

