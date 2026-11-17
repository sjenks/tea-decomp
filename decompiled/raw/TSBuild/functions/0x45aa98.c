// name: FUN_0045aa98
// address: 0x45aa98
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045aa98(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_40 [16];
  int local_30 [6];
  undefined2 local_18;
  
  FUN_00467ba8(0x485fc8);
  local_18 = 8;
  local_30[1] = 0;
  FUN_0045ab08(param_1,local_30 + 1);
  puVar1 = FUN_004590c4();
  local_30[0] = FUN_0045a1f0((int)puVar1);
  FUN_004591e0((int)local_40,param_1,local_30);
  piVar2 = FUN_004590c4();
  FUN_00459b44(piVar2);
  *in_FS_OFFSET = local_30[2];
  return param_1;
}

