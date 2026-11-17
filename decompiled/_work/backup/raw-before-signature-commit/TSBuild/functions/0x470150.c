// name: FUN_00470150
// address: 0x470150
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00470150(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
  for (uVar2 = 0; uVar2 < DAT_0048d87c; uVar2 = uVar2 + 1) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  }
  return;
}

