// name: FUN_0047f6ec
// address: 0x47f6ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0047f6ec(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x214);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x1f8) - *(int *)(param_1 + 500))) {
    *(undefined1 *)(*(int *)(param_1 + 500) + iVar1) = param_2;
  }
  return;
}

