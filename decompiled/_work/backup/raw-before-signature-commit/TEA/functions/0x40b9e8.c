// name: FUN_0040b9e8
// address: 0x40b9e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040b9e8(int *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ebec0);
  if (param_1 == (int *)0x0) goto LAB_0040bab1;
  *param_1 = (int)&PTR_FUN_004eca60;
  (**(code **)(*param_1 + 4))();
  if (param_1[0xbe7] != 0) {
    if (*(int *)(param_1[0xbe7] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0xbe7] + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0040baa1;
    }
    FUN_004cc0bc();
    param_1[0xbe7] = 0;
  }
LAB_0040baa1:
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_0040bab1:
  *in_FS_OFFSET = local_28;
  return;
}

