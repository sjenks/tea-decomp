// name: FUN_00458cd8
// address: 0x458cd8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00458cd8(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  while( true ) {
    piVar2 = (int *)FUN_00457fb4(param_1);
    bVar1 = FUN_004581c8(piVar2);
    if (bVar1) break;
    piVar2 = (int *)FUN_00457fb4(param_1);
    param_1 = *piVar2;
  }
  return param_1;
}

