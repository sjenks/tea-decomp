// name: FUN_0040a094
// address: 0x40a094
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0040a094(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  undefined *puVar9;
  uint in_stack_fffffef4;
  undefined4 in_stack_fffffef8;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined4 local_3c;
  undefined4 local_18;
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_00455f04(0x462c10);
  iVar2 = param_1;
  if (param_1 == param_2) {
LAB_0040a37f:
    *in_FS_OFFSET = local_3c;
    return;
  }
joined_r0x0040a0bf:
  do {
    iVar6 = iVar2 + 0x10;
    if (iVar6 == param_2) goto LAB_0040a37f;
    local_c = (int *)0x0;
    iVar4 = *(int *)(*(int *)(iVar2 + 0x18) + -0xc);
    if (iVar4 == -1 || iVar4 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(iVar2 + 0x18) + -4);
      local_c = FUN_0044d2a4(local_14,uVar1,uVar1);
      local_c = local_c + 3;
      in_stack_fffffef8 = 0x40a182;
      FUN_004559d0(local_c,*(undefined4 **)(iVar2 + 0x18),uVar1);
    }
    else {
      local_c = *(int **)(iVar2 + 0x18);
      piVar5 = local_c + -3;
      if (piVar5 != &DAT_00471d5c) {
        *piVar5 = *piVar5 + 1;
      }
    }
    cVar3 = (**(code **)*param_3)();
    if (cVar3 == '\0') {
      uVar11 = 0;
      uVar10 = 0;
      in_stack_fffffef8 = 0;
      in_stack_fffffef4 = 1;
      puVar9 = &LAB_00409830;
      uVar8 = 0;
      FUN_00409794(&local_18);
      FUN_0045ed74((uint *)&DAT_004097d4,&local_18,uVar8,puVar9,in_stack_fffffef4,in_stack_fffffef8,
                   uVar10,uVar11);
    }
    puVar12 = local_14;
    iVar4 = FUN_00405984((int)puVar12,param_1);
    if (iVar4 < 1) {
      puVar13 = param_3;
      if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
        uVar1 = local_c[-1];
        piVar5 = FUN_0044d2a4(&stack0xfffffef4,uVar1,uVar1);
        piVar5 = piVar5 + 3;
        FUN_004559d0(piVar5,local_c,uVar1);
      }
      else {
        piVar7 = local_c + -3;
        piVar5 = local_c;
        if (piVar7 != &DAT_00471d5c) {
          *piVar7 = *piVar7 + 1;
        }
      }
      FUN_0040a390(iVar6,in_stack_fffffef4,in_stack_fffffef8,(int)piVar5,puVar12,puVar13);
    }
    else {
      in_stack_fffffef8 = 0x40a1ef;
      FUN_004068fc(param_1,iVar6,iVar2 + 0x20);
      FUN_0044ce78(param_1,(int)local_14);
    }
    iVar2 = iVar6;
    if (local_c != (int *)0x0) {
      if (local_c[-3] != -1) {
        piVar5 = local_c + -3;
        if (piVar5 == &DAT_00471d5c) {
          iVar6 = 1;
        }
        else if (piVar5 == &DAT_00471d5c) {
          iVar6 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar6 = *piVar5 + 1;
        }
        if (iVar6 != 0) goto joined_r0x0040a0bf;
      }
      FUN_0044b2cc();
    }
  } while( true );
}

