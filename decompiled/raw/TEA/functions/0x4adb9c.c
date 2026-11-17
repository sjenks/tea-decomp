// name: FUN_004adb9c
// address: 0x4adb9c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004adb9c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 == 1) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0x14))();
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 != 4) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0xc) + 0x18))();
    return;
  }
  (**(code **)(*(int *)(param_1 + 0xc) + 0x1c))();
  return;
}

