// name: FUN_0044da74
// address: 0x44da74
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0044da74(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  piVar3 = param_1;
  iVar1 = (**(code **)(param_1[3] + 0x18))();
  if (iVar1 != 0) {
    cVar2 = '\x01';
    iVar1 = (**(code **)(param_1[3] + 0x18))(iVar1,param_1[3],piVar3,param_1);
    iVar1 = FUN_00438398(iVar1,cVar2);
    return iVar1 != 0;
  }
  iVar1 = FUN_00436428(*param_1);
  return iVar1 != 0;
}

