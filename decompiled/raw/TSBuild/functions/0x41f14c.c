// name: FUN_0041f14c
// address: 0x41f14c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0041f14c(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  char cVar6;
  undefined4 local_a8;
  HDC local_80 [10];
  HDC local_58 [10];
  uint *local_30;
  int local_2c [10];
  
  FUN_00467ba8(0x479688);
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = 0;
    *in_FS_OFFSET = local_a8;
  }
  else {
    local_30 = (uint *)FUN_00456840();
    if (local_30 != (uint *)0x0) {
      cVar6 = '\0';
      iVar5 = *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29);
      iVar4 = *(int *)(param_1 + 0x15) * param_2;
      piVar3 = FUN_0043942c(local_2c);
      FUN_0041cd80(local_30,piVar3,iVar4,iVar5,cVar6);
    }
    puVar1 = local_30;
    uVar2 = FUN_004393a8(local_2c,0);
    if (*(int *)(param_1 + 4) != 0) {
      FUN_0042b980((int *)local_58,*(uint **)(param_1 + 4));
      FUN_0042b980((int *)local_80,puVar1);
      BitBlt(local_80[0],0,0,*(int *)(param_1 + 0x15) * *(int *)(param_1 + 0x11),
             *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29),local_58[0],0,0,0xcc0020);
      FUN_0042ba5c(local_58);
      if (*(uint **)(param_1 + 4) != (uint *)0x0) {
        FUN_0041cfe8(*(uint **)(param_1 + 4),3);
      }
      FUN_0042ba88((int *)local_80,2);
      uVar2 = FUN_0042ba88((int *)local_58,2);
    }
    *(uint **)(param_1 + 4) = puVar1;
    *(int *)(param_1 + 0x11) = param_2;
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
    *in_FS_OFFSET = local_a8;
  }
  return uVar2;
}

