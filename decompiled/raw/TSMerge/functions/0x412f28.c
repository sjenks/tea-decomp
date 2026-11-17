// name: FUN_00412f28
// address: 0x412f28
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00412f28(int *param_1,int *param_2)

{
  int *piVar1;
  int local_1c;
  undefined4 local_18;
  int *local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  FUN_004197c4((int)param_1,param_2);
  if ((param_1[0x12] == 0) && (param_1[0x16] < 0)) {
    (**(code **)(*param_1 + 0x60))();
  }
  if (param_1[0x12] == 0) {
    local_10 = (**(code **)(*(int *)(*(int *)((int)param_1 + 6) + 0x18) + 0x2c))();
    local_14 = (int *)(local_10 + 0x15);
    local_1c = *(int *)(local_10 + 0x15);
    local_18 = *(undefined4 *)(local_10 + 0x19);
    piVar1 = &local_1c;
  }
  else {
    local_c = *(int *)(param_1[0x12] + 0x15);
    local_8 = *(undefined4 *)(param_1[0x12] + 0x19);
    piVar1 = &local_c;
  }
  *param_2 = *param_2 + *piVar1;
  param_2[1] = param_2[1] + piVar1[1];
  return;
}

