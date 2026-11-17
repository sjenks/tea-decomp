// name: FUN_004cba88
// address: 0x4cba88
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004cba88(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 local_28;
  
  bVar4 = 0;
  FUN_004dce64(0x512848);
  FUN_004cba44(param_1);
  puVar2 = (undefined4 *)&stack0x00000008;
  puVar3 = param_1;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

