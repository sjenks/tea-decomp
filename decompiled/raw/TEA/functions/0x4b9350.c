// name: FUN_004b9350
// address: 0x4b9350
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b9350(int param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_004b9388(iVar1,param_2);
  if (*(int *)(iVar1 + 0x60) == 0) {
    puVar2 = (uint *)&DAT_0050e9b8;
  }
  else {
    puVar2 = *(uint **)(iVar1 + 0x60);
  }
  FUN_0049a40c(param_2,puVar2);
  return;
}

