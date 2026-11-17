// name: FUN_004304f0
// address: 0x4304f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004304f0(undefined4 *param_1,uint *param_2,char *param_3,undefined4 param_4)

{
  char *pcVar1;
  
  *param_1 = 0;
  param_1[1] = param_4;
  pcVar1 = FUN_004dc9f4(param_2);
  if (0xff < (int)pcVar1) {
    pcVar1 = (char *)0xff;
  }
  if ((int)pcVar1 < (int)param_3) {
    param_3 = pcVar1;
  }
  *(char *)(param_1 + 2) = (char)param_3;
  FUN_004dcc40((undefined4 *)((int)param_1 + 9),param_2,pcVar1);
  pcVar1[(int)param_1 + 9] = '\0';
  return;
}

