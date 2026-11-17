// name: FUN_004b6c5c
// address: 0x4b6c5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b6c5c(int *param_1,LPCSTR param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  HLOCAL hMem;
  
  if (param_2 != (LPCSTR)0x0) {
    uVar1 = GetWindowLongA(*(HWND *)(*param_1 + 0xc),-0x10);
    if (((((uVar1 & 4) != 0) && (iVar2 = FUN_00487178(), *(uint *)(iVar2 + 0xd) < 0x60000)) &&
        (puVar3 = FUN_0048751c(), *(int *)(puVar3 + 0x10) != 1)) &&
       (puVar3 = FUN_0048751c(), *(int *)(puVar3 + 0x10) != 0)) {
      hMem = LocalHandle(param_2);
      LocalUnlock(hMem);
      if (param_3 == '\0') {
        return;
      }
      FUN_004a76a8(*param_1,0xbc,(WPARAM)hMem,0);
      return;
    }
    if (param_3 != '\0') {
      SetWindowTextA(*(HWND *)(*param_1 + 0xc),param_2);
    }
    FUN_004cc0cc();
  }
  return;
}

