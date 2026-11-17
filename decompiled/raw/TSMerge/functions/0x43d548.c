// name: FUN_0043d548
// address: 0x43d548
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043d548(int param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_0043d580(iVar1,param_2);
  if (*(int *)(iVar1 + 0x60) == 0) {
    puVar2 = (uint *)&DAT_0046dc54;
  }
  else {
    puVar2 = *(uint **)(iVar1 + 0x60);
  }
  FUN_00422e78(param_2,puVar2);
  return;
}

