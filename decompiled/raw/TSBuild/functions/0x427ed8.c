// name: FUN_00427ed8
// address: 0x427ed8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00427ed8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47b654);
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 1); iVar2 = iVar2 + 1) {
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 9) + iVar2 * 4);
    *puVar1 = *(undefined4 *)(param_1 + 0xd);
    *(undefined4 *)(param_1 + 0xd) = puVar1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *in_FS_OFFSET = local_28;
  return;
}

