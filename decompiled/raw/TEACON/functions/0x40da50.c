// name: FUN_0040da50
// address: 0x40da50
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040da50(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  DAT_00434684 = 1;
  iVar1 = 0;
  puVar2 = &DAT_00434688;
  do {
    param_1 = param_1 + 1;
    *puVar2 = *param_1;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 10);
  return;
}

