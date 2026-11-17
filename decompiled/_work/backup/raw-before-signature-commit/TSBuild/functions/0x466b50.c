// name: FUN_00466b50
// address: 0x466b50
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00466b50(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 0x2c);
  iVar2 = FUN_0046a5c8(puVar1,&DAT_00488885);
  *(undefined1 **)(param_1 + 0x30) = puVar1 + iVar2;
  return;
}

