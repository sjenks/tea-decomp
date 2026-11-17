// name: FUN_00489f44
// address: 0x489f44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00489f44(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 < 0) {
    param_4 = *(int *)(param_2 + 0x2d);
  }
  iVar1 = *(int *)(param_2 + 0x19);
  iVar2 = *(int *)(param_2 + 0xd);
  *param_1 = param_3 * *(int *)(param_2 + 0x15) + *(int *)(param_2 + 9);
  param_1[1] = iVar1 * param_4 + iVar2;
  return param_1;
}

