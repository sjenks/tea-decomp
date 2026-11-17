// name: FUN_0047fa24
// address: 0x47fa24
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0047fa24(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x29c) == 0) {
    FUN_0047c9d0((undefined4 *)param_1,param_2,0xd,(int *)0x0);
  }
  FUN_0047f9f8(param_1);
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 0x248) == 3) {
      if (param_3 == 1) {
        FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)s__page_00501cbe);
      }
      else {
        FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)s__column_00501cc5);
      }
    }
    iVar1 = FUN_00480608(param_1);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0xc0) = param_3;
    }
  }
  return;
}

