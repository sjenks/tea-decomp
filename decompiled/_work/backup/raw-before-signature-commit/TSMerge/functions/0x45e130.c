// name: FUN_0045e130
// address: 0x45e130
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0045e130(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_00475f90 == '\0') {
    DAT_004779f0 = FUN_0045df28;
    SetConsoleCtrlHandler(FUN_0045e108,1);
    DAT_00475f90 = '\x01';
  }
  iVar2 = FUN_0045df08(param_1);
  if (iVar2 == -1) {
    _DAT_00475dd8 = 0x13;
    return 0xffffffff;
  }
  uVar1 = *(undefined4 *)(&DAT_00475f94 + iVar2 * 4);
  *(undefined4 *)(&DAT_00475f94 + iVar2 * 4) = param_2;
  return uVar1;
}

