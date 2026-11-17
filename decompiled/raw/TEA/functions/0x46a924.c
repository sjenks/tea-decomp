// name: FUN_0046a924
// address: 0x46a924
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046a924(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  char cVar7;
  undefined4 local_208;
  undefined4 local_1e4;
  int local_1e0;
  undefined4 local_1b4 [12];
  undefined4 local_184;
  int local_180;
  undefined4 local_154 [12];
  undefined4 local_124 [12];
  byte local_f4 [4];
  int local_f0;
  int *local_cc;
  byte local_c4 [4];
  int local_c0;
  int *local_9c;
  undefined4 local_94;
  int local_90;
  undefined4 local_64;
  int local_60;
  int *local_3c;
  undefined4 local_34;
  int local_30;
  
  FUN_004dce64(0x4fd954);
  uVar3 = FUN_0046b0fc(param_1,param_2);
  if (uVar3 == 0) goto LAB_0046b094;
  iVar4 = param_1[0x22];
  if ((param_2 < 0x317e) || (0x3187 < param_2)) {
    if (param_2 == 0x3174) {
      iVar4 = param_1[0x22] + 1;
    }
    else if (param_2 == 0x316a) {
      iVar4 = param_1[0x22] + -1;
    }
  }
  else {
    iVar4 = FUN_00472370((int)param_1);
    iVar4 = iVar4 + (param_2 - 0x317e);
  }
  if (iVar4 != param_1[0x22]) {
    param_1[0x22] = iVar4;
    iVar4 = param_1[0x26];
    iVar1 = param_1[0x25];
    iVar5 = FUN_0040b5a8(iVar4,iVar4,iVar1);
    iVar2 = param_1[0x26];
    iVar4 = iVar4 - iVar1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x7f;
    }
    param_1[0x26] = param_1[0x26] + (iVar4 >> 7) * -0x80;
    FUN_0040b62c(param_1 + 0x24,iVar5,iVar2);
    FUN_00466e98(param_1[0xe],param_1[0x1b] + (param_1[0x22] + -1) * 0x10,(int)(param_1 + 0x24));
    FUN_0046e740(param_1,0,0);
    FUN_0046ccac((int)param_1);
    goto LAB_0046b094;
  }
  if ((int)param_2 < 0x31c5) {
    if (param_2 != 0x31c4) {
      if (param_2 == 0x1d4c) {
        FUN_004a76a8(*(int *)param_1[0x85],0x301,0,0);
        goto LAB_0046b094;
      }
      if (param_2 == 0x1d56) {
        (**(code **)(*(int *)(param_1[0x85] + 0xc) + 0x3c))();
        goto LAB_0046b094;
      }
      if (param_2 != 0x31ba) goto LAB_0046b078;
    }
    if (param_2 == 0x31ba) {
      iVar4 = 1;
    }
    else {
      iVar4 = -1;
    }
    FUN_00467044(param_1[0xe],*(int *)(*param_1 + 0x14),iVar4,0);
  }
  else {
    if ((param_2 == 0x3642) || (param_2 == 0x364c)) {
      iVar4 = (int)param_1 + 0x166;
      FUN_004cb6ec(&local_34,iVar4);
      FUN_004cb3b4(&local_64,iVar4,0xffff0000);
      FUN_004cb3b4(&local_94,iVar4,0xffff0000);
      iVar4 = local_60;
      if (local_60 == -0x10000) {
        iVar4 = 0;
      }
      uVar6 = FUN_004a76a8(*local_3c,0x110a,4,iVar4);
      FUN_004cb3b4((undefined4 *)local_c4,local_3c,uVar6);
      while (iVar4 = FUN_004cbb48(local_c4), iVar4 != 0) {
        if ((local_90 == local_30) && (param_2 == 0x3642)) {
          FUN_004cb40c(&local_64,(undefined4 *)local_c4);
        }
        else if ((local_c0 == local_30) && (param_2 == 0x364c)) {
          FUN_004cb40c(&local_64,&local_94);
        }
        FUN_004cb40c(&local_94,(undefined4 *)local_c4);
        iVar4 = local_c0;
        if (local_c0 == -0x10000) {
          iVar4 = 0;
        }
        uVar6 = FUN_004a76a8(*local_9c,0x110a,4,iVar4);
        FUN_004cb3b4((undefined4 *)local_f4,local_9c,uVar6);
        while (iVar4 = FUN_004cbb48(local_f4), iVar4 != 0) {
          if ((local_90 == local_30) && (param_2 == 0x3642)) {
            FUN_004cb40c(&local_64,(undefined4 *)local_f4);
          }
          else if ((local_f0 == local_30) && (param_2 == 0x364c)) {
            FUN_004cb40c(&local_64,&local_94);
          }
          FUN_004cb40c(&local_94,(undefined4 *)local_f4);
          iVar4 = local_f0;
          if (local_f0 == -0x10000) {
            iVar4 = 0;
          }
          uVar6 = FUN_004a76a8(*local_cc,0x110a,1,iVar4);
          FUN_004cb3b4(local_124,local_cc,uVar6);
          FUN_004cb40c((undefined4 *)local_f4,local_124);
          FUN_004cc0cc();
        }
        iVar4 = local_c0;
        if (local_c0 == -0x10000) {
          iVar4 = 0;
        }
        uVar6 = FUN_004a76a8(*local_9c,0x110a,1,iVar4);
        FUN_004cb3b4(local_154,local_9c,uVar6);
        FUN_004cb40c((undefined4 *)local_c4,local_154);
        FUN_004cc0cc();
        FUN_004cc0cc();
      }
      FUN_004cb3b4(&local_184,(int)param_1 + 0x166,0xffff0000);
      cVar7 = local_180 == local_60;
      FUN_004cc0cc();
      if (cVar7 != '\0') {
        if (param_2 == 0x3642) {
          iVar4 = local_60;
          if (local_60 == -0x10000) {
            iVar4 = 0;
          }
          uVar6 = FUN_004a76a8(*local_3c,0x110a,4,iVar4);
          FUN_004cb3b4(local_1b4,local_3c,uVar6);
          FUN_004cb40c(&local_64,local_1b4);
          FUN_004cc0cc();
        }
        else {
          FUN_004cb40c(&local_64,&local_94);
        }
      }
      FUN_004cb3b4(&local_1e4,(int)param_1 + 0x166,0xffff0000);
      cVar7 = local_1e0 != local_60;
      FUN_004cc0cc();
      if (cVar7 != '\0') {
        FUN_004a76a8(*local_3c,0x110b,9,local_60);
      }
      FUN_004cc0cc();
      FUN_004cc0cc();
      FUN_004cc0cc();
      FUN_004cc0cc();
      goto LAB_0046b094;
    }
LAB_0046b078:
    if ((param_2 < 0x317e) || (0x3187 < param_2)) {
      FUN_0046d004(param_1,param_2,0);
    }
  }
LAB_0046b094:
  *in_FS_OFFSET = local_208;
  return;
}

