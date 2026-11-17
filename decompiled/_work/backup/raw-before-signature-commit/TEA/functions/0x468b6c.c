// name: FUN_00468b6c
// address: 0x468b6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00468b6c(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = 0;
  puVar3 = (undefined1 *)(param_1 + 4);
  puVar1 = &DAT_0051ac68;
  do {
    *puVar3 = *puVar1;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 10);
  return;
}

