// name: FUN_0044f200
// address: 0x44f200
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0044f200(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0044f24c(*param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_0044f24c(*param_1);
    iVar1 = FUN_0044f23c(piVar2);
    if (iVar1 == -1) {
      FUN_0044eb78(*param_1,1);
    }
  }
  return param_1;
}

