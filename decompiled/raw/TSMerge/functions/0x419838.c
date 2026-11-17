// name: FUN_00419838
// address: 0x419838
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00419838(int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 6) != 0) {
    iVar1 = GetSystemMetrics(DAT_0046973c);
    iVar2 = GetSystemMetrics(DAT_00469744);
    FUN_00418e38((int *)(param_1 + 0x2e),param_2,param_3,param_4,param_5,
                 (uint)*(byte *)(*(int *)(param_1 + 6) + 0x30));
    *param_2 = *(int *)(param_1 + 0x1e) * iVar1 + *param_2;
    *param_3 = *param_3 + *(int *)(param_1 + 0x22) * iVar1;
    *param_4 = *param_4 + *(int *)(param_1 + 0x26) * iVar2;
    *param_5 = *param_5 + *(int *)(param_1 + 0x2a) * iVar2;
  }
  return;
}

