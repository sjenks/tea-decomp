// name: FUN_004179f0
// address: 0x4179f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00417b3b) */

int * __cdecl FUN_004179f0(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ee108);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x10);
    param_1[0x10] = (int)(param_1 + 0xd);
    param_1[0x11] = (int)(param_1 + 0xe);
    param_1[1] = (int)(param_1 + 0xd);
    param_1[2] = (int)(param_1 + 0xe);
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xd] = (int)&PTR_FUN_004ea94c;
    param_1[0xe] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x10,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1a;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1a;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_004abc64(param_1,1,uVar1,param_4,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1a;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1a;
  param_1[3] = (int)&PTR_FUN_004f0b3c;
  *(undefined ***)param_1[1] = &PTR_LAB_004f0b74;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0b80;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0b8c;
  param_1[6] = (int)param_3;
  param_1[10] = 0;
  param_1[10] = (int)&DAT_00513d64;
  *in_FS_OFFSET = local_28;
  return param_1;
}

