// name: FUN_004a4ab5
// address: 0x4a4ab5
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004a4ab5(int param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  int iVar3;
  LPSTR lpString;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if ((*(byte *)(param_1 + 0x74) & 2) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x10))();
      if ((char)uVar1 == '\0') {
        uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
      else {
        BVar2 = IsIconic(*(HWND *)(param_1 + 0xc));
        if (BVar2 != 0) {
          iVar3 = GetWindowTextLengthA(*(HWND *)(param_1 + 0xc));
          lpString = (LPSTR)FUN_004cc180();
          GetWindowTextA(*(HWND *)(param_1 + 0xc),lpString,iVar3 + 1);
          SetWindowTextA(*(HWND *)(param_1 + 0xc),lpString);
          FUN_004cc0cc();
        }
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

