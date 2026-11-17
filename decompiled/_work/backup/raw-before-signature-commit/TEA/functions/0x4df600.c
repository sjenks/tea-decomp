// name: FUN_004df600
// address: 0x4df600
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_004df600(char *param_1,ushort *param_2)

{
  int iVar1;
  
  do {
    *param_2 = *param_2 + 1;
    if (*param_2 == 0) {
      *param_2 = 1;
    }
    param_1 = FUN_004df5b0(param_1,(char *)0x0,*param_2);
    iVar1 = thunk_FUN_004ddd54(param_1,0);
  } while (iVar1 == 0);
  return param_1;
}

