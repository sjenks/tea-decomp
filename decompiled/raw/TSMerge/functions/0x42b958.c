// name: FUN_0042b958
// address: 0x42b958
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0042b958(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_20;
  uint local_1c [3];
  int local_10;
  undefined *local_c;
  uint local_8;
  
  if (param_2 == 0x7fff) {
    (**(code **)(param_1[2] + 0x50))();
    uVar2 = 0;
  }
  else if (param_2 == 0x111) {
    uVar2 = (**(code **)(param_1[2] + 0x48))();
  }
  else if (param_2 == 0x4e) {
    if (DAT_0046a3cd == '\0') {
      _DAT_0047704d = 0;
      _DAT_00477055 = 0;
      DAT_0046a3cd = '\x01';
    }
    _DAT_00477051 = 0xffffffff;
    uVar2 = (**(code **)(param_1[2] + 0x4c))();
  }
  else {
    if (*(int *)((int)param_1 + 0x82) == 0) {
      if (param_1 == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[2];
      }
      puVar3 = FUN_0045666c((int)param_1,iVar4,0x40467c);
      *(undefined4 *)((int)param_1 + 0x82) = puVar3[1];
    }
    local_8 = (*(uint *)((int)param_1 + 0x82) ^ param_2) % 0x1f;
    local_1c[0] = param_2;
    local_1c[1] = 0;
    local_10 = 0;
    local_c = FUN_0042a51f();
    uVar2 = FUN_0042b8f0((int)local_c,local_8,param_2,*(int *)((int)param_1 + 0x82));
    if ((char)uVar2 == '\0') {
      cVar1 = (**(code **)(param_1[2] + 0x84))();
      if (cVar1 != '\0') {
        FUN_0042b8c0((int)local_c,local_8,*(undefined4 *)((int)param_1 + 0x82),param_2,local_10,
                     local_1c[2] - (int)param_1);
        uVar2 = FUN_004179cc(*param_1,(int)local_1c);
        return uVar2;
      }
      FUN_0042b8c0((int)local_c,local_8,*(undefined4 *)((int)param_1 + 0x82),param_2,0,0);
    }
    else {
      local_10 = *(int *)(local_c + local_8 * 0x10 + 4);
      if (local_10 != 0) {
        local_1c[2] = *(int *)(local_c + local_8 * 0x10 + 0xc) + (int)param_1;
        uVar2 = FUN_004179cc(*param_1,(int)local_1c);
        return uVar2;
      }
    }
    if ((*(byte *)(param_1 + 0x1d) & 0x10) != 0) {
      local_2c = param_2;
      local_28 = param_3;
      local_20 = 0;
      cVar1 = (**(code **)(*(int *)(param_1[0x1b] + 0x1b) + 0x2c))();
      if (cVar1 != '\0') {
        uVar2 = FUN_004179cc(*(undefined4 *)param_1[0x1b],(int)&local_2c);
        return uVar2;
      }
      cVar1 = (**(code **)(*(int *)(param_1[0x1b] + 0x1b) + 0x2c))();
      if (cVar1 != '\0') {
        uVar2 = FUN_004179cc(*(undefined4 *)param_1[0x1b],(int)local_1c);
        return uVar2;
      }
    }
    uVar2 = (**(code **)(param_1[2] + 0x44))();
  }
  return uVar2;
}

