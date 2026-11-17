// name: FUN_0047c438
// address: 0x47c438
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0047c438(int param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  char *pcVar2;
  
  if (param_4 != param_3) {
    uVar1 = *(uint *)(*(int *)(param_1 + 8) + -4);
    pcVar2 = FUN_004dc9f4(param_2);
    FUN_004cfad4(param_1,uVar1,0,(uint)param_2,(uint)pcVar2,0,(uint)pcVar2);
    if (param_4 == 0) {
      FUN_004d5c40(param_1,*(uint *)(*(int *)(param_1 + 8) + -4),0,1,0x30);
    }
  }
  return;
}

