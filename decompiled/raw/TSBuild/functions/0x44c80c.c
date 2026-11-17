// name: FUN_0044c80c
// address: 0x44c80c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044c80c(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_0042d9a0(param_2,param_1,4);
  uVar1 = FUN_0042da9c(param_2);
  *(uint *)(param_1 + 4) = uVar1;
  FUN_0045681c();
  FUN_0045681c();
  uVar2 = FUN_004568d0();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = FUN_004568d0();
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  FUN_0042d9a0(param_2,*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 4));
  FUN_0042d9a0(param_2,*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 4));
  return;
}

