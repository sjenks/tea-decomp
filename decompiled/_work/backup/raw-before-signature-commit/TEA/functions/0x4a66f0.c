// name: FUN_004a66f0
// address: 0x4a66f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004a66f0(int param_1,byte param_2,int param_3)

{
  uint nNumerator;
  int iVar1;
  bool bVar2;
  
  if ((param_2 & 0xc) == 0) {
    if (*(int *)(param_1 + 0x44) == 0) {
      iVar1 = FUN_004a5774(param_1);
      bVar2 = iVar1 != 0;
    }
    else {
      nNumerator = FUN_004a48d0();
      if (nNumerator != 0xffffffff) {
        MulDiv(-param_3,nNumerator,0x78);
      }
      (**(code **)(**(int **)(param_1 + 0x44) + 0x2c))();
      bVar2 = true;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

