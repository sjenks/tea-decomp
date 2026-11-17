// name: FUN_004ab670
// address: 0x4ab670
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined1 __cdecl FUN_004ab670(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined1 local_5;
  
  local_5 = 1;
  if (param_1[param_1[0x30] * 3 + -3] == 0) {
    FUN_004dc7f8(param_1 + 3,param_1,(param_1[0x30] - 1) * 0xc);
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = 1;
  }
  else {
    uVar1 = param_1[0x30];
    do {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) goto LAB_004ab6e2;
    } while (param_1[uVar1 * 3 + 2] != 0);
    FUN_00493eb4(param_1[uVar1 * 3]);
    param_1[uVar1 * 3] = param_2;
    param_1[uVar1 * 3 + 1] = param_3;
    param_1[uVar1 * 3 + 2] = 1;
    FUN_004ab620(param_1,uVar1);
LAB_004ab6e2:
    if ((int)uVar1 < 0) {
      local_5 = 0;
    }
  }
  FUN_00493c34(param_2,2);
  return local_5;
}

