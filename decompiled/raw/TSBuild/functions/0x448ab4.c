// name: FUN_00448ab4
// address: 0x448ab4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00448ab4(int *param_1)

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
  
  FUN_00467ba8(0x481c18);
  do {
    puVar2 = FUN_0041b958();
    if (((*(int *)(puVar2 + 0x10) == 1) || (puVar2 = FUN_0041b958(), *(int *)(puVar2 + 0x10) == 0))
       && (*(int *)(*param_1 + 0x6c) != 0)) {
      FUN_0042c95c((int *)(*(int *)(*param_1 + 0x6c) + 0x11));
    }
    iVar3 = (**(code **)(param_1[3] + 0x40))();
    if (iVar3 < 0) {
      if ((*(byte *)(param_1 + 7) & 0x18) == 0) {
        if ((*(byte *)(param_1 + 7) & 0x20) != 0) break;
      }
      else {
        FUN_0044f1ec((int)local_24,*(int *)(*param_1 + 0x70),0x7f1c);
        local_c = (byte *)0x0;
        if (*(int *)(local_1c + -0xc) == -1 || *(int *)(local_1c + -0xc) + 1 < 0) {
          uVar1 = *(uint *)(local_1c + -4);
          piVar4 = FUN_00459f00(local_14,uVar1,uVar1);
          local_c = (byte *)(piVar4 + 3);
          FUN_00467580((undefined4 *)local_c,(undefined4 *)local_1c,uVar1);
        }
        else {
          local_c = local_1c;
          pbVar6 = local_1c + -0xc;
          if (pbVar6 != (byte *)&DAT_00485bcc) {
            *(int *)pbVar6 = *(int *)pbVar6 + 1;
          }
        }
        if (local_1c != (byte *)0x0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            pbVar6 = local_1c + -0xc;
            if (pbVar6 == (byte *)&DAT_00485bcc) {
              iVar3 = 1;
            }
            else if (pbVar6 == (byte *)&DAT_00485bcc) {
              iVar3 = 1;
            }
            else {
              *(int *)pbVar6 = *(int *)pbVar6 + -1;
              iVar3 = *(int *)pbVar6 + 1;
            }
            if (iVar3 != 0) goto LAB_00448ca3;
          }
          FUN_0045680c();
          local_1c = (byte *)0x0;
        }
LAB_00448ca3:
        FUN_004677a0((uint *)param_1[10]);
        puVar5 = (undefined1 *)FUN_004568d0();
        FUN_0046a5c8(puVar5,local_c);
        (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
        FUN_0045681c();
        if (local_c != (byte *)0x0) {
          if (*(int *)(local_c + -0xc) != -1) {
            pbVar6 = local_c + -0xc;
            if (pbVar6 == (byte *)&DAT_00485bcc) {
              iVar3 = 1;
            }
            else if (pbVar6 == (byte *)&DAT_00485bcc) {
              iVar3 = 1;
            }
            else {
              *(int *)pbVar6 = *(int *)pbVar6 + -1;
              iVar3 = *(int *)pbVar6 + 1;
            }
            if (iVar3 != 0) goto LAB_00448d78;
          }
          FUN_0045680c();
          local_c = (byte *)0x0;
        }
      }
    }
    else if ((*(byte *)(param_1 + 7) & 0x30) != 0) {
      FUN_00438338(*param_1,0xc2,0,param_1[0xb]);
    }
LAB_00448d78:
  } while ((*(byte *)(param_1 + 7) & 0x20) != 0);
  *in_FS_OFFSET = local_48;
  return;
}

