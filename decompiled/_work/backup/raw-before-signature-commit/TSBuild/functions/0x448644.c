// name: FUN_00448644
// address: 0x448644
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00448644(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_00448684(iVar1,param_2);
  puVar2 = FUN_0042dbc4(param_2);
  *(undefined4 **)(iVar1 + 0x60) = puVar2;
  if (**(char **)(iVar1 + 0x60) == '\0') {
    FUN_0045680c();
    *(undefined4 *)(iVar1 + 0x60) = 0;
  }
  return iVar1;
}

