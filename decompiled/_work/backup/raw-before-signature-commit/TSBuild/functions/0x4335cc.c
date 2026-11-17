// name: FUN_004335cc
// address: 0x4335cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004335cc(int *param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47da54);
  if (param_1[7] == 0) {
    piVar1 = (int *)FUN_00456840();
    if (piVar1 != (int *)0x0) {
      FUN_00430958(piVar1,0,*param_1,'\x01',0);
    }
    FUN_00433660(param_1,(int)piVar1);
  }
  else if (*(int *)(*(int *)param_1[7] + 0xc) != 0) {
    FUN_00438338(*(int *)param_1[7],0x401,(uint)param_2,0);
  }
  *in_FS_OFFSET = local_2c;
  return;
}

