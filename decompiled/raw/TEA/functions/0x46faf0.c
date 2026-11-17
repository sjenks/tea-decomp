// name: FUN_0046faf0
// address: 0x46faf0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046faf0(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7f;
  }
  if (iVar1 >> 7 < 0x11) {
    FUN_0046fb4c(param_1,param_2,param_3);
  }
  else {
    FUN_0046fb4c(param_1,param_1 + 0x800,param_3);
    FUN_00470bec(param_1 + 0x800,param_2,0,param_3);
  }
  return;
}

