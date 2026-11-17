// name: FUN_004294bc
// address: 0x4294bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004294bc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (param_2 == *(int *)(iVar1 + 1)) break;
    iVar1 = *(int *)(iVar1 + 0x55);
  }
  return iVar1;
}

