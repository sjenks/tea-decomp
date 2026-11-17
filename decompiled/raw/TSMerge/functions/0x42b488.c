// name: FUN_0042b488
// address: 0x42b488
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0042b488(undefined4 *param_1,int param_2,HWND param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  int local_18;
  undefined4 local_10;
  HWND local_c;
  code *local_8;
  
  local_8 = (code *)0x0;
  if (param_3 == (HWND)0x0) {
    param_4 = 0;
  }
  else {
    local_c = param_3;
    puVar2 = (undefined4 *)FUN_0042bc6c(param_3,param_1[0x1b]);
    if (puVar2 == (undefined4 *)0x0) {
      local_8 = FUN_0042a4f6;
      if (param_2 == 0) {
        uVar3 = FUN_0042b294((int)param_1);
        return uVar3;
      }
    }
    else {
      param_2 = -1;
      param_1 = puVar2;
    }
  }
  local_1c = param_4;
  local_10 = 0;
  local_18 = param_2;
  cVar1 = (**(code **)(param_1[2] + 0x84))();
  if (cVar1 == '\0') {
    uVar3 = FUN_0042b294((int)param_1);
  }
  else {
    uVar3 = FUN_004179cc(*param_1,(int)&local_1c);
  }
  return uVar3;
}

