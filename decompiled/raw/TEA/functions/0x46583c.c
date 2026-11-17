// name: FUN_0046583c
// address: 0x46583c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046583c(undefined4 param_1,uint *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  int iVar3;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4fc064);
  iVar3 = 0;
  iVar2 = 0;
  FUN_004cf628((int)local_14,param_2);
  FUN_00437470((int)local_24,(int)local_14);
  FUN_00435a1c((int)local_24,iVar2,iVar3);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar1 = (int *)(local_1c + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_004658fc;
    }
    FUN_004cc0bc();
    local_1c = 0;
  }
LAB_004658fc:
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar1 = (int *)(local_c + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00465969;
    }
    FUN_004cc0bc();
  }
LAB_00465969:
  *in_FS_OFFSET = local_48;
  return;
}

