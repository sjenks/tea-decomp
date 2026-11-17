// name: FUN_00470ea4
// address: 0x470ea4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00470ea4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_0048aa30 == '\0') {
    DAT_0048d4a0 = FUN_00470c9c;
    SetConsoleCtrlHandler(FUN_00470e7c,1);
    DAT_0048aa30 = '\x01';
  }
  iVar2 = FUN_00470c7c(param_1);
  if (iVar2 == -1) {
    _DAT_0048a878 = 0x13;
    return 0xffffffff;
  }
  uVar1 = *(undefined4 *)(&DAT_0048aa34 + iVar2 * 4);
  *(undefined4 *)(&DAT_0048aa34 + iVar2 * 4) = param_2;
  return uVar1;
}

