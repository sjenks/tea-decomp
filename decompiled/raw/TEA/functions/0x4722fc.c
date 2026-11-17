// name: FUN_004722fc
// address: 0x4722fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004722fc(int param_1)

{
  char cVar1;
  undefined4 local_40 [15];
  
  cVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x214) + 0xc) + 0x3c))();
  if (cVar1 != '\0') {
    FUN_00485614(local_40,*(int **)(param_1 + 0x214),'\x01',0xf800003f);
    FUN_0041ae3c((undefined4 *)(*(int *)(param_1 + 0x60) + 0x170),(int)local_40);
    FUN_00469120(*(int **)(param_1 + 0x214),(LPARAM)local_40,1);
  }
  return;
}

