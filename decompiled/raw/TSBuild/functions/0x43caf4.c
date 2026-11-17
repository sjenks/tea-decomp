// name: FUN_0043caf4
// address: 0x43caf4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043caf4(int *param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(*param_1 + 0x18) & 0xb) != 0xb) {
    uVar1 = FUN_00436428(*param_1);
    return uVar1;
  }
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    return 0x2010;
  }
  return 0x2020;
}

