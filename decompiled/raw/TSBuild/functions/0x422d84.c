// name: FUN_00422d84
// address: 0x422d84
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00422d84(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47a614);
  if (param_1 == (undefined4 *)0x0) goto LAB_00422e5c;
  *param_1 = &PTR_FUN_0047a6a0;
  _DAT_0047a558 = _DAT_0047a558 + -1;
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 0) {
      if (*(int *)(*(int *)(iVar1 + 8) + -0xc) != -1) {
        piVar3 = (int *)(*(int *)(iVar1 + 8) + -0xc);
        if (piVar3 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_00422e36;
      }
      FUN_0045680c();
      *(undefined4 *)(iVar1 + 8) = 0;
    }
LAB_00422e36:
    FUN_0045680c();
  }
  FUN_004671a8(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0045680c();
  }
LAB_00422e5c:
  *in_FS_OFFSET = local_28;
  return;
}

