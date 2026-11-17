// name: FUN_004457f0
// address: 0x4457f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004457f0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_00422c1c(param_1,(int *)&local_8,1);
  if (local_8 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *local_8;
  }
  puVar2 = FUN_004567e4((int)local_8,iVar1,(int *)&DAT_00404628,(int *)&DAT_004056d8,0);
  *param_2 = puVar2;
  return param_1;
}

