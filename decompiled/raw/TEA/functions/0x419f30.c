// name: FUN_00419f30
// address: 0x419f30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00419f30(int *param_1)

{
  int iVar1;
  
  if (param_1[0x1b] == 0) {
    iVar1 = FUN_004a76a8(*param_1,0xb8,0,0);
    if (iVar1 != 0) {
      param_1[0x1b] = 1;
      GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
      (**(code **)(*(int *)(param_1[0x1a] + 0xc) + 0x58))();
      param_1[0x1b] = 0;
    }
  }
  FUN_004a76a8(*param_1,0xb9,0,0);
  return;
}

