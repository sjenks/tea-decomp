// name: FUN_00442eb4
// address: 0x442eb4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00442eb4(int *param_1)

{
  bool bVar1;
  char cVar2;
  HMENU pHVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  WINDOWPLACEMENT local_68;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  int local_10 [3];
  
  FUN_00455f04(0x46ec9c);
  FUN_0042cad4(*param_1);
  FUN_00442958(param_1,'\x01');
  local_3c = 0xffffffff;
  local_38 = 0xffffffff;
  if ((*(int *)((int)param_1 + 0x3a) == -1) && (*(int *)((int)param_1 + 0x3e) == -1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_68.length = 0x2c;
    GetWindowPlacement(*(HWND *)(*param_1 + 0xc),&local_68);
    local_68.flags = 1;
    local_68.showCmd = 8;
    local_68.ptMinPosition.x = *(LONG *)((int)param_1 + 0x3a);
    local_68.ptMinPosition.y = *(LONG *)((int)param_1 + 0x3e);
    local_68.length = 0x2c;
    SetWindowPlacement(*(HWND *)(*param_1 + 0xc),&local_68);
  }
  if (((*(byte *)(*param_1 + 0x74) & 0x10) != 0) && (*(int *)((int)param_1 + 0x21) != 0)) {
    pHVar3 = GetMenu(*(HWND *)(*param_1 + 0xc));
    local_24 = 8;
    FUN_00420a20(local_10,*(int **)((int)param_1 + 0x21),0);
    local_18 = local_18 + 1;
    local_24 = 0x14;
    (**(code **)(local_10[0] + 4))();
    cVar2 = (**(code **)(param_1[3] + 8))();
    if (cVar2 == '\0') {
      pHVar3 = (HMENU)(**(code **)(local_10[0] + 4))();
      DestroyMenu(pHVar3);
    }
    else if (pHVar3 != (HMENU)0x0) {
      DestroyMenu(pHVar3);
    }
    local_18 = local_18 + -1;
    FUN_00420b3c(local_10,2);
    local_24 = 0;
  }
  if (*(int *)((int)param_1 + 0x11) == 0) {
    iVar4 = FUN_00442748(param_1);
    if (iVar4 == 0) {
      uVar5 = *(undefined4 *)(*param_1 + 0xc);
    }
    else {
      uVar5 = *(undefined4 *)(iVar4 + 0xc);
    }
    *(undefined4 *)((int)param_1 + 0x11) = uVar5;
  }
  if (*(int *)((int)param_1 + 0x42) != 0) {
    FUN_0042d1a4(*param_1,0x80,1,*(LPARAM *)((int)param_1 + 0x42));
  }
  if (*(int *)((int)param_1 + 0x46) != 0) {
    FUN_0042d1a4(*param_1,0x80,0,*(LPARAM *)((int)param_1 + 0x46));
  }
  *in_FS_OFFSET = local_34;
  return;
}

