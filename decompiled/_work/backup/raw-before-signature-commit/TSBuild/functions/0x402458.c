// name: FUN_00402458
// address: 0x402458
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00402458(int param_1,byte *param_2)

{
  int iVar1;
  CHAR aCStackY_10004 [61420];
  undefined4 uStackY_1018;
  
  iVar1 = 0x10;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uStackY_1018 = 0x402489;
  FUN_0046a5c8(aCStackY_10004,param_2);
  SetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x450) + 0xc),aCStackY_10004);
  return;
}

