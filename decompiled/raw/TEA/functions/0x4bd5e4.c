// name: FUN_004bd5e4
// address: 0x4bd5e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004bd5e4(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_00499da0(param_2,param_1,4);
  uVar1 = FUN_00499e9c(param_2);
  *(uint *)(param_1 + 4) = uVar1;
  FUN_004cc0cc();
  FUN_004cc0cc();
  uVar2 = FUN_004cc180();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = FUN_004cc180();
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  FUN_00499da0(param_2,*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 4));
  FUN_00499da0(param_2,*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 4));
  return;
}

