// name: FUN_004556f4
// address: 0x4556f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004556f4(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x473fd0);
  if (param_1 == (undefined4 *)0x0) goto LAB_004557bd;
  *param_1 = &PTR_FUN_00461ffc;
  if (param_1[4] != 0) {
    if (*(int *)(param_1[4] + -0xc) != -1) {
      piVar2 = (int *)(param_1[4] + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0045579c;
    }
    FUN_0044b2cc();
    param_1[4] = 0;
  }
LAB_0045579c:
  FUN_00455678(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0044b2cc();
  }
LAB_004557bd:
  *in_FS_OFFSET = local_28;
  return;
}

