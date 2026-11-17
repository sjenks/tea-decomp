// name: FUN_00411e94
// address: 0x411e94
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00411f15) */
/* WARNING: Removing unreachable block (ram,0x00411edb) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00411ee6 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * __cdecl FUN_00411e94(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x42e1b4);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  *param_1 = 0x100;
  param_1[10] = 0;
  param_1[10] = &DAT_0042fac0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

