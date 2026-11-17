// name: FUN_0047ede4
// address: 0x47ede4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0047ede4(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x502858);
  iVar4 = FUN_004d1c6c((int)local_14,param_3,param_4 - (int)param_3);
  if (*(int *)(param_1 + 0x198) == *(int *)(param_1 + 0x1a8)) {
    FUN_0040e240(param_1 + 400,*(int *)(param_1 + 0x198),iVar4);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x198);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 8) = 0;
      iVar2 = *(int *)(*(int *)(iVar4 + 8) + -0xc);
      if (iVar2 == -1 || iVar2 + 1 < 0) {
        uVar3 = *(uint *)(*(int *)(iVar4 + 8) + -4);
        piVar5 = FUN_004cf7b0(iVar1,uVar3,uVar3);
        *(int **)(iVar1 + 8) = piVar5 + 3;
        FUN_004dc7d4(*(undefined4 **)(iVar1 + 8),*(undefined4 **)(iVar4 + 8),uVar3);
      }
      else {
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar4 + 8);
        piVar5 = (int *)(*(int *)(iVar1 + 8) + -0xc);
        if (piVar5 != &DAT_00513d58) {
          *piVar5 = *piVar5 + 1;
        }
      }
    }
    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 0x10;
  }
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_0047ef8d;
    }
    FUN_004cc0bc();
  }
LAB_0047ef8d:
  *in_FS_OFFSET = local_3c;
  return;
}

