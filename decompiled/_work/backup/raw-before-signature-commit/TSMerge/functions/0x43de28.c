// name: FUN_0043de28
// address: 0x43de28
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043de28(int *param_1,undefined4 param_2,int param_3)

{
  FUN_00441090(param_1[0xc],param_3);
  if ((*(byte *)(param_1 + 7) & 0x40) == 0) {
    FUN_0043d920(param_1);
  }
  else {
    param_1[0xd] = 0;
  }
  return 0;
}

