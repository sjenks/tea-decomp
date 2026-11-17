// name: FUN_004207fc
// address: 0x4207fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004207fc(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  if ((param_1 == (int *)0x0) || ((char)param_1 != *(char *)((int)param_1 + 0x17))) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_1[3] != 0) {
      if ((param_1[2] < 0) && (iVar2 = FUN_0042088c(param_1), iVar2 != 0)) {
        return 0xffffffff;
      }
      if ((*(byte *)((int)param_1 + 0x12) & 4) != 0) {
        FUN_00415600();
      }
    }
    uVar1 = FUN_0041ffdc((int)*(char *)((int)param_1 + 0x16));
    *(undefined2 *)((int)param_1 + 0x12) = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined1 *)((int)param_1 + 0x16) = 0xff;
    if (*(ushort *)(param_1 + 4) != 0) {
      pcVar3 = FUN_004214fc((char *)0x0,(char *)0x0,*(ushort *)(param_1 + 4));
      FUN_004217c8(pcVar3);
      *(undefined2 *)(param_1 + 4) = 0;
    }
  }
  return uVar1;
}

