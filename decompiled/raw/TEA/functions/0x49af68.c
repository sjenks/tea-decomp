// name: FUN_0049af68
// address: 0x49af68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049af68(LPVOID param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    puVar1 = FUN_0049adbc();
    HeapFree((HANDLE)*puVar1,0,param_1);
  }
  return;
}

