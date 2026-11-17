// name: FUN_00432d20
// address: 0x432d20
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00432d20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0042d188(param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  return uVar2;
}

