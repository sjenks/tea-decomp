// name: FUN_00414708
// address: 0x414708
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00414708(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffeec;
  undefined4 uVar8;
  undefined4 local_38;
  undefined1 local_14 [8];
  byte *local_c;
  
  FUN_004dce64(0x4ed7f8);
  iVar2 = param_1;
  if (param_1 == param_2) {
LAB_004149c2:
    *in_FS_OFFSET = local_38;
    return;
  }
joined_r0x00414733:
  do {
    iVar5 = iVar2 + 0x10;
    if (iVar5 == param_2) goto LAB_004149c2;
    local_c = (byte *)0x0;
    iVar3 = *(int *)(*(int *)(iVar2 + 0x18) + -0xc);
    if (iVar3 == -1 || iVar3 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(iVar2 + 0x18) + -4);
      piVar4 = FUN_004cf7b0(local_14,uVar1,uVar1);
      local_c = (byte *)(piVar4 + 3);
      FUN_004dc7d4((undefined4 *)local_c,*(undefined4 **)(iVar2 + 0x18),uVar1);
    }
    else {
      local_c = *(byte **)(iVar2 + 0x18);
      pbVar6 = local_c + -0xc;
      if (pbVar6 != (byte *)&DAT_00513d58) {
        *(int *)pbVar6 = *(int *)pbVar6 + 1;
      }
    }
    uVar8 = 0x414811;
    iVar3 = FUN_0043c624(local_c,*(int *)(local_c + -4),*(byte **)(param_1 + 8),
                         *(int *)(*(int *)(param_1 + 8) + -4));
    if (iVar3 < 0) {
      FUN_0040e070(param_1,iVar5,iVar2 + 0x20);
      FUN_004cf384(param_1,(int)local_14);
    }
    else {
      if (*(int *)(local_c + -0xc) == -1 || *(int *)(local_c + -0xc) + 1 < 0) {
        uVar1 = *(uint *)(local_c + -4);
        piVar4 = FUN_004cf7b0(&stack0xfffffeec,uVar1,uVar1);
        pbVar6 = (byte *)(piVar4 + 3);
        FUN_004dc7d4((undefined4 *)pbVar6,(undefined4 *)local_c,uVar1);
      }
      else {
        pbVar7 = local_c + -0xc;
        pbVar6 = local_c;
        if (pbVar7 != (byte *)&DAT_00513d58) {
          *(int *)pbVar7 = *(int *)pbVar7 + 1;
        }
      }
      FUN_004149d4(iVar5,in_stack_fffffeec,uVar8,pbVar6);
    }
    iVar2 = iVar5;
    if (local_c != (byte *)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        pbVar6 = local_c + -0xc;
        if (pbVar6 == (byte *)&DAT_00513d58) {
          iVar5 = 1;
        }
        else if (pbVar6 == (byte *)&DAT_00513d58) {
          iVar5 = 1;
        }
        else {
          *(int *)pbVar6 = *(int *)pbVar6 + -1;
          iVar5 = *(int *)pbVar6 + 1;
        }
        if (iVar5 != 0) goto joined_r0x00414733;
      }
      FUN_004cc0bc();
    }
  } while( true );
}

