// name: FUN_004212fc
// address: 0x4212fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004212fc(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (0 < param_1[2]) {
    param_1[2] = param_1[2] + -1;
    pbVar1 = (byte *)*param_1;
    *param_1 = *param_1 + 1;
    DAT_00434e64 = *pbVar1;
    return (uint)*pbVar1;
  }
  if (((param_1[2] < 0) || ((*(ushort *)((int)param_1 + 0x12) & 0x110) != 0)) ||
     ((*(byte *)((int)param_1 + 0x12) & 1) == 0)) {
    *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x10;
    return 0xffffffff;
  }
  *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x80;
  if (param_1[3] != 0) {
    iVar2 = FUN_00421278(param_1);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    param_1[2] = param_1[2] + -1;
    pbVar1 = (byte *)*param_1;
    *param_1 = *param_1 + 1;
    DAT_00434e64 = *pbVar1;
    return (uint)*pbVar1;
  }
  if ((*(byte *)((int)param_1 + 0x13) & 2) != 0) {
    FUN_00421244();
  }
  pcVar3 = FUN_004203ec((int)*(char *)((int)param_1 + 0x16),(char *)&DAT_00434e64,(char *)0x1);
  if (pcVar3 == (char *)0x0) {
    uVar4 = FUN_0042003c((int)*(char *)((int)param_1 + 0x16));
    if (uVar4 == 1) {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfe7f | 0x20;
    }
    else {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x10;
    }
    return 0xffffffff;
  }
  *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xffdf;
  return (uint)DAT_00434e64;
}

