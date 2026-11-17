// name: FUN_004e7926
// address: 0x4e7926
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_004e7926(undefined4 param_1,int param_2,byte param_3,undefined *param_4,uint param_5,int param_6
            )

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  if ((param_3 & 2) != 0) {
    uVar2 = uVar2 | 0x80;
  }
  if (*DAT_0051c478 == 2) {
    pcVar1 = FUN_004dd388(param_2);
    FUN_004e78f1(pcVar1);
    FUN_004e7909(0,3);
  }
  if ((param_5 & 0x80) != 0) {
    FUN_004e5ce8(s__dtorMask___0x0080_____0_00519130,s_xx_cpp_00519149,0x2cd);
  }
  uVar3 = param_5 & 7;
  if (uVar3 == 1) {
    (*(code *)param_4)();
  }
  else if (uVar3 == 2) {
    (*(code *)param_4)();
  }
  else if (uVar3 == 3) {
    (*(code *)param_4)(param_1,uVar2);
  }
  else if (uVar3 == 5) {
    (*(code *)param_4)();
  }
  else {
    FUN_004e5ce8(s___what___00519156,s_xx_cpp_0051915f,0x2f4);
  }
  return;
}

