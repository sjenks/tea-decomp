// name: FUN_004238e8
// address: 0x4238e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004238e8(int param_1)

{
  LPVOID lpMem;
  undefined4 *puVar1;
  
  lpMem = *(LPVOID *)(param_1 + 0x68);
  if (lpMem != (LPVOID)0x0) {
    puVar1 = FUN_00423828();
    HeapFree((HANDLE)*puVar1,0,lpMem);
  }
  return;
}

