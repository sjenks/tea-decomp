// name: FUN_004deb3c
// address: 0x4deb3c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004deb3c(byte *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if ((*(byte *)((int)param_3 + 0x12) & 8) == 0) {
    uVar3 = param_3[3];
    if ((uVar3 == 0) || (uVar3 < param_2)) {
      if ((param_3[3] == 0) || ((param_3[2] == 0 || (iVar2 = FUN_004de85c(param_3), iVar2 == 0)))) {
        uVar3 = FUN_004de4cc((int)*(char *)((int)param_3 + 0x16),(char *)param_1,param_2);
        if ((uVar3 == 0xffffffff) || (uVar3 < param_2)) {
          param_2 = 0;
        }
      }
      else {
        param_2 = 0;
      }
    }
    else {
      if (-1 < (int)(param_3[2] + param_2)) {
        if (param_3[2] == 0) {
          param_3[2] = -1 - uVar3;
        }
        else {
          iVar2 = FUN_004de85c(param_3);
          if (iVar2 != 0) {
            return 0;
          }
        }
      }
      FUN_004dc7d4((undefined4 *)*param_3,(undefined4 *)param_1,param_2);
      param_3[2] = param_3[2] + param_2;
      *param_3 = *param_3 + param_2;
    }
  }
  else {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = FUN_004df498(*param_1,param_3);
      if (uVar1 == 0xffffffff) {
        return 0;
      }
      param_1 = param_1 + 1;
    }
  }
  return param_2;
}

