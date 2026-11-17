// name: FUN_004168c4
// address: 0x4168c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004168c4(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x42fae8);
  FUN_004168f8(param_1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *in_FS_OFFSET = local_28;
  return param_1;
}

