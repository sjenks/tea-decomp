// name: FUN_004a9534
// address: 0x4a9534
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a9534(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x50b800);
  piVar1 = (int *)FUN_004cc0f0();
  if (piVar1 != (int *)0x0) {
    FUN_004bd90c(piVar1,0,0,*(uint **)(param_1 + 8),0,'\0',0);
  }
  FUN_004a95d8(param_1,piVar1);
  *in_FS_OFFSET = local_2c;
  return;
}

