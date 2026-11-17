// name: FUN_0042eb68
// address: 0x42eb68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042eb68(LPVOID param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    puVar1 = FUN_0042e9bc();
    HeapFree((HANDLE)*puVar1,0,param_1);
  }
  return;
}

