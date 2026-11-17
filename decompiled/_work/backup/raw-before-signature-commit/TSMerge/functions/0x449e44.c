// name: FUN_00449e44
// address: 0x449e44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00449e44(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = FUN_0042292c(param_2);
  *(short *)(iVar1 + 4) = (short)uVar2;
  return *(undefined4 *)(param_1 + 8);
}

