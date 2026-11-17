// name: FUN_004733d8
// address: 0x4733d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_004733d8(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(*param_1 + 0x15) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x15) + 8);
  }
  piVar1 = FUN_004dd744(*(int *)(*param_1 + 0x15),iVar2,(int *)&DAT_0040299c,(int *)&DAT_0046a2bc,0)
  ;
  FUN_0046d86c(piVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  IsIconic(*(HWND *)(param_1[1] + 0xc));
  (**(code **)(*(int *)(param_1[1] + 8) + 100))();
  SetActiveWindow(*(HWND *)(param_1[1] + 0xc));
  return;
}

