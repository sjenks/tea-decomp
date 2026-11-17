// name: FUN_00432afc
// address: 0x432afc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00432afc(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x46bd6c);
  puVar1 = (undefined4 *)FUN_0044b300();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)FUN_0044b300();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_004328e4(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_0043287c(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

