// name: FUN_004cd7c0
// address: 0x4cd7c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004cd7c0(int param_1,byte param_2)

{
  undefined1 local_38 [4];
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 local_14 [4];
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      uStack_34 = 0x4cd7e2;
      FUN_004cd89c((int)&local_28,param_1);
      FUN_004cd82c((int)local_38,param_1);
      FUN_004cd8bc(local_14,param_1);
      local_28 = 0x4cd80f;
      FUN_004ce770(param_1,*(int *)(param_1 + 0x24),'\0');
      FUN_004ceb10(param_1);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}

