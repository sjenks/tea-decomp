// name: FUN_00429abc
// address: 0x429abc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00429abc(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  CHAR local_160 [264];
  int local_58;
  undefined1 *local_54;
  undefined4 local_50;
  LPCSTR local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  LPCSTR local_c;
  
  FUN_00455f04(0x46a160);
  switch(param_2) {
  case 0:
    uVar2 = 0x7ff9;
    break;
  default:
    local_38 = 8;
    FUN_00444058((int)local_14,*(int *)(*param_1 + 0x70),0x7fd8);
    local_2c = local_2c + 1;
    wsprintfA(local_160,local_c,param_2);
    local_2c = local_2c + -1;
    if (local_c != (LPCSTR)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar3 = (int *)(local_c + -0xc);
        if (piVar3 == &DAT_00471d5c) {
          iVar1 = 1;
        }
        else if (piVar3 == &DAT_00471d5c) {
          iVar1 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar1 = *piVar3 + 1;
        }
        if (iVar1 != 0) goto LAB_00429c75;
      }
      local_4c = local_c + -0xc;
      FUN_0044b2cc();
      local_50 = 0;
      local_c = (LPCSTR)0x0;
      local_54 = local_14;
    }
LAB_00429c75:
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
    *in_FS_OFFSET = local_48;
    return;
  case 2:
    uVar2 = 0x7fcf;
    break;
  case 3:
    uVar2 = 0x7fce;
    break;
  case 5:
    uVar2 = 0x7fd1;
    break;
  case 8:
    uVar2 = 0x7ff9;
    break;
  case 0xb:
    uVar2 = 0x7fd0;
    break;
  case 0x1a:
    uVar2 = 0x7fd7;
    break;
  case 0x1b:
    uVar2 = 0x7fd2;
    break;
  case 0x1c:
    uVar2 = 0x7fd5;
    break;
  case 0x1d:
    uVar2 = 0x7fd4;
    break;
  case 0x1e:
    uVar2 = 0x7fd3;
    break;
  case 0x1f:
    uVar2 = 0x7fd6;
    break;
  case 0x20:
    uVar2 = 0x7fcf;
  }
  local_38 = 0x20;
  FUN_00444058((int)local_24,*(int *)(*param_1 + 0x70),uVar2);
  local_2c = local_2c + 1;
  (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
  local_2c = local_2c + -1;
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
      if (piVar3 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_00429d49;
    }
    local_58 = local_1c + -0xc;
    FUN_0044b2cc();
  }
LAB_00429d49:
  *in_FS_OFFSET = local_48;
  return;
}

