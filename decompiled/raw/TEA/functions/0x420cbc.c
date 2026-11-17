// name: FUN_00420cbc
// address: 0x420cbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00420cbc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint bEnable;
  HWND hWnd;
  int *piVar3;
  uint uVar4;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0xbc) + 0x6c))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x398) + 8) + 0x60))();
  if ((-1 < iVar1) && (*(int *)(param_1 + 0x228) + 0x1ea0 == param_2)) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0x70))();
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x6c))();
  if ((-1 < iVar1) && (*(int *)(param_1 + 0x228) + 0x1e96 == param_2)) {
    (**(code **)(*(int *)(param_1 + 0xbc) + 0x70))();
    (**(code **)(*(int *)(*(int *)(param_1 + 0x398) + 8) + 0x60))();
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x240) + 8) + 0x60))();
  if (-1 < iVar1) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x2ec) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x444) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x4f0) + 8) + 0x60))();
  if (*(int *)(param_1 + 0x5b0) != 0) {
    uVar2 = FUN_0041fea4(param_1);
    uVar4 = 0;
    piVar3 = &DAT_004ed280;
    do {
      bEnable = uVar2 & 0xff;
      hWnd = GetDlgItem(*(HWND *)(**(int **)(param_1 + 0x160) + 0xc),*piVar3);
      EnableWindow(hWnd,bEnable);
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar4 < 7);
  }
  return;
}

