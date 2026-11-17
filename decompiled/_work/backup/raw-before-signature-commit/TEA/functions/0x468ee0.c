// name: FUN_00468ee0
// address: 0x468ee0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __stdcall FUN_00468ee0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4fce0c);
  if (DAT_004fcb88 == '\0') {
    FUN_00468f98(&DAT_0051ac74);
    DAT_004fcb88 = DAT_004fcb88 + '\x01';
  }
  piVar2 = (int *)FUN_004690e8();
  iVar1 = *piVar2;
  *in_FS_OFFSET = local_28;
  return iVar1 != 0;
}

