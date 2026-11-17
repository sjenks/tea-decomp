// name: FUN_00405e78
// address: 0x405e78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00405e78(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined *puVar4;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_00455f04(0x4622f8);
  puVar4 = &LAB_00408844;
  iVar1 = FUN_0040b8c4((int)local_14,param_1,param_2);
  piVar2 = FUN_00406b48(iVar1,local_14,param_3,(int *)param_3,(int)local_14);
  uVar3 = FUN_004516b8(piVar2,puVar4);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00405f34;
    }
    FUN_0044b2cc();
  }
LAB_00405f34:
  *in_FS_OFFSET = local_38;
  return uVar3;
}

