// name: FUN_004516c8
// address: 0x4516c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004516c8(int *param_1,undefined1 param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  int local_54;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined4 local_24 [8];
  
  FUN_00455f04(0x4729a4);
  local_4c = 0;
  local_38 = 0x14;
  FUN_0044f568(local_24,param_1);
  local_2c = local_2c + 1;
  local_38 = 0x20;
  cVar1 = FUN_004516ac((int)local_24);
  if (cVar1 != '\0') {
    local_54 = FUN_0044e520();
    piVar4 = &local_54;
    piVar3 = (int *)FUN_0044f24c(*param_1);
    local_50 = FUN_00450258(piVar3,param_2);
    bVar2 = FUN_0044f188(&local_50,piVar4);
    if (bVar2) {
      local_4c = 1;
    }
  }
  local_2c = local_2c + -1;
  FUN_0040ad78(local_24,2);
  local_38 = 0;
  if (local_4c != 0) {
    FUN_0044eb78(*param_1,local_4c);
  }
  *in_FS_OFFSET = local_48;
  return param_1;
}

