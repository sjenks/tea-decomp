// name: FUN_004c3e40
// address: 0x4c3e40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c3e40(int param_1)

{
  LPVOID pvVar1;
  
  if (*(int *)(param_1 + 0x4a) == 0) {
    *(undefined4 *)(param_1 + 0x56) = 0;
  }
  else {
    pvVar1 = GlobalLock(*(HGLOBAL *)(param_1 + 0x4a));
    *(LPVOID *)(param_1 + 0x56) = pvVar1;
  }
  if (*(int *)(param_1 + 0x4e) != 0) {
    pvVar1 = GlobalLock(*(HGLOBAL *)(param_1 + 0x4e));
    *(LPVOID *)(param_1 + 0x5a) = pvVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x5a) = 0;
  return;
}

