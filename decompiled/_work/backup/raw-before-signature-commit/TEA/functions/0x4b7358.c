// name: FUN_004b7358
// address: 0x4b7358
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004b7358(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50e470);
  *param_1 = &PTR_FUN_00503e80;
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_00503e9c;
  *param_1 = &PTR_FUN_0050e4f4;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_00402cfc,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

