// name: FUN_0041e940
// address: 0x41e940
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

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
  FUN_004dce64(0x4ef46c);
  puVar4 = param_1 + 1;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar1 = (uint *)*param_1;
  puVar2 = (uint *)FUN_004cc0f0();
  if (puVar2 != (uint *)0x0) {
    FUN_0048f7fc(puVar2,(LOGFONTA *)(param_1 + 2));
  }
  *param_1 = puVar2;
  if (puVar1 != (uint *)0x0) {
    FUN_00494064(puVar1,0);
    FUN_004cc0bc();
  }
  *in_FS_OFFSET = local_30;
  return;
}

