// name: FUN_00430864
// address: 0x430864
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00430864(int param_1,uint *param_2,char param_3)

{
  undefined4 uVar1;
  
  if (((param_2 == (uint *)0xffffffff) || (param_2 == (uint *)0x0)) || (param_3 == '\0')) {
    *(uint **)(param_1 + 0x24) = param_2;
    FUN_0045681c();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    uVar1 = FUN_0042aea0(param_2);
    FUN_0045681c();
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
  }
  return;
}

