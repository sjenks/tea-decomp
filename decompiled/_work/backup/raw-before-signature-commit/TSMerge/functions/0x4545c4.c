// name: FUN_004545c4
// address: 0x4545c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004545c4(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  FUN_00455f04(0x473bc0);
  if (param_1 == (undefined4 *)0x0) goto LAB_0045473a;
  *param_1 = &PTR_FUN_00473ed4;
  iVar2 = param_1[5];
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    puVar1 = *(undefined4 **)(param_1[4] + iVar2 * 4);
    if (((puVar1 != (undefined4 *)0x0) && (puVar1[1] = puVar1[1] + -1, puVar1[1] == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
  }
  if (param_1[10] != 0) {
    if (*(int *)(param_1[10] + -0xc) != -1) {
      piVar3 = (int *)(param_1[10] + -0xc);
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
      if (iVar2 != 0) goto LAB_004546c2;
    }
    FUN_0044b2cc();
    param_1[10] = 0;
  }
LAB_004546c2:
  if (param_1[4] != 0) {
    FUN_0044b2dc();
  }
  if (param_1[2] != 0) {
    FUN_0044b474(param_1[2],0x10,0,0x19,FUN_004052c4);
  }
  FUN_00454464(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0044b2cc();
  }
LAB_0045473a:
  *in_FS_OFFSET = local_34;
  return;
}

