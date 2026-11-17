// name: FUN_004d44f8
// address: 0x4d44f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004d44f8(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_004d17a8((int)param_1);
  uVar2 = FUN_004d17b4((int)param_1);
  if (uVar1 < uVar2) {
    iVar3 = FUN_004d17b4((int)param_1);
    iVar4 = FUN_004d17a8((int)param_1);
    iVar3 = iVar3 - iVar4;
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x14))();
  }
  return iVar3;
}

