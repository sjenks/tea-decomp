// name: FUN_00420914
// address: 0x420914
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00420914(int *param_1,byte param_2)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  undefined4 local_28;
  
  FUN_00455f04(0x468294);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &PTR_FUN_004682b4;
    FUN_004208e8(param_1);
    FUN_00416d80(param_1);
    FUN_004208e8(param_1);
    if ((char)param_1[1] == '\0') {
      iVar2 = *param_1;
      puVar1 = FUN_00420530();
      FUN_00420708((int)puVar1,iVar2);
    }
    FUN_00416674(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

