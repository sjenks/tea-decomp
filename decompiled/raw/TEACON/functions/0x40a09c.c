// name: FUN_0040a09c
// address: 0x40a09c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0040a09c(char param_1,int param_2,int param_3,byte *param_4,int *param_5)

{
  byte *pbVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  byte bVar5;
  byte *pbVar6;
  byte local_2c [32];
  int local_c;
  uint local_8;
  
  pbVar6 = local_2c;
  local_8 = 0x2a;
  while( true ) {
    while( true ) {
      while( true ) {
        bVar5 = *param_4;
        param_4 = param_4 + 1;
        if ((bVar5 & 0xf7) != 4) break;
        *pbVar6 = bVar5;
        pbVar6 = pbVar6 + 1;
        param_5 = param_5 + 1;
      }
      piVar2 = param_5 + 1;
      local_c = *param_5;
      if (local_c != 0) {
        if (param_1 == '\0') {
          local_8 = (uint)(local_c == 1);
        }
        else {
          iVar4 = FUN_0040d944(local_c);
          if ((param_3 < iVar4) || (iVar4 = FUN_0040d960(local_c), iVar4 < param_3)) {
            local_8 = 0;
          }
          else {
            local_8 = 1;
          }
          if (((local_8 != 0) && (param_1 == '\x02')) &&
             (bVar3 = FUN_0040d73c(local_c,param_2), CONCAT31(extraout_var,bVar3) == 0)) {
            local_8 = 0;
          }
        }
      }
      if ((bVar5 & 8) != 0) {
        if (param_1 != '\x01') {
          local_8 = (uint)(local_8 == 0);
        }
        bVar5 = bVar5 & 0xf7;
      }
      if (((bVar5 == 1) && (local_8 != 0)) || ((bVar5 == 2 && (local_8 == 0)))) break;
      param_5 = piVar2;
      if (bVar5 == 5) {
        pbVar6 = pbVar6 + -1;
        if (((*pbVar6 & 8) != 0) && (param_1 != '\x01')) {
          local_8 = (uint)(local_8 == 0);
        }
      }
      else if (bVar5 == 3) {
        return local_8;
      }
    }
    if (pbVar6 == local_2c) break;
    pbVar1 = pbVar6 + -1;
    while (pbVar1 < pbVar6) {
      bVar5 = *param_4;
      param_4 = param_4 + 1;
      piVar2 = piVar2 + 1;
      if ((bVar5 & 0xf7) == 4) {
        pbVar6 = pbVar6 + 1;
      }
      else if ((bVar5 & 0xf7) == 5) {
        pbVar6 = pbVar6 + -1;
      }
    }
    param_5 = piVar2;
    if (((*pbVar6 & 8) != 0) && (param_1 != '\x01')) {
      local_8 = (uint)(local_8 == 0);
    }
  }
  return local_8;
}

