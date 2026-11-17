// name: FUN_004994cc
// address: 0x4994cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004994cc(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  uVar2 = FUN_00499110(iVar1,param_3);
  if (uVar2 != 0xffffffff) {
    FUN_004dc7f8((undefined4 *)(uVar2 * 4 + *(int *)(iVar1 + 9)),
                 (undefined4 *)((uVar2 + 1) * 4 + *(int *)(iVar1 + 9)),
                 ((*(int *)(iVar1 + 1) - uVar2) + -1) * 4);
    *(int *)(iVar1 + 1) = *(int *)(iVar1 + 1) + -1;
  }
  if (*(int *)(*param_1 + 1) == 0) {
    FUN_00498f8c();
  }
  return;
}

