// name: FUN_0042817f
// address: 0x42817f
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042817f(undefined4 param_1,int param_2,undefined *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  undefined4 local_28;
  
  FUN_0041f3fc(0x433a2c);
  if (param_3 == (undefined *)0x0) {
    FUN_00426830(s_dtorAddr_00433bb3,s_xx_cpp_00433bbc,0x5b9);
  }
  FUN_00427d02(param_1,param_2,0,param_3,param_4,1);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

