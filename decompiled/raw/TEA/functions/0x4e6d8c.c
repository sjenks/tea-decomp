// name: FUN_004e6d8c
// address: 0x4e6d8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004e6d8c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_00518d88 == '\0') {
    DAT_0051c028 = FUN_004e6b84;
    SetConsoleCtrlHandler(FUN_004e6d64,1);
    DAT_00518d88 = '\x01';
  }
  iVar2 = FUN_004e6b64(param_1);
  if (iVar2 == -1) {
    _DAT_00518bd0 = 0x13;
    return 0xffffffff;
  }
  uVar1 = *(undefined4 *)(&DAT_00518d8c + iVar2 * 4);
  *(undefined4 *)(&DAT_00518d8c + iVar2 * 4) = param_2;
  return uVar1;
}

