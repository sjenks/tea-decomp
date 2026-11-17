// name: FUN_0043fb9c
// address: 0x43fb9c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0043fb9c(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  byte *local_c;
  
  FUN_004dce64(0x4f5d20);
  local_c = (byte *)0x0;
  iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar3 = *(uint *)(*(int *)(param_2 + 8) + -4);
    piVar1 = FUN_004cf7b0(local_14,uVar3,uVar3);
    local_c = (byte *)(piVar1 + 3);
    FUN_004dc7d4((undefined4 *)local_c,*(undefined4 **)(param_2 + 8),uVar3);
  }
  else {
    local_c = *(byte **)(param_2 + 8);
    pbVar6 = local_c + -0xc;
    if (pbVar6 != (byte *)&DAT_00513d58) {
      *(int *)pbVar6 = *(int *)pbVar6 + 1;
    }
  }
  if (1 < *(int *)(local_c + -0xc) + 1) {
    FUN_004d48d8((int)local_14);
  }
  pbVar5 = local_c + -0xc;
  pbVar6 = local_c;
  if (pbVar5 != (byte *)&DAT_00513d58) {
    pbVar5[0] = 0xff;
    pbVar5[1] = 0xff;
    pbVar5[2] = 0xff;
    pbVar5[3] = 0xff;
  }
  while( true ) {
    if (1 < *(int *)(local_c + -0xc) + 1) {
      FUN_004d48d8((int)local_14);
    }
    pbVar5 = local_c + -0xc;
    if (pbVar5 != (byte *)&DAT_00513d58) {
      pbVar5[0] = 0xff;
      pbVar5[1] = 0xff;
      pbVar5[2] = 0xff;
      pbVar5[3] = 0xff;
    }
    if (local_c + *(int *)(local_c + -4) <= pbVar6) break;
    *pbVar6 = *pbVar6 ^ 0xbd;
    pbVar6 = pbVar6 + 1;
  }
  FUN_004d5c40((int)local_14,*(uint *)(local_c + -4),0,1,0xbd);
  uVar3 = *(uint *)(local_c + -4);
  uVar2 = FUN_004def90(local_c,1,uVar3,param_1);
  uVar3 = (uint)(uVar3 == uVar2);
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      pbVar6 = local_c + -0xc;
      if (pbVar6 == (byte *)&DAT_00513d58) {
        iVar4 = 1;
      }
      else if (pbVar6 == (byte *)&DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        iVar4 = *(int *)pbVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_0043fd66;
    }
    FUN_004cc0bc();
  }
LAB_0043fd66:
  *in_FS_OFFSET = local_38;
  return uVar3;
}

