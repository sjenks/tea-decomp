// name: FUN_004e3798
// address: 0x4e3798
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_004e3798(int param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
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
  iVar1 = (*(code *)PTR_FUN_00518a44)();
  if (iVar1 == 0) {
    wsprintfA((LPSTR)local_74,s__s___s_error_005187e4,param_2,(&PTR_FUN_00518a48)[param_1]);
    if (param_1 - 2U < 3) {
      _DAT_00518bd0 = 0x22;
    }
    else {
      _DAT_00518bd0 = 0x21;
    }
    FUN_004e5e58(local_74);
  }
  return;
}

