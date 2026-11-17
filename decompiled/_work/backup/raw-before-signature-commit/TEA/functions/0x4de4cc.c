// name: FUN_004de4cc
// address: 0x4de4cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004de4cc(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_20c [512];
  int local_c;
  int local_8;
  
  if (param_1 < DAT_005177f0) {
    if (param_3 + 1 < 2) {
      local_c = 0;
    }
    else {
      if ((*(byte *)((int)&DAT_005177f4 + param_1 * 4 + 1) & 8) != 0) {
        FUN_004ddec0(param_1,0,2);
      }
      if ((*(byte *)((int)&DAT_005177f4 + param_1 * 4 + 1) & 0x40) == 0) {
        local_c = FUN_004de6d8(param_1,param_2,param_3);
      }
      else {
        local_8 = 0;
        local_c = 0;
        pcVar4 = param_2;
        while ((uint)((int)pcVar4 - (int)param_2) < param_3) {
          pcVar3 = local_20c;
          while (((int)pcVar3 - (int)local_20c < 0x1ff &&
                 ((uint)((int)pcVar4 - (int)param_2) < param_3))) {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            if (cVar1 == '\n') {
              local_8 = local_8 + 1;
              *pcVar3 = '\r';
              pcVar3[1] = '\n';
              pcVar3 = pcVar3 + 2;
            }
            else {
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
            }
          }
          iVar2 = FUN_004de6d8(param_1,local_20c,(int)pcVar3 - (int)local_20c);
          if (iVar2 != (int)pcVar3 - (int)local_20c) {
            if (iVar2 == -1) {
              return -1;
            }
            return (local_c - local_8) + iVar2;
          }
          local_c = local_c + iVar2;
        }
        local_c = local_c - local_8;
      }
    }
  }
  else {
    local_c = FUN_004df280(-6);
  }
  return local_c;
}

