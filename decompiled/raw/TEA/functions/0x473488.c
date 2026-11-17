// name: FUN_00473488
// address: 0x473488
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00473488(int *param_1)

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
  FUN_0046caa4(piVar1);
  return;
}

