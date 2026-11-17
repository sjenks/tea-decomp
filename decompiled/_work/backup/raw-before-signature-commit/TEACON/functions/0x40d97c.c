// name: FUN_0040d97c
// address: 0x40d97c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0040d97c(int param_1,char param_2)

{
  int iVar1;
  
  if (DAT_00434684 == '\0') {
    FUN_0040da14();
  }
  if (((&DAT_00434688)[param_1] == -2) && (iVar1 = FUN_0040d9e4(param_2), iVar1 == 0)) {
    (&DAT_00434688)[param_1] = param_2;
    return true;
  }
  return param_2 == (&DAT_00434688)[param_1];
}

