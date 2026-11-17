// name: FUN_004dda40
// address: 0x4dda40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004dda40(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x51730c);
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_0051c024 == 2) {
    FUN_004e7909(4,1);
  }
  FUN_004de5fc();
  (*DAT_00517200)();
  FUN_004e6284();
  *in_FS_OFFSET = local_28;
  return;
}

