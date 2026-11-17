// name: FUN_0041b660
// address: 0x41b660
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0041b660(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_00478600 == '\0') {
    DAT_004785fc = GetProcAddress(*(HMODULE *)(param_1 + 8),s_DllGetVersion_00478969);
    DAT_00478600 = DAT_00478600 + '\x01';
  }
  if (DAT_004785fc == (FARPROC)0x0) {
    bVar2 = false;
  }
  else if (DAT_004785fc == (FARPROC)0x0) {
    *(undefined4 *)(param_2 + 4) = 4;
    *(undefined4 *)(param_2 + 8) = 0;
    bVar2 = true;
  }
  else {
    iVar1 = (*DAT_004785fc)();
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

