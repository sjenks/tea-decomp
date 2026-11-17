// name: FUN_00428e6c
// address: 0x428e6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00428e6c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_48 [12];
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  uint *local_c [2];
  
  FUN_00455f04(0x469f4c);
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  local_48._8_4_ = 0;
  local_3c = 0;
  FUN_0042d52c(*param_1,(LPRECT)local_48);
  iVar3 = *(int *)(*param_1 + 0x14);
  if (iVar3 != 0) {
    ScreenToClient(*(HWND *)(iVar3 + 0xc),(LPPOINT)local_48);
    ScreenToClient(*(HWND *)(iVar3 + 0xc),(LPPOINT)(local_48 + 8));
  }
  local_20 = 8;
  FUN_0042027c((int *)local_c,0x104);
  local_14 = local_14 + 2;
  local_20 = 0x14;
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPSTR)local_c[0],0x104);
  FUN_00418b6c(&local_38,param_1[6],local_c[0]);
  uVar1 = FUN_0042d3ec(*param_1);
  if ((uVar1 & 0x200) == 0) {
    local_3c = local_48._4_4_ + local_34;
  }
  else {
    uVar2 = -((local_3c - local_48._4_4_) - local_34);
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    FUN_0041d740((int *)local_48,0,iVar3);
  }
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      local_48._8_4_ = local_48._0_4_ + local_38;
    }
    else {
      local_48._0_4_ = local_48._8_4_ - local_38;
    }
  }
  else {
    uVar1 = -((local_48._8_4_ - local_48._0_4_) - local_38);
    iVar3 = (int)uVar1 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar1 & 1) != 0);
    }
    FUN_0041d740((int *)local_48,iVar3,0);
  }
  FUN_0042d59c(*param_1,(HWND)0x0,local_48._0_4_,local_48._4_4_,local_48._8_4_ - local_48._0_4_,
               local_3c - local_48._4_4_,4);
  local_14 = local_14 + -2;
  FUN_0042033c(local_c,0);
  *in_FS_OFFSET = local_30;
  return;
}

