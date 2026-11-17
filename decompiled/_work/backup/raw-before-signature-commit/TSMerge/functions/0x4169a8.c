// name: FUN_004169a8
// address: 0x4169a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004169a8(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_3 - 1;
  iVar1 = FUN_004169e4(param_2,0);
  if (iVar1 - 1U < uVar3) {
    iVar2 = 7 - uVar3;
  }
  else {
    iVar2 = -uVar3;
  }
  *param_1 = *param_2 - ((iVar1 - 1U) + iVar2);
  return param_1;
}

