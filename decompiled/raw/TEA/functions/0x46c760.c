// name: FUN_0046c760
// address: 0x46c760
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046c760(int param_1)

{
  undefined4 local_48 [15];
  uint local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)(*(int *)(param_1 + 0x214) + 0xc) + 0x24))();
  local_c = *(uint *)(*(int *)(param_1 + 0x60) + 0x2c);
  FUN_0046914c(&local_8,*(int **)(param_1 + 0x214),&local_c);
  FUN_00485614(local_48,*(int **)(param_1 + 0x214),'\0',0xf800003f);
  FUN_0041ae3c((undefined4 *)(*(int *)(param_1 + 0x60) + 0x130),(int)local_48);
  FUN_00469120(*(int **)(param_1 + 0x214),(LPARAM)local_48,4);
  return;
}

