// name: FUN_004de7cc
// address: 0x4de7cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004de7cc(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  if ((param_1 == (int *)0x0) || ((char)param_1 != *(char *)((int)param_1 + 0x17))) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_1[3] != 0) {
      if ((param_1[2] < 0) && (iVar2 = FUN_004de85c(param_1), iVar2 != 0)) {
        return 0xffffffff;
      }
      if ((*(byte *)((int)param_1 + 0x12) & 4) != 0) {
        FUN_004cc744();
      }
    }
    uVar1 = FUN_004ddd90((int)*(char *)((int)param_1 + 0x16));
    *(undefined2 *)((int)param_1 + 0x12) = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined1 *)((int)param_1 + 0x16) = 0xff;
    if (*(ushort *)(param_1 + 4) != 0) {
      pcVar3 = FUN_004df5b0((char *)0x0,(char *)0x0,*(ushort *)(param_1 + 4));
      FUN_004e0588(pcVar3);
      *(undefined2 *)(param_1 + 4) = 0;
    }
  }
  return uVar1;
}

