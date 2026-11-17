// name: FUN_004df65c
// address: 0x4df65c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004df65c(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = MoveFileA(param_1,param_2);
  if (BVar1 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004df2e4();
  }
  return uVar2;
}

