// name: FUN_00405630
// address: 0x405630
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00405630(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  undefined4 local_8a8;
  undefined1 local_884 [8];
  uint *local_87c;
  undefined1 local_874 [8];
  int local_86c;
  int local_864 [3];
  int local_858;
  
  FUN_004dce64(0x4eb0fc);
  if (param_3 == 0x10f4) {
    (**(code **)(param_1[3] + 0x54))();
    (**(code **)(param_1[3] + 0x54))();
    uVar1 = FUN_004a76a8(param_1[0x18],0x130b,0,0);
    FUN_0043a064(param_1[0x7e4],uVar1);
    goto LAB_00405bfe;
  }
  if (param_3 != 0x8d4) {
    if (param_3 < 0x3431) {
      if (param_3 == 0x3430) {
LAB_00405b86:
        *(uint *)(param_1[0x7e4] + 0x1c8) = (uint)(param_3 == 0x3430);
      }
      else if (param_3 < 0x1a41) {
        if (param_3 == 0x1a40) {
          *(undefined4 *)(param_1[0x7e4] + 0x24) = 2;
        }
        else if (param_3 == 0x1694) {
          iVar5 = FUN_004a76a8(param_1[0x54e],0xf0,0,0);
          *(uint *)(param_1[0x7e4] + 0x1c4) = (uint)(iVar5 != 0);
        }
        else if (param_3 == 0x1a2c) {
          *(undefined4 *)(param_1[0x7e4] + 0x24) = 0;
        }
        else if (param_3 == 0x1a36) {
          *(undefined4 *)(param_1[0x7e4] + 0x24) = 1;
        }
      }
      else if (param_3 == 0x2a4e) {
        FUN_00465244();
        iVar5 = FUN_004a76a8(param_1[0xa6],0xf0,0,0);
        DAT_004fcb84 = (uint)(iVar5 != 0);
      }
      else if (param_3 - 0x2f26U < 4) {
        piVar4 = FUN_004dd744(param_2,*(int *)(param_2 + 0xc),(int *)&DAT_00402b6c,
                              (int *)&DAT_00405c14,1);
        iVar5 = FUN_004a76a8(*piVar4,0xf0,0,0);
        *(uint *)(param_1[0x7e4] + -0xbacc + param_3 * 4) = (uint)(iVar5 != 0);
      }
      else if (param_3 - 0x2f26U == 0x500) goto LAB_00405b86;
    }
    else if (param_3 < 0x36bb) {
      if (param_3 == 0x36ba) {
        iVar3 = FUN_004a76a8(param_1[0x6b6],0xf0,0,0);
        iVar5 = param_1[0x7e4];
        *(uint *)(iVar5 + 0x1b0) = (uint)(iVar3 != 0);
        if ((iVar3 != 0) == 0) {
          *(undefined4 *)(iVar5 + 0x1b8) = 1;
          FUN_004ac750(param_1 + 0x5e8,1);
        }
      }
      else if (param_3 == 0x361a) {
        iVar5 = FUN_004a76a8(param_1[0x51c],0xf0,0,0);
        *(uint *)(param_1[0x7e4] + 0x1c0) = (uint)(iVar5 != 0);
      }
      else if (param_3 == 0x369c) {
        iVar3 = FUN_004a76a8(param_1[0x5e8],0xf0,0,0);
        iVar5 = param_1[0x7e4];
        *(uint *)(iVar5 + 0x1b8) = (uint)(iVar3 != 0);
        if ((iVar3 != 0) == 0) {
          *(undefined4 *)(iVar5 + 0x1b0) = 1;
          FUN_004ac750(param_1 + 0x6b6,1);
        }
      }
      else if (param_3 - 0x36a6U < 3) {
        *(int *)(param_1[0x7e4] + 0x1bc) = param_3 + -0x36a7;
      }
    }
    else if (param_3 == 0x36c4) {
      iVar5 = FUN_004a76a8(param_1[0x6e8],0xf0,0,0);
      *(uint *)(param_1[0x7e4] + 0x1b4) = (uint)(iVar5 != 0);
    }
    else if (param_3 == 0x3a20) {
      iVar5 = FUN_004a76a8(param_1[0xd8],0xf0,0,0);
      *(uint *)(param_1[0x7e4] + 0x20) = (uint)(iVar5 != 0);
    }
    FUN_004068e8((int)param_1);
    FUN_0045269c((int *)param_1[0x7e3]);
    goto LAB_00405bfe;
  }
  iVar5 = 4;
  puVar2 = (uint *)FUN_00408c8c(*(undefined4 **)(param_1[0x7e4] + 0x28));
  FUN_004cf628((int)local_874,puVar2);
  FUN_004765e8(local_864,0,*param_1,param_1[0xe],(int)local_874,iVar5);
  if (local_86c != 0) {
    if (*(int *)(local_86c + -0xc) != -1) {
      piVar4 = (int *)(local_86c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar5 = *piVar4 + 1;
      }
      if (iVar5 != 0) goto LAB_004057b3;
    }
    FUN_004cc0bc();
    local_86c = 0;
  }
LAB_004057b3:
  iVar5 = (**(code **)(local_858 + 0x14))();
  if (iVar5 == 1) {
    FUN_0047784c((int)local_884,(int)local_864);
    FUN_00406984((int)param_1,local_87c);
    if (local_87c != (uint *)0x0) {
      if (local_87c[-3] != 0xffffffff) {
        puVar2 = local_87c + -3;
        if (puVar2 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else if (puVar2 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else {
          *puVar2 = *puVar2 - 1;
          iVar5 = *puVar2 + 1;
        }
        if (iVar5 != 0) goto LAB_004058b0;
      }
      FUN_004cc0bc();
      local_87c = (uint *)0x0;
    }
  }
LAB_004058b0:
  FUN_004774f0(local_864,2);
LAB_00405bfe:
  *in_FS_OFFSET = local_8a8;
  return;
}

