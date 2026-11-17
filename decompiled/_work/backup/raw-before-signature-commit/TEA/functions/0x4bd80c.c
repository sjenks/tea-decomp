// name: FUN_004bd80c
// address: 0x4bd80c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004bd80c(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10);
    bVar2 = (uVar1 & 0x58000000) == 0x50000000;
  }
  return bVar2;
}

