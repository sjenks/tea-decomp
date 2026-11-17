// name: FUN_00427578
// address: 0x427578
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00427578(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  FUN_004ae93c(param_1);
  if (*(int *)(param_1[0x24] + 0x168) != 0) {
    FUN_004a76a8(param_1[1],0x80,1,*(int *)(param_1[0x24] + 0x168));
  }
  if (*(int *)(param_1[0x24] + 0x16c) != 0) {
    FUN_004a76a8(param_1[1],0x80,0,*(int *)(param_1[0x24] + 0x16c));
  }
  (**(code **)(*(int *)param_1[0x15] + 4))();
  iVar1 = *(int *)(param_1[0x14] + 8);
  (**(code **)(*(int *)param_1[0x15] + 0x24))();
  *(undefined4 *)(iVar1 + 0xc) = 1;
  *(undefined4 *)(iVar1 + 8) = 1;
  iVar1 = (**(code **)(*(int *)((int)param_1 + 0x35) + 0x48))();
  param_1[0x1a] = iVar1;
  (**(code **)(*(int *)(iVar1 + 8) + 0x10))();
  param_1[0x1b] = 0;
  iVar1 = GetSystemMetrics(2);
  iVar2 = GetSystemMetrics(3);
  iVar1 = iVar1 + iVar2;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  param_1[0x27] = iVar1 >> 2;
  piVar4 = param_1;
  uVar3 = (**(code **)(*(int *)((int)param_1 + 0x35) + 0x44))();
  (**(code **)(*(int *)((int)param_1 + 0x35) + 0x50))
            (uVar3,*(int *)((int)param_1 + 0x35),piVar4,param_1);
  return;
}

