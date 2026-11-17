// name: FUN_00418f62
// address: 0x418f62
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall FUN_00418f62(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  
  bVar5 = 0;
  piVar1 = (int *)(unaff_EBP + 8);
  FUN_00455f04(0x466e68);
  *(undefined2 *)(unaff_EBP + -0x14) = 8;
  *(undefined ***)*piVar1 = &PTR_FUN_00467058;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 10) = 0;
  *(undefined4 *)(iVar2 + 0xe) = 0;
  *(undefined4 *)(iVar2 + 0x12) = 0;
  *(undefined4 *)(iVar2 + 0x16) = 0;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 0x2a) = 0;
  *(undefined4 *)(iVar2 + 0x26) = 0;
  *(undefined4 *)(iVar2 + 0x22) = 0;
  *(undefined4 *)(iVar2 + 0x1e) = 0;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 0x2e) = 1;
  *(undefined1 *)(iVar2 + 0x35) = 0;
  *(undefined1 *)(iVar2 + 0x34) = 0;
  *(undefined1 *)(iVar2 + 0x33) = *(undefined1 *)(iVar2 + 0x34);
  *(undefined1 *)(iVar2 + 0x32) = *(undefined1 *)(iVar2 + 0x33);
  *(undefined4 *)(*piVar1 + 6) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  puVar3 = (undefined4 *)(unaff_EBP + -0x34);
  puVar4 = (undefined4 *)(*piVar1 + 10);
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  *(undefined2 *)(*piVar1 + 0x42) = 3;
  *(undefined1 *)(*piVar1 + 0x38) = 0;
  *(undefined1 *)(*piVar1 + 0x39) = 0;
  *(undefined1 *)(*piVar1 + 4) = 0;
  *(undefined1 *)(*piVar1 + 5) = 0;
  *(undefined1 *)(*piVar1 + 0x37) = 1;
  *(undefined1 *)(*piVar1 + 0x36) = 1;
  *(undefined4 *)(*piVar1 + 0x3e) = 0;
  *(undefined4 *)(*piVar1 + 0x3a) = *(undefined4 *)(unaff_EBP + 0xc);
  FUN_004191cc(*piVar1,*(undefined4 *)(unaff_EBP + 0x10));
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x24);
  return *piVar1;
}

