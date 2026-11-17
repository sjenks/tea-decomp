// name: FUN_004d170c
// address: 0x4d170c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004d170c(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_004d1758(*param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004d1758(*param_1);
    iVar1 = FUN_004d1748(piVar2);
    if (iVar1 == -1) {
      FUN_004d1084(*param_1,1);
    }
  }
  return param_1;
}

