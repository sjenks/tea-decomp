// name: FUN_0047c804
// address: 0x47c804
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0047c804(int param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  char *pcVar2;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 8) + -4);
    pcVar2 = FUN_004dc9f4(param_4);
    FUN_004cfad4(param_1,uVar1,0,(uint)param_4,(uint)pcVar2,0,(uint)pcVar2);
    if (param_3 == 0) {
      FUN_004d5c40(param_1,*(uint *)(*(int *)(param_1 + 8) + -4),0,1,0x30);
    }
  }
  return;
}

