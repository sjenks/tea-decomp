// name: FUN_0043ce14
// address: 0x43ce14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0043d15d) */
/* WARNING: Removing unreachable block (ram,0x0043d1a1) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff7c : 0x0043d1ac */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * __cdecl
FUN_0043ce14(int *param_1,int param_2,undefined4 param_3,int param_4,uint *param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f555c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1d8);
    param_1[0x1d8] = (int)(param_1 + 0x1d5);
    param_1[0x1d9] = (int)(param_1 + 0x1d6);
    param_1[1] = (int)(param_1 + 0x1d5);
    param_1[2] = (int)(param_1 + 0x1d6);
    param_1[0x1d4] = 0;
    param_1[0x1d7] = 0;
    param_1[0x1d5] = (int)&PTR_FUN_004ea94c;
    param_1[0x1d6] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x1d8,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x6f0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x6f0;
  FUN_00413cf4(param_1,1,0x4f5414,param_3,param_4,(uint *)0x16b2,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x6f0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x6f0;
  FUN_0043fd98(param_1 + 0x18);
  param_1[3] = (int)&PTR_FUN_004f5990;
  param_1[0x18] = (int)&PTR_LAB_004f5a68;
  *(undefined ***)param_1[1] = &PTR_LAB_004f5a84;
  *(undefined ***)param_1[2] = &PTR_LAB_004f5a90;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f5a9c;
  param_1[0x19] = 0;
  param_1[0x1a] = param_6;
  param_1[0x1b] = param_7;
  param_1[0x1c] = param_10;
  param_1[0x1d] = param_11;
  param_1[0x20] = 0;
  iVar1 = *(int *)(*(int *)(param_8 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_8 + 8) + -4);
    piVar3 = FUN_004cf7b0(param_1 + 0x1e,uVar2,uVar2);
    param_1[0x20] = (int)(piVar3 + 3);
    FUN_004dc7d4((undefined4 *)param_1[0x20],*(undefined4 **)(param_8 + 8),uVar2);
  }
  else {
    param_1[0x20] = *(int *)(param_8 + 8);
    piVar3 = (int *)(param_1[0x20] + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  param_1[0x24] = 0;
  iVar1 = *(int *)(*(int *)(param_9 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_9 + 8) + -4);
    piVar3 = FUN_004cf7b0(param_1 + 0x22,uVar2,uVar2);
    param_1[0x24] = (int)(piVar3 + 3);
    FUN_004dc7d4((undefined4 *)param_1[0x24],*(undefined4 **)(param_9 + 8),uVar2);
  }
  else {
    param_1[0x24] = *(int *)(param_9 + 8);
    piVar3 = (int *)(param_1[0x24] + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  param_1[0x26] = -1;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x28] = 0x40;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x36] = 0;
  param_1[0x30] = 0x40;
  FUN_004c7a28(param_1 + 0x38,0,*param_1,0x2fa8,0,0);
  FUN_0041af38(param_1 + 100,0,param_1,0x1130,1000);
  FUN_0041b680(param_1 + 0x93,0,param_1,0x1702,0);
  FUN_004179f0(param_1 + 0xc0,0,param_1,1);
  FUN_004bf504(param_1 + 0xf2,0,*param_1,0x2cb0,0);
  FUN_004bf9d8((int *)((int)param_1 + 0x473),0,*param_1,0x1e96,0);
  FUN_004c7a28((int *)((int)param_1 + 0x51d),0,*param_1,0x2ca6,0,0);
  FUN_0041af38(param_1 + 0x173,0,param_1,0x8de,0);
  FUN_004179f0(param_1 + 0x1a2,0,param_1,0x8d4);
  FUN_004b0c44(param_1,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

