// name: FUN_00453e60
// address: 0x453e60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00453e60(int param_1,uint param_2)

{
  if ((*(byte *)(*(int *)(param_1 + 0x20) + (param_2 & 0xff) * 4) & 0x10) != 0) {
    param_2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x38) >> 8),
                       *(undefined1 *)
                        (*(int *)(param_1 + 0x38) + ((param_2 & 0xff) - *(int *)(param_1 + 0x28))));
  }
  return param_2;
}

