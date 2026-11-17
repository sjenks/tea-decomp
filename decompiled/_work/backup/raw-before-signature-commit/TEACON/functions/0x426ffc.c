// name: FUN_00426ffc
// address: 0x426ffc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00426ffc(undefined4 param_1,short *param_2,undefined *param_3)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  undefined2 *local_c;
  short *local_8;
  
  local_8 = param_2;
  (*(code *)param_3)();
  for (; (*local_8 == 0x20 || (*local_8 == 9)); local_8 = local_8 + 1) {
  }
  if (*local_8 == 0x22) {
    do {
      psVar3 = local_8;
      local_8 = psVar3 + 1;
      if (*local_8 == 0x22) break;
    } while (*local_8 != 0);
    if (*local_8 == 0x22) {
      local_8 = psVar3 + 2;
    }
  }
  else {
    for (; ((sVar1 = *local_8, sVar1 != 0x20 && (sVar1 != 9)) && (sVar1 != 0));
        local_8 = local_8 + 1) {
    }
  }
  FUN_0041f3a4(local_8);
  DAT_004350b0 = (undefined2 *)FUN_004155f0();
  local_c = DAT_004350b0;
  if (DAT_004350b0 == (undefined2 *)0x0) {
    FUN_00426acc((uint *)s_No_space_for_copy_of_command_lin_004338cc);
  }
  while( true ) {
    if (*local_8 == 0) {
      return 1;
    }
    bVar2 = false;
    for (; (*local_8 == 0x20 || (*local_8 == 9)); local_8 = local_8 + 1) {
    }
    if (*local_8 == 0) break;
    while (((sVar1 = *local_8, sVar1 != 0x20 && (sVar1 != 9)) && (sVar1 != 0))) {
      if (sVar1 == 0x22) {
        local_8 = local_8 + 1;
        while ((*local_8 != 0x22 && (*local_8 != 0))) {
          FUN_004271ac((int *)&local_c,(int *)&local_8);
        }
        if (*local_8 == 0x22) {
          local_8 = local_8 + 1;
        }
      }
      else {
        if ((*local_8 == 0x2a) || (*local_8 == 0x3f)) {
          bVar2 = true;
        }
        FUN_004271ac((int *)&local_c,(int *)&local_8);
      }
    }
    *local_c = 0;
    local_c = local_c + 1;
    if (bVar2) {
      (*(code *)PTR_FUN_004338f4)();
    }
    else {
      (*(code *)param_3)();
    }
    if (*local_8 == 0) {
      return 1;
    }
    local_8 = local_8 + 1;
  }
  return 1;
}

