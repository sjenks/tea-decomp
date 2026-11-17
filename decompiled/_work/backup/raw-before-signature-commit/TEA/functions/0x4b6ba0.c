// name: FUN_004b6ba0
// address: 0x4b6ba0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LPSTR __cdecl FUN_004b6ba0(int *param_1,SIZE_T param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  LPSTR pCVar4;
  HLOCAL hMem;
  
  uVar1 = GetWindowLongA(*(HWND *)(*param_1 + 0xc),-0x10);
  if (((((uVar1 & 4) != 0) && (iVar2 = FUN_00487178(), *(uint *)(iVar2 + 0xd) < 0x60000)) &&
      (puVar3 = FUN_0048751c(), *(int *)(puVar3 + 0x10) != 1)) &&
     (puVar3 = FUN_0048751c(), *(int *)(puVar3 + 0x10) != 0)) {
    hMem = (HLOCAL)FUN_004a76a8(*param_1,0xbd,0,0);
    if ((param_2 != 0) && (hMem = LocalReAlloc(hMem,param_2,0x42), hMem == (HLOCAL)0x0)) {
      return (LPSTR)0x0;
    }
    pCVar4 = LocalLock(hMem);
    return pCVar4;
  }
  if (param_2 == 0) {
    iVar2 = GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
    param_2 = iVar2 + 1;
  }
  pCVar4 = (LPSTR)FUN_004cc180();
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),pCVar4,param_2);
  return pCVar4;
}

