// name: FUN_004921d4
// address: 0x4921d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_004921d4(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int *param_7)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  *param_7 = 0;
  iVar1 = param_2;
  for (iVar5 = param_3; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x3e)) {
    piVar2 = (int *)(*(int *)(param_6 + 8) + iVar1 * 0x10 + 0xc);
    if (*piVar2 < *param_7) {
      piVar2 = param_7;
    }
    *param_7 = *piVar2;
    if (iVar5 == param_4) break;
    iVar1 = iVar1 + 1;
  }
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    uVar4 = *param_7 - *(int *)(*(int *)(param_6 + 8) + 0xc + param_2 * 0x10);
    iVar5 = (int)uVar4 >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
    }
    *(int *)(*(int *)(param_6 + 8) + 4 + param_2 * 0x10) = iVar5 + param_5;
    piVar2 = (int *)(*(int *)(param_6 + 8) + 0xc + param_2 * 0x10);
    *piVar2 = *piVar2 + *(int *)(*(int *)(param_6 + 8) + 4 + param_2 * 0x10);
    piVar2 = (int *)(param_6 + 4);
    piVar3 = (int *)(*(int *)(param_6 + 8) + param_2 * 0x10 + 0xc);
    if (*piVar2 < *piVar3) {
      piVar2 = piVar3;
    }
    *(int *)(param_6 + 4) = *piVar2;
    if (param_3 == param_4) break;
    param_3 = *(int *)(param_3 + 0x3e);
    param_2 = param_2 + 1;
  }
  return;
}

