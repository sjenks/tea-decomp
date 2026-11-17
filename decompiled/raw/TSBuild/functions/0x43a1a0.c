// name: FUN_0043a1a0
// address: 0x43a1a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043a1a0(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47ed98);
  piVar1 = (int *)FUN_00456840();
  if (piVar1 != (int *)0x0) {
    FUN_0044cb34(piVar1,0,0,*(uint **)(param_1 + 8),0,'\0',0);
  }
  FUN_0043a224(param_1,piVar1);
  *in_FS_OFFSET = local_2c;
  return;
}

