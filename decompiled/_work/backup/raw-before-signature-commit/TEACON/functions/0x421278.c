// name: FUN_00421278
// address: 0x421278
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00421278(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if ((*(byte *)((int)param_1 + 0x13) & 2) != 0) {
    FUN_00421244();
  }
  *param_1 = (char *)param_1[1];
  pcVar1 = FUN_004203ec((int)*(char *)((int)param_1 + 0x16),(char *)param_1[1],(char *)param_1[3]);
  param_1[2] = pcVar1;
  param_1[2] = pcVar1;
  if ((int)pcVar1 < 1) {
    if (param_1[2] == 0) {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfe7f | 0x20;
    }
    else {
      param_1[2] = 0;
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x10;
    }
    uVar2 = 0xffffffff;
  }
  else {
    *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xffdf;
    uVar2 = 0;
  }
  return uVar2;
}

