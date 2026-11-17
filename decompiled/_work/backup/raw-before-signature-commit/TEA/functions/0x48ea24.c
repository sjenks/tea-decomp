// name: FUN_0048ea24
// address: 0x48ea24
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0048ea24(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5061bc);
  if (param_1 == (undefined4 *)0x0) goto LAB_0048eafc;
  *param_1 = &PTR_FUN_00506248;
  _DAT_00506100 = _DAT_00506100 + -1;
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 0) {
      if (*(int *)(*(int *)(iVar1 + 8) + -0xc) != -1) {
        piVar3 = (int *)(*(int *)(iVar1 + 8) + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0048ead6;
      }
      FUN_004cc0bc();
      *(undefined4 *)(iVar1 + 8) = 0;
    }
LAB_0048ead6:
    FUN_004cc0bc();
  }
  FUN_004dc3fc(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_0048eafc:
  *in_FS_OFFSET = local_28;
  return;
}

