// name: FUN_00411148
// address: 0x411148
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00411148(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x42dd38);
  if (param_1 == 0) goto LAB_004112f9;
  FUN_00406464(*(int *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x1e8) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x1e8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x1e8) + -0xc);
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
      if (iVar1 != 0) goto LAB_004111f6;
    }
    FUN_00414f78();
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
LAB_004111f6:
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x18) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x18) + -0xc);
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
      if (iVar1 != 0) goto LAB_0041126a;
    }
    FUN_00414f78();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
LAB_0041126a:
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
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
      if (iVar1 != 0) goto LAB_004112e9;
    }
    FUN_00414f78();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_004112e9:
  if ((param_2 & 1) != 0) {
    FUN_00414f78();
  }
LAB_004112f9:
  *in_FS_OFFSET = local_28;
  return;
}

