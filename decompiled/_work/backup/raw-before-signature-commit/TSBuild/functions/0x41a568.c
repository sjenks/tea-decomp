// name: FUN_0041a568
// address: 0x41a568
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0041a568(int *param_1,undefined1 *param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*param_1 + 0x30) & 2) == 0) {
    FUN_0045f1c0(param_1,param_2,param_3);
    uVar1 = FUN_0045f178((int)param_1);
    *param_4 = uVar1;
  }
  else {
    *param_4 = 0;
  }
  return 0;
}

