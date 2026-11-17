// name: FUN_004b6ae8
// address: 0x4b6ae8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b6ae8(int *param_1,WPARAM param_2)

{
  WPARAM WVar1;
  LPARAM LVar2;
  
  LVar2 = 0;
  if ((int)param_2 < 0) {
    WVar1 = 0xffffffff;
  }
  else {
    WVar1 = FUN_004a76a8(*param_1,0xbb,param_2,0);
  }
  FUN_004a76a8(*param_1,0xc1,WVar1,LVar2);
  return;
}

