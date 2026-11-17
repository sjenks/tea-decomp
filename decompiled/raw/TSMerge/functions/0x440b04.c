// name: FUN_00440b04
// address: 0x440b04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00440b04(int param_1)

{
  int iVar1;
  uint local_108 [65];
  
  FUN_00440b74(param_1,0x1f);
  iVar1 = FUN_00455b74((char *)(param_1 + 0x60),&DAT_0046e6a8);
  if (iVar1 == 0) {
    FUN_0044cf10(param_1 + 0x50,(uint *)(param_1 + 0x60));
  }
  else {
    GetFullPathNameA((LPCSTR)(param_1 + 0x60),0x104,(LPSTR)local_108,(LPSTR *)0x0);
    FUN_0044cf10(param_1 + 0x50,local_108);
  }
  return;
}

