// name: FUN_0043d4b0
// address: 0x43d4b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0043d4b0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_0043d4f0(iVar1,param_2);
  puVar2 = FUN_00422a30(param_2);
  *(undefined4 **)(iVar1 + 0x60) = puVar2;
  if (**(char **)(iVar1 + 0x60) == '\0') {
    FUN_0044b2cc();
    *(undefined4 *)(iVar1 + 0x60) = 0;
  }
  return iVar1;
}

