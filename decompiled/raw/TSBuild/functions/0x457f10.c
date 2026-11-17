// name: FUN_00457f10
// address: 0x457f10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00457f10(int param_1,byte param_2)

{
  undefined1 local_38 [4];
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 local_14 [4];
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      uStack_34 = 0x457f32;
      FUN_00457fec((int)&local_28,param_1);
      FUN_00457f7c((int)local_38,param_1);
      FUN_0045800c(local_14,param_1);
      local_28 = 0x457f5f;
      FUN_00458ec0(param_1,*(int *)(param_1 + 0x24),'\0');
      FUN_00459260(param_1);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  return;
}

