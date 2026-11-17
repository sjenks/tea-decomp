// name: FUN_0045add8
// address: 0x45add8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0045add8(int *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x48744c);
  if (DAT_0048d084 == 0) {
    FUN_00465da4();
  }
  iVar1 = DAT_0048d084;
  *param_1 = DAT_0048d084;
  FUN_00462f14(iVar1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

