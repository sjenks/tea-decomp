// name: FUN_00427a70
// address: 0x427a70
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00427a70(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_2;
  }
  puVar2 = FUN_004dd744((int)param_2,iVar1,(int *)&DAT_00427ac8,(int *)&DAT_00427b08,0);
  if ((puVar2 == (undefined4 *)0x0) || (param_2[1] != 0x163a)) {
    FUN_004af148(param_1,param_2);
  }
  else {
    (**(code **)(*param_2 + 4))();
  }
  return;
}

