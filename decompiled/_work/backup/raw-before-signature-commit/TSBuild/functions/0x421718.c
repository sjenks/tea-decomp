// name: FUN_00421718
// address: 0x421718
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00421718(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47a464);
  if (param_3 == 0) {
    *param_1 = param_2 + 0x24db1a;
  }
  else {
    iVar1 = FUN_00421838(0xc,0x1f,param_3 - 1);
    *param_1 = param_2 + iVar1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

