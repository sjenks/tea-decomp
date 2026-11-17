// name: FUN_0045ab44
// address: 0x45ab44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045ab44(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_40 [16];
  int local_30 [6];
  undefined2 local_18;
  
  FUN_00467ba8(0x486000);
  local_18 = 8;
  local_30[1] = 0;
  FUN_0045abd0(param_1,local_30 + 1);
  puVar1 = FUN_0045a8f8();
  local_30[0] = FUN_0045ac0c((int)puVar1);
  FUN_0045aa04((int)local_40,param_1,local_30);
  piVar2 = (int *)FUN_0045a8f8();
  FUN_0045ac18(piVar2);
  *in_FS_OFFSET = local_30[2];
  return param_1;
}

