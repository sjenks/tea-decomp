// name: FUN_0049f990
// address: 0x49f990
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_0049f990(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  byte bVar3;
  undefined4 local_28;
  
  bVar3 = 0;
  FUN_004dce64(0x50999c);
  puVar2 = param_1;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  param_1[4] = param_3;
  param_1[5] = param_4;
  if ((*(byte *)(param_1 + 5) & 0xf) == 0) {
    param_1[5] = param_1[5] | 0xf;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

