// name: FUN_0040f848
// address: 0x40f848
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0040f848(int *param_1,LPCSTR param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_ac;
  int local_88 [33];
  
  FUN_00455f04(0x4643d0);
  if (param_2 == (LPCSTR)0x0) {
    if (param_1[0x18] == 0) {
      *in_FS_OFFSET = local_ac;
      return 0;
    }
    param_2 = (LPCSTR)param_1[0x18];
  }
  FUN_0044f3d0(local_88,0,param_2,10,0x1b6);
  if (((*(byte *)(local_88[0] + 0x30) & 5) == 0) &&
     (bVar1 = FUN_0040f6ec(param_1,local_88,param_1[0x19]), bVar1)) {
    uVar2 = FUN_0042d1a4(*param_1,0xb9,0,0);
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
    FUN_0044f4c8(local_88,2);
    *in_FS_OFFSET = local_ac;
  }
  else {
    uVar2 = 0;
    FUN_0044f4c8(local_88,2);
    *in_FS_OFFSET = local_ac;
  }
  return uVar2;
}

