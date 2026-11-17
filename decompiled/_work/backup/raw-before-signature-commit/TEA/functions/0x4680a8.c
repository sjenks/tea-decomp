// name: FUN_004680a8
// address: 0x4680a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004680a8(int param_1,int param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  WPARAM WVar5;
  
  BVar1 = IsWindowEnabled(*(HWND *)(*(int *)(param_1 + 0x60) + 0xc));
  if (BVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = FUN_004a76a8(*(int *)(param_1 + 0x60),0x1304,0,0);
    iVar4 = FUN_004a76a8(*(int *)(param_1 + 0x60),0x130b,0,0);
    WVar5 = iVar4 + param_2;
    if ((int)WVar5 < 0) {
      WVar5 = iVar3 - 1;
    }
    else if (iVar3 <= (int)WVar5) {
      WVar5 = 0;
    }
    FUN_004a76a8(*(int *)(param_1 + 0x60),0x130c,WVar5,0);
    GetDlgCtrlID(*(HWND *)(*(int *)(param_1 + 0x60) + 0xc));
    uVar2 = (**(code **)(*(int *)(param_1 + 0xc) + 0xc0))();
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}

