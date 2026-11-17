// name: FUN_0040da30
// address: 0x40da30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040da30(undefined1 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_00434688;
  do {
    param_1 = param_1 + 1;
    *param_1 = *puVar1;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 10);
  return;
}

