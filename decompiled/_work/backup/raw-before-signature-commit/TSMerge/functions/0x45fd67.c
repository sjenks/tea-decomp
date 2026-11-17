// name: FUN_0045fd67
// address: 0x45fd67
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045fd67(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((*(byte *)(iVar1 + 4) & 2) == 0) {
    FUN_0045d2c4(s_IS_CLASS_varType_>tpMask__0047665e,s_xx_cpp_00476678,0xe13);
  }
  if (((*(uint *)(iVar1 + 0xc) & 0x50) == 0x50) && (*(int *)(iVar1 + 8) != -1)) {
    if (param_3 == 0) {
      param_3 = *(int *)(*(int *)(iVar1 + 8) + param_1);
    }
    param_1 = param_1 - *(int *)(param_3 + -8);
    iVar1 = param_3 - *(int *)(param_3 + -4);
    if (*(int *)(iVar1 + -4) != 0) {
      FUN_0045d2c4(s___unsigned___far___vftAddr___1____0047667f,s_xx_cpp_004766a4,0xe39);
    }
    *param_2 = *(int *)(iVar1 + -0xc);
  }
  return param_1;
}

