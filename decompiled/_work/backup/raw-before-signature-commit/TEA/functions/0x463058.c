// name: FUN_00463058
// address: 0x463058
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00463058(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  FUN_004dce64(0x4fb7e4);
  if (param_1 == 0) goto LAB_004632de;
  FUN_00408884(*(int *)(param_1 + 0x140));
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x18))();
  }
  if (*(int *)(param_1 + 0x144) != 0) {
    FUN_00439ea0(*(int *)(param_1 + 0x144),3);
  }
  if (*(int *)(param_1 + 0x160) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x160) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x160) + -0xc);
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
      if (iVar1 != 0) goto LAB_00463160;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
LAB_00463160:
  if (*(int *)(param_1 + 0x150) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x150) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x150) + -0xc);
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
      if (iVar1 != 0) goto LAB_004631dd;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
LAB_004631dd:
  FUN_004cc264(param_1 + 0xf0,0x10,4,1,FUN_00402880);
  FUN_004cc264(param_1 + 0xa0,0x10,4,1,FUN_00402880);
  FUN_004cc264(param_1 + 0x60,0x10,4,1,FUN_00402880);
  FUN_004cc264(param_1 + 0x20,0x10,4,1,FUN_00402880);
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
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
      if (iVar1 != 0) goto LAB_004632ce;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_004632ce:
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_004632de:
  *in_FS_OFFSET = local_34;
  return;
}

