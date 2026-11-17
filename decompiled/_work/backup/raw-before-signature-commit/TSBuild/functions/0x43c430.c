// name: FUN_0043c430
// address: 0x43c430
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_0043c430(uint *param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  uint uVar2;
  undefined4 local_28;
  
  FUN_00467ba8(0x47f470);
  FUN_00428470(param_1,param_2,param_3);
  if ((char)param_1[1] == '\0') {
    uVar2 = *param_1;
    puVar1 = FUN_0043c108();
    FUN_0043c3b0((int)puVar1,uVar2);
  }
  else {
    FUN_00428078(*param_1,2);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

