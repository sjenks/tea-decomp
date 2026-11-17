// name: FUN_004c5b60
// address: 0x4c5b60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004c5b60(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  uint local_d0 [10];
  uint local_a8 [10];
  CHAR local_80 [82];
  ushort local_2e;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  LPSTR local_8;
  
  FUN_004dce64(0x511208);
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0xfffffffb:
    local_2e = 0x7f50;
    break;
  case 0xfffffffc:
    local_2e = 0x7f51;
    break;
  case 0xfffffffd:
    local_2e = 0x7f53;
    break;
  case 0xfffffffe:
    local_2e = 0x7f52;
    break;
  case 0xffffffff:
    local_2e = 0x7f54;
    break;
  default:
    *in_FS_OFFSET = local_2c;
    return local_2c;
  }
  iVar2 = *(int *)(param_2 + 0x70);
  iVar1 = FUN_004c0cd4(iVar2,0x7f55,local_80,0x50);
  if (iVar1 == 0) {
    *in_FS_OFFSET = local_2c;
    uVar3 = local_2c;
  }
  else {
    iVar1 = FUN_004c0cd4(iVar2,0x7f4f,(LPSTR)local_a8,0x28);
    if (iVar1 == 0) {
      *in_FS_OFFSET = local_2c;
      uVar3 = local_2c;
    }
    else {
      iVar2 = FUN_004c0cd4(iVar2,(uint)local_2e,(LPSTR)local_d0,0x28);
      if (iVar2 == 0) {
        *in_FS_OFFSET = local_2c;
        uVar3 = local_2c;
      }
      else {
        FUN_004dc9f4(local_a8);
        FUN_004dc9f4(*(uint **)(param_3 + 4));
        FUN_004dc9f4(local_d0);
        local_1c = 0x14;
        local_8 = (LPSTR)FUN_004cc180();
        local_10 = local_10 + 1;
        local_1c = 8;
        wsprintfA(local_8,(LPCSTR)local_a8,*(undefined4 *)(param_3 + 4),local_d0);
        (**(code **)(*(int *)(*(int *)(param_2 + 0x6c) + 0x1b) + 0x30))();
        local_10 = local_10 + -1;
        uVar3 = FUN_004cc0cc();
        *in_FS_OFFSET = local_2c;
      }
    }
  }
  return uVar3;
}

