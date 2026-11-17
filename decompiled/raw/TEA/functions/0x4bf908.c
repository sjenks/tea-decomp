// name: FUN_004bf908
// address: 0x4bf908
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004bf908(int *param_1,uint *param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  if (*(uint *)(iVar1 + 5) <= *(uint *)(iVar1 + 1)) {
    FUN_0048ace4(iVar1,*(int *)(iVar1 + 1) + 1);
  }
  iVar2 = *(int *)(iVar1 + 1);
  *(int *)(iVar1 + 1) = *(int *)(iVar1 + 1) + 1;
  *(undefined4 *)(*(int *)(iVar1 + 9) + iVar2 * 4) = param_3;
  FUN_004bf714(param_1,param_2,param_4);
  return;
}

