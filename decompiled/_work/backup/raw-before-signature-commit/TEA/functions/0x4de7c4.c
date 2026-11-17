// name: thunk_FUN_004ddd90
// address: 0x4de7c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl thunk_FUN_004ddd90(uint param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  
  if (DAT_005177f0 <= param_1) {
    uVar1 = FUN_004df280(6);
    return uVar1;
  }
  if (((*(byte *)((int)&DAT_005177f4 + param_1 * 4 + 2) & 1) == 0) &&
     (BVar2 = CloseHandle(*(HANDLE *)(&DAT_0051c0f8 + param_1 * 4)), BVar2 != 1)) {
    uVar1 = FUN_004df2e4();
    return uVar1;
  }
  (&DAT_005177f4)[param_1] = 0;
  *(undefined4 *)(&DAT_0051c0f8 + param_1 * 4) = 0xffffffff;
  return 0;
}

