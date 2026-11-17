// name: FUN_00479bd4
// address: 0x479bd4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00479bd4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  FUN_00479c14(param_2,iVar1 >> 2);
  FUN_0047a0d8(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),
               *(undefined4 **)(param_2 + 4));
  return;
}

