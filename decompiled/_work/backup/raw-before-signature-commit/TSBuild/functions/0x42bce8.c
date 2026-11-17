// name: FUN_0042bce8
// address: 0x42bce8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

UINT __cdecl FUN_0042bce8(int param_1,int param_2)

{
  UINT UVar1;
  HMENU pHVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  FUN_00467ba8(0x47c1c4);
  UVar1 = GetMenuItemID(*(HMENU *)(param_1 + 4),param_2);
  if (UVar1 == 0xffffffff) {
    pHVar2 = GetSubMenu(*(HMENU *)(param_1 + 4),param_2);
    if (pHVar2 == (HMENU)0x0) {
      UVar1 = 0;
      *in_FS_OFFSET = local_34;
    }
    else {
      FUN_0042bc04(local_10,pHVar2,0);
      UVar1 = FUN_0042bce8((int)local_10,0);
      UVar1 = UVar1 - 1;
      FUN_0042bcb0(local_10,2);
      *in_FS_OFFSET = local_34;
    }
  }
  else {
    *in_FS_OFFSET = local_34;
  }
  return UVar1;
}

