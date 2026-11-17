// name: FUN_004ce5b4
// address: 0x4ce5b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004ce5b4(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  while( true ) {
    piVar2 = (int *)FUN_004cda90(param_1);
    bVar1 = FUN_004cda78(piVar2);
    if (bVar1) break;
    piVar2 = (int *)FUN_004cda90(param_1);
    param_1 = *piVar2;
  }
  return param_1;
}

