// name: FUN_004401a4
// address: 0x4401a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004401a4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4f5fe4);
  do {
    if (param_2 == 0) {
      *in_FS_OFFSET = local_2c;
      return;
    }
    FUN_004401a4(param_1,*(int *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x18);
    if ((param_2 != -0x10) && (*(int *)(param_2 + 0x18) != 0)) {
      if (*(int *)(*(int *)(param_2 + 0x18) + -0xc) != -1) {
        piVar3 = (int *)(*(int *)(param_2 + 0x18) + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_00440283;
      }
      FUN_004cc0bc();
      *(undefined4 *)(param_2 + 0x18) = 0;
    }
LAB_00440283:
    *(int *)(param_1 + 0x18) = param_2;
    param_2 = iVar1;
  } while( true );
}

