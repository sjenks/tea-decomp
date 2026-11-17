// name: FUN_00408e54
// address: 0x408e54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00408e54(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0xc));
  if ((int)(uint)*(ushort *)(iVar1 + 0x240c) <= param_3) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x25a4 + param_3 * 4);
}

