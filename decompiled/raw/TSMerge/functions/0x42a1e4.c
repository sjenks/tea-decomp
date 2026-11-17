// name: FUN_0042a1e4
// address: 0x42a1e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0042a1e4(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x46a1f0);
  puVar1 = (undefined4 *)FUN_0044b300();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)FUN_0044b300();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_00429e48(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_00429de0(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

