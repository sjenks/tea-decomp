// name: FUN_0043be5c
// address: 0x43be5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0043be5c(HWND param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = GetWindowLongA(param_1,-0x10);
  if (((uVar2 & 0x40000000) == 0) && (param_1 != (HWND)*param_2)) {
    uVar2 = IsWindowEnabled(param_1);
    if (uVar2 != 0) {
      if (*(int *)((int)param_2 + 6) == 0) {
        *(short *)(param_2 + 1) = (short)param_2[1] + 1;
      }
      else {
        puVar1 = *(undefined4 **)((int)param_2 + 6);
        *(int *)((int)param_2 + 6) = *(int *)((int)param_2 + 6) + 4;
        *puVar1 = param_1;
        uVar2 = EnableWindow(param_1,0);
      }
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}

