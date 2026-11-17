// name: FUN_0042e2fc
// address: 0x42e2fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0042e2fc(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  
  iVar1 = FUN_00422970(param_1);
  if (iVar1 == 0) {
    puVar2 = FUN_00422a30(param_1);
    *param_2 = puVar2;
  }
  else {
    FUN_0042280c(param_1,&local_8,4);
    *param_2 = local_8;
  }
  return param_1;
}

