// name: FUN_00435068
// address: 0x435068
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00435068(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if ((*(byte *)(*param_1 + 0x76) & 0x10) == 0) {
    FUN_0042cd50(*param_1,param_2);
  }
  else {
    iVar3 = *param_1;
    cVar2 = (**(code **)(*(int *)(iVar3 + 8) + 0x3c))();
    if (cVar2 != '\0') {
      iVar1 = *param_1;
      (**(code **)(*(int *)(iVar1 + 8) + 0x5c))(iVar1,*(int *)(iVar1 + 8),iVar3,iVar1,0);
      (**(code **)(param_1[3] + 0x24))();
    }
  }
  return;
}

