// name: FUN_004687f8
// address: 0x4687f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004687f8(void)

{
  int iVar1;
  
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_0048d49c == 2) {
    FUN_0047172d(5,1);
  }
  (*DAT_00488f38)();
  FUN_0047039c();
  return;
}

