// name: FUN_0047c7c8
// address: 0x47c7c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0047c7c8(int param_1,uint *param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + -4);
  pcVar2 = FUN_004dc9f4(param_2);
  FUN_004cfad4(param_1,uVar1,0,(uint)param_2,(uint)pcVar2,0,(uint)pcVar2);
  *param_4 = param_3;
  return 0;
}

