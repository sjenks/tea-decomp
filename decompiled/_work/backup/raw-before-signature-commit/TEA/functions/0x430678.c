// name: FUN_00430678
// address: 0x430678
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00430678(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (*(int *)(*param_1 + 0x24) == param_1[4]) {
    iVar3 = -1;
  }
  else {
    iVar3 = param_1[6];
    param_1[6] = param_1[6] + 1;
    iVar1 = *(int *)(param_1[4] + 0x10);
    if ((param_1[6] < iVar1) || (iVar1 + *(int *)(param_1[4] + 0x14) <= param_1[6])) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      FUN_0042ba94((int)(param_1 + 2));
      if (*(int *)(*param_1 + 0x24) != param_1[4]) {
        param_1[6] = *(int *)(param_1[4] + 0x10);
      }
    }
  }
  return iVar3;
}

