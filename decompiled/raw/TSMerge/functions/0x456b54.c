// name: FUN_00456b54
// address: 0x456b54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00456b54(void)

{
  int iVar1;
  
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_004779ec == 2) {
    FUN_0045e9b9(5,1);
  }
  (*DAT_0047454c)();
  FUN_0045d628();
  return;
}

