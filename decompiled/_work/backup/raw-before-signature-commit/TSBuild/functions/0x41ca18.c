// name: FUN_0041ca18
// address: 0x41ca18
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0041ca18(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int *local_8;
  
  FUN_00467ba8(0x478f64);
  puVar1 = (undefined4 *)FUN_0041c4a0();
  local_8 = (int *)FUN_0041c6e8(puVar1,param_1);
  if (local_8 == (int *)0x0) {
    local_8 = (int *)FUN_00456840();
    if (local_8 != (int *)0x0) {
      local_1c = 0x14;
      puVar2 = FUN_0041c4a0();
      FUN_004398dc(local_8,0,(uint *)s_ALIAS_00478e3d,&local_30,puVar2);
    }
    *in_FS_OFFSET = local_2c;
  }
  else {
    *in_FS_OFFSET = local_2c;
  }
  return local_8;
}

