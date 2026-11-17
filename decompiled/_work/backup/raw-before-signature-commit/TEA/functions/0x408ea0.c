// name: FUN_00408ea0
// address: 0x408ea0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00408ea0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0xc));
  return CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(iVar1 + 0x2bf8 + param_3));
}

