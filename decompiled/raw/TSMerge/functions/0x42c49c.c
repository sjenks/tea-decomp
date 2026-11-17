// name: FUN_0042c49c
// address: 0x42c49c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0042c49c(int param_1,HDC param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  uint local_c [2];
  
  FUN_00455f04(0x46a974);
  if ((((*(int *)(param_1 + 0x5c) == DAT_00476bac) || (*(int *)(param_1 + 0x5c) == DAT_00476bb0)) ||
      (param_4 == 1)) || (param_4 == 2)) {
    uVar1 = FUN_0042b294(param_1);
    *in_FS_OFFSET = local_30;
  }
  else {
    uVar1 = FUN_00415340((uint *)(param_1 + 0x5c));
    SetBkColor(param_2,uVar1);
    puVar2 = FUN_00431320(local_c,(uint *)(param_1 + 0x5c),'\x01');
    uVar1 = *puVar2;
    FUN_00431428(local_c,2);
    *in_FS_OFFSET = local_30;
  }
  return uVar1;
}

