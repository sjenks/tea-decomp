// name: thunk_FUN_00468ad4
// address: 0x469500
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl thunk_FUN_00468ad4(uint param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  
  if (DAT_00489524 <= param_1) {
    uVar1 = FUN_00469f88(6);
    return uVar1;
  }
  if (((*(byte *)((int)&DAT_00489528 + param_1 * 4 + 2) & 1) == 0) &&
     (BVar2 = CloseHandle(*(HANDLE *)(&DAT_0048d570 + param_1 * 4)), BVar2 != 1)) {
    uVar1 = FUN_00469fec();
    return uVar1;
  }
  (&DAT_00489528)[param_1] = 0;
  *(undefined4 *)(&DAT_0048d570 + param_1 * 4) = 0xffffffff;
  return 0;
}

