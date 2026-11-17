// name: FUN_004394f4
// address: 0x4394f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004394f4(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  uVar1 = *param_2;
  FUN_0042df1c(param_1);
  if ((short)((uint)uVar1 >> 0x10) == 0) {
    local_8 = *param_2;
    FUN_0042de94(param_1,&local_8,4);
  }
  else {
    FUN_0042e00c(param_1,(uint *)*param_2);
  }
  return param_1;
}

