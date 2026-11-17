// name: FUN_004ddab4
// address: 0x4ddab4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004ddab4(void)

{
  int iVar1;
  
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_0051c024 == 2) {
    FUN_004e7909(5,1);
  }
  (*DAT_00517204)();
  FUN_004e6284();
  return;
}

