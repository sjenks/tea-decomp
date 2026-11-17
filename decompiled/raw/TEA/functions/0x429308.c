// name: FUN_00429308
// address: 0x429308
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00429568) */
/* WARNING: Removing unreachable block (ram,0x00429690) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff98 : 0x00429698 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * __cdecl FUN_00429308(int *param_1,int param_2,undefined4 *param_3,int param_4,int *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  int local_60;
  int local_5c;
  undefined4 local_3c;
  int local_14 [3];
  undefined4 *local_8;
  
  FUN_004dce64(0x4f23d0);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x4e);
    param_1[0x4e] = (int)(param_1 + 0x4b);
    param_1[0x4f] = (int)(param_1 + 0x4c);
    param_1[1] = (int)(param_1 + 0x4b);
    param_1[2] = (int)(param_1 + 0x4c);
    param_1[0x4a] = 0;
    param_1[0x4d] = 0;
    param_1[0x4b] = (int)&PTR_FUN_004ea94c;
    param_1[0x4c] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x4e,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x114;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x114;
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_3;
  }
  FUN_004ad6d8(param_1,1,uVar2,param_4,(uint *)s_MatchList_004f2210,*param_5,param_5[1],
               param_5[2] - *param_5,param_5[3] - param_5[1],0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x114;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x114;
  param_1[3] = (int)&PTR_FUN_004f2c28;
  *(undefined ***)param_1[1] = &PTR_LAB_004f2c68;
  *(undefined ***)param_1[2] = &PTR_LAB_004f2c74;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f2c80;
  piVar3 = param_1 + 6;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *piVar3 = 1;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  puVar4 = (undefined4 *)param_1[0xc];
  if (param_1[0xc] == 0) {
    if (param_1[0xd] == param_1[0xe]) {
      FUN_00429928(piVar3);
      puVar4 = (undefined4 *)param_1[0xd];
      param_1[0xd] = param_1[0xd] + 0x14;
    }
    else {
      puVar4 = (undefined4 *)param_1[0xd];
      param_1[0xd] = param_1[0xd] + 0x14;
    }
  }
  else {
    param_1[0xc] = *(int *)(param_1[0xc] + 0xc);
  }
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  param_1[0xf] = (int)puVar4;
  *(undefined4 *)(param_1[0xf] + 4) = 0;
  *(int *)(param_1[0xf] + 8) = param_1[0xf];
  *(int *)(param_1[0xf] + 0xc) = param_1[0xf];
  *piVar3 = 0x100;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1a] = 0;
  param_1[0x14] = 0x55;
  piVar3 = param_1 + 0x1e;
  param_1[0x22] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = local_60;
  param_1[0x2b] = local_5c;
  *piVar3 = 1;
  param_1[0x22] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  puVar4 = (undefined4 *)param_1[0x24];
  if (param_1[0x24] == 0) {
    if (param_1[0x25] == param_1[0x26]) {
      FUN_00429a74(piVar3);
      puVar4 = (undefined4 *)param_1[0x25];
      param_1[0x25] = param_1[0x25] + 0x18;
    }
    else {
      puVar4 = (undefined4 *)param_1[0x25];
      param_1[0x25] = param_1[0x25] + 0x18;
    }
  }
  else {
    param_1[0x24] = *(int *)(param_1[0x24] + 0xc);
  }
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  param_1[0x27] = (int)puVar4;
  *(undefined4 *)(param_1[0x27] + 4) = 0;
  *(int *)(param_1[0x27] + 8) = param_1[0x27];
  *(int *)(param_1[0x27] + 0xc) = param_1[0x27];
  *piVar3 = 0x80;
  param_1[0x2c] = -2;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x36] = 0;
  param_1[0x30] = 0x100;
  param_1[0x38] = (int)param_3;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = param_4;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = -1;
  param_1[0x42] = 2;
  param_1[0x43] = -1;
  param_1[0x44] = -1;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  FUN_00429bc0((int)(param_1 + 0x14),0x200);
  *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x200000;
  *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x100000;
  uVar1 = FUN_004a793c(*param_1);
  FUN_004a795c(*param_1,uVar1 | 0x200);
  local_8 = (undefined4 *)FUN_004cc0f0();
  if (local_8 != (undefined4 *)0x0) {
    FUN_0044f260(local_8,*param_1,1,1,0,0);
  }
  *(undefined4 **)(*param_1 + 0x44) = local_8;
  *(undefined1 *)(local_8 + 0xe) = 1;
  *(undefined1 *)((int)local_8 + 0x3a) = 0;
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  if (param_1[0x16] == param_1[0x1a]) {
    FUN_00429ffc((int)(param_1 + 0x14),(int *)param_1[0x16],local_14);
  }
  else {
    if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
      FUN_00430560((undefined4 *)param_1[0x16],local_14);
    }
    param_1[0x16] = param_1[0x16] + 0xc;
  }
  FUN_004305f4(local_14);
  param_1[0x1c] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *in_FS_OFFSET = local_3c;
  return param_1;
}

