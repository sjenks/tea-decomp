// name: FUN_004c49bc
// address: 0x4c49bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_004c49bc(int *param_1,int param_2,undefined4 param_3,uint *param_4,uint *param_5,uint *param_6,
            uint *param_7,int param_8)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  FUN_004dce64(0x510f34);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xb);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[0xc] = (int)(param_1 + 9);
    param_1[1] = (int)(param_1 + 8);
    param_1[2] = (int)(param_1 + 9);
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[8] = (int)&PTR_FUN_004ea94c;
    param_1[9] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xb,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004affb4(param_1,1,param_3,param_4,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&PTR_FUN_00511348;
  *(undefined ***)param_1[1] = &PTR_LAB_0051138c;
  *(undefined ***)param_1[2] = &PTR_LAB_00511398;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_005113a4;
  param_1[6] = param_8;
  piVar1 = (int *)FUN_004cc0f0();
  if (piVar1 != (int *)0x0) {
    FUN_004c4754(piVar1,0,*param_1,0x68,0);
  }
  piVar1 = (int *)FUN_004cc0f0();
  if (piVar1 != (int *)0x0) {
    FUN_004c43ac(piVar1,0,*param_1,0x65,param_5,(uint *)0x0);
  }
  piVar1 = (int *)FUN_004cc0f0();
  if (piVar1 != (int *)0x0) {
    FUN_004c43ac(piVar1,0,*param_1,0x66,param_6,param_7);
  }
  piVar1 = (int *)FUN_004cc0f0();
  if (piVar1 != (int *)0x0) {
    FUN_004c4754(piVar1,0,*param_1,0x69,0);
  }
  *in_FS_OFFSET = local_38;
  return param_1;
}

