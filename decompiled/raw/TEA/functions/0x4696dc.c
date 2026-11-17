// name: FUN_004696dc
// address: 0x4696dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_004696dc(int *param_1,undefined1 *param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*param_1 + 0x30) & 2) == 0) {
    FUN_004d4534(param_1,param_2,param_3);
    uVar1 = FUN_004d44ec((int)param_1);
    *param_4 = uVar1;
  }
  else {
    *param_4 = 0;
  }
  return 0;
}

