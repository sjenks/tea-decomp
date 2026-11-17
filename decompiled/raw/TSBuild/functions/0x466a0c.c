// name: FUN_00466a0c
// address: 0x466a0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00466a0c(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_00467ba8(0x4888b8);
  puVar1 = (uint *)FUN_0046d720(0xff,(uint *)0x0);
  FUN_00459d78((int)local_14,puVar1);
  FUN_0046d720(1,*(uint **)(*param_2 + 8));
  FUN_0046d720(2,*(uint **)(*param_2 + 0x18));
  FUN_0046d720(4,*(uint **)(*param_2 + 0x28));
  FUN_0046d720(0x10,*(uint **)(*param_2 + 0x38));
  FUN_0046d720(0x20,*(uint **)(*param_2 + 0x48));
  puVar1 = (uint *)FUN_0046d720(0xff,(uint *)0x0);
  FUN_00459b6c(param_1,puVar1);
  uVar2 = FUN_0046d720(0xff,local_c);
  uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else if (local_c == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar3 = *local_c + 1;
      }
      if (iVar3 != 0) goto LAB_00466b3e;
    }
    FUN_0045680c();
  }
LAB_00466b3e:
  *in_FS_OFFSET = local_38;
  return uVar2;
}

