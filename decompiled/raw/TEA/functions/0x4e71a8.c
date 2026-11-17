// name: FUN_004e71a8
// address: 0x4e71a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004e71a8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint local_8;
  
  if (param_3 == 0) {
    local_8 = param_2;
    if ((0x3a < param_2) && ((param_4 + 0x46 & 3) == 0)) {
      local_8 = param_2 - 1;
    }
    param_3 = 0;
    for (puVar1 = &DAT_00518e9c; *puVar1 <= local_8; puVar1 = puVar1 + 1) {
      param_3 = param_3 + 1;
    }
  }
  else {
    param_2 = param_2 + (&DAT_00518e98)[param_3];
    if ((2 < param_3) && ((param_4 + 0x46 & 3) == 0)) {
      param_2 = param_2 + 1;
    }
  }
  if ((param_3 < 4) || (10 < param_3)) {
    bVar4 = false;
  }
  else if ((param_3 < 5) || (9 < param_3)) {
    if ((param_4 < 0x11) || (param_3 != 4)) {
      iVar2 = (&DAT_00518e9c)[param_3];
    }
    else {
      iVar2 = iRam00518ea8 + 7;
    }
    if ((param_4 + 0x46 & 3) != 0) {
      iVar2 = iVar2 + -1;
    }
    uVar3 = iVar2 - ((param_4 + 1 >> 2) + iVar2 + param_4 * 0x16d + 4) % 7;
    if (param_3 == 4) {
      if (uVar3 < param_2) {
        bVar4 = true;
      }
      else if (param_2 < uVar3) {
        bVar4 = false;
      }
      else {
        bVar4 = 1 < param_1;
      }
    }
    else if (param_2 < uVar3) {
      bVar4 = true;
    }
    else if (uVar3 < param_2) {
      bVar4 = false;
    }
    else {
      bVar4 = param_1 < 2;
    }
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}

