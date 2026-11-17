// name: FUN_00468784
// address: 0x468784
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00468784(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x489040);
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_0048d49c == 2) {
    FUN_0047172d(4,1);
  }
  FUN_00469340();
  (*DAT_00488f34)();
  FUN_0047039c();
  *in_FS_OFFSET = local_28;
  return;
}

