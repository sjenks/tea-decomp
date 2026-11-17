// name: FUN_0047ab54
// address: 0x47ab54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0047acd8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x0047ace0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * __cdecl FUN_0047ab54(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x500ea8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xb8);
    param_1[0xb8] = (int)(param_1 + 0xb5);
    param_1[0xb9] = (int)(param_1 + 0xb6);
    param_1[1] = (int)(param_1 + 0xb5);
    param_1[2] = (int)(param_1 + 0xb6);
    param_1[0xb4] = 0;
    param_1[0xb7] = 0;
    param_1[0xb5] = (int)&PTR_FUN_004ea94c;
    param_1[0xb6] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xb8,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x270;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x270;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_00413cf4(param_1,1,0x500e7e,uVar1,param_4,(uint *)0x3444,1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x270;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x270;
  param_1[3] = (int)&PTR_FUN_00501188;
  *(undefined ***)param_1[1] = &PTR_LAB_00501250;
  *(undefined ***)param_1[2] = &PTR_LAB_0050125c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00501268;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1e] = 0;
  param_1[0x18] = 0x40;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  FUN_004179f0(param_1 + 0x24,0,param_1,0x119e);
  FUN_004179f0(param_1 + 0x56,0,param_1,0x3458);
  FUN_004ac4b8(param_1 + 0x88,0,*param_1,0x2eae,0,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

