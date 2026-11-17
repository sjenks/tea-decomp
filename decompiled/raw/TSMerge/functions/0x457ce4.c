// name: thunk_FUN_00456ed8
// address: 0x457ce4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __cdecl thunk_FUN_00456ed8(uint param_1,LONG param_2,int param_3)

{
  DWORD DVar1;
  
  if (param_1 < DAT_00474b38) {
    if (param_3 == 0) {
      DVar1 = 0;
    }
    else if (param_3 == 1) {
      DVar1 = 1;
    }
    else {
      if (param_3 != 2) {
        DVar1 = FUN_00457c6c(1);
        return DVar1;
      }
      DVar1 = 2;
    }
    (&DAT_00474b3c)[param_1] = (&DAT_00474b3c)[param_1] & 0xfffffdff;
    DVar1 = SetFilePointer(*(HANDLE *)(&DAT_00477ac0 + param_1 * 4),param_2,(PLONG)0x0,DVar1);
    if (DVar1 == 0xffffffff) {
      FUN_00457cd0();
    }
  }
  else {
    DVar1 = FUN_00457c6c(6);
  }
  return DVar1;
}

