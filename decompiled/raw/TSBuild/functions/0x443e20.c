// name: FUN_00443e20
// address: 0x443e20
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00443e20(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  FUN_00467ba8(0x480a08);
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    FUN_0042bc04(local_10,param_2,0);
    (**(code **)(*(int *)(param_1 + 8) + 0x58))();
    FUN_0042bcb0(local_10,2);
  }
  *in_FS_OFFSET = local_34;
  return;
}

