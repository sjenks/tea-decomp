// name: FUN_0046a360
// address: 0x46a360
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046a360(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 8);
  }
  piVar1 = FUN_004dd744(*(int *)(*param_1 + 0x14),iVar2,(int *)&DAT_0040299c,(int *)&DAT_0046a2bc,0)
  ;
  if (param_2 == 8) {
    FUN_0046a924(piVar1,0x316a);
  }
  else {
    FUN_00469450(param_1);
  }
  return;
}

