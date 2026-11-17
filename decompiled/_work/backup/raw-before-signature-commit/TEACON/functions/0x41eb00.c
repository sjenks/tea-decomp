// name: FUN_0041eb00
// address: 0x41eb00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041eb00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x4319e0);
  if (param_1 == (undefined4 *)0x0) goto LAB_0041ebc9;
  *param_1 = &PTR_FUN_0042bc04;
  if (param_1[4] != 0) {
    if (*(int *)(param_1[4] + -0xc) != -1) {
      piVar2 = (int *)(param_1[4] + -0xc);
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
      if (iVar1 != 0) goto LAB_0041eba8;
    }
    FUN_00414f78();
    param_1[4] = 0;
  }
LAB_0041eba8:
  FUN_0041ea84(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_00414f78();
  }
LAB_0041ebc9:
  *in_FS_OFFSET = local_28;
  return;
}

