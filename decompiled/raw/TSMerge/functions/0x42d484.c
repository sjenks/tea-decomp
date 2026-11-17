// name: FUN_0042d484
// address: 0x42d484
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0042d484(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  LONG LVar3;
  uint3 extraout_var;
  uint uVar4;
  
  uVar1 = FUN_0042d3ec(param_1);
  uVar4 = ~param_2 & uVar1 | param_3;
  if (uVar4 == uVar1) {
    uVar2 = 0;
  }
  else {
    LVar3 = FUN_0042d40c(param_1,uVar4);
    if ((param_4 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
      FUN_0042d59c(param_1,(HWND)0x0,0,0,0,0,param_4 | 0x17);
      LVar3 = (uint)extraout_var << 8;
    }
    uVar2 = CONCAT31((int3)((uint)LVar3 >> 8),1);
  }
  return uVar2;
}

