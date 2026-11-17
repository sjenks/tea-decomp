// name: FUN_004e2eb0
// address: 0x4e2eb0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004e2eb0(LCID param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = FUN_004e2734(param_1,0xe,param_2 + 1);
  uVar2 = FUN_004e2734(param_1,0xf,param_2);
  uVar3 = FUN_004e2734(param_1,0x10,param_2 + 2);
  uVar4 = FUN_004e2734(param_1,0x50,param_2 + 3);
  uVar5 = FUN_004e2734(param_1,0x51,param_2 + 4);
  uVar6 = FUN_004e2790(param_1,0x11,(undefined2 *)(param_2 + 5),3);
  return (uVar1 & 1 & uVar2 & uVar3 & uVar4 & uVar5 & uVar6) != 0;
}

