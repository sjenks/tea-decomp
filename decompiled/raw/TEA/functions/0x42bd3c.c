// name: FUN_0042bd3c
// address: 0x42bd3c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042bd3c(int *param_1,int *param_2,char param_3)

{
  uint uVar1;
  
  if (param_3 == '\0') {
    uVar1 = 8;
  }
  else {
    uVar1 = 0;
  }
  FUN_004a7aa0(*param_1,(HWND)0x0,*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],
               uVar1 | 0x214);
  FUN_0042ba08((int)param_1);
  (**(code **)(**(int **)(*param_1 + 0x44) + 0x14))();
  return;
}

