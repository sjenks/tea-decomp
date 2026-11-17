// name: FUN_00411264
// address: 0x411264
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00411264(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4eca40);
  if (param_1 == 0) goto LAB_0041131b;
  if (*(int *)(param_1 + 0x1010) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x1010) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x1010) + -0xc);
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
      if (iVar1 != 0) goto LAB_004112fc;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 0x1010) = 0;
  }
LAB_004112fc:
  FUN_00434ba4(param_1,2);
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_0041131b:
  *in_FS_OFFSET = local_28;
  return;
}

