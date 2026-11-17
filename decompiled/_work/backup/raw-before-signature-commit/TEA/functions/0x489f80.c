// name: FUN_00489f80
// address: 0x489f80
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00489f80(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_4 < 0) {
    param_4 = *(int *)(param_2 + 0x2d);
  }
  iVar4 = *(int *)(param_2 + 0x19) * param_4 + *(int *)(param_2 + 0xd);
  iVar3 = param_3 * *(int *)(param_2 + 0x15) + *(int *)(param_2 + 9);
  iVar1 = *(int *)(param_2 + 0x19);
  iVar2 = *(int *)(param_2 + 0x15);
  *param_1 = iVar3;
  param_1[1] = iVar4;
  param_1[2] = iVar2 + iVar3;
  param_1[3] = iVar1 + iVar4;
  return param_1;
}

