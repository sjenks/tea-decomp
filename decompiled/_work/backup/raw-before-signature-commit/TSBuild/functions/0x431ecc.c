// name: FUN_00431ecc
// address: 0x431ecc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_00431ecc(undefined4 *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5,
            int param_6,char param_7,char param_8,int *param_9,uint *param_10)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  ICONINFO local_4c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  uint local_14 [2];
  uint local_c [2];
  
  FUN_00467ba8(0x47d3bc);
  GetIconInfo((HICON)*param_1,&local_4c);
  local_28 = 0x14;
  puVar1 = FUN_0041cc9c(local_14,local_4c.hbmColor,0);
  local_1c = local_1c + 2;
  FUN_0041ce0c(local_c,puVar1);
  FUN_0041cfe8(local_14,2);
  local_28 = 8;
  FUN_004318b4(local_c,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  local_1c = local_1c + -2;
  FUN_0041cfe8(local_c,2);
  *in_FS_OFFSET = local_38;
  return;
}

