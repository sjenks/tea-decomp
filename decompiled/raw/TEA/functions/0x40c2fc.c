// name: FUN_0040c2fc
// address: 0x40c2fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040c2fc(int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  *param_2 = 0;
  piVar1 = (int *)(param_1 + 0x25a8);
  for (iVar2 = 1; iVar2 < (int)(uint)*(ushort *)(param_1 + 0x240c); iVar2 = iVar2 + 1) {
    if (0 < *piVar1) {
      *param_2 = *param_2 + *piVar1;
      if (*param_4 == 0) {
        *param_4 = iVar2;
      }
      *param_5 = iVar2;
    }
    *param_3 = *param_3 + piVar1[0x12f];
    piVar1 = piVar1 + 1;
  }
  return;
}

