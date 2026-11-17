// name: FUN_0048d2f8
// address: 0x48d2f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0048d2f8(int *param_1,LPCSTR param_2,LPCSTR param_3,LPCSTR param_4,DEVMODEA *param_5)

{
  HDC pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x505cf8);
  FUN_0048d82c(param_1);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_00505d60;
  pHVar1 = CreateDCA(param_2,param_3,param_4,param_5);
  *param_1 = (int)pHVar1;
  FUN_00493530(param_1,0x7fe3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

