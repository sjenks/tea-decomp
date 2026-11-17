// name: FUN_0044b300
// address: 0x44b300
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall FUN_0044b300(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  FUN_00455f04(0x470ae8);
  while (iVar1 = FUN_0044b944(), iVar1 == 0) {
    if (DAT_004773c8 == (code *)0x0) {
      local_8 = &PTR_FUN_00462db4;
      FUN_0045ed74((uint *)&DAT_00406864,&local_8,0,&LAB_004068bc,1,0,0,0);
    }
    else {
      (*DAT_004773c8)();
    }
  }
  *in_FS_OFFSET = local_2c;
  return iVar1;
}

