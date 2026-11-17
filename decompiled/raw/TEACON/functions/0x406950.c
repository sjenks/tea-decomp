// name: FUN_00406950
// address: 0x406950
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00406950(int *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x42b9d4);
  if (param_1 == (int *)0x0) goto LAB_00406a19;
  *param_1 = (int)&PTR_FUN_0042bbb8;
  (**(code **)(*param_1 + 4))();
  if (param_1[0xbe7] != 0) {
    if (*(int *)(param_1[0xbe7] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0xbe7] + -0xc);
      if (piVar2 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00406a09;
    }
    FUN_00414f78();
    param_1[0xbe7] = 0;
  }
LAB_00406a09:
  if ((param_2 & 1) != 0) {
    FUN_00414f78();
  }
LAB_00406a19:
  *in_FS_OFFSET = local_28;
  return;
}

