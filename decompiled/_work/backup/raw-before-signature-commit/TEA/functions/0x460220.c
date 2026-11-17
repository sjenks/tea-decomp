// name: FUN_00460220
// address: 0x460220
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00460220(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_58;
  
  FUN_004dce64(0x4faa48);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xc2);
    param_1[0xc2] = (int)(param_1 + 0xbf);
    param_1[0xc3] = (int)(param_1 + 0xc0);
    param_1[1] = (int)(param_1 + 0xbf);
    param_1[2] = (int)(param_1 + 0xc0);
    param_1[0xbe] = 0;
    param_1[0xc1] = 0;
    param_1[0xbf] = (int)&PTR_FUN_004ea94c;
    param_1[0xc0] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xc2,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x298;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x298;
  FUN_00413cf4(param_1,1,0x4fa904,param_3,param_4,(uint *)0x141e,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x298;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x298;
  param_1[3] = (int)&PTR_FUN_004fb100;
  *(undefined ***)param_1[1] = &PTR_LAB_004fb1c8;
  *(undefined ***)param_1[2] = &PTR_LAB_004fb1d4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fb1e0;
  puVar1 = FUN_00422fc4(param_4);
  param_1[0x18] = (int)puVar1;
  FUN_004179f0(param_1 + 0x2a,0,param_1,0x15e0);
  FUN_0041af38(param_1 + 0x5c,0,param_1,0x15d6,0);
  FUN_004179f0(param_1 + 0x8c,0,param_1,0x14dc);
  piVar2 = (int *)FUN_004cc0f0();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)param_1[0x18] + 0x40;
    FUN_00418398(piVar2 + 2,0,param_1,0x3390);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x339a,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x33a4,0);
  }
  param_1[0x19] = (int)piVar2;
  piVar2 = (int *)FUN_004cc0f0();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)param_1[0x18] + 0x78;
    FUN_00418398(piVar2 + 2,0,param_1,0x33ae);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x33b8,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x33c2,0);
  }
  param_1[0x1a] = (int)piVar2;
  piVar2 = (int *)FUN_004cc0f0();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)param_1[0x18] + 0xb0;
    FUN_00418398(piVar2 + 2,0,param_1,0x33cc);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x33d6,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x33e0,0);
  }
  param_1[0x1b] = (int)piVar2;
  piVar2 = (int *)FUN_004cc0f0();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)param_1[0x18] + 0xe8;
    FUN_00418398(piVar2 + 2,0,param_1,0x33ea);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x33fe,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x3408,0);
  }
  param_1[0x1c] = (int)piVar2;
  piVar2 = (int *)FUN_004cc0f0();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)(param_1[0x18] + 4) + 0x40;
    FUN_00418398(piVar2 + 2,0,param_1,0x14e6);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x3354,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x150e,0);
    FUN_0041af38(piVar2 + 0x92,0,param_1,0x1536,0);
  }
  param_1[0x1d] = (int)piVar2;
  piVar2 = (int *)FUN_004cc0f0();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)(param_1[0x18] + 4) + 0x78;
    FUN_00418398(piVar2 + 2,0,param_1,0x14f0);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x335e,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x1518,0);
    FUN_0041af38(piVar2 + 0x92,0,param_1,0x1540,0);
  }
  param_1[0x1e] = (int)piVar2;
  piVar2 = (int *)FUN_004cc0f0();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)(param_1[0x18] + 4) + 0xb0;
    FUN_00418398(piVar2 + 2,0,param_1,0x14fa);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x3368,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x1522,0);
    FUN_0041af38(piVar2 + 0x92,0,param_1,0x154a,0);
  }
  param_1[0x1f] = (int)piVar2;
  piVar2 = (int *)FUN_004cc0f0();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)(param_1[0x18] + 4) + 0xe8;
    FUN_00418398(piVar2 + 2,0,param_1,0x1504);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x3372,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x152c,0);
    FUN_0041af38(piVar2 + 0x92,0,param_1,0x1554,0);
  }
  param_1[0x20] = (int)piVar2;
  piVar2 = (int *)FUN_004cc0f0();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)(param_1[0x18] + 8) + 0x40;
    FUN_00418398(piVar2 + 2,0,param_1,0x155e);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x337c,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x1586,0);
    FUN_0041af38(piVar2 + 0x92,0,param_1,0x15ae,0);
  }
  param_1[0x21] = (int)piVar2;
  piVar2 = (int *)FUN_004cc0f0();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)(param_1[0x18] + 8) + 0x78;
    FUN_00418398(piVar2 + 2,0,param_1,0x1568);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x3386,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x1590,0);
    FUN_0041af38(piVar2 + 0x92,0,param_1,0x15b8,0);
  }
  param_1[0x22] = (int)piVar2;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  piVar2 = (int *)FUN_004cc0f0();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)(param_1[0x18] + 0xc) + 0x40;
    FUN_00418398(piVar2 + 2,0,param_1,0x1428);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x332c,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x1450,0);
    FUN_004179f0(piVar2 + 0x92,0,param_1,0x1478);
    FUN_0041be78(piVar2 + 0xc4,0,param_1,0x2bc0,2,0x4fa8fc);
  }
  param_1[0x25] = (int)piVar2;
  piVar2 = (int *)FUN_004cc0f0();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)(param_1[0x18] + 0xc) + 0x78;
    FUN_00418398(piVar2 + 2,0,param_1,0x1432);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x3336,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x145a,0);
    FUN_004179f0(piVar2 + 0x92,0,param_1,0x1482);
    FUN_0041be78(piVar2 + 0xc4,0,param_1,0x14aa,2,0x4fa8fc);
  }
  param_1[0x26] = (int)piVar2;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *in_FS_OFFSET = local_58;
  return param_1;
}

