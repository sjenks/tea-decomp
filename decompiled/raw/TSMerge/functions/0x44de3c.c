// name: FUN_0044de3c
// address: 0x44de3c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0044de3c(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_40 [16];
  int local_30 [6];
  undefined2 local_18;
  
  FUN_00455f04(0x472038);
  local_18 = 8;
  local_30[1] = 0;
  FUN_0044deac(param_1,local_30 + 1);
  puVar1 = FUN_0044cab8();
  local_30[0] = FUN_0044d594((int)puVar1);
  FUN_0044cbd4((int)local_40,param_1,local_30);
  piVar2 = FUN_0044cab8();
  FUN_0044cee8(piVar2);
  *in_FS_OFFSET = local_30[2];
  return param_1;
}

