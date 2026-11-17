// name: FUN_0042d2d4
// address: 0x42d2d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042d2d4(int *param_1,int param_2)

{
  SHORT SVar1;
  
  if (param_2 == 0x79) {
    SVar1 = GetKeyState(0x10);
    if (SVar1 < 0) {
      FUN_00430aec(param_1,(int *)0x0);
      return;
    }
  }
  FUN_004a5774(*param_1);
  return;
}

