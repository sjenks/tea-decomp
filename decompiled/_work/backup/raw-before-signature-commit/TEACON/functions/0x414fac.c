// name: FUN_00414fac
// address: 0x414fac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall FUN_00414fac(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  FUN_0041f3fc(0x42e840);
  while (iVar1 = FUN_004155f0(), iVar1 == 0) {
    if (DAT_0043469c == (code *)0x0) {
      local_8 = &PTR_FUN_0042b39c;
      FUN_004280a0((uint *)&DAT_00404c94,&local_8,0,&LAB_00404cec,1,0,0,0);
    }
    else {
      (*DAT_0043469c)();
    }
  }
  *in_FS_OFFSET = local_2c;
  return iVar1;
}

