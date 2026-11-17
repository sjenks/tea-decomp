// name: FUN_0042fbbc
// address: 0x42fbbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0042fbbc(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47cd4c);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x8a;
    param_1[1] = (int)param_1 + 0x8e;
    *(undefined4 *)((int)param_1 + 0x86) = 0;
    *(undefined ***)((int)param_1 + 0x8a) = &PTR_FUN_00474f84;
    *(undefined ***)((int)param_1 + 0x8e) = &PTR_FUN_00474f74;
  }
  param_1[2] = (int)&PTR_FUN_0047cdb8;
  *(undefined ***)*param_1 = &PTR_LAB_0047ce48;
  *(undefined ***)param_1[1] = &PTR_LAB_0047ce54;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

