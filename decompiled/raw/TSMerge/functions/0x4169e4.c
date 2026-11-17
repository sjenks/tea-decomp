// name: FUN_004169e4
// address: 0x4169e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004169e4(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = *param_1;
  }
  else {
    uVar1 = FUN_00416a34(param_1);
    uVar2 = FUN_00416980(param_1);
    iVar3 = FUN_00416814(param_2,uVar2,uVar1);
  }
  return ((iVar3 + 1U) % 7 + 6) % 7 + 1;
}

