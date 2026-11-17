// name: FUN_0042e9bc
// address: 0x42e9bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __stdcall FUN_0042e9bc(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  FUN_00467ba8(0x47ca14);
  if (DAT_0047c97c == '\0') {
    DAT_0048c8bc = HeapCreate(0x40000,0x8000,0);
    if (DAT_0048c8bc == (HANDLE)0x0) {
      piVar1 = FUN_004237c0(local_10);
      (**(code **)(*piVar1 + 0xc))();
      FUN_004231dc(local_10,0);
    }
    DAT_0047c97c = DAT_0047c97c + '\x01';
  }
  *in_FS_OFFSET = local_34;
  return &DAT_0048c8bc;
}

