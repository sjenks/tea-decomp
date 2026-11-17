// name: FUN_004b6ae8
// address: 0x4b6ae8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004b6ae8(int *param_1,WPARAM param_2)

{
  WPARAM WVar1;
  undefined4 uVar2;
  LPARAM LVar3;
  
  LVar3 = 0;
  if ((int)param_2 < 0) {
    WVar1 = 0xffffffff;
  }
  else {
    WVar1 = FUN_004a76a8(*param_1,0xbb,param_2,0);
  }
  uVar2 = FUN_004a76a8(*param_1,0xc1,WVar1,LVar3);
  return uVar2;
}

