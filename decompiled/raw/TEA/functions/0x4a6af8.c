// name: FUN_004a6af8
// address: 0x4a6af8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004a6af8(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((param_2 == *(int *)(param_1 + 0xc)) && (param_3 == 1)) && (*(int *)(param_1 + 0x58) != 0)) {
    SetCursor(*(HCURSOR *)(param_1 + 0x58));
    return true;
  }
  iVar1 = FUN_004a5774(param_1);
  return iVar1 != 0;
}

