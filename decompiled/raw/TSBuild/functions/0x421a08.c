// name: FUN_00421a08
// address: 0x421a08
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00421a08(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = *param_1;
  }
  else {
    uVar1 = FUN_00421a58(param_1);
    uVar2 = FUN_004219a4(param_1);
    iVar3 = FUN_00421838(param_2,uVar2,uVar1);
  }
  return ((iVar3 + 1U) % 7 + 6) % 7 + 1;
}

