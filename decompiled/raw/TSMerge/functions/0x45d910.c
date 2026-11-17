// name: FUN_0045d910
// address: 0x45d910
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0045d910(undefined4 param_1,uint *param_2,undefined *param_3)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  undefined1 *local_c;
  uint *local_8;
  
  local_8 = param_2;
  (*(code *)param_3)();
  for (; ((char)*local_8 == ' ' || ((char)*local_8 == '\t')); local_8 = (uint *)((int)local_8 + 1))
  {
  }
  if ((char)*local_8 == '\"') {
    do {
      puVar3 = local_8;
      local_8 = (uint *)((int)puVar3 + 1);
      if (*(char *)local_8 == '\"') break;
    } while (*(char *)local_8 != '\0');
    if (*(char *)local_8 == '\"') {
      local_8 = (uint *)((int)puVar3 + 2);
    }
  }
  else {
    for (; ((cVar1 = (char)*local_8, cVar1 != ' ' && (cVar1 != '\t')) && (cVar1 != '\0'));
        local_8 = (uint *)((int)local_8 + 1)) {
    }
  }
  FUN_00455bf0(local_8);
  DAT_00477dc0 = (undefined1 *)FUN_0044b944();
  local_c = DAT_00477dc0;
  if (DAT_00477dc0 == (undefined1 *)0x0) {
    FUN_0045d560((uint *)s_No_space_for_copy_of_command_lin_00475ecc);
  }
  while( true ) {
    if ((char)*local_8 == '\0') {
      return 1;
    }
    bVar2 = false;
    for (; ((char)*local_8 == ' ' || ((char)*local_8 == '\t')); local_8 = (uint *)((int)local_8 + 1)
        ) {
    }
    if ((char)*local_8 == '\0') break;
    while (((cVar1 = (char)*local_8, cVar1 != ' ' && (cVar1 != '\t')) && (cVar1 != '\0'))) {
      if (cVar1 == '\"') {
        local_8 = (uint *)((int)local_8 + 1);
        while (((char)*local_8 != '\"' && ((char)*local_8 != '\0'))) {
          FUN_0045da84((int *)&local_c,(int *)&local_8);
        }
        if ((char)*local_8 == '\"') {
          local_8 = (uint *)((int)local_8 + 1);
        }
      }
      else {
        if (((char)*local_8 == '*') || ((char)*local_8 == '?')) {
          bVar2 = true;
        }
        FUN_0045da84((int *)&local_c,(int *)&local_8);
      }
    }
    *local_c = 0;
    local_c = local_c + 1;
    if (bVar2) {
      (*(code *)PTR_FUN_00475f14)();
    }
    else {
      (*(code *)param_3)();
    }
    if ((char)*local_8 == '\0') {
      return 1;
    }
    local_8 = (uint *)((int)local_8 + 1);
  }
  return 1;
}

