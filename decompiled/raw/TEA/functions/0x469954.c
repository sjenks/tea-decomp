// name: FUN_00469954
// address: 0x469954
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00469954(int *param_1,LPCSTR param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_ac;
  int local_88 [33];
  
  FUN_004dce64(0x4fcf98);
  if ((param_2 == (LPCSTR)0x0) && (param_2 = (LPCSTR)param_1[0x18], param_2 == (LPCSTR)0x0)) {
    uVar2 = 0;
    *in_FS_OFFSET = local_ac;
  }
  else {
    FUN_004d18dc(local_88,0,param_2,10,0x1b6);
    if (((*(byte *)(local_88[0] + 0x30) & 5) == 0) &&
       (bVar1 = FUN_004697f8(param_1,local_88,param_1[0x19]), bVar1)) {
      uVar2 = FUN_004a76a8(*param_1,0xb9,0,0);
      uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
      FUN_004d19d4(local_88,2);
      *in_FS_OFFSET = local_ac;
    }
    else {
      uVar2 = 0;
      FUN_004d19d4(local_88,2);
      *in_FS_OFFSET = local_ac;
    }
  }
  return uVar2;
}

