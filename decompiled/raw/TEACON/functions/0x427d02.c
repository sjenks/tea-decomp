// name: FUN_00427d02
// address: 0x427d02
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_00427d02(undefined4 param_1,int param_2,byte param_3,undefined *param_4,uint param_5,int param_6
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
  if (*DAT_00435108 == 2) {
    pcVar1 = FUN_0041f920(param_2);
    FUN_00427ccd(pcVar1);
    FUN_00427ce5(0,3);
  }
  if ((param_5 & 0x80) != 0) {
    FUN_00426830(s__dtorMask___0x0080_____0_00433b38,s_xx_cpp_00433b51,0x2cd);
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
    FUN_00426830(s___what___00433b5e,s_xx_cpp_00433b67,0x2f4);
  }
  return;
}

