// name: FUN_00488c78
// address: 0x488c78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_00488c78(int *param_1,uint *param_2,undefined4 param_3,char param_4,undefined4 param_5,
            byte param_6,char param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x504b3c);
  FUN_0048fcec(param_1,param_3);
  *param_1 = (int)&PTR_FUN_00504ce0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(char *)((int)param_1 + 0x57) = param_7;
  if (param_7 == '\0') {
    if ((short)((uint)param_2 >> 0x10) != 0) {
      param_2 = (uint *)FUN_00496d48(param_2);
    }
    param_1[0x11] = (int)param_2;
    param_1[0x16] = -1;
    param_1[0x17] = 4;
  }
  else {
    param_1[0x11] = 0;
    param_1[0x16] = (int)param_2;
    param_1[0x17] = 1;
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(byte *)(param_1 + 0x15) = param_4 << 4 | *(byte *)(param_1 + 0x15) & 0xf;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(byte *)(param_1 + 0x15) = param_6 & 0xf | *(byte *)(param_1 + 0x15) & 0xf0;
  *(byte *)((int)param_1 + 0x56) = *(byte *)((int)param_1 + 0x56) | 1;
  *(byte *)((int)param_1 + 0x56) = *(byte *)((int)param_1 + 0x56) & 0xfd;
  (**(code **)(*param_1 + 4))();
  FUN_00488e74((int)param_1,2);
  *(byte *)((int)param_1 + 0x56) = *(byte *)((int)param_1 + 0x56) | 4;
  *in_FS_OFFSET = local_28;
  return param_1;
}

