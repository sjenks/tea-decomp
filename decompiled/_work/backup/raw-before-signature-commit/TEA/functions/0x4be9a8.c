// name: FUN_004be9a8
// address: 0x4be9a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004be9a8(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  piVar3 = param_1;
  iVar1 = (**(code **)(param_1[3] + 0x18))();
  if (iVar1 != 0) {
    cVar2 = '\x01';
    iVar1 = (**(code **)(param_1[3] + 0x18))(iVar1,param_1[3],piVar3,param_1);
    FUN_004a7708(iVar1,cVar2);
    return;
  }
  FUN_004a5774(*param_1);
  return;
}

