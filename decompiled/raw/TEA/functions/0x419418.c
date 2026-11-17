// name: FUN_00419418
// address: 0x419418
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_00419418(int *param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 8;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *param_2;
    param_2 = param_2 + 1;
    piVar2 = piVar2 + 1;
  }
  param_1[0x18] = *param_3;
  param_1[0x1a] = param_4;
  param_1[0x1b] = param_5;
  param_1[0x1c] = param_6;
  param_1[0x1d] = param_7;
  FUN_004263ec((int)(param_1 + 8));
  param_1[0x1e] = 0;
  param_1[7] = 0;
  (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  return;
}

