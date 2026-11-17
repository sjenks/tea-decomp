// name: FUN_0045d098
// address: 0x45d098
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0045d098(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 0x100) {
    iVar2 = FUN_00458dbc(param_1 & 0xff);
    if ((iVar2 == 0) && (((&DAT_00477b8d)[param_1 & 0xff] & 1) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

