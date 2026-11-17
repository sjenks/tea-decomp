// name: FUN_004132a8
// address: 0x4132a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004132a8(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4ecfe4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x54);
    param_1[0x54] = (int)(param_1 + 0x51);
    param_1[0x55] = (int)(param_1 + 0x52);
    param_1[1] = (int)(param_1 + 0x51);
    param_1[2] = (int)(param_1 + 0x52);
    param_1[0x50] = 0;
    param_1[0x53] = 0;
    param_1[0x51] = (int)&PTR_FUN_004ea94c;
    param_1[0x52] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x54,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xe0;
  FUN_00413cf4(param_1,1,0x4ece7c,param_3,param_4,(uint *)0x50,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xe0;
  param_1[3] = (int)&PTR_FUN_004ed04c;
  *(undefined ***)param_1[1] = &PTR_LAB_004ed114;
  *(undefined ***)param_1[2] = &PTR_LAB_004ed120;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004ed12c;
  iVar2 = 1;
  FUN_004cf628((int)local_14,(uint *)s_http___www_crosswordman_com_teat_004ece90);
  FUN_0041d588(param_1 + 0x18,0,param_1,0x7529,(int)local_14,iVar2);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar1 = (int *)(local_c + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_004134a4;
    }
    FUN_004cc0bc();
  }
LAB_004134a4:
  param_1[0x4e] = 0;
  *in_FS_OFFSET = local_38;
  return param_1;
}

