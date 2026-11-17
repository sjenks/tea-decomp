// name: FUN_00406a90
// address: 0x406a90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00406a90(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46248c);
joined_r0x00406aa9:
  do {
    iVar1 = param_2;
    if (iVar1 == param_3) {
      *in_FS_OFFSET = local_28;
      return;
    }
    param_2 = iVar1 + 0x10;
  } while ((iVar1 == 0) || (*(int *)(iVar1 + 8) == 0));
  if (*(int *)(*(int *)(iVar1 + 8) + -0xc) != -1) goto code_r0x00406acc;
  goto LAB_00406af9;
code_r0x00406acc:
  piVar3 = (int *)(*(int *)(iVar1 + 8) + -0xc);
  if (piVar3 == &DAT_00471d5c) {
    iVar2 = 1;
  }
  else if (piVar3 == &DAT_00471d5c) {
    iVar2 = 1;
  }
  else {
    *piVar3 = *piVar3 + -1;
    iVar2 = *piVar3 + 1;
  }
  if (iVar2 == 0) {
LAB_00406af9:
    FUN_0044b2cc();
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  goto joined_r0x00406aa9;
}

