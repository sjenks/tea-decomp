// name: FUN_0042ca98
// address: 0x42ca98
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0042ca98(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x10))();
    if (cVar1 != '\0') {
      *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x2000;
      uVar2 = FUN_00430d6c(*(int *)(param_1 + 0x6c),param_1,0x2000);
      return uVar2;
    }
  }
  return 0xffffffff;
}

