// name: FUN_0046fb4c
// address: 0x46fb4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0046fdf7) */
/* WARNING: Removing unreachable block (ram,0x0046fce5) */
/* WARNING: Removing unreachable block (ram,0x004702e1) */
/* WARNING: Removing unreachable block (ram,0x004703e5) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffe6c : 0x004702ef */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0046fb4c(int param_1,int param_2,undefined *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffc08;
  undefined4 in_stack_fffffc0c;
  undefined4 in_stack_fffffc14;
  undefined4 uVar9;
  undefined4 in_stack_fffffc1c;
  undefined4 uVar10;
  undefined1 auStack_3a0 [4];
  undefined4 uStack_39c;
  undefined4 local_b8;
  undefined **local_94;
  undefined **local_90;
  undefined1 local_8c [8];
  int *local_84;
  undefined4 local_7c;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_5c;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_3c;
  undefined1 local_34 [8];
  int *local_2c;
  undefined1 local_24 [8];
  int *local_1c;
  undefined4 local_14;
  undefined **local_c;
  undefined **local_8;
  
  FUN_004dce64(0x4fe6f0);
  iVar7 = param_1;
  if (param_1 != param_2) {
joined_r0x0046fb8c:
    do {
      iVar8 = iVar7 + 0x80;
      if (iVar8 == param_2) break;
      local_84 = (int *)0x0;
      iVar3 = *(int *)(*(int *)(iVar7 + 0x88) + -0xc);
      if (iVar3 == -1 || iVar3 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar7 + 0x88) + -4);
        local_84 = FUN_004cf7b0(local_8c,uVar1,uVar1);
        local_84 = local_84 + 3;
        FUN_004dc7d4(local_84,*(undefined4 **)(iVar7 + 0x88),uVar1);
      }
      else {
        local_84 = *(int **)(iVar7 + 0x88);
        piVar4 = local_84 + -3;
        if (piVar4 != &DAT_00513d58) {
          *piVar4 = *piVar4 + 1;
        }
      }
      local_7c = *(undefined4 *)(iVar7 + 0x90);
      local_70 = 0;
      local_6c = 0;
      local_5c = 0;
      local_74 = 0x40;
      iVar3 = FUN_004cc0f0();
      if (iVar3 == 0) {
        local_8 = &PTR_FUN_004eac74;
        uStack_39c = 0x46fd79;
        FUN_004e7cc4((uint *)&DAT_004040dc,&local_8,0,&LAB_00404134,1,0,0,0);
      }
      local_70 = iVar3;
      local_6c = FUN_0040a988(*(int *)(iVar7 + 0x9c),*(int *)(iVar7 + 0xa0),iVar3);
      local_50 = 0;
      local_4c = 0;
      local_3c = 0;
      local_54 = 0x40;
      local_5c = local_6c;
      iVar3 = FUN_004cc0f0();
      if (iVar3 == 0) {
        local_c = &PTR_FUN_004eac74;
        uStack_39c = 0x46fe8b;
        FUN_004e7cc4((uint *)&DAT_004040dc,&local_c,0,&LAB_00404134,1,0,0,0);
      }
      local_50 = iVar3;
      local_4c = FUN_0040a988(*(int *)(iVar7 + 0xbc),*(int *)(iVar7 + 0xc0),iVar3);
      local_2c = (int *)0x0;
      iVar3 = *(int *)(*(int *)(iVar7 + 0xe0) + -0xc);
      local_3c = local_4c;
      if (iVar3 == -1 || iVar3 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar7 + 0xe0) + -4);
        local_2c = FUN_004cf7b0(local_34,uVar1,uVar1);
        local_2c = local_2c + 3;
        FUN_004dc7d4(local_2c,*(undefined4 **)(iVar7 + 0xe0),uVar1);
      }
      else {
        local_2c = *(int **)(iVar7 + 0xe0);
        piVar4 = local_2c + -3;
        if (piVar4 != &DAT_00513d58) {
          *piVar4 = *piVar4 + 1;
        }
      }
      local_1c = (int *)0x0;
      iVar3 = *(int *)(*(int *)(iVar7 + 0xf0) + -0xc);
      if (iVar3 == -1 || iVar3 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar7 + 0xf0) + -4);
        local_1c = FUN_004cf7b0(local_24,uVar1,uVar1);
        local_1c = local_1c + 3;
        FUN_004dc7d4(local_1c,*(undefined4 **)(iVar7 + 0xf0),uVar1);
      }
      else {
        local_1c = *(int **)(iVar7 + 0xf0);
        piVar4 = local_1c + -3;
        if (piVar4 != &DAT_00513d58) {
          *piVar4 = *piVar4 + 1;
        }
      }
      local_14 = *(undefined4 *)(iVar7 + 0xf8);
      cVar2 = (*(code *)param_3)();
      if (cVar2 == '\0') {
        if (local_84[-3] == -1 || local_84[-3] + 1 < 0) {
          uVar1 = local_84[-1];
          piVar4 = FUN_004cf7b0(&stack0xfffffc08,uVar1,uVar1);
          piVar4 = piVar4 + 3;
          FUN_004dc7d4(piVar4,local_84,uVar1);
        }
        else {
          piVar6 = local_84 + -3;
          piVar4 = local_84;
          if (piVar6 != &DAT_00513d58) {
            *piVar6 = *piVar6 + 1;
          }
        }
        uVar10 = 0x40;
        uVar9 = local_7c;
        iVar7 = FUN_004cc0f0();
        if (iVar7 == 0) {
          local_90 = &PTR_FUN_004eac74;
          FUN_004e7cc4((uint *)&DAT_004040dc,&local_90,0,&LAB_00404134,1,0,0,0);
        }
        iVar3 = FUN_0040a988(local_70,local_6c,iVar7);
        iVar5 = FUN_004cc0f0();
        if (iVar5 == 0) {
          local_94 = &PTR_FUN_004eac74;
          FUN_004e7cc4((uint *)&DAT_004040dc,&local_94,0,&LAB_00404134,1,0,0,0);
        }
        FUN_0040a988(local_50,local_4c,iVar5);
        if (local_2c[-3] == -1 || local_2c[-3] + 1 < 0) {
          uVar1 = local_2c[-1];
          piVar6 = FUN_004cf7b0(auStack_3a0,uVar1,uVar1);
          FUN_004dc7d4(piVar6 + 3,local_2c,uVar1);
        }
        else {
          piVar6 = local_2c + -3;
          if (piVar6 != &DAT_00513d58) {
            *piVar6 = *piVar6 + 1;
          }
        }
        if (local_1c[-3] == -1 || local_1c[-3] + 1 < 0) {
          uVar1 = local_1c[-1];
          piVar6 = FUN_004cf7b0(&stack0xfffffc70,uVar1,uVar1);
          FUN_004dc7d4(piVar6 + 3,local_1c,uVar1);
        }
        else {
          piVar6 = local_1c + -3;
          if (piVar6 != &DAT_00513d58) {
            *piVar6 = *piVar6 + 1;
          }
        }
        FUN_0047094c(iVar8,in_stack_fffffc08,in_stack_fffffc0c,(int)piVar4,in_stack_fffffc14,uVar9,
                     in_stack_fffffc1c,uVar10,iVar7,iVar3);
      }
      else {
        FUN_0040ab04(param_1,iVar8,iVar7 + 0x100);
        FUN_004cf384(param_1,(int)local_8c);
        FUN_0040ab88(param_1 + 0x18,(int)&local_74);
        FUN_0040ab88(param_1 + 0x38,(int)&local_54);
        FUN_004cf384(param_1 + 0x58,(int)local_34);
        FUN_004cf384(param_1 + 0x68,(int)local_24);
        *(undefined4 *)(param_1 + 0x10) = local_7c;
        *(undefined4 *)(param_1 + 0x78) = local_14;
      }
      if (local_1c != (int *)0x0) {
        if (local_1c[-3] != -1) {
          piVar4 = local_1c + -3;
          if (piVar4 == &DAT_00513d58) {
            iVar7 = 1;
          }
          else if (piVar4 == &DAT_00513d58) {
            iVar7 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar7 = *piVar4 + 1;
          }
          if (iVar7 != 0) goto LAB_004707a4;
        }
        FUN_004cc0bc();
        local_1c = (int *)0x0;
      }
