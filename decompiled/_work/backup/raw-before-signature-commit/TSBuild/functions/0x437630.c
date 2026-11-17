// name: FUN_00437630
// address: 0x437630
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00437630(int param_1,HDC param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  uint local_c [2];
  
  FUN_00467ba8(0x47e750);
  if ((((*(int *)(param_1 + 0x5c) == DAT_0048c654) || (*(int *)(param_1 + 0x5c) == DAT_0048c658)) ||
      (param_4 == 1)) || (param_4 == 2)) {
    uVar1 = FUN_00436428(param_1);
    *in_FS_OFFSET = local_30;
  }
  else {
    uVar1 = FUN_00420364((uint *)(param_1 + 0x5c));
    SetBkColor(param_2,uVar1);
    puVar2 = FUN_0043c4b4(local_c,(uint *)(param_1 + 0x5c),'\x01');
    uVar1 = *puVar2;
    FUN_0043c5bc(local_c,2);
    *in_FS_OFFSET = local_30;
  }
  return uVar1;
}

