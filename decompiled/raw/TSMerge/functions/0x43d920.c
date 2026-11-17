// name: FUN_0043d920
// address: 0x43d920
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0043d920(int *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  byte *local_1c;
  undefined1 local_14 [8];
  byte *local_c;
  
  FUN_00455f04(0x46de3c);
  do {
    puVar2 = FUN_00410934();
    if (((*(int *)(puVar2 + 0x10) == 1) || (puVar2 = FUN_00410934(), *(int *)(puVar2 + 0x10) == 0))
       && (*(int *)(*param_1 + 0x6c) != 0)) {
      FUN_004217e8((int *)(*(int *)(*param_1 + 0x6c) + 0x11));
    }
    iVar3 = (**(code **)(param_1[3] + 0x40))();
    if (iVar3 < 0) {
      if ((*(byte *)(param_1 + 7) & 0x18) == 0) {
        if ((*(byte *)(param_1 + 7) & 0x20) != 0) break;
      }
      else {
        FUN_00444058((int)local_24,*(int *)(*param_1 + 0x70),0x7f1c);
        local_c = (byte *)0x0;
        if (*(int *)(local_1c + -0xc) == -1 || *(int *)(local_1c + -0xc) + 1 < 0) {
          uVar1 = *(uint *)(local_1c + -4);
          piVar4 = FUN_0044d2a4(local_14,uVar1,uVar1);
          local_c = (byte *)(piVar4 + 3);
          FUN_004559d0((undefined4 *)local_c,(undefined4 *)local_1c,uVar1);
        }
        else {
          local_c = local_1c;
          pbVar6 = local_1c + -0xc;
          if (pbVar6 != (byte *)&DAT_00471d5c) {
            *(int *)pbVar6 = *(int *)pbVar6 + 1;
          }
        }
        if (local_1c != (byte *)0x0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            pbVar6 = local_1c + -0xc;
            if (pbVar6 == (byte *)&DAT_00471d5c) {
              iVar3 = 1;
            }
            else if (pbVar6 == (byte *)&DAT_00471d5c) {
              iVar3 = 1;
            }
            else {
              *(int *)pbVar6 = *(int *)pbVar6 + -1;
              iVar3 = *(int *)pbVar6 + 1;
            }
            if (iVar3 != 0) goto LAB_0043db0f;
          }
          FUN_0044b2cc();
          local_1c = (byte *)0x0;
        }
LAB_0043db0f:
        FUN_00455bf0((uint *)param_1[10]);
        puVar5 = (undefined1 *)FUN_0044b390();
        FUN_00457ef4(puVar5,local_c);
        (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
        FUN_0044b2dc();
        if (local_c != (byte *)0x0) {
          if (*(int *)(local_c + -0xc) != -1) {
            pbVar6 = local_c + -0xc;
            if (pbVar6 == (byte *)&DAT_00471d5c) {
              iVar3 = 1;
            }
            else if (pbVar6 == (byte *)&DAT_00471d5c) {
              iVar3 = 1;
            }
            else {
              *(int *)pbVar6 = *(int *)pbVar6 + -1;
              iVar3 = *(int *)pbVar6 + 1;
            }
            if (iVar3 != 0) goto LAB_0043dbe4;
          }
          FUN_0044b2cc();
          local_c = (byte *)0x0;
        }
      }
    }
    else if ((*(byte *)(param_1 + 7) & 0x30) != 0) {
      FUN_0042d1a4(*param_1,0xc2,0,param_1[0xb]);
    }
LAB_0043dbe4:
  } while ((*(byte *)(param_1 + 7) & 0x20) != 0);
  *in_FS_OFFSET = local_48;
  return;
}

