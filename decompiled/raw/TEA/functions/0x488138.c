// name: FUN_00488138
// address: 0x488138
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00488138(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int *local_8;
  
  FUN_004dce64(0x504834);
  puVar1 = (undefined4 *)FUN_00487bc0();
  local_8 = (int *)FUN_00487e08(puVar1,param_1);
  if (local_8 == (int *)0x0) {
    local_8 = (int *)FUN_004cc0f0();
    if (local_8 != (int *)0x0) {
      local_1c = 0x14;
      puVar2 = FUN_00487bc0();
      FUN_004a8c70(local_8,0,(uint *)s_ALIAS_0050470d,&local_30,puVar2);
    }
    *in_FS_OFFSET = local_2c;
  }
  else {
    *in_FS_OFFSET = local_2c;
  }
  return local_8;
}

