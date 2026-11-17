// name: FUN_00405d6c
// address: 0x405d6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00405d6c(int *param_1,int param_2)

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
  
  FUN_00467ba8(0x4751cc);
  local_c = (byte *)0x0;
  iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar3 = *(uint *)(*(int *)(param_2 + 8) + -4);
    piVar1 = FUN_00459f00(local_14,uVar3,uVar3);
    local_c = (byte *)(piVar1 + 3);
    FUN_00467580((undefined4 *)local_c,*(undefined4 **)(param_2 + 8),uVar3);
  }
  else {
    local_c = *(byte **)(param_2 + 8);
    pbVar6 = local_c + -0xc;
    if (pbVar6 != (byte *)&DAT_00485bcc) {
      *(int *)pbVar6 = *(int *)pbVar6 + 1;
    }
  }
  if (1 < *(int *)(local_c + -0xc) + 1) {
    FUN_0045f64c((int)local_14);
  }
  pbVar5 = local_c + -0xc;
  pbVar6 = local_c;
  if (pbVar5 != (byte *)&DAT_00485bcc) {
    pbVar5[0] = 0xff;
    pbVar5[1] = 0xff;
    pbVar5[2] = 0xff;
    pbVar5[3] = 0xff;
  }
  while( true ) {
    if (1 < *(int *)(local_c + -0xc) + 1) {
      FUN_0045f64c((int)local_14);
    }
    pbVar5 = local_c + -0xc;
    if (pbVar5 != (byte *)&DAT_00485bcc) {
      pbVar5[0] = 0xff;
      pbVar5[1] = 0xff;
      pbVar5[2] = 0xff;
      pbVar5[3] = 0xff;
    }
    if (local_c + *(int *)(local_c + -4) <= pbVar6) break;
    *pbVar6 = *pbVar6 ^ 0xbd;
    pbVar6 = pbVar6 + 1;
  }
  FUN_004605c8((int)local_14,*(uint *)(local_c + -4),0,1,0xbd);
  uVar3 = *(uint *)(local_c + -4);
  uVar2 = FUN_00469c98(local_c,1,uVar3,param_1);
  uVar3 = (uint)(uVar3 == uVar2);
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      pbVar6 = local_c + -0xc;
      if (pbVar6 == (byte *)&DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (pbVar6 == (byte *)&DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        iVar4 = *(int *)pbVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_00405f36;
    }
    FUN_0045680c();
  }
LAB_00405f36:
  *in_FS_OFFSET = local_38;
  return uVar3;
}

