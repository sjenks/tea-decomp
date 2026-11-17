// name: FUN_004a697c
// address: 0x4a697c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004a697c(int param_1,HDC param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  uint local_c [2];
  
  FUN_004dce64(0x50b1b8);
  if ((((*(int *)(param_1 + 0x5c) == DAT_0051b19c) || (*(int *)(param_1 + 0x5c) == DAT_0051b1a0)) ||
      (param_4 == 1)) || (param_4 == 2)) {
    uVar1 = FUN_004a5774(param_1);
    *in_FS_OFFSET = local_30;
  }
  else {
    uVar1 = FUN_0048c12c((uint *)(param_1 + 0x5c));
    SetBkColor(param_2,uVar1);
    puVar2 = FUN_004ab84c(local_c,(uint *)(param_1 + 0x5c),'\x01');
    uVar1 = *puVar2;
    FUN_004ab9b4(local_c,2);
    *in_FS_OFFSET = local_30;
  }
  return uVar1;
}

