// name: FUN_004ab7e4
// address: 0x4ab7e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_004ab7e4(uint *param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  uint uVar2;
  undefined4 local_28;
  
  FUN_004dce64(0x50bed8);
  FUN_0049402c(param_1,param_2,param_3);
  if ((char)param_1[1] == '\0') {
    uVar2 = *param_1;
    puVar1 = FUN_004ab4bc();
    FUN_004ab764((int)puVar1,uVar2);
  }
  else {
    FUN_00493c34(*param_1,2);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

