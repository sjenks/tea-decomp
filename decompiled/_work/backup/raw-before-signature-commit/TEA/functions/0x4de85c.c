// name: FUN_004de85c
// address: 0x4de85c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004de85c(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (int *)0x0) {
    FUN_004de8dc();
    uVar1 = 0;
  }
  else if ((char)param_1 == *(char *)((int)param_1 + 0x17)) {
    if (param_1[2] < 0) {
      uVar3 = param_1[3] + param_1[2] + 1;
      param_1[2] = param_1[2] - uVar3;
      *param_1 = param_1[1];
      uVar2 = FUN_004de4cc((int)*(char *)((int)param_1 + 0x16),(char *)param_1[1],uVar3);
      if ((uVar3 == uVar2) || ((*(byte *)((int)param_1 + 0x13) & 2) != 0)) {
        uVar1 = 0;
      }
      else {
        *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x10;
        uVar1 = 0xffffffff;
      }
    }
    else {
      if ((((*(byte *)((int)param_1 + 0x12) & 8) != 0) || (param_1 + 5 == (int *)*param_1)) &&
         (param_1[2] = 0, param_1 + 5 == (int *)*param_1)) {
        *param_1 = param_1[1];
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

