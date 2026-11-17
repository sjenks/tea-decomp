// name: FUN_00453ed0
// address: 0x453ed0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00453ed0(int param_1,uint param_2)

{
  if ((*(byte *)(*(int *)(param_1 + 0x20) + (param_2 & 0xff) * 4) & 8) != 0) {
    param_2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x3c) >> 8),
                       *(undefined1 *)
                        (*(int *)(param_1 + 0x3c) + ((param_2 & 0xff) - *(int *)(param_1 + 0x30))));
  }
  return param_2;
}

