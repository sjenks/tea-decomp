// name: FUN_0046d0ec
// address: 0x46d0ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined ** __stdcall FUN_0046d0ec(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  FUN_004675f0(&PTR_DAT_00489e28,0,0x30);
  puVar1 = *(undefined4 **)(PTR_DAT_0048a308 + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    PTR_DAT_00489e28 = (undefined *)puVar1[1];
    PTR_DAT_00489e2c = (undefined *)*puVar1;
    PTR_DAT_00489e30 = (undefined *)puVar1[2];
    PTR_DAT_00489e48 = (undefined *)puVar1[3];
    PTR_DAT_00489e4c = (undefined *)puVar1[4];
  }
  puVar2 = *(undefined1 **)(PTR_DAT_0048a308 + 0x14);
  if (puVar2 != (undefined1 *)0x0) {
    PTR_DAT_00489e34 = *(undefined **)(puVar2 + 0x20);
    PTR_DAT_00489e38 = *(undefined **)(puVar2 + 0x1c);
    PTR_DAT_00489e3c = *(undefined **)(puVar2 + 0x18);
    PTR_DAT_00489e40 = *(undefined **)(puVar2 + 0x14);
    PTR_DAT_00489e44 = *(undefined **)(puVar2 + 0x24);
    DAT_00489e50 = puVar2[2];
    DAT_00489e51 = *puVar2;
    DAT_00489e52 = puVar2[0xc];
    DAT_00489e53 = puVar2[0xe];
    DAT_00489e54 = puVar2[0x10];
    DAT_00489e55 = puVar2[0x12];
    DAT_00489e56 = puVar2[8];
    DAT_00489e57 = puVar2[10];
  }
  return &PTR_DAT_00489e28;
}

