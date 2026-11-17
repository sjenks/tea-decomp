// name: FUN_004a7d1c
// address: 0x4a7d1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a7d1c(int param_1,HMENU param_2,undefined4 param_3,char param_4)

{
  HMENU pHVar1;
  UINT UVar2;
  int nPos;
  undefined4 *in_FS_OFFSET;
  undefined **local_54 [3];
  undefined4 local_48;
  HMENU local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  undefined4 local_10 [3];
  
  FUN_004dce64(0x50b22c);
  if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
    if ((param_4 == '\0') && (param_2 != (HMENU)0x0)) {
      local_38 = GetMenuItemCount(param_2);
      nPos = 0;
      if (0 < local_38) {
        do {
          pHVar1 = GetMenu(*(HWND *)(param_1 + 0xc));
          if (param_2 == pHVar1) {
            UVar2 = GetMenuItemID(param_2,nPos);
          }
          else {
            local_24 = 8;
            FUN_00497aec(local_10,param_2,0);
            local_18 = local_18 + 1;
            local_24 = 0x14;
            UVar2 = FUN_00497c2c((int)local_10,nPos);
            local_18 = local_18 + -1;
            FUN_00497bf4(local_10,2);
            local_24 = 0;
          }
          if ((UVar2 != 0) && ((short)UVar2 != -1)) {
            if ((UVar2 == 0x7d01) || (0xf000 < UVar2)) break;
            local_3c = nPos;
            FUN_004a4d68(local_54,UVar2,*(undefined4 *)(param_1 + 0xc));
            local_54[0] = &PTR_FUN_0050b3e0;
            local_44 = param_2;
            local_40 = local_3c;
            UVar2 = GetMenuItemID(param_2,local_3c);
            if (UVar2 == 0xffffffff) {
              local_48 = 2;
            }
            (**(code **)(*(int *)(param_1 + 8) + 0x50))();
          }
          nPos = nPos + 1;
        } while (nPos < local_38);
      }
    }
  }
  else {
    FUN_004a5774(param_1);
  }
  *in_FS_OFFSET = local_34;
  return;
}

