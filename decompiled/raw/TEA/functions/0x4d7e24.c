// name: FUN_004d7e24
// address: 0x4d7e24
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d7e24(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004cf40c(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = 1;
  uVar1 = FUN_004cf40c(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 2;
  *(int *)(param_1 + 0x54) = param_1 + 0x40;
  return;
}

