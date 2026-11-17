// name: FUN_00406094
// address: 0x406094
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00406094(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  byte *local_c;
  
  FUN_004dce64(0x4eb16c);
  if (param_3 == 0x10e0) {
    iVar3 = *(int *)(param_1 + 0x1f90);
    piVar1 = (int *)(param_1 + 0x120);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x1f90) + 0x10;
    piVar1 = (int *)(param_1 + 0x1dc);
  }
  FUN_0041b2b0((int)local_14,piVar1);
  uVar2 = FUN_004d40d0(iVar3,0,*(uint *)(*(int *)(iVar3 + 8) + -4),local_c,*(uint *)(local_c + -4));
  if (uVar2 != 0) {
    FUN_00465244();
    FUN_004cf384(iVar3,(int)local_14);
    FUN_0045269c(*(int **)(param_1 + 0x1f8c));
  }
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      local_c = local_c + -0xc;
      if (local_c == (byte *)&DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_c == (byte *)&DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *(int *)local_c = *(int *)local_c + -1;
        iVar3 = *(int *)local_c + 1;
      }
      if (iVar3 != 0) goto LAB_004061bd;
    }
    FUN_004cc0bc();
  }
LAB_004061bd:
  *in_FS_OFFSET = local_38;
  return;
}

