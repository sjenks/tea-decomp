// name: FUN_00413cf4
// address: 0x413cf4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00413e3c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x00413e44 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * __cdecl
FUN_00413cf4(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,uint *param_6,
            int param_7,int param_8)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4ed5c8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1c);
    param_1[0x1c] = (int)(param_1 + 0x19);
    param_1[0x1d] = (int)(param_1 + 0x1a);
    param_1[1] = (int)(param_1 + 0x19);
    param_1[2] = (int)(param_1 + 0x1a);
    param_1[0x18] = 0;
    param_1[0x1b] = 0;
    param_1[0x19] = (int)&PTR_FUN_004ea94c;
    param_1[0x1a] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x1c,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x48;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x48;
  FUN_004affb4(param_1,1,param_4,param_6,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x48;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x48;
  param_1[3] = (int)&PTR_FUN_004f0c20;
  *(undefined ***)param_1[1] = &PTR_LAB_004f0ce8;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0cf4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0d00;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[6] = 0x100;
  param_1[0xe] = param_5;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = (int)param_6;
  param_1[0x13] = param_7;
  param_1[0x14] = param_3;
  param_1[0x15] = param_8;
  param_1[0x16] = 0;
  if ((param_1[0x15] != 0) && (param_1[0x13] == 0)) {
    piVar1 = (int *)FUN_004cc0f0();
    if (piVar1 != (int *)0x0) {
      FUN_0049f628(piVar1,0,*param_1,'\x01',0);
    }
    param_1[0x16] = (int)piVar1;
    FUN_004a7910(*piVar1,2);
  }
  *in_FS_OFFSET = local_2c;
  return param_1;
}

