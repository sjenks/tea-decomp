// name: FUN_00415d40
// address: 0x415d40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00415d40(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4edb24);
  (**(code **)(param_1[3] + 0xb0))();
  if (*(int *)(local_c + -4) != 0) {
    FUN_0046524c(param_1[0xe],*param_1,param_2,(int)local_14,0,0);
  }
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
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
      if (iVar1 != 0) goto LAB_00415e07;
    }
    FUN_004cc0bc();
  }
LAB_00415e07:
  *in_FS_OFFSET = local_38;
  return;
}

