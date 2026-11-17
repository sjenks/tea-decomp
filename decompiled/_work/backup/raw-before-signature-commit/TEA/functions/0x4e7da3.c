// name: FUN_004e7da3
// address: 0x4e7da3
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004e7da3(undefined4 param_1,int param_2,undefined *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  undefined4 local_28;
  
  FUN_004dce64(0x519024);
  if (param_3 == (undefined *)0x0) {
    FUN_004e5ce8(s_dtorAddr_005191ab,s_xx_cpp_005191b4,0x5b9);
  }
  FUN_004e7926(param_1,param_2,0,param_3,param_4,1);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

