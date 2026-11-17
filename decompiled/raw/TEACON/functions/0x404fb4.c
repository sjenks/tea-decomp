// name: FUN_00404fb4
// address: 0x404fb4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00404fb4(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    return;
  }
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
      if (iVar1 != 0) goto LAB_0040502f;
    }
    FUN_00414f78();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_0040502f:
  if ((param_2 & 1) != 0) {
    FUN_00414f78();
  }
  return;
}

