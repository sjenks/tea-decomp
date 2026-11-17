// name: FUN_0043287c
// address: 0x43287c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0043287c(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46bd20);
  *param_1 = &PTR_FUN_00464498;
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_004644b4;
  *param_1 = &PTR_FUN_0046bda4;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004567e4((int)param_2,iVar2,(int *)&DAT_00404628,(int *)&DAT_0040580c,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

