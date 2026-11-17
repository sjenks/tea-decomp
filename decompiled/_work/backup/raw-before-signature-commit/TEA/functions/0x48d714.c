// name: FUN_0048d714
// address: 0x48d714
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0048d714(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = *param_1;
  }
  else {
    uVar1 = FUN_0048d764(param_1);
    uVar2 = FUN_0048d6b0(param_1);
    iVar3 = FUN_0048d544(param_2,uVar2,uVar1);
  }
  return ((iVar3 + 1U) % 7 + 6) % 7 + 1;
}

