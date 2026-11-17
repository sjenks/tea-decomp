// name: FUN_00417c10
// address: 0x417c10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00417c10(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x466838);
  if (param_1 == (undefined4 *)0x0) goto LAB_00417ce8;
  *param_1 = &PTR_FUN_004668c4;
  _DAT_0046677c = _DAT_0046677c + -1;
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 0) {
      if (*(int *)(*(int *)(iVar1 + 8) + -0xc) != -1) {
        piVar3 = (int *)(*(int *)(iVar1 + 8) + -0xc);
        if (piVar3 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_00417cc2;
      }
      FUN_0044b2cc();
      *(undefined4 *)(iVar1 + 8) = 0;
    }
LAB_00417cc2:
    FUN_0044b2cc();
  }
  FUN_00455678(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0044b2cc();
  }
LAB_00417ce8:
  *in_FS_OFFSET = local_28;
  return;
}

