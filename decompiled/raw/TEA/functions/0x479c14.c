// name: FUN_00479c14
// address: 0x479c14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00479c14(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_8;
  
  iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  if ((uint)(iVar3 >> 2) < param_2) {
    local_8 = 0;
    iVar3 = (int)*(undefined4 **)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_00479cb4(param_1,*(undefined4 **)(param_1 + 8),param_2 - (iVar3 >> 2),&local_8);
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 8);
    iVar3 = (int)puVar1 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (param_2 < (uint)(iVar3 >> 2)) {
      puVar4 = (undefined4 *)(param_2 * 4 + *(int *)(param_1 + 4));
      puVar2 = FUN_0047a0b4(puVar1,puVar1,puVar4);
      iVar3 = *(int *)(param_1 + 8);
      iVar5 = (int)puVar1 - (int)puVar4;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (iVar5 >> 2) * -4;
      FUN_00410d88(param_1,(int)puVar2,iVar3);
    }
  }
  return;
}

