// name: thunk_FUN_0042010c
// address: 0x4214f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __cdecl thunk_FUN_0042010c(uint param_1,LONG param_2,int param_3)

{
  DWORD DVar1;
  
  if (param_1 < DAT_00432528) {
    if (param_3 == 0) {
      DVar1 = 0;
    }
    else if (param_3 == 1) {
      DVar1 = 1;
    }
    else {
      if (param_3 != 2) {
        DVar1 = FUN_004211cc(1);
        return DVar1;
      }
      DVar1 = 2;
    }
    (&DAT_0043252c)[param_1] = (&DAT_0043252c)[param_1] & 0xfffffdff;
    DVar1 = SetFilePointer(*(HANDLE *)(&DAT_00434d98 + param_1 * 4),param_2,(PLONG)0x0,DVar1);
    if (DVar1 == 0xffffffff) {
      FUN_00421230();
    }
  }
  else {
    DVar1 = FUN_004211cc(6);
  }
  return DVar1;
}

