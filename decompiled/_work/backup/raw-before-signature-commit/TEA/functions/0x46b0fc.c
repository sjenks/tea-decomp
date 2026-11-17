// name: FUN_0046b0fc
// address: 0x46b0fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0046b0fc(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_88 [17];
  int local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_c;
  
  FUN_004dce64(0x4fda74);
  FUN_00485614(local_88,(int *)param_1[0x85],'\x01',0xf800003f);
  uVar3 = 1;
  if ((int)param_2 < 0x31bb) {
    if (param_2 == 0x31ba) {
LAB_0046b1b0:
      if (param_2 == 0x31ba) {
        iVar1 = 1;
      }
      else {
        iVar1 = -1;
      }
      uVar3 = FUN_00467044(param_1[0xe],*(int *)(*param_1 + 0x14),iVar1,1);
      goto LAB_0046b2d8;
    }
    if (param_2 == 0x1d4c) {
      (**(code **)(*(int *)(param_1[0x85] + 0xc) + 0x34))();
      uVar3 = (uint)(local_3c < local_40);
      goto LAB_0046b2d8;
    }
    if (param_2 == 0x316a) {
      uVar3 = (uint)(1 < (uint)param_1[0x22]);
      goto LAB_0046b2d8;
    }
    if (param_2 == 0x3174) {
      iVar1 = param_1[0x1c] - param_1[0x1b];
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      uVar3 = (uint)((uint)param_1[0x22] < (uint)(iVar1 >> 4));
      goto LAB_0046b2d8;
    }
  }
  else {
    if (param_2 == 0x31c4) goto LAB_0046b1b0;
    if ((param_2 == 0x3642) || (param_2 == 0x364c)) goto LAB_0046b2d8;
  }
  if ((param_2 != 0x1d56) && ((param_2 < 0x317e || (0x3187 < param_2)))) {
    local_28 = 8;
    (**(code **)(param_1[3] + 0xb0))();
    uVar3 = (uint)(*(int *)(local_c + -4) != 0);
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar2 = (int *)(local_c + -0xc);
        if (piVar2 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (piVar2 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar1 = *piVar2 + 1;
        }
        if (iVar1 != 0) goto LAB_0046b2d8;
      }
      local_44 = local_c + -0xc;
      FUN_004cc0bc();
    }
  }
LAB_0046b2d8:
  *in_FS_OFFSET = local_38;
  return uVar3;
}

