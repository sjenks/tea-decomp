// name: FUN_0040edbc
// address: 0x40edbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0040eee1) */

int __cdecl FUN_0040edbc(int param_1,int param_2,char param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  byte *local_64;
  undefined4 local_38;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_0041f3fc(0x42d364);
  if (param_3 == '\0') {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar3 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar3 == -1 || iVar3 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(param_2 + 8) + -4);
      piVar4 = FUN_00416ffc(param_1,uVar1,uVar1);
      *(int **)(param_1 + 8) = piVar4 + 3;
      FUN_0041eddc(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_2 + 8),uVar1);
    }
    else {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar4 != &DAT_0042fab4) {
        *piVar4 = *piVar4 + 1;
      }
    }
    *in_FS_OFFSET = local_38;
    return param_1;
  }
  local_c = (undefined4 *)&DAT_0042fac0;
  for (local_64 = *(byte **)(param_2 + 8);
      (byte *)(*(int *)(param_2 + 8) + *(int *)(*(int *)(param_2 + 8) + -4)) != local_64;
      local_64 = local_64 + 1) {
    if (*local_64 < 0x80) {
      if (param_3 == '\x01') {
        FUN_0041ae90((int)local_14,local_c[-1],0,1,*local_64);
      }
      else if (param_3 == '\x02') {
        iVar3 = FUN_00422574((int)(char)*local_64);
        if (iVar3 != 0) {
          FUN_0041ae90((int)local_14,local_c[-1],0,1,*local_64);
        }
      }
      else if (param_3 == '\x03') {
        iVar3 = FUN_00422574((int)(char)*local_64);
        if (iVar3 != 0) {
          uVar1 = FUN_00424238((int)(char)*local_64);
          FUN_0041ae90((int)local_14,local_c[-1],0,1,(char)uVar1);
        }
      }
      else if ((param_3 == '\x04') && (iVar3 = FUN_00422574((int)(char)*local_64), iVar3 != 0)) {
        uVar1 = FUN_0042428c((int)(char)*local_64);
        FUN_0041ae90((int)local_14,local_c[-1],0,1,(char)uVar1);
      }
    }
    else {
      puVar5 = *(uint **)(&DAT_0042ce84 + (uint)*local_64 * 4);
      if (puVar5 != (uint *)0x0) {
        if ((param_3 == '\x01') || (param_3 == '\x02')) {
          uVar1 = local_c[-1];
          pcVar2 = FUN_0041ef80(puVar5);
          FUN_00417320((int)local_14,uVar1,0,(uint)puVar5,(uint)pcVar2,0,(uint)pcVar2);
        }
        else {
          for (; (char)*puVar5 != '\0'; puVar5 = (uint *)((int)puVar5 + 1)) {
            if (param_3 == '\x03') {
              uVar1 = FUN_00424238((int)(char)*puVar5);
              FUN_0041ae90((int)local_14,local_c[-1],0,1,(char)uVar1);
            }
            else {
              uVar1 = FUN_0042428c((int)(char)*puVar5);
              FUN_0041ae90((int)local_14,local_c[-1],0,1,(char)uVar1);
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar4 = FUN_00416ffc(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar4 + 3;
    FUN_0041eddc(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_0042fab4) {
      *piVar4 = *piVar4 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0040f251;
    }
    FUN_00414f78();
  }
LAB_0040f251:
  *in_FS_OFFSET = local_38;
  return param_1;
}

