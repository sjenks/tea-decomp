// name: FUN_0041d088
// address: 0x41d088
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0041d088(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  
  GetObjectA((HANDLE)*param_2,0x18,local_1c);
  *param_1 = local_18;
  param_1[1] = local_14;
  return param_1;
}

