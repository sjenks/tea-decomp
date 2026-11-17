// name: FUN_00413804
// address: 0x413804
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00413834) */
/* WARNING: Removing unreachable block (ram,0x00413914) */
/* WARNING: Removing unreachable block (ram,0x004138c0) */
/* WARNING: Removing unreachable block (ram,0x00413907) */
/* WARNING: Removing unreachable block (ram,0x004139ab) */
/* WARNING: Removing unreachable block (ram,0x004139cf) */
/* WARNING: Removing unreachable block (ram,0x004139da) */
/* WARNING: Removing unreachable block (ram,0x004139fe) */
/* WARNING: Removing unreachable block (ram,0x004139e8) */
/* WARNING: Removing unreachable block (ram,0x004139f7) */
/* WARNING: Removing unreachable block (ram,0x004139f0) */
/* WARNING: Removing unreachable block (ram,0x00413a03) */
/* WARNING: Removing unreachable block (ram,0x00413a07) */
/* WARNING: Removing unreachable block (ram,0x00413a55) */
/* WARNING: Removing unreachable block (ram,0x00413a92) */
/* WARNING: Removing unreachable block (ram,0x00413b7a) */
/* WARNING: Removing unreachable block (ram,0x00413b26) */
/* WARNING: Removing unreachable block (ram,0x00413b6d) */
/* WARNING: Removing unreachable block (ram,0x00413c11) */
/* WARNING: Removing unreachable block (ram,0x00413c35) */
/* WARNING: Removing unreachable block (ram,0x00413c40) */
/* WARNING: Removing unreachable block (ram,0x00413c64) */
/* WARNING: Removing unreachable block (ram,0x00413c4e) */
/* WARNING: Removing unreachable block (ram,0x00413c5d) */
/* WARNING: Removing unreachable block (ram,0x00413c56) */
/* WARNING: Removing unreachable block (ram,0x00413c69) */
/* WARNING: Removing unreachable block (ram,0x00413c6d) */
/* WARNING: Removing unreachable block (ram,0x00413cbb) */

void __cdecl FUN_00413804(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_111;
  uint local_110;
  uint local_c4;
  undefined4 local_78;
  
  FUN_0041f3fc(0x42e4f8);
  if (*(int *)(*(int *)(param_3 + 8) + -4) == 0) {
    FUN_0041ae90(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,
                 -*(int *)(*(int *)(param_3 + 8) + -4),0);
  }
  else {
    local_c4 = *(uint *)(*(int *)(param_3 + 8) + -4);
    local_110 = *(uint *)(*(int *)(param_3 + 8) + -4);
    local_111 = 0;
    uVar3 = local_110;
    if (local_c4 < local_110) {
      uVar3 = local_c4;
    }
    FUN_00417320(param_3,0,uVar3,(uint)&local_111,0,0,0);
  }
  puVar1 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
  if (puVar1 != &DAT_0042fab4) {
    *puVar1 = 0;
  }
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  if ((iVar2 >> 2 == 1) &&
     (FUN_0040d844(**(int **)(param_1 + 4),param_3), *(int *)(*(int *)(param_3 + 8) + -4) != 0)) {
    FUN_0041acdc(param_3,0,param_2);
  }
  *in_FS_OFFSET = local_78;
  return;
}

