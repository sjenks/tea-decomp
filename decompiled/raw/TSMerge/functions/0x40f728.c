// name: FUN_0040f728
// address: 0x40f728
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0040f728(int *param_1,LPCSTR param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_b0;
  int local_8c [34];
  
  FUN_00455f04(0x464390);
  if (param_2 == (LPCSTR)0x0) {
    if (param_1[0x18] == 0) {
      *in_FS_OFFSET = local_b0;
      return 0;
    }
    param_2 = (LPCSTR)param_1[0x18];
  }
  FUN_0044ecfc(local_8c,0,param_2,6,0x1b6);
  if ((*(byte *)(local_8c[0] + 0x30) & 5) == 0) {
    (**(code **)(param_1[3] + 0x24))();
    bVar1 = FUN_0040f6b0(param_1,local_8c,param_1[0x19]);
    if (bVar1) {
      uVar2 = FUN_0042d1a4(*param_1,0xb9,0,0);
      uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
      FUN_0044edf4(local_8c,2);
      *in_FS_OFFSET = local_b0;
      return uVar2;
    }
  }
  uVar2 = 0;
  FUN_0044edf4(local_8c,2);
  *in_FS_OFFSET = local_b0;
  return uVar2;
}

