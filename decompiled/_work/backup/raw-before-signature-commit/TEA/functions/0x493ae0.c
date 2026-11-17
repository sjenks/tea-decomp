// name: FUN_00493ae0
// address: 0x493ae0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00493ae0(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  uint local_c [2];
  
  FUN_004dce64(0x507290);
  if ((param_1 != 0) && (DAT_005071d0 != 0)) {
    local_c[0] = param_1;
    uVar2 = FUN_00493bac(DAT_005071d0,local_c);
    if (uVar2 != 0xffffffff) {
      uVar1 = *(undefined4 *)(*(int *)(DAT_005071d0 + 9) + uVar2 * 4);
      *in_FS_OFFSET = local_30;
      return uVar1;
    }
  }
  *in_FS_OFFSET = local_30;
  return 0;
}

