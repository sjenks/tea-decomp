// name: FUN_0042e408
// address: 0x42e408
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0042e408(undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_4c;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  int local_8;
  
  local_8 = param_2[9];
  iVar2 = *(int *)(local_8 + 4);
  cVar1 = '\x01';
  while (iVar2 != 0) {
    local_8 = iVar2;
    cVar1 = FUN_00430548(param_2 + 0xc,*param_3,*(int *)(iVar2 + 0x10));
    if (cVar1 == '\0') {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((char)param_2[0xb] == '\0') {
    local_3c = local_8;
    if (cVar1 != '\0') {
      local_4c = *(int *)(param_2[9] + 8);
      if (local_4c == local_8) {
        local_a = 1;
        FUN_0042e60c((int)&local_7c,param_2,0,local_8,param_3);
        *param_1 = local_7c;
        param_1[1] = local_78;
        param_1[2] = local_74;
        *(undefined1 *)(param_1 + 4) = local_a;
        return param_1;
      }
      FUN_0042e9d8((int)&local_44);
    }
    cVar1 = FUN_00430548(param_2 + 0xc,*(int *)(local_3c + 0x10),*param_3);
    if (cVar1 == '\0') {
      *param_1 = local_44;
      param_1[1] = local_40;
      param_1[2] = local_3c;
      *(undefined1 *)(param_1 + 4) = 0;
    }
    else {
      local_b = 1;
      FUN_0042e60c((int)&local_a4,param_2,0,local_8,param_3);
      *param_1 = local_a4;
      param_1[1] = local_a0;
      param_1[2] = local_9c;
      *(undefined1 *)(param_1 + 4) = local_b;
    }
  }
  else {
    local_9 = 1;
    FUN_0042e60c((int)&local_34,param_2,0,local_8,param_3);
    *param_1 = local_34;
    param_1[1] = local_30;
    param_1[2] = local_2c;
    *(undefined1 *)(param_1 + 4) = local_9;
  }
  return param_1;
}

