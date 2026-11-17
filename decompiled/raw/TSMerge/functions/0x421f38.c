// name: FUN_00421f38
// address: 0x421f38
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00421f38(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  uVar2 = FUN_00421b7c(iVar1,param_3);
  if (uVar2 != 0xffffffff) {
    FUN_004559f4((undefined4 *)(uVar2 * 4 + *(int *)(iVar1 + 9)),
                 (undefined4 *)((uVar2 + 1) * 4 + *(int *)(iVar1 + 9)),
                 ((*(int *)(iVar1 + 1) - uVar2) + -1) * 4);
    *(int *)(iVar1 + 1) = *(int *)(iVar1 + 1) + -1;
  }
  if (*(int *)(*param_1 + 1) == 0) {
    FUN_004219f8();
  }
  return;
}

