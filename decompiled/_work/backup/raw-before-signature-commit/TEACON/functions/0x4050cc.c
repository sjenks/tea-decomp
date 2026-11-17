// name: FUN_004050cc
// address: 0x4050cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00405118) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00405120 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __stdcall FUN_004050cc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x42b3b4);
  if (DAT_0042b604 == '\0') {
    DAT_0042b5e8 = 0;
    DAT_0042b5ec = 0;
    DAT_0042b5fc = 0;
    _DAT_0042b5e4 = 0x100;
    DAT_0042b604 = '\x01';
  }
  if (DAT_0042b610 == '\0') {
    _DAT_0042b608 = 0x7fffffff;
    _DAT_0042b60c = 0x7fffffff;
    DAT_0042b610 = '\x01';
  }
  *in_FS_OFFSET = local_28;
  return;
}

