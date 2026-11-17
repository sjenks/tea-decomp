// name: FUN_0046a1a0
// address: 0x46a1a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0046a1a0(byte param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  char local_6 [2];
  
  if (param_2[2] < -1) {
    FUN_00467580((undefined4 *)*param_2,(undefined4 *)local_6,1);
    param_2[2] = param_2[2] + 1;
    *param_2 = *param_2 + 1;
    if ((((*(byte *)((int)param_2 + 0x12) & 8) != 0) && ((param_1 == 10 || (param_1 == 0xd)))) &&
       (iVar1 = FUN_00469598(param_2), iVar1 != 0)) {
      return 0xffffffff;
    }
    uVar2 = (uint)param_1;
  }
  else if (((*(ushort *)((int)param_2 + 0x12) & 0x90) == 0) &&
          ((*(ushort *)((int)param_2 + 0x12) & 2) != 0)) {
    *(ushort *)((int)param_2 + 0x12) = *(ushort *)((int)param_2 + 0x12) | 0x100;
    if (param_2[3] == 0) {
      iVar1 = FUN_00469210((int)*(char *)((int)param_2 + 0x16),local_6,1);
      if ((iVar1 == 1) || ((*(byte *)((int)param_2 + 0x13) & 2) != 0)) {
        uVar2 = (uint)param_1;
      }
      else {
        *(ushort *)((int)param_2 + 0x12) = *(ushort *)((int)param_2 + 0x12) | 0x10;
        uVar2 = 0xffffffff;
      }
    }
    else {
      if ((param_2[2] != 0) && (iVar1 = FUN_00469598(param_2), iVar1 != 0)) {
        return 0xffffffff;
      }
      param_2[2] = -param_2[3];
      FUN_00467580((undefined4 *)*param_2,(undefined4 *)local_6,1);
      param_2[2] = param_2[2];
      *param_2 = *param_2 + 1;
      if (((*(byte *)((int)param_2 + 0x12) & 8) != 0) &&
         (((param_1 == 10 || (param_1 == 0xd)) && (iVar1 = FUN_00469598(param_2), iVar1 != 0)))) {
        return 0xffffffff;
      }
      uVar2 = (uint)param_1;
    }
  }
  else {
    *(ushort *)((int)param_2 + 0x12) = *(ushort *)((int)param_2 + 0x12) | 0x10;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

