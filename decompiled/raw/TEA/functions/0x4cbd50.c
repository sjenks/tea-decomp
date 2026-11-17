// name: FUN_004cbd50
// address: 0x4cbd50
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004cbd50(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x5128a4);
  puVar1 = (undefined4 *)FUN_004cc0f0();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)FUN_004cc0f0();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_004cbc00(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_004cbb98(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

