// name: FUN_00469508
// address: 0x469508
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00469508(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  if ((param_1 == (int *)0x0) || ((char)param_1 != *(char *)((int)param_1 + 0x17))) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_1[3] != 0) {
      if ((param_1[2] < 0) && (iVar2 = FUN_00469598(param_1), iVar2 != 0)) {
        return 0xffffffff;
      }
      if ((*(byte *)((int)param_1 + 0x12) & 4) != 0) {
        FUN_00456e94();
      }
    }
    uVar1 = FUN_00468ad4((int)*(char *)((int)param_1 + 0x16));
    *(undefined2 *)((int)param_1 + 0x12) = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined1 *)((int)param_1 + 0x16) = 0xff;
    if (*(ushort *)(param_1 + 4) != 0) {
      pcVar3 = FUN_0046a2b8((char *)0x0,(char *)0x0,*(ushort *)(param_1 + 4));
      FUN_0046a730(pcVar3);
      *(undefined2 *)(param_1 + 4) = 0;
    }
  }
  return uVar1;
}

