// name: FUN_00415280
// address: 0x415280
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00415280(int *param_1,int param_2,int param_3,uint param_4,undefined *param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  int local_2c;
  undefined4 local_28;
  
  FUN_0041f3fc(0x42e960);
  if ((param_1 == (int *)0x0) && (param_1 = (int *)FUN_0041503c(), param_1 == (int *)0x0)) {
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
          FUN_00426acc((uint *)s_Illegal_mode_in__vector_new__0042e974);
        }
        piVar2 = (int *)((int)piVar2 + param_2);
        local_2c = local_2c + -1;
      }
      *in_FS_OFFSET = local_28;
    }
  }
  return param_1;
}

