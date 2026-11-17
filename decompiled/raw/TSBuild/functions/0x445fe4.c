// name: FUN_00445fe4
// address: 0x445fe4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00445fe4(int *param_1,WPARAM param_2)

{
  WPARAM WVar1;
  undefined4 uVar2;
  LPARAM LVar3;
  
  LVar3 = 0;
  if ((int)param_2 < 0) {
    WVar1 = 0xffffffff;
  }
  else {
    WVar1 = FUN_00438338(*param_1,0xbb,param_2,0);
  }
  uVar2 = FUN_00438338(*param_1,0xc1,WVar1,LVar3);
  return uVar2;
}

