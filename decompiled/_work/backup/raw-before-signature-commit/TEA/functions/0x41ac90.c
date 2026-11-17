// name: FUN_0041ac90
// address: 0x41ac90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041ac90(int *param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  uint local_c;
  undefined2 local_8;
  
  local_c = DAT_004ed250;
  local_8 = DAT_004ed254;
  if (5 < *(uint *)(*(int *)(param_2 + 8) + -4)) {
    pcVar1 = FUN_004dc9f4(&local_c);
    uVar2 = FUN_004d40d0(param_2,0,5,(byte *)&local_c,(uint)pcVar1);
    if (uVar2 == 0) {
      FUN_0041ad00(param_1,param_2);
      return;
    }
  }
  FUN_0041aa8c(param_1,*(LPCSTR *)(param_2 + 8));
  return;
}

