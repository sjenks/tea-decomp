// name: FUN_004103d4
// address: 0x4103d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004103d4(int *param_1,int param_2)

{
  int iVar1;
  
  while( true ) {
    iVar1 = param_1[-1];
    if (iVar1 <= param_2) break;
    *param_1 = iVar1;
    param_1 = param_1 + -1;
  }
  *param_1 = param_2;
  return;
}

