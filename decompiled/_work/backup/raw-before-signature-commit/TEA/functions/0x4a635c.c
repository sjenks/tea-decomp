// name: FUN_004a635c
// address: 0x4a635c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a635c(int param_1,undefined4 param_2,int param_3)

{
  LRESULT LVar1;
  
  LVar1 = FUN_004a614c(*(HWND *)(param_3 + 8),*(LPARAM *)(param_1 + 0x6c));
  if (LVar1 == 0) {
    FUN_004a5774(param_1);
  }
  else {
    FUN_004a7708(LVar1,'\x01');
  }
  return;
}

