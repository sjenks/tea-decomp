// name: FUN_004927d0
// address: 0x4927d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004927d0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  undefined4 *local_8;
  
  FUN_004dce64(0x506ea0);
  if (*(int *)(param_1 + 0x37) == 0) {
    if (param_2 == 0) {
      param_2 = 10;
    }
    if (param_3 == 0) {
      param_3 = 10;
    }
    local_8 = (undefined4 *)FUN_004cc0f0();
    if (local_8 != (undefined4 *)0x0) {
      local_1c = 0x14;
      local_3c = param_2;
      local_38 = param_3;
      local_34 = param_2;
      local_30 = param_3;
      FUN_00489df0(local_8,&local_3c,1,10,5,1);
    }
    *(undefined4 **)(param_1 + 0x37) = local_8;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x37);
  *in_FS_OFFSET = local_2c;
  return uVar1;
}

