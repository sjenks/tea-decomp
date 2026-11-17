// name: FUN_004a6394
// address: 0x4a6394
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a6394(int param_1,undefined4 param_2,int param_3)

{
  LRESULT LVar1;
  
  LVar1 = FUN_004a614c(*(HWND *)(param_3 + 0xc),*(LPARAM *)(param_1 + 0x6c));
  if ((*(int *)(param_3 + 0xc) == *(int *)(param_1 + 0xc)) || (LVar1 == 0)) {
    FUN_004a5774(param_1);
  }
  else {
    FUN_004a7708(LVar1,'\x01');
  }
  return;
}

