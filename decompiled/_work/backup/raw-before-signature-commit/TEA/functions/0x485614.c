// name: FUN_00485614
// address: 0x485614
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00485614(undefined4 *param_1,int *param_2,char param_3,undefined4 param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50389c);
  FUN_004dc844(param_1,0,0x3c);
  *param_1 = 0x3c;
  param_1[1] = param_4;
  FUN_004690f0(param_2,(LPARAM)param_1,param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

