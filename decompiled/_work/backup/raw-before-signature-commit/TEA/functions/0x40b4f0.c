// name: FUN_0040b4f0
// address: 0x40b4f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040b4f0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ebdf4);
joined_r0x0040b509:
  do {
    iVar1 = param_2;
    if (iVar1 == param_3) {
      *in_FS_OFFSET = local_28;
      return;
    }
    param_2 = iVar1 + 0x10;
  } while ((iVar1 == 0) || (*(int *)(iVar1 + 8) == 0));
  if (*(int *)(*(int *)(iVar1 + 8) + -0xc) != -1) goto code_r0x0040b52c;
  goto LAB_0040b559;
code_r0x0040b52c:
  piVar3 = (int *)(*(int *)(iVar1 + 8) + -0xc);
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
  if (iVar2 == 0) {
LAB_0040b559:
    FUN_004cc0bc();
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  goto joined_r0x0040b509;
}

