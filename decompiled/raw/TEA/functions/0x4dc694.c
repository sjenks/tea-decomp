// name: FUN_004dc694
// address: 0x4dc694
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004dc694(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x516d00);
  if (param_1 == (undefined4 *)0x0) goto LAB_004dc75d;
  *param_1 = &PTR_FUN_00516b14;
  if (param_1[4] != 0) {
    if (*(int *)(param_1[4] + -0xc) != -1) {
      piVar2 = (int *)(param_1[4] + -0xc);
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
      if (iVar1 != 0) goto LAB_004dc73c;
    }
    FUN_004cc0bc();
    param_1[4] = 0;
  }
LAB_004dc73c:
  FUN_004dc3fc(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_004dc75d:
  *in_FS_OFFSET = local_28;
  return;
}

