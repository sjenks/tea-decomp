// name: FUN_0043686c
// address: 0x43686c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0043686c(int param_1,int param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    for (iVar1 = *(int *)(param_1 + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      if (((*(byte *)(iVar1 + 0x17) & 2) == 0) &&
         ((((*(byte *)(iVar1 + 0x14) & 1) == 0 && ((*(byte *)(iVar1 + 0x16) & 0x10) == 0)) ||
          (param_4 == '\0')))) {
        if (param_2 != 0) {
          *(int *)(param_2 + iVar2 * 4) = iVar1;
        }
        iVar2 = iVar2 + 1;
      }
    }
  }
  return iVar2;
}

