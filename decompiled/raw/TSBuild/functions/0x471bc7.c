// name: FUN_00471bc7
// address: 0x471bc7
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00471bc7(undefined4 param_1,int param_2,undefined *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  undefined4 local_28;
  
  FUN_00467ba8(0x48ab08);
  if (param_3 == (undefined *)0x0) {
    FUN_0046fe00(s_dtorAddr_0048ac8f,s_xx_cpp_0048ac98,0x5b9);
  }
  FUN_0047174a(param_1,param_2,0,param_3,param_4,1);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

