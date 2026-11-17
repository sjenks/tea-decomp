// name: FUN_0046d940
// address: 0x46d940
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_0046d940(int param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  uint local_74 [20];
  int local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_24 = param_1;
  local_20 = param_2;
  if (param_3 == (undefined8 *)0x0) {
    local_1c = 0;
  }
  else {
    local_1c = *param_3;
  }
  if (param_4 == (undefined8 *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = *param_4;
  }
  local_c = param_5;
  uStack_8 = param_6;
  iVar1 = (*(code *)PTR_FUN_0048a6f4)();
  if (iVar1 == 0) {
    wsprintfA((LPSTR)local_74,s__s___s_error_0048a494,param_2,(&PTR_FUN_0048a6f8)[param_1]);
    if (param_1 - 2U < 3) {
      _DAT_0048a878 = 0x22;
    }
    else {
      _DAT_0048a878 = 0x21;
    }
    FUN_0046ff70(local_74);
  }
  return;
}

