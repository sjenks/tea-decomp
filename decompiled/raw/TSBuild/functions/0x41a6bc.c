// name: FUN_0041a6bc
// address: 0x41a6bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0041a6bc(int *param_1,LPCSTR param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_b0;
  int local_8c [34];
  
  FUN_00467ba8(0x478144);
  if (param_2 == (LPCSTR)0x0) {
    if (param_1[0x18] == 0) {
      *in_FS_OFFSET = local_b0;
      return 0;
    }
    param_2 = (LPCSTR)param_1[0x18];
  }
  FUN_0045b958(local_8c,0,param_2,6,0x1b6);
  if ((*(byte *)(local_8c[0] + 0x30) & 5) == 0) {
    (**(code **)(param_1[3] + 0x24))();
    bVar1 = FUN_0041a644(param_1,local_8c,param_1[0x19]);
    if (bVar1) {
      uVar2 = FUN_00438338(*param_1,0xb9,0,0);
      uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
      FUN_0045ba50(local_8c,2);
      *in_FS_OFFSET = local_b0;
      return uVar2;
    }
  }
  uVar2 = 0;
  FUN_0045ba50(local_8c,2);
  *in_FS_OFFSET = local_b0;
  return uVar2;
}

