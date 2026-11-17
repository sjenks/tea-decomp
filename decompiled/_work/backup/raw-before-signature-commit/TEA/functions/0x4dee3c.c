// name: FUN_004dee3c
// address: 0x4dee3c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __cdecl FUN_004dee3c(undefined4 *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  
  DVar1 = FUN_004ddec0((int)*(char *)((int)param_1 + 0x16),0,1);
  if (DVar1 != 0xffffffff) {
    if ((int)param_1[2] < 0) {
      DVar2 = DVar1;
      if ((*(byte *)((int)&DAT_005177f4 + *(char *)((int)param_1 + 0x16) * 4 + 1) & 8) != 0) {
        DVar2 = FUN_004ddec0((int)*(char *)((int)param_1 + 0x16),0,2);
        if (DVar2 == 0xffffffff) {
          return 0xffffffff;
        }
        DVar1 = FUN_004ddec0((int)*(char *)((int)param_1 + 0x16),DVar1,0);
        if (DVar1 == 0xffffffff) {
          return 0xffffffff;
        }
      }
      iVar3 = FUN_004ded7c(param_1);
      DVar1 = DVar2 + iVar3;
    }
    else {
      iVar3 = FUN_004ded7c(param_1);
      DVar1 = DVar1 - iVar3;
    }
  }
  return DVar1;
}

