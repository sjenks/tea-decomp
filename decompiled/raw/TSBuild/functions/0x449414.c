// name: FUN_00449414
// address: 0x449414
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00449414(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x481d50);
  *param_1 = &PTR_FUN_0047824c;
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_00478268;
  *param_1 = &PTR_FUN_00481dd4;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_00468488((int)param_2,iVar2,(int *)&DAT_00403c1c,(int *)&DAT_0041b138,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

