// name: FUN_0045daf8
// address: 0x45daf8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045daf8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4f9e24);
  for (piVar5 = *(int **)(param_1 + 0x6b4); piVar5 < *(int **)(param_1 + 0x6b8); piVar5 = piVar5 + 1
      ) {
    if (*piVar5 != 0) {
      FUN_0045e640(*piVar5,3);
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x6b8);
  puVar2 = *(undefined4 **)(param_1 + 0x6b4);
  puVar4 = FUN_0045233c(puVar1,puVar1,puVar2);
  iVar3 = *(int *)(param_1 + 0x6b8);
  iVar6 = (int)puVar1 - (int)puVar2;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 3;
  }
  *(int *)(param_1 + 0x6b8) = *(int *)(param_1 + 0x6b8) + (iVar6 >> 2) * -4;
  FUN_0045176c(param_1 + 0x6b0,(int)puVar4,iVar3);
  *in_FS_OFFSET = local_2c;
  return;
}

