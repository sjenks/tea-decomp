// name: FUN_00439490
// address: 0x439490
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00439490(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  
  iVar1 = FUN_0042db04(param_1);
  if (iVar1 == 0) {
    puVar2 = FUN_0042dbc4(param_1);
    *param_2 = puVar2;
  }
  else {
    FUN_0042d9a0(param_1,&local_8,4);
    *param_2 = local_8;
  }
  return param_1;
}

