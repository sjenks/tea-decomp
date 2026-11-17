// name: thunk_FUN_004e0588
// address: 0x4de698
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl thunk_FUN_004e0588(LPCSTR param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004df2e4();
  }
  return uVar2;
}

