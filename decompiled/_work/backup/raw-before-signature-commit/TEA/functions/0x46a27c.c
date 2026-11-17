// name: FUN_0046a27c
// address: 0x46a27c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046a27c(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 8);
  }
  puVar1 = FUN_004dd744(*(int *)(*param_1 + 0x14),iVar2,(int *)&DAT_0040299c,(int *)&DAT_0046a2bc,0)
  ;
  FUN_0046b2ec((int)puVar1,param_2);
  return;
}

