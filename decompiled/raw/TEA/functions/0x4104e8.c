// name: FUN_004104e8
// address: 0x4104e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004104e8(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  while( true ) {
    for (; *param_1 < param_3; param_1 = param_1 + 1) {
    }
    do {
      param_2 = param_2 + -1;
    } while (param_3 < *param_2);
    if (param_2 <= param_1) break;
    iVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar1;
    param_1 = param_1 + 1;
  }
  return param_1;
}

