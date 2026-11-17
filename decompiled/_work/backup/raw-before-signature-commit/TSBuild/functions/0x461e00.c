// name: FUN_00461e00
// address: 0x461e00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_00461e00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined4 param_9,
            undefined4 param_10)

{
  undefined1 local_284 [640];
  
  FUN_0045984c((int)local_284,&param_3,param_7);
  FUN_00466e8c((int)local_284);
  FUN_00461e6c((int)local_284,param_8);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined1 *)(param_1 + 3) = param_6;
  return param_1;
}

