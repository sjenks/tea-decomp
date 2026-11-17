// name: FUN_004aba90
// address: 0x4aba90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004aba90(uint *param_1,int param_2,uint *param_3,uint *param_4)

{
  HBRUSH pHVar1;
  
  if (*param_1 != 0) {
    FUN_00493eb4(*param_1);
  }
  pHVar1 = FUN_004abacc(param_2,param_3,param_4);
  *param_1 = (uint)pHVar1;
  FUN_00493c34(*param_1,2);
  return;
}

