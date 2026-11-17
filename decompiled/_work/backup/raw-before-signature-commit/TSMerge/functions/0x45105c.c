// name: FUN_0045105c
// address: 0x45105c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045105c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_0044f29c((int)param_1);
  uVar2 = FUN_0044f2a8((int)param_1);
  if (uVar1 < uVar2) {
    iVar3 = FUN_0044f2a8((int)param_1);
    iVar4 = FUN_0044f29c((int)param_1);
    iVar3 = iVar3 - iVar4;
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x14))();
  }
  return iVar3;
}

