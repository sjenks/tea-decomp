// name: FUN_0044ffb8
// address: 0x44ffb8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044ffb8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  param_1[0xb] = param_2;
  iVar1 = FUN_004e3c04();
  iVar2 = FUN_004e3c04();
  if (iVar1 != iVar2) {
    FUN_004e3c04();
    (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
  }
  return;
}

