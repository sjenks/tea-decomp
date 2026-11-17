// name: FUN_00438d94
// address: 0x438d94
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00438d94(int param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47e7f4);
  if (*(int *)(param_1 + 100) == 0) {
    piVar1 = (int *)FUN_00456840();
    if (piVar1 != (int *)0x0) {
      FUN_00430958(piVar1,0,param_1,'\x01',0);
    }
    FUN_00438e2c(param_1,piVar1);
  }
  else if (*(int *)(**(int **)(param_1 + 100) + 0xc) != 0) {
    FUN_00438338(**(int **)(param_1 + 100),0x401,(uint)param_2,0);
  }
  *in_FS_OFFSET = local_2c;
  return;
}

