// name: FUN_00452cf4
// address: 0x452cf4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00452cf4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 != 4) {
    FUN_0045c6d4(param_1,4);
  }
  return iVar1 != 2;
}

