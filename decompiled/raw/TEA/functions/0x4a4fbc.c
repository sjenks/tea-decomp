// name: FUN_004a4fbc
// address: 0x4a4fbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004a4fbc(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50b0b0);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x8a;
    param_1[1] = (int)param_1 + 0x8e;
    *(undefined4 *)((int)param_1 + 0x86) = 0;
    *(undefined ***)((int)param_1 + 0x8a) = &PTR_FUN_004ea94c;
    *(undefined ***)((int)param_1 + 0x8e) = &PTR_FUN_004ea93c;
  }
  param_1[2] = (int)&PTR_FUN_005093fc;
  *(undefined ***)*param_1 = &PTR_LAB_0050948c;
  *(undefined ***)param_1[1] = &PTR_LAB_00509498;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

