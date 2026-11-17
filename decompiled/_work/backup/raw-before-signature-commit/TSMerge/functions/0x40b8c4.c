// name: FUN_0040b8c4
// address: 0x40b8c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0040b9e9) */

int __cdecl FUN_0040b8c4(int param_1,int param_2,int param_3)

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
  
  FUN_00455f04(0x463324);
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar3 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar3 == -1 || iVar3 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(param_2 + 8) + -4);
      piVar4 = FUN_0044d2a4(param_1,uVar1,uVar1);
      *(int **)(param_1 + 8) = piVar4 + 3;
      FUN_004559d0(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_2 + 8),uVar1);
    }
    else {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar4 != &DAT_00471d5c) {
        *piVar4 = *piVar4 + 1;
      }
    }
    *in_FS_OFFSET = local_38;
    return param_1;
  }
  local_c = (undefined4 *)&DAT_00471d68;
  for (local_64 = *(byte **)(param_2 + 8);
      (byte *)(*(int *)(param_2 + 8) + *(int *)(*(int *)(param_2 + 8) + -4)) != local_64;
      local_64 = local_64 + 1) {
    if (*local_64 < 0x80) {
      if (param_3 == 1) {
        FUN_00451d38((int)local_14,local_c[-1],0,1,*local_64);
      }
      else if (param_3 == 2) {
        iVar3 = FUN_00458dbc((int)(char)*local_64);
        if (iVar3 != 0) {
          FUN_00451d38((int)local_14,local_c[-1],0,1,*local_64);
        }
      }
      else if (param_3 == 3) {
        iVar3 = FUN_00458dbc((int)(char)*local_64);
        if (iVar3 != 0) {
          uVar1 = FUN_0045aa80((int)(char)*local_64);
          FUN_00451d38((int)local_14,local_c[-1],0,1,(char)uVar1);
        }
      }
      else if ((param_3 == 4) && (iVar3 = FUN_00458dbc((int)(char)*local_64), iVar3 != 0)) {
        uVar1 = FUN_0045aad4((int)(char)*local_64);
        FUN_00451d38((int)local_14,local_c[-1],0,1,(char)uVar1);
      }
    }
    else {
      puVar5 = (uint *)(&PTR_FUN_00462da0)[*local_64];
      if (puVar5 != (uint *)0x0) {
        if ((param_3 == 1) || (param_3 == 2)) {
          uVar1 = local_c[-1];
          pcVar2 = FUN_00455bf0(puVar5);
          FUN_0044d5c8((int)local_14,uVar1,0,(uint)puVar5,(uint)pcVar2,0,(uint)pcVar2);
        }
        else {
          for (; (char)*puVar5 != '\0'; puVar5 = (uint *)((int)puVar5 + 1)) {
            if (param_3 == 3) {
              uVar1 = FUN_0045aa80((int)(char)*puVar5);
              FUN_00451d38((int)local_14,local_c[-1],0,1,(char)uVar1);
            }
            else {
              uVar1 = FUN_0045aad4((int)(char)*puVar5);
              FUN_00451d38((int)local_14,local_c[-1],0,1,(char)uVar1);
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar4 = FUN_0044d2a4(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar4 + 3;
    FUN_004559d0(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00471d5c) {
      *piVar4 = *piVar4 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0040bd4f;
    }
    FUN_0044b2cc();
  }
LAB_0040bd4f:
  *in_FS_OFFSET = local_38;
  return param_1;
}

