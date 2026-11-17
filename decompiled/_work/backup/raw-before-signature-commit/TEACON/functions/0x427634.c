// name: FUN_00427634
// address: 0x427634
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00427634(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_0043396c == '\0') {
    DAT_00434cc8 = FUN_0042742c;
    SetConsoleCtrlHandler(FUN_0042760c,1);
    DAT_0043396c = '\x01';
  }
  iVar2 = FUN_0042740c(param_1);
  if (iVar2 == -1) {
    _DAT_004337d4 = 0x13;
    return 0xffffffff;
  }
  uVar1 = *(undefined4 *)(&DAT_00433970 + iVar2 * 4);
  *(undefined4 *)(&DAT_00433970 + iVar2 * 4) = param_2;
  return uVar1;
}

