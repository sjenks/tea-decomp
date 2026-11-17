// name: FUN_00418c38
// address: 0x418c38
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00418c38(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00418c84(*param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00418c84(*param_1);
    iVar1 = FUN_00418c74(piVar2);
    if (iVar1 == -1) {
      FUN_00418764(*param_1,1);
    }
  }
  return param_1;
}

