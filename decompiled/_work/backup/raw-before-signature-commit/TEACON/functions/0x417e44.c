// name: FUN_00417e44
// address: 0x417e44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00417e44(int *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x430958);
  if (DAT_004348a8 == 0) {
    FUN_0041dd4c();
  }
  iVar1 = DAT_004348a8;
  *param_1 = DAT_004348a8;
  FUN_0041c158(iVar1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

