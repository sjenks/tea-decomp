// name: FUN_0044ca34
// address: 0x44ca34
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0044ca34(int param_1)

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

