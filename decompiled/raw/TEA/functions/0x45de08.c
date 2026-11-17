// name: FUN_0045de08
// address: 0x45de08
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045de08(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  HWND local_8;
  
  if (param_2 == 0x73) {
    FUN_0044faac(*param_1);
    SetFocus(*(HWND *)(param_1[0x56] + 0xc));
  }
  else if ((param_2 == 0x74) && (param_3 != 0)) {
    FUN_0044faac(param_3);
  }
  else {
    local_8 = GetTopWindow((HWND)0x0);
    local_c = 0xffffffff;
    local_10 = 0xffffffff;
    local_14 = 0xffffffff;
    local_18 = 0;
    while ((local_18 < 1000 && (local_8 != (HWND)0x0))) {
      uVar4 = 0;
      while( true ) {
        iVar3 = param_1[0x322] - param_1[0x321];
        if (iVar3 < 0) {
          iVar3 = iVar3 + 3;
        }
        if ((uint)(iVar3 >> 2) <= uVar4) break;
        iVar3 = *(int *)(param_1[0x321] + uVar4 * 4);
        if (*(int *)(iVar3 + 0xc) == 0) {
          bVar5 = (*(byte *)(iVar3 + 0x1b) & 0x10) != 0;
        }
        else {
          BVar2 = IsWindowVisible(*(HWND *)(iVar3 + 0xc));
          bVar5 = BVar2 != 0;
        }
        uVar1 = local_c;
        if ((((bVar5) && (*(HWND *)(*(int *)(param_1[0x321] + uVar4 * 4) + 0xc) == local_8)) &&
            (local_14 = uVar4, uVar1 = uVar4, local_c != 0xffffffff)) &&
           (uVar1 = local_c, local_10 == 0xffffffff)) {
          local_10 = uVar4;
        }
        local_c = uVar1;
        uVar4 = uVar4 + 1;
      }
      local_8 = GetWindow(local_8,2);
      local_18 = local_18 + 1;
    }
    if (((param_2 == 0x75) && (local_c != 0xffffffff)) && (local_c != local_14)) {
      FUN_004a7aa0(*(int *)(param_1[0x321] + local_c * 4),
                   *(HWND *)(*(int *)(param_1[0x321] + local_14 * 4) + 0xc),0,0,0,0,0x53);
      local_c = local_10;
    }
    if (local_c != 0xffffffff) {
      BringWindowToTop(*(HWND *)(*(int *)(param_1[0x321] + local_c * 4) + 0xc));
    }
  }
  return;
}

