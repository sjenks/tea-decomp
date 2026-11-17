// name: FUN_00418190
// address: 0x418190
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00418190(int *param_1,LPMSG param_2)

{
  if (param_2->message == 0x200) {
    (**(code **)(*(int *)(param_1[8] + 0xc) + 0xac))();
  }
  FUN_004a54b4(*param_1,param_2);
  return;
}

