// name: FUN_0042f00c
// address: 0x42f00c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042f00c(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x46afbc);
  piVar1 = (int *)FUN_0044b300();
  if (piVar1 != (int *)0x0) {
    FUN_004419a0(piVar1,0,0,*(uint **)(param_1 + 8),0,'\0',0);
  }
  FUN_0042f090(param_1,piVar1);
  *in_FS_OFFSET = local_2c;
  return;
}

