// name: FUN_0041c0dc
// address: 0x41c0dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0041c0dc(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  int local_c;
  
  FUN_004dce64(0x4eeda4);
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x18) <= iVar2) {
      *in_FS_OFFSET = local_38;
      return;
    }
    (**(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0xc) + 0xa8))();
    (**(code **)(*(int *)(param_1 + 0xc) + 100))();
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar3 = (int *)(local_c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar1 = *piVar3 + 1;
        }
        if (iVar1 != 0) goto LAB_0041c1a9;
      }
      FUN_004cc0bc();
      local_c = 0;
    }
LAB_0041c1a9:
    iVar2 = iVar2 + 1;
  } while( true );
}

