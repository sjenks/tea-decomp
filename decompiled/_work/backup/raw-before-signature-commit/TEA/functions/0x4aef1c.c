// name: FUN_004aef1c
// address: 0x4aef1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004aef1c(undefined4 *param_1,int param_2,HWND param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_2 == 2) && (*(int *)((int)param_1 + 0x3a) != 0)) {
    iVar1 = FUN_004a768c(param_1[1]);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 8);
    }
    puVar3 = FUN_004dd744(iVar1,iVar2,(int *)&DAT_0040299c,(int *)&DAT_00473d70,0);
    if (puVar3 != (undefined4 *)0x0) {
      if (*(int *)((int)param_1 + 0x3a) != -1) {
        (**(code **)(*(int *)((int)param_1 + 0x35) + 8))();
      }
      (**(code **)(puVar3[6] + 0x6c))();
    }
    *(undefined4 *)((int)param_1 + 0x3a) = 0;
  }
  FUN_004a7ee8(*(int *)*param_1,param_2,param_3);
  return;
}

