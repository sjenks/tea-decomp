// name: FUN_0042b538
// address: 0x42b538
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0042b538(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  HWND pHVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_30;
  int local_2c;
  undefined4 local_24;
  undefined4 local_20 [3];
  byte local_14;
  HWND local_c;
  code *local_8;
  
  if (param_3[2] == -0x208) {
    FUN_00425740(local_20,(int)param_3,param_1[3]);
    puVar3 = local_20;
    if (param_1[5] == 0) {
      pHVar2 = (HWND)param_1[3];
    }
    else if (param_1[3] == 0) {
      pHVar2 = (HWND)0x0;
    }
    else {
      pHVar2 = GetParent((HWND)param_1[3]);
    }
    FUN_0042b67c(param_1,pHVar2,puVar3);
    if ((local_14 & 1) != 0) {
      return 0;
    }
  }
  local_8 = (code *)0x0;
  local_c = (HWND)*param_3;
  puVar3 = (undefined4 *)FUN_0042bc6c(local_c,param_1[0x1b]);
  if (puVar3 == (undefined4 *)0x0) {
    local_8 = FUN_0042a4f6;
    if (param_2 == 0) {
      uVar4 = FUN_0042b294((int)param_1);
      return uVar4;
    }
  }
  else {
    param_2 = -1;
    param_1 = puVar3;
  }
  local_30 = param_3[2];
  local_2c = param_2;
  local_24 = 0;
  cVar1 = (**(code **)(param_1[2] + 0x84))();
  if (cVar1 == '\0') {
    uVar4 = FUN_0042b294((int)param_1);
  }
  else {
    uVar4 = FUN_004179cc(*param_1,(int)&local_30);
  }
  return uVar4;
}

