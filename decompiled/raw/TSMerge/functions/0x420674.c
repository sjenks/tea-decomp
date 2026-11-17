// name: FUN_00420674
// address: 0x420674
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00420674(int param_1,byte param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    for (iVar1 = 0; (iVar1 < 0x10 && (*(int *)(param_1 + iVar1 * 5) != 0)); iVar1 = iVar1 + 1) {
      DeleteDC(*(HDC *)(param_1 + iVar1 * 5));
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  return;
}

