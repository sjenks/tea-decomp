// name: FUN_00465a80
// address: 0x465a80
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00465c66) */
/* WARNING: Removing unreachable block (ram,0x00465d78) */
/* WARNING: Removing unreachable block (ram,0x00465d18) */
/* WARNING: Removing unreachable block (ram,0x00465d6b) */
/* WARNING: Removing unreachable block (ram,0x00465e21) */
/* WARNING: Removing unreachable block (ram,0x00465e5a) */
/* WARNING: Removing unreachable block (ram,0x00465e68) */
/* WARNING: Removing unreachable block (ram,0x00465e8f) */
/* WARNING: Removing unreachable block (ram,0x00465e79) */
/* WARNING: Removing unreachable block (ram,0x00465e88) */
/* WARNING: Removing unreachable block (ram,0x00465e81) */
/* WARNING: Removing unreachable block (ram,0x00465e94) */
/* WARNING: Removing unreachable block (ram,0x00465e98) */
/* WARNING: Removing unreachable block (ram,0x00465ef2) */
/* WARNING: Removing unreachable block (ram,0x00465f35) */
/* WARNING: Removing unreachable block (ram,0x00466047) */
/* WARNING: Removing unreachable block (ram,0x00465fe7) */
/* WARNING: Removing unreachable block (ram,0x0046603a) */
/* WARNING: Removing unreachable block (ram,0x004660f0) */
/* WARNING: Removing unreachable block (ram,0x00466129) */
/* WARNING: Removing unreachable block (ram,0x00466137) */
/* WARNING: Removing unreachable block (ram,0x0046615e) */
/* WARNING: Removing unreachable block (ram,0x00466148) */
/* WARNING: Removing unreachable block (ram,0x00466157) */
/* WARNING: Removing unreachable block (ram,0x00466150) */
/* WARNING: Removing unreachable block (ram,0x00466163) */
/* WARNING: Removing unreachable block (ram,0x00466167) */
/* WARNING: Removing unreachable block (ram,0x004661c1) */

void __cdecl FUN_00465a80(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  char cVar7;
  undefined *local_56c;
  undefined1 local_561;
  uint local_560;
  uint local_514;
  undefined4 *local_4c8;
  uint local_4c4;
  uint local_4c0;
  uint local_4bc;
  undefined4 local_4b8;
  undefined2 local_4a8;
  int local_49c;
  int local_444 [154];
  int local_1dc [3];
  int local_1d0;
  int local_a4;
  
  FUN_004dce64(0x4fc154);
  iVar1 = FUN_004867e4(*(byte **)(param_1 + 0x150),*(char **)(param_1 + 0x160));
  if (iVar1 == 0) {
    local_4a8 = 8;
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x10);
    }
    else {
      uVar5 = **(undefined4 **)(param_1 + 0x10);
    }
    FUN_004132a8(local_1dc,0,uVar5,param_1);
    local_49c = local_49c + 0xd;
    local_4a8 = 0x14;
    (**(code **)(local_1d0 + 0x14))();
    if (local_a4 == 0) {
      PostQuitMessage(1);
    }
    local_4a8 = 0x20;
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x10);
    }
    else {
      uVar5 = **(undefined4 **)(param_1 + 0x10);
    }
    piVar2 = FUN_004862b0(local_444,0,uVar5,param_1,param_1 + 0x148,param_1 + 0x158);
    local_49c = local_49c + 0x10;
    iVar1 = (**(code **)(piVar2[3] + 0x14))();
    cVar7 = iVar1 == 1;
    local_49c = local_49c + -0x10;
    FUN_00486488(local_444,2);
    if (cVar7 != '\0') {
      local_4bc = 0;
      local_4a8 = 0x14;
      do {
        local_56c = &DAT_004fb288;
        uVar6 = 0;
        do {
          local_4c4 = uVar6;
          if (1 < *(int *)(*(int *)(param_1 + 0x160) + -0xc) + 1) {
            FUN_004d48d8(param_1 + 0x158);
          }
          local_4c8 = (undefined4 *)(*(int *)(param_1 + 0x160) + -0xc);
          if (local_4c8 != &DAT_00513d58) {
            *local_4c8 = 0xffffffff;
          }
          local_4c0 = (uint)*(char *)(*(int *)(param_1 + 0x160) + local_4c4);
          uVar3 = FUN_004e3054(local_4c0);
          local_4a8 = 0x14;
          if (uVar3 - 0x40 != *(int *)(local_56c + local_4bc * 0x28)) break;
          uVar6 = uVar6 + 1;
          local_56c = local_56c + 4;
        } while (uVar6 < 10);
        if (9 < uVar6) {
          if (*(int *)(*(int *)(param_1 + 0x160) + -4) == 0) {
            FUN_004d5c40(param_1 + 0x158,*(uint *)(*(int *)(param_1 + 0x160) + -4),0,
                         -*(int *)(*(int *)(param_1 + 0x160) + -4),0);
          }
          else {
            local_514 = *(uint *)(*(int *)(param_1 + 0x160) + -4);
            local_560 = *(uint *)(*(int *)(param_1 + 0x160) + -4);
            local_561 = 0;
            uVar6 = local_560;
            if (local_514 < local_560) {
              uVar6 = local_514;
            }
            FUN_004cfad4(param_1 + 0x158,0,uVar6,(uint)&local_561,0,0,0);
          }
          puVar4 = (undefined4 *)(*(int *)(param_1 + 0x160) + -0xc);
          if (puVar4 != &DAT_00513d58) {
            *puVar4 = 0;
          }
        }
        local_4bc = local_4bc + 1;
      } while (local_4bc < 4);
      FUN_00466aa0(param_1);
    }
    local_49c = local_49c + -0xd;
    FUN_004134f0(local_1dc,2);
    local_4a8 = 0;
  }
  FUN_00451784(*(int **)(param_1 + 0x10),0);
  iVar1 = FUN_004867cc(*(byte **)(param_1 + 0x150),*(char **)(param_1 + 0x160));
  if (iVar1 == 0) {
    PostQuitMessage(1);
  }
  *in_FS_OFFSET = local_4b8;
  return;
}

