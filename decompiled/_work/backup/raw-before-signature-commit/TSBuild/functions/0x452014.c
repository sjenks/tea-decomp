// name: FUN_00452014
// address: 0x452014
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00452014(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8) * *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0x24);
  if (((*(char *)(param_1 + 0x3a) != '\0') && (iVar2 < 0x8000)) && (iVar1 < 0x8000)) {
    (**(code **)(*(int *)(param_2 + 5) + 0x2c))();
    FUN_00428898(param_3,iVar2,iVar1);
  }
  return;
}

