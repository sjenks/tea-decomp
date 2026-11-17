// name: FUN_0044c9cb
// address: 0x44c9cb
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0044c9cb(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x7a) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x7a) + 0x7e);
  }
  iVar4 = iVar5;
  if (iVar5 != 0) {
    do {
      if ((*(int *)(iVar4 + 0xc) != 0) &&
         (uVar2 = GetWindowLongA(*(HWND *)(iVar4 + 0xc),-0x10), (uVar2 & 0x58000000) == 0x50000000))
      {
        if ((uVar2 & 0x10000) != 0) {
          return iVar4;
        }
        iVar3 = FUN_0044c9cb(iVar4);
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      piVar1 = (int *)(iVar4 + 0x7e);
      iVar4 = *piVar1;
    } while (iVar5 != *piVar1);
  }
  return 0;
}

