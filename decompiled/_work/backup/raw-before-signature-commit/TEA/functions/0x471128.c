// name: FUN_00471128
// address: 0x471128
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004712d9) */
/* WARNING: Removing unreachable block (ram,0x004713bf) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00471128(uint param_1,uint param_2,undefined4 param_3,undefined *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffde8;
  undefined4 in_stack_fffffdec;
  undefined1 auStack_1c0 [8];
  int *piStack_1b8;
  undefined1 auStack_1b0 [8];
  int *piStack_1a8;
  undefined4 local_30;
  undefined **local_c;
  undefined **local_8;
  
  FUN_004dce64(0x4fe914);
  while( true ) {
    iVar6 = param_2 - param_1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0x7f;
    }
    if (iVar6 >> 7 < 0x11) break;
    iVar6 = param_2 - param_1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0x7f;
    }
    iVar2 = iVar6 >> 8;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((iVar6 >> 7 & 1U) != 0);
    }
    uVar3 = iVar2 * 0x80 + param_1;
    cVar1 = (*(code *)param_4)();
    if (cVar1 == '\0') {
      cVar1 = (*(code *)param_4)();
      uVar7 = param_1;
      if ((cVar1 == '\0') && (cVar1 = (*(code *)param_4)(), uVar7 = uVar3, cVar1 != '\0')) {
        uVar7 = param_2 - 0x80;
      }
    }
    else {
      cVar1 = (*(code *)param_4)();
      uVar7 = uVar3;
      if ((cVar1 == '\0') && (cVar1 = (*(code *)param_4)(), uVar7 = param_1, cVar1 != '\0')) {
        uVar7 = param_2 - 0x80;
      }
    }
    iVar6 = *(int *)(*(int *)(uVar7 + 8) + -0xc);
    if (iVar6 == -1 || iVar6 + 1 < 0) {
      uVar3 = *(uint *)(*(int *)(uVar7 + 8) + -4);
      piVar5 = FUN_004cf7b0(&stack0xfffffde8,uVar3,uVar3);
      piVar5 = piVar5 + 3;
      FUN_004dc7d4(piVar5,*(undefined4 **)(uVar7 + 8),uVar3);
    }
    else {
      piVar5 = *(int **)(uVar7 + 8);
      piVar4 = piVar5 + -3;
      if (piVar4 != &DAT_00513d58) {
        *piVar4 = *piVar4 + 1;
      }
    }
    iVar6 = FUN_004cc0f0();
    if (iVar6 == 0) {
      local_8 = &PTR_FUN_004eac74;
      FUN_004e7cc4((uint *)&DAT_004040dc,&local_8,0,&LAB_00404134,1,0,0,0);
    }
    FUN_0040a988(*(int *)(uVar7 + 0x1c),*(int *)(uVar7 + 0x20),iVar6);
    iVar6 = FUN_004cc0f0();
    if (iVar6 == 0) {
      local_c = &PTR_FUN_004eac74;
      FUN_004e7cc4((uint *)&DAT_004040dc,&local_c,0,&LAB_00404134,1,0,0,0);
    }
    FUN_0040a988(*(int *)(uVar7 + 0x3c),*(int *)(uVar7 + 0x40),iVar6);
    piStack_1b8 = (int *)0x0;
    iVar6 = *(int *)(*(int *)(uVar7 + 0x60) + -0xc);
    if (iVar6 == -1 || iVar6 + 1 < 0) {
      uVar3 = *(uint *)(*(int *)(uVar7 + 0x60) + -4);
      piStack_1b8 = FUN_004cf7b0(auStack_1c0,uVar3,uVar3);
      piStack_1b8 = piStack_1b8 + 3;
      FUN_004dc7d4(piStack_1b8,*(undefined4 **)(uVar7 + 0x60),uVar3);
    }
    else {
      piStack_1b8 = *(int **)(uVar7 + 0x60);
      piVar4 = piStack_1b8 + -3;
      if (piVar4 != &DAT_00513d58) {
        *piVar4 = *piVar4 + 1;
      }
    }
    piStack_1a8 = (int *)0x0;
    iVar6 = *(int *)(*(int *)(uVar7 + 0x70) + -0xc);
    if (iVar6 == -1 || iVar6 + 1 < 0) {
      uVar3 = *(uint *)(*(int *)(uVar7 + 0x70) + -4);
      piStack_1a8 = FUN_004cf7b0(auStack_1b0,uVar3,uVar3);
      piStack_1a8 = piStack_1a8 + 3;
      FUN_004dc7d4(piStack_1a8,*(undefined4 **)(uVar7 + 0x70),uVar3);
    }
    else {
      piStack_1a8 = *(int **)(uVar7 + 0x70);
      piVar4 = piStack_1a8 + -3;
      if (piVar4 != &DAT_00513d58) {
        *piVar4 = *piVar4 + 1;
      }
    }
    uVar3 = FUN_004717cc(param_1,param_2,in_stack_fffffde8,in_stack_fffffdec,(int)piVar5);
    iVar6 = uVar3 - param_1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0x7f;
    }
    iVar2 = param_2 - uVar3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x7f;
    }
    if (iVar6 >> 7 < iVar2 >> 7) {
      piStack_1a8 = (int *)0x47179d;
      FUN_00471128(param_1,uVar3,0,param_4);
      param_1 = uVar3;
    }
    else {
      piStack_1a8 = (int *)0x471764;
      FUN_00471128(uVar3,param_2,0,param_4);
      param_2 = uVar3;
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

