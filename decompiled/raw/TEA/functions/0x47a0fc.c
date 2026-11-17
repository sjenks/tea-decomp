// name: FUN_0047a0fc
// address: 0x47a0fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0047a23c) */
/* WARNING: Removing unreachable block (ram,0x0047a321) */
/* WARNING: Removing unreachable block (ram,0x0047a2d0) */
/* WARNING: Removing unreachable block (ram,0x0047a317) */
/* WARNING: Removing unreachable block (ram,0x0047a3a0) */
/* WARNING: Removing unreachable block (ram,0x0047a3c4) */
/* WARNING: Removing unreachable block (ram,0x0047a3cf) */
/* WARNING: Removing unreachable block (ram,0x0047a3f3) */
/* WARNING: Removing unreachable block (ram,0x0047a3dd) */
/* WARNING: Removing unreachable block (ram,0x0047a3ec) */
/* WARNING: Removing unreachable block (ram,0x0047a3e5) */
/* WARNING: Removing unreachable block (ram,0x0047a3f8) */
/* WARNING: Removing unreachable block (ram,0x0047a3fc) */
/* WARNING: Removing unreachable block (ram,0x0047a44a) */
/* WARNING: Removing unreachable block (ram,0x0047a47d) */
/* WARNING: Removing unreachable block (ram,0x0047a566) */
/* WARNING: Removing unreachable block (ram,0x0047a512) */
/* WARNING: Removing unreachable block (ram,0x0047a559) */
/* WARNING: Removing unreachable block (ram,0x0047a5fd) */
/* WARNING: Removing unreachable block (ram,0x0047a621) */
/* WARNING: Removing unreachable block (ram,0x0047a62c) */
/* WARNING: Removing unreachable block (ram,0x0047a650) */
/* WARNING: Removing unreachable block (ram,0x0047a63a) */
/* WARNING: Removing unreachable block (ram,0x0047a649) */
/* WARNING: Removing unreachable block (ram,0x0047a642) */
/* WARNING: Removing unreachable block (ram,0x0047a655) */
/* WARNING: Removing unreachable block (ram,0x0047a659) */
/* WARNING: Removing unreachable block (ram,0x0047a6a7) */

void __cdecl FUN_0047a0fc(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 local_125;
  uint local_124;
  uint local_d8;
  int local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int *local_80;
  undefined4 local_7c;
  undefined2 local_6c;
  int local_60;
  int local_8;
  
  FUN_004dce64(0x500d58);
  uVar4 = 0;
  do {
    iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    if ((uint)(iVar2 >> 2) <= uVar4) {
      FUN_0047a74c(param_1,0);
      local_d8 = *(uint *)(*(int *)(param_1 + 0x28) + -4);
      if (local_d8 == 0) {
        FUN_004d5c40(param_1 + 0x20,0,0,0,0);
      }
      else {
        local_124 = *(uint *)(*(int *)(param_1 + 0x28) + -4);
        local_125 = 0;
        uVar4 = local_124;
        if (local_d8 < local_124) {
          uVar4 = local_d8;
        }
        FUN_004cfad4(param_1 + 0x20,0,uVar4,(uint)&local_125,0,0,0);
      }
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x28) + -0xc);
      if (puVar1 != &DAT_00513d58) {
        *puVar1 = 0;
      }
      *in_FS_OFFSET = local_7c;
      return;
    }
    iVar2 = *(int *)(uVar4 * 4 + *(int *)(param_1 + 4));
    local_8 = iVar2;
    if (iVar2 != 0) {
      local_6c = 0x14;
      local_60 = local_60 + -1;
      if (*(int *)(iVar2 + 0x1010) != 0) {
        if (*(int *)(*(int *)(iVar2 + 0x1010) + -0xc) != -1) {
          local_80 = (int *)(*(int *)(iVar2 + 0x1010) + -0xc);
          if (local_80 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (local_80 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *local_80 = *local_80 + -1;
            iVar3 = *local_80 + 1;
          }
          if (iVar3 != 0) goto LAB_0047a1db;
        }
        local_84 = *(int *)(iVar2 + 0x1010) + -0xc;
        local_88 = *(int *)(iVar2 + 0x1010) + -0xc;
        FUN_004cc0bc();
        local_8c = 0;
        *(undefined4 *)(iVar2 + 0x1010) = 0;
        local_90 = iVar2 + 0x1008;
      }
LAB_0047a1db:
      local_60 = local_60 + -0x101;
      FUN_00434ba4(local_8,2);
      FUN_004cc0bc();
      local_6c = 8;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

