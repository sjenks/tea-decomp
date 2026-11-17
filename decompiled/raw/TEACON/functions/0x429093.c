// name: FUN_00429093
// address: 0x429093
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00429093(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((*(byte *)(iVar1 + 4) & 2) == 0) {
    FUN_00426830(s_IS_CLASS_varType_>tpMask__00434022,s_xx_cpp_0043403c,0xe13);
  }
  if (((*(uint *)(iVar1 + 0xc) & 0x50) == 0x50) && (*(int *)(iVar1 + 8) != -1)) {
    if (param_3 == 0) {
      param_3 = *(int *)(*(int *)(iVar1 + 8) + param_1);
    }
    param_1 = param_1 - *(int *)(param_3 + -8);
    iVar1 = param_3 - *(int *)(param_3 + -4);
    if (*(int *)(iVar1 + -4) != 0) {
      FUN_00426830(s___unsigned___far___vftAddr___1____00434043,s_xx_cpp_00434068,0xe39);
    }
    *param_2 = *(int *)(iVar1 + -0xc);
  }
  return param_1;
}

