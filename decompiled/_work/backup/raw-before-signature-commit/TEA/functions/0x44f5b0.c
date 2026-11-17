// name: FUN_0044f5b0
// address: 0x44f5b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044f5b0(int *param_1,int param_2,int param_3)

{
  tagRECT local_24;
  tagRECT local_14;
  
  if (param_2 == 4) {
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = 0;
    local_14.bottom = 0;
    FUN_004a7a6c(param_1[1],&local_14);
    if (param_1[4] < 0x8000) {
      (**(code **)(*param_1 + 0x2c))();
    }
    else {
      FUN_0044f21c();
      (**(code **)(*param_1 + 0x2c))();
    }
  }
  else if (param_2 == 5) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    FUN_004a7a6c(param_1[1],&local_24);
    if (*(char *)((int)param_1 + 0x39) != '\0') {
      if (param_1[4] < 0x8000) {
        (**(code **)(*param_1 + 0x2c))();
      }
      else {
        FUN_0044f21c();
        (**(code **)(*param_1 + 0x2c))();
      }
    }
    if ((param_1[1] != 0) && (*(char *)((int)param_1 + 0x3b) != '\0')) {
      FUN_004a7f80(param_1[1],0,param_3,*(byte *)((int)param_1 + 0x3e));
    }
  }
  else {
    FUN_004c6ea0(param_1,param_2,param_3);
  }
  return;
}

