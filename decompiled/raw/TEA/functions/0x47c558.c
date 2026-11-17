// name: FUN_0047c558
// address: 0x47c558
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0047c598) */
/* WARNING: Removing unreachable block (ram,0x0047c656) */
/* WARNING: Removing unreachable block (ram,0x0047c61e) */
/* WARNING: Removing unreachable block (ram,0x0047c64f) */
/* WARNING: Removing unreachable block (ram,0x0047c6c3) */
/* WARNING: Removing unreachable block (ram,0x0047c6e7) */
/* WARNING: Removing unreachable block (ram,0x0047c6f2) */
/* WARNING: Removing unreachable block (ram,0x0047c716) */
/* WARNING: Removing unreachable block (ram,0x0047c700) */
/* WARNING: Removing unreachable block (ram,0x0047c70f) */
/* WARNING: Removing unreachable block (ram,0x0047c708) */
/* WARNING: Removing unreachable block (ram,0x0047c71b) */
/* WARNING: Removing unreachable block (ram,0x0047c71f) */
/* WARNING: Removing unreachable block (ram,0x0047c76d) */

undefined4 __stdcall FUN_0047c558(int param_1,undefined4 *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_99 [73];
  undefined4 local_50;
  
  FUN_004dce64(0x501a8c);
  uVar2 = FUN_004d7ae0(param_1,param_2,param_3,0);
  *param_4 = uVar2;
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + -4);
  local_99[0] = 0;
  if (uVar1 <= uVar2) {
    uVar2 = uVar1;
  }
  FUN_004cfad4(param_1,0,uVar2,(uint)local_99,0,0,0);
  *in_FS_OFFSET = local_50;
  return 0;
}

