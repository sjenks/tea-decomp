// name: FUN_0046c210
// address: 0x46c210
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0046c210(int *param_1,undefined4 param_2,int param_3)

{
  SHORT SVar1;
  undefined4 uVar2;
  int iVar3;
  
  SVar1 = GetKeyState(0x10);
  if (SVar1 < 0) {
    iVar3 = 0x3160;
  }
  else {
    iVar3 = 0x1d42;
  }
  uVar2 = FUN_0046d004(param_1,iVar3,param_3);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

