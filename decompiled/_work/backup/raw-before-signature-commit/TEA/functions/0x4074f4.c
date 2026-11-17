// name: FUN_004074f4
// address: 0x4074f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00407540) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00407548 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __stdcall FUN_004074f4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4eb388);
  if (DAT_004eb4c0 == '\0') {
    DAT_004eb4a4 = 0;
    DAT_004eb4a8 = 0;
    DAT_004eb4b8 = 0;
    _DAT_004eb4a0 = 0x100;
    DAT_004eb4c0 = '\x01';
  }
  if (DAT_004eb4cc == '\0') {
    DAT_004eb4c4 = 0x7fffffff;
    DAT_004eb4c8 = 0x7fffffff;
    DAT_004eb4cc = '\x01';
  }
  *in_FS_OFFSET = local_28;
  return;
}

