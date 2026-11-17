// name: FUN_0045e4dc
// address: 0x45e4dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0045e4dc(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 < 1) {
    iVar2 = 0x26;
  }
  else {
    iVar2 = 0x28;
  }
  iVar3 = param_1[0x1b4];
  while( true ) {
    if (iVar3 < 0) {
      return 0;
    }
    iVar1 = param_1[0x1ae] - param_1[0x1ad];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if (iVar1 >> 2 <= iVar3) break;
    iVar2 = FUN_0042ec10(*(int **)(*(int *)(iVar3 * 4 + param_1[0x1ad]) + 8),iVar2,param_4);
    if (iVar2 != 0) {
      if (param_4 == 0) {
        if (iVar3 != param_1[0x1b4]) {
          param_1[0x1b4] = iVar3;
          (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
        }
        FUN_00457354(param_1,param_2,0,0x1d42);
      }
      return 1;
    }
    if (param_3 < 1) {
      iVar2 = 0x23;
    }
    else {
      iVar2 = 0x24;
    }
    iVar3 = iVar3 + param_3;
  }
  return 0;
}