LAB_004707a4:
      if (local_2c != (int *)0x0) {
        if (local_2c[-3] != -1) {
          piVar4 = local_2c + -3;
          if (piVar4 == &DAT_00513d58) {
            iVar7 = 1;
          }
          else if (piVar4 == &DAT_00513d58) {
            iVar7 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar7 = *piVar4 + 1;
          }
          if (iVar7 != 0) goto LAB_0047083a;
        }
        FUN_004cc0bc();
        local_2c = (int *)0x0;
      }
LAB_0047083a:
      FUN_0040b4f0(&local_54,local_50,local_4c);
      FUN_004cc0bc();
      FUN_0040b4f0(&local_74,local_70,local_6c);
      FUN_004cc0bc();
      iVar7 = iVar8;
      if (local_84 != (int *)0x0) {
        if (local_84[-3] != -1) {
          piVar4 = local_84 + -3;
          if (piVar4 == &DAT_00513d58) {
            iVar8 = 1;
          }
          else if (piVar4 == &DAT_00513d58) {
            iVar8 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar8 = *piVar4 + 1;
          }
          if (iVar8 != 0) goto joined_r0x0046fb8c;
        }
        FUN_004cc0bc();
      }
    } while( true );
  }
  *in_FS_OFFSET = local_b8;
  return;
}

