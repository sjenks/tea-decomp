// name: FUN_0042c95c
// address: 0x42c95c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0042c95c(int *param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  undefined4 uVar3;
  tagMSG local_20;
  
  uVar3 = 0;
  while( true ) {
    BVar2 = PeekMessageA(&local_20,(HWND)0x0,0,0,1);
    if (BVar2 == 0) {
      return uVar3;
    }
    uVar3 = 1;
    if (local_20.message == 0x12) break;
    uVar1 = (**(code **)(*param_1 + 8))();
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *(WPARAM *)((int)param_1 + 5) = local_20.wParam;
  PostQuitMessage(local_20.wParam);
  return 1;
}

