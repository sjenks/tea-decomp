// name: FUN_004373a4
// address: 0x4373a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004373a4(int param_1,byte param_2,int param_3)

{
  uint nNumerator;
  int iVar1;
  bool bVar2;
  
  if ((param_2 & 0xc) == 0) {
    if (*(int *)(param_1 + 0x44) == 0) {
      iVar1 = FUN_00436428(param_1);
      bVar2 = iVar1 != 0;
    }
    else {
      nNumerator = FUN_00435718();
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

