// name: FUN_00409e44
// address: 0x409e44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00409e44(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 - param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  iVar2 = param_3 - param_1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  iVar1 = FUN_00409eb0(iVar2 >> 4,iVar1 >> 4);
  while (iVar1 != 0) {
    iVar2 = param_2 - param_1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    FUN_00409ed4(param_1,param_3,(iVar1 + -1) * 0x10 + param_1,iVar2 >> 4);
    iVar1 = iVar1 + -1;
  }
  return;
}

