// name: FUN_00403588
// address: 0x403588
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00403588(undefined4 param_1,int *param_2)

{
  int iVar1;
  CHAR local_24 [32];
  
  iVar1 = GetWindowTextA(*(HWND *)(*param_2 + 0xc),local_24,0x1f);
  local_24[iVar1] = '\0';
  iVar1 = FUN_0046db78(local_24);
  return iVar1;
}

