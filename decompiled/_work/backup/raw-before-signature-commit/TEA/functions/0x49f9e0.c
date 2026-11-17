// name: FUN_0049f9e0
// address: 0x49f9e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0049f9e0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (uint)((*(byte *)(param_2 + 4) & 3) != 0) + (uint)((*(byte *)(param_2 + 4) & 0xc) != 0);
  iVar1 = param_2[3];
  iVar2 = param_2[2];
  iVar3 = param_2[1];
  *param_1 = *param_2 + iVar4;
  param_1[1] = iVar3 + iVar4;
  param_1[2] = iVar2 - iVar4;
  param_1[3] = iVar1 - iVar4;
  return param_1;
}

