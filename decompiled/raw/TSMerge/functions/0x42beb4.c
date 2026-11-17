// name: FUN_0042beb4
// address: 0x42beb4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042beb4(int param_1,undefined4 param_2,int param_3)

{
  LRESULT LVar1;
  
  LVar1 = FUN_0042bc6c(*(HWND *)(param_3 + 0xc),*(LPARAM *)(param_1 + 0x6c));
  if ((*(int *)(param_3 + 0xc) == *(int *)(param_1 + 0xc)) || (LVar1 == 0)) {
    FUN_0042b294(param_1);
  }
  else {
    FUN_0042d204(LVar1,'\x01');
  }
  return;
}

