// name: FUN_00423828
// address: 0x423828
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __stdcall FUN_00423828(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  FUN_00455f04(0x468c38);
  if (DAT_00468ba0 == '\0') {
    DAT_00476e14 = HeapCreate(0x40000,0x8000,0);
    if (DAT_00476e14 == (HANDLE)0x0) {
      piVar1 = FUN_0041864c(local_10);
      (**(code **)(*piVar1 + 0xc))();
      FUN_00418068(local_10,0);
    }
    DAT_00468ba0 = DAT_00468ba0 + '\x01';
  }
  *in_FS_OFFSET = local_34;
  return &DAT_00476e14;
}

