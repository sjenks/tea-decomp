// name: FUN_0045be5c
// address: 0x45be5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0045be5c(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0045bea8(*param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_0045bea8(*param_1);
    iVar1 = FUN_0045be98(piVar2);
    if (iVar1 == -1) {
      FUN_0045b7d4(*param_1,1);
    }
  }
  return param_1;
}

