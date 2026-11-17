// name: FUN_00486f1c
// address: 0x486f1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00486f1c(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_00503ec8 == '\0') {
    DAT_00503ec4 = GetProcAddress(*(HMODULE *)(param_1 + 8),s_DllGetVersion_00504231);
    DAT_00503ec8 = DAT_00503ec8 + '\x01';
  }
  if (DAT_00503ec4 == (FARPROC)0x0) {
    bVar2 = false;
  }
  else if (DAT_00503ec4 == (FARPROC)0x0) {
    *(undefined4 *)(param_2 + 4) = 4;
    *(undefined4 *)(param_2 + 8) = 0;
    bVar2 = true;
  }
  else {
    iVar1 = (*DAT_00503ec4)();
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

