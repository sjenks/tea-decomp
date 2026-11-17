// name: FUN_004aae10
// address: 0x4aae10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004aae10(int param_1)

{
  char cVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  local_14 = 0x7ffa;
  local_10 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x27) != 0) {
    cVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x27) + 8) + 0x6c))();
    if (cVar1 != '\0') {
      FUN_0048e7e0(**(undefined4 **)(param_1 + 0x27),(int)&local_14);
      DrawMenuBar(*(HWND *)(**(int **)(param_1 + 0x2b) + 0xc));
    }
  }
  return;
}

