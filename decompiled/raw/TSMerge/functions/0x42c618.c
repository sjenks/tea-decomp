// name: FUN_0042c618
// address: 0x42c618
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0042c618(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((param_2 == *(int *)(param_1 + 0xc)) && (param_3 == 1)) && (*(int *)(param_1 + 0x58) != 0)) {
    SetCursor(*(HCURSOR *)(param_1 + 0x58));
    return true;
  }
  iVar1 = FUN_0042b294(param_1);
  return iVar1 != 0;
}

