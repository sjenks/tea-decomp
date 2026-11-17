// name: FUN_00406780
// address: 0x406780
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00406780(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0xc));
  return CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(iVar1 + 0x2bf8 + param_3));
}

