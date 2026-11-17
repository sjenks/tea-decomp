// name: FUN_00468ab8
// address: 0x468ab8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00468ab8(int param_1,char param_2)

{
  int iVar1;
  
  if (DAT_0051ac64 == 0) {
    FUN_00468b50();
  }
  if (((&DAT_0051ac68)[param_1] == -2) && (iVar1 = FUN_00468b20(param_2), iVar1 == 0)) {
    (&DAT_0051ac68)[param_1] = param_2;
    return true;
  }
  return param_2 == (&DAT_0051ac68)[param_1];
}

