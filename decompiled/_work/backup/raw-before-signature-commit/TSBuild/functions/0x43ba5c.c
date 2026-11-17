// name: FUN_0043ba5c
// address: 0x43ba5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043ba5c(int param_1)

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
      FUN_00422b40(**(undefined4 **)(param_1 + 0x27),(int)&local_14);
      DrawMenuBar(*(HWND *)(**(int **)(param_1 + 0x2b) + 0xc));
    }
  }
  return;
}

