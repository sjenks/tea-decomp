// name: FUN_0041ffdc
// address: 0x41ffdc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0041ffdc(uint param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  
  if (DAT_00432528 <= param_1) {
    uVar1 = FUN_004211cc(6);
    return uVar1;
  }
  if (((*(byte *)((int)&DAT_0043252c + param_1 * 4 + 2) & 1) == 0) &&
     (BVar2 = CloseHandle(*(HANDLE *)(&DAT_00434d98 + param_1 * 4)), BVar2 != 1)) {
    uVar1 = FUN_00421230();
    return uVar1;
  }
  (&DAT_0043252c)[param_1] = 0;
  *(undefined4 *)(&DAT_00434d98 + param_1 * 4) = 0xffffffff;
  return 0;
}

