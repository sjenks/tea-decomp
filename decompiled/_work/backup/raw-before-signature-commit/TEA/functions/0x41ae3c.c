// name: FUN_0041ae3c
// address: 0x41ae3c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041ae3c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_50;
  int local_2c;
  int local_27;
  
  FUN_004dce64(0x4ee9d8);
  FUN_004a8760(&local_2c);
  (**(code **)(local_27 + 0xc))();
  FUN_00485770(param_2,param_1 + 1);
  uVar1 = FUN_004e3c04();
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  FUN_00485738(param_2,*(undefined1 *)((int)param_1 + 0x1b));
  FUN_004856d4(param_2,param_1);
  FUN_004a86dc(&local_2c,0);
  *in_FS_OFFSET = local_50;
  return;
}

