// name: FUN_0042cf30
// address: 0x42cf30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0042cf30(int *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47c64c);
  iVar1 = FUN_00456840();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 1) = 0;
    *(undefined4 *)(iVar1 + 5) = 0;
    *(undefined4 *)(iVar1 + 9) = 0;
    FUN_0042cc74(iVar1,0x1e);
  }
  *param_1 = iVar1;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

