// name: FUN_00427f24
// address: 0x427f24
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00427f24(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  uint local_c [2];
  
  FUN_00467ba8(0x47b66c);
  if ((param_1 != 0) && (DAT_0047b5ac != 0)) {
    local_c[0] = param_1;
    uVar2 = FUN_00427ff0(DAT_0047b5ac,local_c);
    if (uVar2 != 0xffffffff) {
      uVar1 = *(undefined4 *)(*(int *)(DAT_0047b5ac + 9) + uVar2 * 4);
      *in_FS_OFFSET = local_30;
      return uVar1;
    }
  }
  *in_FS_OFFSET = local_30;
  return 0;
}

