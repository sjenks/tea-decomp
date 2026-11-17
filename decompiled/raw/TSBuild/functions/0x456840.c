// name: FUN_00456840
// address: 0x456840
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall FUN_00456840(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  FUN_00467ba8(0x484918);
  while (iVar1 = FUN_00456e84(), iVar1 == 0) {
    if (DAT_0048ce70 == (code *)0x0) {
      local_8 = &PTR_FUN_00476b30;
      FUN_00471ae8((uint *)&DAT_0040eb28,&local_8,0,&LAB_0040eb80,1,0,0,0);
    }
    else {
      (*DAT_0048ce70)();
    }
  }
  *in_FS_OFFSET = local_2c;
  return iVar1;
}

