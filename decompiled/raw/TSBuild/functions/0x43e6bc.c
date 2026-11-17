// name: FUN_0043e6bc
// address: 0x43e6bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043e6bc(undefined4 *param_1,int param_2,HWND param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_2 == 2) && (*(int *)((int)param_1 + 0x3a) != 0)) {
    iVar1 = FUN_0043831c(param_1[1]);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 8);
    }
    puVar3 = FUN_00468488(iVar1,iVar2,(int *)&DAT_00403c70,(int *)&DAT_0042c594,0);
    if (puVar3 != (undefined4 *)0x0) {
      if (*(int *)((int)param_1 + 0x3a) != -1) {
        (**(code **)(*(int *)((int)param_1 + 0x35) + 8))();
      }
      (**(code **)(puVar3[6] + 0x6c))();
    }
    *(undefined4 *)((int)param_1 + 0x3a) = 0;
  }
  FUN_00438b78(*(int *)*param_1,param_2,param_3);
  return;
}

