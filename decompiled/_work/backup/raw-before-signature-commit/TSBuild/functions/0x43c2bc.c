// name: FUN_0043c2bc
// address: 0x43c2bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined1 __cdecl FUN_0043c2bc(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined1 local_5;
  
  local_5 = 1;
  if (param_1[param_1[0x30] * 3 + -3] == 0) {
    FUN_004675a4(param_1 + 3,param_1,(param_1[0x30] - 1) * 0xc);
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = 1;
  }
  else {
    uVar1 = param_1[0x30];
    do {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) goto LAB_0043c32e;
    } while (param_1[uVar1 * 3 + 2] != 0);
    FUN_004282f8(param_1[uVar1 * 3]);
    param_1[uVar1 * 3] = param_2;
    param_1[uVar1 * 3 + 1] = param_3;
    param_1[uVar1 * 3 + 2] = 1;
    FUN_0043c26c(param_1,uVar1);
LAB_0043c32e:
    if ((int)uVar1 < 0) {
      local_5 = 0;
    }
  }
  FUN_00428078(param_2,2);
  return local_5;
}

