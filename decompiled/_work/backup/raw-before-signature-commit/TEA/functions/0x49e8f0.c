// name: FUN_0049e8f0
// address: 0x49e8f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0049e8f0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x509528);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 9);
    param_1[9] = (int)(param_1 + 6);
    param_1[10] = (int)(param_1 + 7);
    param_1[1] = (int)(param_1 + 6);
    param_1[2] = (int)(param_1 + 7);
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[6] = (int)&PTR_FUN_004ea94c;
    param_1[7] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 9,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_004ad87c(param_1,1,param_3,param_4,param_5);
  param_1[3] = (int)&PTR_FUN_0050956c;
  *(undefined ***)param_1[1] = &PTR_LAB_005095a0;
  *(undefined ***)param_1[2] = &PTR_LAB_005095ac;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_005095b8;
  bVar1 = FUN_00487180();
  if (bVar1) {
    iVar2 = 4;
  }
  else {
    iVar2 = 0;
  }
  param_1[4] = iVar2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

