// name: thunk_FUN_00456e30
// address: 0x4577d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl thunk_FUN_00456e30(uint param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  
  if (DAT_00474b38 <= param_1) {
    uVar1 = FUN_00457c6c(6);
    return uVar1;
  }
  if (((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 2) & 1) == 0) &&
     (BVar2 = CloseHandle(*(HANDLE *)(&DAT_00477ac0 + param_1 * 4)), BVar2 != 1)) {
    uVar1 = FUN_00457cd0();
    return uVar1;
  }
  (&DAT_00474b3c)[param_1] = 0;
  *(undefined4 *)(&DAT_00477ac0 + param_1 * 4) = 0xffffffff;
  return 0;
}

