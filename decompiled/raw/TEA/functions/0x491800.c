// name: FUN_00491800
// address: 0x491800
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00491800(int *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  FUN_004dce64(0x506db8);
  FUN_004cc3c4((int *)0x0,0x10,param_1[3],1,FUN_004918cc);
  if ((*(char *)((int)param_1 + 0x31) != '\0') || (*(char *)((int)param_1 + 0x32) != '\0')) {
    (**(code **)(param_1[6] + 0x44))();
  }
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    *param_2 = *(undefined4 *)(*param_1 + 0x28);
  }
  else {
    *param_2 = 0;
  }
  if (*(char *)((int)param_1 + 0x32) == '\0') {
    param_2[1] = *(undefined4 *)(*param_1 + 0x2c);
  }
  else if (param_1[3] == 0) {
    param_2[1] = 0;
  }
  else {
    param_2[1] = 0;
  }
  FUN_004cc0cc();
  *in_FS_OFFSET = local_34;
  return;
}

