// name: FUN_0043b784
// address: 0x43b784
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043b784(int param_1,byte param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47f230);
  if (*(int *)(param_1 + 0x31) == 0) {
    if (*(int *)(param_1 + 0x2b) == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x2b);
    }
    else {
      uVar2 = **(undefined4 **)(param_1 + 0x2b);
    }
    if (*(int *)(**(int **)(param_1 + 0x2b) + 0xc) == 0) {
      uVar2 = 0;
    }
    piVar1 = (int *)FUN_00456840();
    if (piVar1 != (int *)0x0) {
      FUN_00430958(piVar1,0,uVar2,'\x01',0);
    }
    FUN_0043b838(param_1,piVar1);
  }
  else if (*(int *)(**(int **)(param_1 + 0x31) + 0xc) != 0) {
    FUN_00438338(**(int **)(param_1 + 0x31),0x401,(uint)param_2,0);
  }
  *in_FS_OFFSET = local_2c;
  return;
}

