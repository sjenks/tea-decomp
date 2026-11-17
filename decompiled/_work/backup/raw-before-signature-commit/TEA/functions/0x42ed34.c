// name: FUN_0042ed34
// address: 0x42ed34
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042ed34(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int local_14 [4];
  
  cVar3 = '\0';
  iVar2 = 1;
  iVar1 = FUN_0042ba08((int)param_1);
  FUN_0042ed8c(local_14,param_1,0,iVar1,iVar2,cVar3);
  (**(code **)(param_1[3] + 0x24))();
  return;
}

