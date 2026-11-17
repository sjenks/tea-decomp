// name: FUN_004075e4
// address: 0x4075e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0040762e) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00407636 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * __cdecl FUN_004075e4(undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  undefined4 local_28;
  
  bVar6 = 0;
  FUN_004dce64(0x4eb4e0);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[2] = 0x100;
  FUN_004dc9f4(param_2);
  puVar1 = (undefined4 *)FUN_004cc180();
  *param_1 = puVar1;
  uVar2 = 0xffffffff;
  do {
    puVar5 = param_2;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    puVar5 = (uint *)((int)param_2 + (uint)bVar6 * -2 + 1);
    uVar3 = *param_2;
    param_2 = puVar5;
  } while ((char)uVar3 != '\0');
  uVar2 = ~uVar2;
  puVar4 = (undefined4 *)((int)puVar5 - uVar2);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar1 = puVar1 + (uint)bVar6 * -2 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar6 * -2 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + (uint)bVar6 * -2 + 1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

