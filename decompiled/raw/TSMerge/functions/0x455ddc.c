// name: FUN_00455ddc
// address: 0x455ddc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00455ddc(undefined4 *param_1,uint *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = FUN_00455bf0(param_2);
  if (param_3 < pcVar1) {
    FUN_004559d0(param_1,param_2,(uint)param_3);
  }
  else {
    FUN_004559d0(param_1,param_2,(uint)pcVar1);
    FUN_00455a40((undefined4 *)(pcVar1 + (int)param_1),0,(int)param_3 - (int)pcVar1);
  }
  return param_1;
}

