// name: FUN_00450984
// address: 0x450984
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00450984(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_0042ddb0(param_1,(int *)&local_8,1);
  if (local_8 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *local_8;
  }
  puVar2 = FUN_00468488((int)local_8,iVar1,(int *)&DAT_00403c1c,(int *)&DAT_00404d74,0);
  *param_2 = puVar2;
  return param_1;
}

