// name: FUN_004a67c4
// address: 0x4a67c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a67c4(int param_1,int param_2,undefined4 param_3,HWND param_4)

{
  uint uVar1;
  
  uVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10);
  if (((uVar1 & 0x200000) == 0) && (*(int *)(param_1 + 0x44) == 0)) {
    FUN_004a65bc(param_1,param_2,param_3,param_4);
  }
  else if (*(int *)(param_1 + 0x44) == 0) {
    FUN_004a5774(param_1);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x24))();
  }
  return;
}

