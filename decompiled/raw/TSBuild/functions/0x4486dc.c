// name: FUN_004486dc
// address: 0x4486dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004486dc(int param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_00448714(iVar1,param_2);
  if (*(int *)(iVar1 + 0x60) == 0) {
    puVar2 = (uint *)&DAT_00481a30;
  }
  else {
    puVar2 = *(uint **)(iVar1 + 0x60);
  }
  FUN_0042e00c(param_2,puVar2);
  return;
}

