// name: FUN_00419c00
// address: 0x419c00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_00419c00(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int *param_5,
            int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ee76c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x20);
    param_1[0x20] = (int)(param_1 + 0x1d);
    param_1[0x21] = (int)(param_1 + 0x1e);
    param_1[1] = (int)(param_1 + 0x1d);
    param_1[2] = (int)(param_1 + 0x1e);
    param_1[0x1c] = 0;
    param_1[0x1f] = 0;
    param_1[0x1d] = (int)&PTR_FUN_004ea94c;
    param_1[0x1e] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x20,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_3;
  }
  FUN_00468d58(param_1,1,uVar2,param_4,(uint *)(s_Beta_Test_Expiry_004ed29c + 0x10),*param_5,
               param_5[1],param_5[2] - *param_5,param_5[3] - param_5[1],(uint *)0x0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
  param_1[3] = (int)&PTR_FUN_004f066c;
  *(undefined ***)param_1[1] = &PTR_LAB_004f06f8;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0704;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0710;
  param_1[0x1a] = (int)param_3;
  param_1[0x1b] = 0;
  param_1[0xc] = 0;
  uVar1 = 0x50a31044;
  param_1[0xd] = 0;
  if (param_6 != 0) {
    uVar1 = 0x50a31844;
  }
  FUN_004a7988(*param_1,0x100180,uVar1,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

