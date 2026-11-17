// name: FUN_00479518
// address: 0x479518
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00479548) */
/* WARNING: Removing unreachable block (ram,0x00479628) */
/* WARNING: Removing unreachable block (ram,0x004795d4) */
/* WARNING: Removing unreachable block (ram,0x0047961b) */
/* WARNING: Removing unreachable block (ram,0x004796bf) */
/* WARNING: Removing unreachable block (ram,0x004796e3) */
/* WARNING: Removing unreachable block (ram,0x004796ee) */
/* WARNING: Removing unreachable block (ram,0x00479712) */
/* WARNING: Removing unreachable block (ram,0x004796fc) */
/* WARNING: Removing unreachable block (ram,0x0047970b) */
/* WARNING: Removing unreachable block (ram,0x00479704) */
/* WARNING: Removing unreachable block (ram,0x00479717) */
/* WARNING: Removing unreachable block (ram,0x0047971b) */
/* WARNING: Removing unreachable block (ram,0x00479769) */
/* WARNING: Removing unreachable block (ram,0x004797a6) */
/* WARNING: Removing unreachable block (ram,0x0047988e) */
/* WARNING: Removing unreachable block (ram,0x0047983a) */
/* WARNING: Removing unreachable block (ram,0x00479881) */
/* WARNING: Removing unreachable block (ram,0x00479925) */
/* WARNING: Removing unreachable block (ram,0x00479949) */
/* WARNING: Removing unreachable block (ram,0x00479954) */
/* WARNING: Removing unreachable block (ram,0x00479978) */
/* WARNING: Removing unreachable block (ram,0x00479962) */
/* WARNING: Removing unreachable block (ram,0x00479971) */
/* WARNING: Removing unreachable block (ram,0x0047996a) */
/* WARNING: Removing unreachable block (ram,0x0047997d) */
/* WARNING: Removing unreachable block (ram,0x00479981) */
/* WARNING: Removing unreachable block (ram,0x004799cf) */

void __cdecl FUN_00479518(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_111;
  uint local_110;
  uint local_c4;
  undefined4 local_78;
  
  FUN_004dce64(0x500bc8);
  if (*(int *)(*(int *)(param_3 + 8) + -4) == 0) {
    FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,
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
    FUN_004cfad4(param_3,0,uVar3,(uint)&local_111,0,0,0);
  }
  puVar1 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
  if (puVar1 != &DAT_00513d58) {
    *puVar1 = 0;
  }
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  if ((iVar2 >> 2 == 1) &&
     (FUN_004349a0(**(int **)(param_1 + 4),param_3), *(int *)(*(int *)(param_3 + 8) + -4) != 0)) {
    FUN_004d5a8c(param_3,0,param_2);
  }
  *in_FS_OFFSET = local_78;
  return;
}

