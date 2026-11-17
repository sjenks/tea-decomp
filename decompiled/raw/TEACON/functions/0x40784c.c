// name: FUN_0040784c
// address: 0x40784c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040784c(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x42bb98);
  if (param_1 == 0) goto LAB_00407903;
  if (*(int *)(param_1 + 0x1010) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x1010) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x1010) + -0xc);
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
      if (iVar1 != 0) goto LAB_004078e4;
    }
    FUN_00414f78();
    *(undefined4 *)(param_1 + 0x1010) = 0;
  }
LAB_004078e4:
  FUN_0040db54(param_1,2);
  if ((param_2 & 1) != 0) {
    FUN_00414f78();
  }
LAB_00407903:
  *in_FS_OFFSET = local_28;
  return;
}

