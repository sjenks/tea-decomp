// name: FUN_0045a9c4
// address: 0x45a9c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined ** __stdcall FUN_0045a9c4(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  FUN_00455a40(&PTR_DAT_00475430,0,0x30);
  puVar1 = *(undefined4 **)(PTR_DAT_00475910 + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    PTR_DAT_00475430 = (undefined *)puVar1[1];
    PTR_DAT_00475434 = (undefined *)*puVar1;
    PTR_DAT_00475438 = (undefined *)puVar1[2];
    PTR_DAT_00475450 = (undefined *)puVar1[3];
    PTR_DAT_00475454 = (undefined *)puVar1[4];
  }
  puVar2 = *(undefined1 **)(PTR_DAT_00475910 + 0x14);
  if (puVar2 != (undefined1 *)0x0) {
    PTR_DAT_0047543c = *(undefined **)(puVar2 + 0x20);
    PTR_DAT_00475440 = *(undefined **)(puVar2 + 0x1c);
    PTR_DAT_00475444 = *(undefined **)(puVar2 + 0x18);
    PTR_DAT_00475448 = *(undefined **)(puVar2 + 0x14);
    PTR_DAT_0047544c = *(undefined **)(puVar2 + 0x24);
    DAT_00475458 = puVar2[2];
    DAT_00475459 = *puVar2;
    DAT_0047545a = puVar2[0xc];
    DAT_0047545b = puVar2[0xe];
    DAT_0047545c = puVar2[0x10];
    DAT_0047545d = puVar2[0x12];
    DAT_0047545e = puVar2[8];
    DAT_0047545f = puVar2[10];
  }
  return &PTR_DAT_00475430;
}

