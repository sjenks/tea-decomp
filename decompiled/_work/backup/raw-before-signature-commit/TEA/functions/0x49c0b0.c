// name: FUN_0049c0b0
// address: 0x49c0b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049c0b0(int param_1,int param_2)

{
  if (param_2 - 0x1cU < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0049c0c6 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_0049c0de +
                CONCAT31((int3)(param_2 - 0x1cU >> 8),*(undefined1 *)(param_2 + 0x49c0b7)) * 4))();
    return;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x35) + 5) + 0xc))();
  return;
}

