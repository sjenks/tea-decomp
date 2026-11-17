// name: FUN_00422b68
// address: 0x422b68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00422b68(undefined4 param_1,int *param_2,int *param_3,undefined *param_4)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  
  if (param_4 == (undefined *)0x0) {
    for (; param_2[2] != 0; param_2 = param_2 + 6) {
      if ((*param_2 == *param_3) && (param_2[1] == param_3[1])) {
        param_3[3] = (int)param_2;
        return CONCAT31((int3)((uint)in_EAX >> 8),1);
      }
    }
  }
  else {
    for (; param_2[2] != 0; param_2 = param_2 + 6) {
      uVar1 = (*(code *)param_4)();
      if ((char)uVar1 != '\0') {
        param_3[3] = (int)param_2;
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
    }
  }
  return 0;
}

