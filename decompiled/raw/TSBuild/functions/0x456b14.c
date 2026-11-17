// name: FUN_00456b14
// address: 0x456b14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00456b14(int *param_1,int param_2,int param_3,uint param_4,undefined *param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  int local_2c;
  undefined4 local_28;
  
  FUN_00467ba8(0x484a38);
  if ((param_1 == (int *)0x0) && (param_1 = (int *)FUN_004568d0(), param_1 == (int *)0x0)) {
    param_1 = (int *)0x0;
    *in_FS_OFFSET = local_28;
  }
  else {
    if ((param_4 & 0x10) != 0) {
      *param_1 = param_3;
      param_1 = param_1 + 1;
    }
    if (param_5 == (undefined *)0x0) {
      *in_FS_OFFSET = local_28;
    }
    else {
      local_2c = param_3;
      piVar2 = param_1;
      while (0 < local_2c) {
        uVar1 = param_4 & 7;
        if (uVar1 == 1) {
          (*(code *)param_5)();
        }
        else if (uVar1 == 2) {
          (*(code *)param_5)();
        }
        else if (uVar1 == 3) {
          (*(code *)param_5)(piVar2);
        }
        else if (uVar1 == 5) {
          (*(code *)param_5)();
        }
        else {
          FUN_0047009c((uint *)s_Illegal_mode_in__vector_new__00484a4c);
        }
        piVar2 = (int *)((int)piVar2 + param_2);
        local_2c = local_2c + -1;
      }
      *in_FS_OFFSET = local_28;
    }
  }
  return param_1;
}

