// name: FUN_0044bc98
// address: 0x44bc98
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044bc98(int param_1)

{
  int iVar1;
  uint local_108 [65];
  
  FUN_0044bd08(param_1,0x1f);
  iVar1 = FUN_00467724((char *)(param_1 + 0x60),&DAT_00482484);
  if (iVar1 == 0) {
    FUN_00459b6c(param_1 + 0x50,(uint *)(param_1 + 0x60));
  }
  else {
    GetFullPathNameA((LPCSTR)(param_1 + 0x60),0x104,(LPSTR)local_108,(LPSTR *)0x0);
    FUN_00459b6c(param_1 + 0x50,local_108);
  }
  return;
}

