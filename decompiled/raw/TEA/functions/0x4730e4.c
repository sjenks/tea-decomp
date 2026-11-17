// name: FUN_004730e4
// address: 0x4730e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004730e4(int *param_1)

{
  FUN_004ae93c(param_1);
  if (*(int *)(param_1[0x12] + 0x168) != 0) {
    FUN_004a76a8(param_1[1],0x80,1,*(int *)(param_1[0x12] + 0x168));
  }
  if (*(int *)(param_1[0x12] + 0x16c) != 0) {
    FUN_004a76a8(param_1[1],0x80,0,*(int *)(param_1[0x12] + 0x16c));
  }
  return;
}

