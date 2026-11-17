// name: FUN_004146a0
// address: 0x4146a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004146a0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  if (iVar1 >> 4 < 0x11) {
    FUN_00414708(param_1,param_2);
  }
  else {
    FUN_00414708(param_1,param_1 + 0x100);
    FUN_00414acc(param_1 + 0x100,param_2);
  }
  return;
}

