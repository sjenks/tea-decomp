// name: FUN_004c73ec
// address: 0x4c73ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004c73ec(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5118b8);
  *param_1 = &PTR_FUN_00503e80;
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_00503e9c;
  *param_1 = &PTR_FUN_0051193c;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_00428068,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

