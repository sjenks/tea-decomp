// name: FUN_0042e6d8
// address: 0x42e6d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0042e720) */

undefined * __stdcall FUN_0042e6d8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46ada8);
  if (DAT_0046ad7c == '\0') {
    DAT_004771a4 = &DAT_00471d68;
    DAT_0046ad7c = '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0047719c;
}

