// name: FUN_004d77e8
// address: 0x4d77e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_004d77e8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,int param_7,undefined1 param_8,undefined2 param_9)

{
  undefined1 local_284 [640];
  
  FUN_004cf0fc((int)local_284,&param_3,param_7);
  FUN_004dbe44((int)local_284);
  FUN_004d6e54((int)local_284,param_8);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined1 *)(param_1 + 3) = param_6;
  return param_1;
}

