// name: FUN_004cc0f0
// address: 0x4cc0f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall FUN_004cc0f0(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  FUN_004dce64(0x512aa4);
  while (iVar1 = FUN_004cc734(), iVar1 == 0) {
    if (DAT_0051b9f4 == (code *)0x0) {
      local_8 = &PTR_FUN_004eac74;
      FUN_004e7cc4((uint *)&DAT_004040dc,&local_8,0,&LAB_00404134,1,0,0,0);
    }
    else {
      (*DAT_0051b9f4)();
    }
  }
  *in_FS_OFFSET = local_2c;
  return iVar1;
}

