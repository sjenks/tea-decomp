// name: FUN_0043dfb0
// address: 0x43dfb0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043dfb0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x6c) < 0) {
    iVar1 = FUN_004bfd60((int *)(param_1 + 0x473));
    if (iVar1 < 1) {
      *(undefined4 *)(param_1 + 100) = 0;
      (**(code **)(*(int *)(param_1 + 0xc) + 0xc0))();
    }
    else {
      *(undefined4 *)(param_1 + 100) = 1;
      (**(code **)(*(int *)(param_1 + 0xc) + 0xc0))();
    }
  }
  else {
    *(undefined4 *)(param_1 + 100) = 1;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x300) + 8) + 0x60))();
  return;
}

