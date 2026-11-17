// name: FUN_0046ccac
// address: 0x46ccac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0046ccac(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *in_FS_OFFSET;
  int local_58;
  int local_54;
  int local_4c;
  undefined4 local_48;
  undefined1 local_24 [8];
  byte *local_1c;
  undefined1 local_14 [8];
  byte *local_c;
  
  FUN_004dce64(0x4fdf20);
  FUN_004a76a8(**(int **)(param_1 + 0x214),0xb,0,0);
  local_4c = -1;
  iVar3 = *(int *)(param_1 + 0x6c) + (*(int *)(param_1 + 0x88) + -1) * 0x10;
  local_54 = 0;
  for (pbVar6 = *(byte **)(iVar3 + 8);
      pbVar6 < (byte *)(*(int *)(iVar3 + 8) + *(int *)(*(int *)(iVar3 + 8) + -4));
      pbVar6 = pbVar6 + 1) {
    if ((&DAT_004f50d8)[*pbVar6] != '\0') {
      local_54 = local_54 + 1;
    }
  }
  FUN_0041aacc((int)local_14,*(int **)(param_1 + 0x214));
  bVar1 = 0;
  local_58 = 0;
  for (pbVar6 = local_c; pbVar6 < local_c + *(int *)(local_c + -4); pbVar6 = pbVar6 + 1) {
    if (((&DAT_004f50d8)[*pbVar6] != '\0') && ((&DAT_004f50d8)[bVar1] == '\0')) {
      iVar4 = 1;
      pbVar5 = pbVar6;
      do {
        while( true ) {
          pbVar2 = pbVar5 + 1;
          if (local_c + *(int *)(local_c + -4) < pbVar2) goto LAB_0046cee6;
          if ((local_c + *(int *)(local_c + -4) <= pbVar2) || ((&DAT_004f50d8)[*pbVar2] == '\0'))
          break;
          iVar4 = iVar4 + 1;
          pbVar5 = pbVar2;
        }
        bVar1 = *pbVar5;
        pbVar5 = pbVar2;
      } while (((&DAT_004f50d8)[bVar1] == '\0') || (iVar4 < local_54));
      if (iVar4 == local_54) {
        FUN_004d1bdc((int)local_24,(uint)pbVar6,(int)pbVar2);
        iVar4 = FUN_0043c624(*(byte **)(iVar3 + 8),*(int *)(*(byte **)(iVar3 + 8) + -4),local_1c,
                             *(int *)(local_1c + -4));
        if ((iVar4 == 0) && (FUN_004722fc(param_1), local_4c < 0)) {
          local_4c = local_58;
        }
        if (local_1c != (byte *)0x0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            pbVar5 = local_1c + -0xc;
            if (pbVar5 == (byte *)&DAT_00513d58) {
              iVar4 = 1;
            }
            else if (pbVar5 == (byte *)&DAT_00513d58) {
              iVar4 = 1;
            }
            else {
              *(int *)pbVar5 = *(int *)pbVar5 + -1;
              iVar4 = *(int *)pbVar5 + 1;
            }
            if (iVar4 != 0) goto LAB_0046cee6;
          }
          FUN_004cc0bc();
          local_1c = (byte *)0x0;
        }
      }
    }
LAB_0046cee6:
    bVar1 = *pbVar6;
    if (bVar1 != 0xd) {
      local_58 = local_58 + 1;
    }
  }
  if (-1 < local_4c) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x214) + 0xc) + 0x3c))();
    FUN_004a76a8(**(int **)(param_1 + 0x214),0xb7,0,0);
  }
  FUN_004a76a8(**(int **)(param_1 + 0x214),0xb,1,0);
  (**(code **)(*(int *)(**(int **)(param_1 + 0x214) + 8) + 0x68))();
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      local_c = local_c + -0xc;
      if (local_c == (byte *)&DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_c == (byte *)&DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *(int *)local_c = *(int *)local_c + -1;
        iVar3 = *(int *)local_c + 1;
      }
      if (iVar3 != 0) goto LAB_0046cfea;
    }
    FUN_004cc0bc();
  }
LAB_0046cfea:
  *in_FS_OFFSET = local_48;
  return;
}

