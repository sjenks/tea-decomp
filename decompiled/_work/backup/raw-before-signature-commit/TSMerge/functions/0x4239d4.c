// name: FUN_004239d4
// address: 0x4239d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004239d4(LPVOID param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    puVar1 = FUN_00423828();
    HeapFree((HANDLE)*puVar1,0,param_1);
  }
  return;
}

