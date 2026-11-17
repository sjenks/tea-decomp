// name: FUN_00409eb0
// address: 0x409eb0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00409eb0(int param_1,int param_2)

{
  int iVar1;
  
  while (param_2 != 0) {
    iVar1 = param_1 % param_2;
    param_1 = param_2;
    param_2 = iVar1;
  }
  return param_1;
}

