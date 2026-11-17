// name: FUN_00417e40
// address: 0x417e40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00417f95) */

int * __cdecl FUN_00417e40(int *param_1,int param_2,undefined4 *param_3,uint param_4,int param_5)

{
  HANDLE pvVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ee1c8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x12);
    param_1[0x12] = (int)(param_1 + 0xf);
    param_1[0x13] = (int)(param_1 + 0x10);
    param_1[1] = (int)(param_1 + 0xf);
    param_1[2] = (int)(param_1 + 0x10);
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0xf] = (int)&PTR_FUN_004ea94c;
    param_1[0x10] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x12,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1e;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1e;
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_3;
  }
  FUN_004c6664(param_1,1,uVar2,param_4,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1e;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1e;
  param_1[3] = (int)&PTR_FUN_004f0a50;
  *(undefined ***)param_1[1] = &PTR_LAB_004f0a90;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0a9c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0aa8;
  param_1[7] = 0;
  param_1[8] = (int)param_3;
  param_1[0xc] = 0;
  param_1[0xc] = (int)&DAT_00513d64;
  if (param_5 != 0) {
    pvVar1 = LoadImageA(*(HINSTANCE *)(*(int *)(*param_1 + 0x6c) + 0xc),(LPCSTR)(param_4 & 0xffff),0
                        ,0,0,0x1000);
    param_1[7] = (int)pvVar1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

