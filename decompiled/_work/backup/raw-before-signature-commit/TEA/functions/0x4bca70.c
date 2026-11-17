// name: FUN_004bca70
// address: 0x4bca70
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004bca70(int param_1)

{
  int iVar1;
  uint local_108 [65];
  
  FUN_004bcae0(param_1,0x1f);
  iVar1 = FUN_004dc978((char *)(param_1 + 0x60),&DAT_0050f43c);
  if (iVar1 == 0) {
    FUN_004cf41c(param_1 + 0x50,(uint *)(param_1 + 0x60));
  }
  else {
    GetFullPathNameA((LPCSTR)(param_1 + 0x60),0x104,(LPSTR)local_108,(LPSTR *)0x0);
    FUN_004cf41c(param_1 + 0x50,local_108);
  }
  return;
}

