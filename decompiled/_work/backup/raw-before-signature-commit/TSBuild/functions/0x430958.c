// name: FUN_00430958
// address: 0x430958
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00430958(int *param_1,int param_2,undefined4 param_3,char param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47cef8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 9);
    param_1[9] = (int)(param_1 + 6);
    param_1[10] = (int)(param_1 + 7);
    param_1[1] = (int)(param_1 + 6);
    param_1[2] = (int)(param_1 + 7);
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[6] = (int)&PTR_FUN_00474f84;
    param_1[7] = (int)&PTR_FUN_00474f74;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18(param_1 + 9,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_0043d404(param_1,1,param_3,0,(uint *)&DAT_0047ce84,0,0,0,0,param_5);
  param_1[3] = (int)&PTR_FUN_0047cf3c;
  *(undefined ***)param_1[1] = &PTR_LAB_0047cf6c;
  *(undefined ***)param_1[2] = &PTR_LAB_0047cf78;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047cf84;
  *(undefined4 *)(*param_1 + 0x18) = 0x88000000;
  if (param_4 != '\0') {
    *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 1;
  }
  bVar1 = FUN_0041b9e4();
  if (bVar1) {
    *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | 0x100;
  }
  else {
    *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x800000;
  }
  *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | 8;
  bVar1 = FUN_0041b778();
  if (bVar1) {
    iVar2 = 4;
  }
  else {
    iVar2 = 0;
  }
  param_1[4] = iVar2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

