// name: FUN_004e6038
// address: 0x4e6038
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004e6038(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
  for (uVar2 = 0; uVar2 < DAT_0051c404; uVar2 = uVar2 + 1) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  }
  return;
}

