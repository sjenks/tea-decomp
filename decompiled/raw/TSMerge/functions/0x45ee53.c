// name: FUN_0045ee53
// address: 0x45ee53
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045ee53(undefined4 param_1,int param_2,undefined *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  undefined4 local_28;
  
  FUN_00455f04(0x476068);
  if (param_3 == (undefined *)0x0) {
    FUN_0045d2c4(s_dtorAddr_004761ef,s_xx_cpp_004761f8,0x5b9);
  }
  FUN_0045e9d6(param_1,param_2,0,param_3,param_4,1);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

