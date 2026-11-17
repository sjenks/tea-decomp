// name: FUN_0041fc8c
// address: 0x41fc8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0041fc8c(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x432044);
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_00434cc4 == 2) {
    FUN_00427ce5(4,1);
  }
  FUN_0042064c();
  (*DAT_00431f38)();
  FUN_00426b84();
  *in_FS_OFFSET = local_28;
  return;
}

