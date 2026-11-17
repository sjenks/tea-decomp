// name: FUN_0044123c
// address: 0x44123c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044123c(int *param_1,int *param_2,int param_3)

{
  LRESULT LVar1;
  undefined4 uVar2;
  
  LVar1 = SendDlgItemMessageA(*(HWND *)(*param_1 + 0xc),0x470,0x147,0,0);
  if (-1 < LVar1) {
    uVar2 = FUN_00444908(*(int *)(*(int *)(*param_2 + 0x30) + LVar1 * 4));
    *(undefined4 *)(param_3 + 0x3c) = uVar2;
  }
  return;
}

