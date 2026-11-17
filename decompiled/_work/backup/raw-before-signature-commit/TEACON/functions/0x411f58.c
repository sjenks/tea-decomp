// name: FUN_00411f58
// address: 0x411f58
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00411f58(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x42e1f0);
  if (param_1 == 0) goto LAB_0041203a;
  FUN_00413e18(param_1);
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x28) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x28) + -0xc);
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
      if (iVar1 != 0) goto LAB_00412000;
    }
    FUN_00414f78();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_00412000:
  FUN_004050b4(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
  FUN_00414f78();
  if ((param_2 & 1) != 0) {
    FUN_00414f78();
  }
LAB_0041203a:
  *in_FS_OFFSET = local_28;
  return;
}

