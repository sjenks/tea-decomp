// name: FUN_004554d4
// address: 0x4554d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004554d4(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  
  FUN_00467ba8(0x4841e8);
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = &PTR_FUN_00484250;
    *(undefined ***)*param_1 = &PTR_FUN_00484288;
    *(undefined ***)param_1[1] = &PTR_LAB_00484294;
    if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[7])();
    }
    if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[8])();
    }
    uVar1 = FUN_00444fe0((int *)param_1[3],(int)param_1);
    if (((char)uVar1 != '\0') && ((undefined4 *)param_1[3] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)param_1[3])();
    }
    if ((param_2 & 2) != 0) {
      FUN_0041e99c(param_1 + 10,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_40;
  return;
}

