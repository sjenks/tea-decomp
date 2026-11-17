// name: FUN_0042ea7c
// address: 0x42ea7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042ea7c(int param_1)

{
  LPVOID lpMem;
  undefined4 *puVar1;
  
  lpMem = *(LPVOID *)(param_1 + 0x68);
  if (lpMem != (LPVOID)0x0) {
    puVar1 = FUN_0042e9bc();
    HeapFree((HANDLE)*puVar1,0,lpMem);
  }
  return;
}

