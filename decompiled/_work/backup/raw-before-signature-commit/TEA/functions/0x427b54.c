// name: FUN_00427b54
// address: 0x427b54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_00427b54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 param_6)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4f1eb0);
  piVar1 = (int *)FUN_004cc0f0();
  if (piVar1 != (int *)0x0) {
    FUN_0049c640(piVar1,0,param_2,param_3,param_4,param_5,param_6);
  }
  *in_FS_OFFSET = local_2c;
  return piVar1;
}

