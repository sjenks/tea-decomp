// name: FUN_00474838
// address: 0x474838
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00474838(int param_1)

{
  bool bVar1;
  
  if ((*(int **)(param_1 + 0x48))[0x19] != 4) {
    FUN_0045bc3c(*(int **)(param_1 + 0x48));
  }
  bVar1 = FUN_00452cf4(*(int *)(param_1 + 0x48));
  if (bVar1) {
    IsZoomed(*(HWND *)(*(int *)(param_1 + 4) + 0xc));
    FUN_00463bfc(*(int *)(param_1 + 0x4c));
  }
  return bVar1;
}

