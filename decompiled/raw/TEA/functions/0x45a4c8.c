// name: FUN_0045a4c8
// address: 0x45a4c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045a4c8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4f95d8);
  if (*(uint **)(param_1 + 0xc7c) != (uint *)0x0) {
    FUN_004ab9b4(*(uint **)(param_1 + 0xc7c),3);
  }
  *(undefined4 *)(param_1 + 0xc7c) = 0;
  uVar4 = 0;
  while( true ) {
    iVar2 = *(int *)(param_1 + 0xc88) - *(int *)(param_1 + 0xc84);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    if ((uint)(iVar2 >> 2) <= uVar4) break;
    piVar3 = (int *)(*(int *)(param_1 + 0xc84) + uVar4 * 4);
    if (*piVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*piVar3 + 8);
    }
    puVar1 = FUN_004dd744(*piVar3,iVar2,(int *)&DAT_0040299c,(int *)&DAT_0045a588,0);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00467844((int)puVar1);
    }
    uVar4 = uVar4 + 1;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

