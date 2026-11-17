// name: FUN_004aba20
// address: 0x4aba20
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_004aba20(uint *param_1,int param_2,uint *param_3,uint *param_4)

{
  HBRUSH pHVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  undefined4 local_28;
  
  FUN_004dce64(0x50bf68);
  iVar2 = 1;
  pHVar1 = FUN_004abacc(param_2,param_3,param_4);
  FUN_004ab7e4(param_1,pHVar1,iVar2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

