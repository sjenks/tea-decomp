// name: FUN_00470bec
// address: 0x470bec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00470d12) */
/* WARNING: Removing unreachable block (ram,0x00470de3) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff9c : 0x00470d1a */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00470bec(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffe10;
  undefined4 in_stack_fffffe14;
  undefined4 in_stack_fffffe1c;
  undefined4 uVar7;
  undefined4 in_stack_fffffe24;
  undefined4 uVar8;
  undefined1 local_198 [8];
  int *local_190;
  undefined1 local_188 [8];
  int *local_180;
  undefined4 local_178;
  undefined4 uStack_170;
  undefined4 local_30;
  undefined **local_c;
  undefined **local_8;
  
  uStack_170 = 0x470c02;
  FUN_004dce64(0x4fe874);
  for (; param_1 != param_2; param_1 = param_1 + 0x80) {
    uStack_170 = param_4;
    iVar3 = *(int *)(*(int *)(param_1 + 8) + -0xc);
    if (iVar3 == -1 || iVar3 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 8) + -4);
      piVar2 = FUN_004cf7b0(&stack0xfffffe10,uVar1,uVar1);
      piVar2 = piVar2 + 3;
      FUN_004dc7d4(piVar2,*(undefined4 **)(param_1 + 8),uVar1);
    }
    else {
      piVar2 = *(int **)(param_1 + 8);
      piVar6 = piVar2 + -3;
      if (piVar6 != &DAT_00513d58) {
        *piVar6 = *piVar6 + 1;
      }
    }
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    uVar8 = 0x40;
    iVar3 = FUN_004cc0f0();
    if (iVar3 == 0) {
      local_8 = &PTR_FUN_004eac74;
      FUN_004e7cc4((uint *)&DAT_004040dc,&local_8,0,&LAB_00404134,1,0,0,0);
    }
    iVar4 = FUN_0040a988(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x20),iVar3);
    iVar5 = FUN_004cc0f0();
    if (iVar5 == 0) {
      local_c = &PTR_FUN_004eac74;
      FUN_004e7cc4((uint *)&DAT_004040dc,&local_c,0,&LAB_00404134,1,0,0,0);
    }
    FUN_0040a988(*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x40),iVar5);
    local_190 = (int *)0x0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x60) + -0xc);
    if (iVar5 == -1 || iVar5 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x60) + -4);
      local_190 = FUN_004cf7b0(local_198,uVar1,uVar1);
      local_190 = local_190 + 3;
      FUN_004dc7d4(local_190,*(undefined4 **)(param_1 + 0x60),uVar1);
    }
    else {
      local_190 = *(int **)(param_1 + 0x60);
      piVar6 = local_190 + -3;
      if (piVar6 != &DAT_00513d58) {
        *piVar6 = *piVar6 + 1;
      }
    }
    local_180 = (int *)0x0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x70) + -0xc);
    if (iVar5 == -1 || iVar5 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x70) + -4);
      local_180 = FUN_004cf7b0(local_188,uVar1,uVar1);
      local_180 = local_180 + 3;
      FUN_004dc7d4(local_180,*(undefined4 **)(param_1 + 0x70),uVar1);
    }
    else {
      local_180 = *(int **)(param_1 + 0x70);
      piVar6 = local_180 + -3;
      if (piVar6 != &DAT_00513d58) {
        *piVar6 = *piVar6 + 1;
      }
    }
    local_178 = *(undefined4 *)(param_1 + 0x78);
    FUN_0047094c(param_1,in_stack_fffffe10,in_stack_fffffe14,(int)piVar2,in_stack_fffffe1c,uVar7,
                 in_stack_fffffe24,uVar8,iVar3,iVar4);
  }
  *in_FS_OFFSET = local_30;
  return;
}

