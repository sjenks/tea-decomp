// name: FUN_0049b9d4
// address: 0x49b9d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049b9d4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5089f0);
  iVar5 = 0;
  do {
    if (*(int *)(param_1 + 1) <= iVar5) {
      *(undefined4 *)(param_1 + 1) = 0;
      *in_FS_OFFSET = local_28;
      return;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 9) + iVar5 * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
      if (*(int *)(*(int *)(iVar1 + 8) + -0xc) != -1) {
        piVar3 = (int *)(*(int *)(iVar1 + 8) + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3 + 1;
        }
        if (iVar4 != 0) goto LAB_0049ba7b;
      }
      FUN_004cc0bc();
      *(undefined4 *)(iVar1 + 8) = 0;
    }
LAB_0049ba7b:
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 9) + iVar5 * 4);
    *puVar2 = *(undefined4 *)(param_1 + 0xd);
    *(undefined4 *)(param_1 + 0xd) = puVar2;
    iVar5 = iVar5 + 1;
  } while( true );
}

