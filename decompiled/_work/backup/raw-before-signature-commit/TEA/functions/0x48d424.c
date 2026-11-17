// name: FUN_0048d424
// address: 0x48d424
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0048d424(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x506010);
  if (param_3 == 0) {
    *param_1 = param_2 + 0x24db1a;
  }
  else {
    iVar1 = FUN_0048d544(0xc,0x1f,param_3 - 1);
    *param_1 = param_2 + iVar1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

