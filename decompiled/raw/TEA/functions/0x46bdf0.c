// name: FUN_0046bdf0
// address: 0x46bdf0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046bdf0(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0046c024(param_1,param_3);
  *(char *)((int)param_1 + 0x219) = (char)uVar1;
  if ((char)uVar1 != '\0') {
    SetCapture(*(HWND *)(*param_1 + 0xc));
  }
  FUN_004a6b34(*param_1);
  return;
}

