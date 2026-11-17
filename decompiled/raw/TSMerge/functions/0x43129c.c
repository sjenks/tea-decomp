// name: FUN_0043129c
// address: 0x43129c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_0043129c(uint *param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  uint uVar2;
  undefined4 local_28;
  
  FUN_00455f04(0x46b694);
  FUN_0041d2fc(param_1,param_2,param_3);
  if ((char)param_1[1] == '\0') {
    uVar2 = *param_1;
    puVar1 = FUN_00430f74();
    FUN_0043121c((int)puVar1,uVar2);
  }
  else {
    FUN_0041cf04(*param_1,2);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

