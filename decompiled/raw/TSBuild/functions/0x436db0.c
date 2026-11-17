// name: FUN_00436db0
// address: 0x436db0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00436db0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  
  if ((param_2 != DAT_0047eb5c) || ((param_4 != 0 && (param_4 != *(int *)(param_1 + 0x6c))))) {
    cVar1 = FUN_0041b984();
    if (cVar1 == '\0') {
      if (param_2 == 1) {
        param_1 = -1;
      }
      else {
        param_1 = 0;
      }
    }
    else {
      param_1 = FUN_00436d48(param_1,param_2,param_3,param_4);
    }
  }
  return param_1;
}

