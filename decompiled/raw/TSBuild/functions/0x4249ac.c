// name: FUN_004249ac
// address: 0x4249ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004249ac(int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 6) != 0) {
    iVar1 = GetSystemMetrics(DAT_0047d518);
    iVar2 = GetSystemMetrics(DAT_0047d520);
    FUN_00423fac((int *)(param_1 + 0x2e),param_2,param_3,param_4,param_5,
                 (uint)*(byte *)(*(int *)(param_1 + 6) + 0x30));
    *param_2 = *(int *)(param_1 + 0x1e) * iVar1 + *param_2;
    *param_3 = *param_3 + *(int *)(param_1 + 0x22) * iVar1;
    *param_4 = *param_4 + *(int *)(param_1 + 0x26) * iVar2;
    *param_5 = *param_5 + *(int *)(param_1 + 0x2a) * iVar2;
  }
  return;
}

