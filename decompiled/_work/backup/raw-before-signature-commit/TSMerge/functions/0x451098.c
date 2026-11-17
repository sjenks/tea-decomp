// name: FUN_00451098
// address: 0x451098
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00451098(int *param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined4 local_24 [8];
  
  FUN_00455f04(0x47285c);
  local_4c = 0;
  param_1[2] = 0;
  if (param_2 == (undefined1 *)0x0) {
    local_4c = 1;
  }
  else {
    local_38 = 0x14;
    FUN_0044eff8(local_24,param_1,'\x01');
    local_2c = local_2c + 1;
    local_38 = 0x20;
    cVar1 = FUN_004512a4((int)local_24);
    if (cVar1 != '\0') {
      local_50 = 0;
      while (param_3 = param_3 + -1, -1 < param_3) {
        local_54 = FUN_0044e520();
        piVar3 = &local_54;
        piVar4 = (int *)FUN_0044f24c(*param_1);
        local_50 = FUN_0044f258(piVar4);
        bVar2 = FUN_0044f188(&local_50,piVar3);
        if (bVar2) break;
        *param_2 = (undefined1)local_50;
        param_2 = param_2 + 1;
        param_1[2] = param_1[2] + 1;
        piVar3 = (int *)FUN_0044f24c(*param_1);
        FUN_0044f2f8(piVar3);
      }
      local_58 = FUN_0044e520();
      bVar2 = FUN_0044f188(&local_50,&local_58);
      if (bVar2) {
        if (param_3 < 0) {
          local_4c = 2;
        }
        else {
          local_4c = 6;
        }
      }
    }
    local_2c = local_2c + -1;
    FUN_0044f354((int)local_24,2);
  }
  local_38 = 0;
  if (local_4c != 0) {
    FUN_0044eb78(*param_1,local_4c);
  }
  *in_FS_OFFSET = local_48;
  return param_1;
}

