// name: FUN_004ab620
// address: 0x4ab620
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ab620(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (0 < param_2) {
    uVar1 = param_1[param_2 * 3];
    uVar2 = param_1[param_2 * 3 + 1];
    uVar3 = param_1[param_2 * 3 + 2];
    FUN_004dc7f8(param_1 + 3,param_1,param_2 * 0xc);
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
  }
  return;
}

