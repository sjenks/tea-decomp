// name: FUN_0042bdc0
// address: 0x42bdc0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0042bdc0(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  UINT uFlags;
  HMENU pHVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  CHAR local_14c [256];
  UINT local_4c;
  UINT_PTR local_48;
  int local_44;
  undefined4 local_40;
  undefined2 local_30;
  int local_24;
  int local_1c [3];
  int local_10 [3];
  
  piVar1 = (int *)FUN_00467ba8(0x47c220);
  if (param_4 < 0) {
    iVar2 = GetMenuItemCount((HMENU)param_2[1]);
    piVar1 = (int *)(iVar2 - param_3);
    param_4 = (int)piVar1;
  }
  iVar2 = 0;
  if (0 < param_4) {
    do {
      uFlags = GetMenuState((HMENU)param_2[1],param_3 + iVar2,0x400);
      if (uFlags == 0xffffffff) {
        *in_FS_OFFSET = local_40;
        return (int *)local_40;
      }
      (**(code **)(*param_2 + 4))();
      FUN_0045032c();
      if ((uFlags & 0x10) == 0) {
        local_4c = FUN_0042bce8((int)param_2,param_3 + iVar2);
        piVar1 = (int *)AppendMenuA(*(HMENU *)(param_1 + 4),uFlags,local_4c,local_14c);
      }
      else {
        local_30 = 8;
        iVar4 = 0;
        local_44 = param_3 + iVar2;
        pHVar3 = GetSubMenu((HMENU)param_2[1],local_44);
        FUN_0042bc04(local_10,pHVar3,iVar4);
        local_24 = local_24 + 1;
        local_30 = 0x20;
        FUN_0042bb1c(local_1c,0);
        local_24 = local_24 + 1;
        local_30 = 0x14;
        FUN_0042bdc0((int)local_1c,local_10,0,-1);
        local_48 = (**(code **)(local_1c[0] + 4))();
        AppendMenuA(*(HMENU *)(param_1 + 4),uFlags & 0x10,local_48,local_14c);
        local_24 = local_24 + -1;
        FUN_0042bcb0(local_1c,2);
        local_24 = local_24 + -1;
        piVar1 = local_10;
        FUN_0042bcb0(piVar1,2);
        local_30 = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_4);
  }
  *in_FS_OFFSET = local_40;
  return piVar1;
}

