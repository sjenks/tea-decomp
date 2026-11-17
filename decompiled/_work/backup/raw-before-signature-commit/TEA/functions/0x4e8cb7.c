// name: FUN_004e8cb7
// address: 0x4e8cb7
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004e8cb7(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((*(byte *)(iVar1 + 4) & 2) == 0) {
    FUN_004e5ce8(s_IS_CLASS_varType_>tpMask__0051961a,s_xx_cpp_00519634,0xe13);
  }
  if (((*(uint *)(iVar1 + 0xc) & 0x50) == 0x50) && (*(int *)(iVar1 + 8) != -1)) {
    if (param_3 == 0) {
      param_3 = *(int *)(*(int *)(iVar1 + 8) + param_1);
    }
    param_1 = param_1 - *(int *)(param_3 + -8);
    iVar1 = param_3 - *(int *)(param_3 + -4);
    if (*(int *)(iVar1 + -4) != 0) {
      FUN_004e5ce8(s___unsigned___far___vftAddr___1____0051963b,s_xx_cpp_00519660,0xe39);
    }
    *param_2 = *(int *)(iVar1 + -0xc);
  }
  return param_1;
}

