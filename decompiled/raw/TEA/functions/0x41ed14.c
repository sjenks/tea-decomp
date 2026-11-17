// name: FUN_0041ed14
// address: 0x41ed14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041ed14(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  LRESULT LVar3;
  int iVar4;
  WPARAM WVar5;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  HWND local_8;
  
  iVar4 = 0;
  if ((param_2 == 0x27) || (param_2 == 0x28)) {
    iVar4 = 1;
  }
  if ((param_2 == 0x25) || (param_2 == 0x26)) {
    iVar4 = -1;
  }
  if (iVar4 != 0) {
    iVar1 = FUN_004a76a8(*param_1,0x1304,0,0);
    iVar2 = FUN_004a76a8(*param_1,0x130b,0,0);
    WVar5 = iVar4 + iVar2;
    if ((int)WVar5 < 0) {
      WVar5 = iVar1 - 1;
    }
    else if (iVar1 <= (int)WVar5) {
      WVar5 = 0;
    }
    local_10 = *(undefined4 *)(*param_1 + 0x34);
    local_14 = *(undefined4 *)(*param_1 + 0xc);
    local_c = 0xfffffdd8;
    local_8 = *(HWND *)(*(int *)param_1[5] + 0xc);
    LVar3 = SendMessageA(local_8,0x4e,*(WPARAM *)(*param_1 + 0x34),(LPARAM)&local_14);
    if (LVar3 == 0) {
      FUN_004a76a8(*param_1,0x130c,WVar5,0);
      local_c = 0xfffffdd9;
      SendMessageA(*(HWND *)(*(int *)param_1[5] + 0xc),0x4e,*(WPARAM *)(*param_1 + 0x34),
                   (LPARAM)&local_14);
    }
  }
  return;
}

