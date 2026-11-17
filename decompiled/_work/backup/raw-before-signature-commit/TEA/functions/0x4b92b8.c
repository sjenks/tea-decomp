// name: FUN_004b92b8
// address: 0x4b92b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004b92b8(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_004b92f8(iVar1,param_2);
  puVar2 = FUN_00499fc4(param_2);
  *(undefined4 **)(iVar1 + 0x60) = puVar2;
  if (**(char **)(iVar1 + 0x60) == '\0') {
    FUN_004cc0bc();
    *(undefined4 *)(iVar1 + 0x60) = 0;
  }
  return iVar1;
}

