// name: FUN_0042faf4
// address: 0x42faf4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0042faf4(undefined4 *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_50;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_10;
  int *local_c;
  int local_8;
  
  bVar1 = true;
  iVar2 = *(int *)(param_2[9] + 4);
  local_8 = param_2[9];
  while (iVar2 != 0) {
    local_c = param_3;
    bVar1 = *param_3 < *(int *)(iVar2 + 0x10);
    local_8 = iVar2;
    if (bVar1) {
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
  }
  if ((char)param_2[0xb] == '\0') {
    local_40 = local_8;
    if (bVar1) {
      local_50 = *(int *)(param_2[9] + 8);
      if (local_50 == local_8) {
        FUN_0042fcfc((int)&local_80,param_2,0,local_8,param_3);
        *param_1 = local_80;
        param_1[1] = local_7c;
        param_1[2] = local_78;
        *(undefined1 *)(param_1 + 4) = 1;
        return param_1;
      }
      FUN_00430114((int)&local_48);
    }
    local_10 = (int *)(local_40 + 0x10);
    if (*local_10 < *param_3) {
      FUN_0042fcfc((int)&local_a8,param_2,0,local_8,param_3);
      *param_1 = local_a8;
      param_1[1] = local_a4;
      param_1[2] = local_a0;
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *param_1 = local_48;
      param_1[1] = local_44;
      param_1[2] = local_40;
      *(undefined1 *)(param_1 + 4) = 0;
    }
  }
  else {
    FUN_0042fcfc((int)&local_38,param_2,0,local_8,param_3);
    *param_1 = local_38;
    param_1[1] = local_34;
    param_1[2] = local_30;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return param_1;
}

