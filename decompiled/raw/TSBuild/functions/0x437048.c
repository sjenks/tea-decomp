// name: FUN_00437048
// address: 0x437048
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00437048(int param_1,undefined4 param_2,int param_3)

{
  LRESULT LVar1;
  
  LVar1 = FUN_00436e00(*(HWND *)(param_3 + 0xc),*(LPARAM *)(param_1 + 0x6c));
  if ((*(int *)(param_3 + 0xc) == *(int *)(param_1 + 0xc)) || (LVar1 == 0)) {
    FUN_00436428(param_1);
  }
  else {
    FUN_00438398(LVar1,'\x01');
  }
  return;
}

