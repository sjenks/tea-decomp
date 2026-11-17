// name: FUN_00449f94
// address: 0x449f94
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00449f94(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  
  FUN_00455f04(0x4703b8);
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = &PTR_FUN_00470420;
    *(undefined ***)*param_1 = &PTR_FUN_00470458;
    *(undefined ***)param_1[1] = &PTR_LAB_00470464;
    if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[7])();
    }
    if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[8])();
    }
    uVar1 = FUN_00439e4c((int *)param_1[3],(int)param_1);
    if (((char)uVar1 != '\0') && ((undefined4 *)param_1[3] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)param_1[3])();
    }
    if ((param_2 & 2) != 0) {
      FUN_00413978(param_1 + 10,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_40;
  return;
}

