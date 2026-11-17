// name: FUN_0044dee8
// address: 0x44dee8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0044dee8(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_40 [16];
  int local_30 [6];
  undefined2 local_18;
  
  FUN_00455f04(0x472070);
  local_18 = 8;
  local_30[1] = 0;
  FUN_0044df74(param_1,local_30 + 1);
  puVar1 = FUN_0044dc9c();
  local_30[0] = FUN_0044dfb0((int)puVar1);
  FUN_0044dda8((int)local_40,param_1,local_30);
  piVar2 = (int *)FUN_0044dc9c();
  FUN_0044dfbc(piVar2);
  *in_FS_OFFSET = local_30[2];
  return param_1;
}

