// name: FUN_004899f8
// address: 0x4899f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004899f8(int *param_1)

{
  switch((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c) {
  case 1:
    if ((int)((uint)*(byte *)(param_1 + 0x15) << 0x1c) >> 0x1c != 1) {
      FUN_00488f94(param_1);
    }
    break;
  case 2:
    *(byte *)(param_1 + 0x15) =
         (*(byte *)(param_1 + 0x15) & 0xf) == 0 | *(byte *)(param_1 + 0x15) & 0xf0;
    break;
  case 3:
    if ((int)((uint)*(byte *)(param_1 + 0x15) << 0x1c) >> 0x1c == 1) {
      *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xf0;
    }
    else {
      FUN_00488f94(param_1);
    }
  }
  (**(code **)(*param_1 + 0x68))();
  if (((((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c != 1) &&
       ((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c != 3)) ||
      ((int)((uint)*(byte *)(param_1 + 0x15) << 0x1c) >> 0x1c == 1)) &&
     ((*(byte *)((int)param_1 + 0x42) & 1) != 0)) {
    PostMessageA(*(HWND *)(**(int **)((int)param_1 + 6) + 0xc),0x111,
                 *(WPARAM *)((int)param_1 + 0x3a),0);
  }
  return;
}

