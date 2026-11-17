// name: FUN_004119f4
// address: 0x4119f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004119f4(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int *local_8;
  
  FUN_00455f04(0x4651b0);
  puVar1 = (undefined4 *)FUN_0041147c();
  local_8 = (int *)FUN_004116c4(puVar1,param_1);
  if (local_8 == (int *)0x0) {
    local_8 = (int *)FUN_0044b300();
    if (local_8 != (int *)0x0) {
      local_1c = 0x14;
      puVar2 = FUN_0041147c();
      FUN_0042e748(local_8,0,(uint *)s_ALIAS_00465089,&local_30,puVar2);
    }
    *in_FS_OFFSET = local_2c;
  }
  else {
    *in_FS_OFFSET = local_2c;
  }
  return local_8;
}

