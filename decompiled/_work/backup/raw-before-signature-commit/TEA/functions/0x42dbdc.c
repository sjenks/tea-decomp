// name: FUN_0042dbdc
// address: 0x42dbdc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_0042dbdc(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041ea74(param_2);
  *(undefined4 *)(param_1 + 0xf8) = uVar1;
  uVar1 = FUN_0041ea74(param_3);
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  *(undefined4 *)(param_1 + 0xf0) = param_4;
  *(undefined4 *)(param_1 + 0xf4) = param_5;
  return;
}

