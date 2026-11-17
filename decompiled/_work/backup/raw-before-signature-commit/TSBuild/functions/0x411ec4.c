// name: FUN_00411ec4
// address: 0x411ec4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00411ec4(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined **local_c;
  undefined **local_8;
  
  FUN_00467ba8(0x476594);
  piVar1 = (int *)FUN_00456840();
  if (piVar1 == (int *)0x0) {
    local_8 = &PTR_FUN_00476b30;
    FUN_00471ae8((uint *)&DAT_0040eb28,&local_8,0,&LAB_0040eb80,1,0,0,0);
  }
  iVar2 = FUN_00456840();
  if (iVar2 == 0) {
    local_c = &PTR_FUN_00476b30;
    FUN_00471ae8((uint *)&DAT_0040eb28,&local_c,0,&LAB_0040eb80,1,0,0,0);
  }
  piVar1[2] = iVar2;
  *piVar1 = param_1[4];
  piVar1[1] = *param_1;
  param_1[4] = (int)piVar1;
  iVar2 = *(int *)(param_1[4] + 8);
  param_1[7] = iVar2;
  param_1[8] = iVar2 + *param_1 * 0x28;
  *in_FS_OFFSET = local_30;
  return;
}

