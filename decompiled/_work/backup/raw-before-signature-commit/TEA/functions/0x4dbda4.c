// name: FUN_004dbda4
// address: 0x4dbda4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004dbda4(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 0x2c);
  iVar2 = FUN_004e0344(puVar1,&DAT_00516b51);
  *(undefined1 **)(param_1 + 0x30) = puVar1 + iVar2;
  return;
}

