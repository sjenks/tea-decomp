// name: FUN_00447024
// address: 0x447024
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00447024(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_00467ba8(0x4816e8);
  if (param_2 != (uint *)param_1[0x18]) {
    FUN_0045681c();
    if (param_2 == (uint *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0042aea0(param_2);
    }
    param_1[0x18] = iVar2;
  }
  FUN_0044f1ec((int)local_24,*(int *)(*param_1 + 0x70),0x7f26);
  local_c = (int *)0x0;
  if (local_1c[-3] == -1 || local_1c[-3] + 1 < 0) {
    uVar1 = local_1c[-1];
    local_c = FUN_00459f00(local_14,uVar1,uVar1);
    local_c = local_c + 3;
    FUN_00467580(local_c,local_1c,uVar1);
  }
  else {
    local_c = local_1c;
    piVar3 = local_1c + -3;
    if (piVar3 != &DAT_00485bcc) {
      *piVar3 = *piVar3 + 1;
    }
  }
  if (local_1c != (int *)0x0) {
    if (local_1c[-3] != -1) {
      piVar3 = local_1c + -3;
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
      if (iVar2 != 0) goto LAB_00447192;
    }
    FUN_0045680c();
    local_1c = (int *)0x0;
  }
LAB_00447192:
  (**(code **)(*(int *)(*param_1 + 8) + 0x38))();
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar3 = local_c + -3;
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
      if (iVar2 != 0) goto LAB_00447225;
    }
    FUN_0045680c();
  }
LAB_00447225:
  *in_FS_OFFSET = local_48;
  return;
}

