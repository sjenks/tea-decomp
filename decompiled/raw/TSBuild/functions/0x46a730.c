// name: FUN_0046a730
// address: 0x46a730
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0046a730(LPCSTR param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00469fec();
  }
  return uVar2;
}

