// name: FUN_0041063c
// address: 0x41063c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0041063c(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_0046484c == '\0') {
    DAT_00464848 = GetProcAddress(*(HMODULE *)(param_1 + 8),s_DllGetVersion_00464bb5);
    DAT_0046484c = DAT_0046484c + '\x01';
  }
  if (DAT_00464848 == (FARPROC)0x0) {
    bVar2 = false;
  }
  else if (DAT_00464848 == (FARPROC)0x0) {
    *(undefined4 *)(param_2 + 4) = 4;
    *(undefined4 *)(param_2 + 8) = 0;
    bVar2 = true;
  }
  else {
    iVar1 = (*DAT_00464848)();
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

