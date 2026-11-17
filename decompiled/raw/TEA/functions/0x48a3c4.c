// name: FUN_0048a3c4
// address: 0x48a3c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0048a3c4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x25) + param_2;
  if ((*(int *)(param_1 + 0x11) < iVar1) &&
     (iVar1 = FUN_0048a404(param_1,(((*(int *)(param_1 + 0x25) + param_2) - *(int *)(param_1 + 0x11)
                                    ) / *(int *)(param_1 + 0x1d) + 1) * *(int *)(param_1 + 0x1d) +
                                   *(int *)(param_1 + 0x11)), (char)iVar1 == '\0')) {
    return 0;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

