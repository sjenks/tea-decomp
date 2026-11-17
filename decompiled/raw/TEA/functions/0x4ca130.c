// name: FUN_004ca130
// address: 0x4ca130
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ca130(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  
  FUN_004dce64(0x51203c);
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = &PTR_FUN_005120a4;
    *(undefined ***)*param_1 = &PTR_FUN_005120dc;
    *(undefined ***)param_1[1] = &PTR_LAB_005120e8;
    if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[7])();
    }
    if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[8])();
    }
    uVar1 = FUN_004b596c((int *)param_1[3],(int)param_1);
    if (((char)uVar1 != '\0') && ((undefined4 *)param_1[3] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)param_1[3])();
    }
    if ((param_2 & 2) != 0) {
      FUN_00489c54(param_1 + 10,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_40;
  return;
}

