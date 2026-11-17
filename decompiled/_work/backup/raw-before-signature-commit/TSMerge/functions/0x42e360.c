// name: FUN_0042e360
// address: 0x42e360
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0042e360(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  uVar1 = *param_2;
  FUN_00422d88(param_1);
  if ((short)((uint)uVar1 >> 0x10) == 0) {
    local_8 = *param_2;
    FUN_00422d00(param_1,&local_8,4);
  }
  else {
    FUN_00422e78(param_1,(uint *)*param_2);
  }
  return param_1;
}

