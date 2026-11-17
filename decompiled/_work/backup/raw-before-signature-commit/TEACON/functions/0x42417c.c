// name: FUN_0042417c
// address: 0x42417c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined ** __stdcall FUN_0042417c(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  FUN_0041ee4c(&PTR_DAT_00432e2c,0,0x30);
  puVar1 = *(undefined4 **)(PTR_DAT_0043330c + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    PTR_DAT_00432e2c = (undefined *)puVar1[1];
    PTR_DAT_00432e30 = (undefined *)*puVar1;
    PTR_DAT_00432e34 = (undefined *)puVar1[2];
    PTR_DAT_00432e4c = (undefined *)puVar1[3];
    PTR_DAT_00432e50 = (undefined *)puVar1[4];
  }
  puVar2 = *(undefined1 **)(PTR_DAT_0043330c + 0x14);
  if (puVar2 != (undefined1 *)0x0) {
    PTR_DAT_00432e38 = *(undefined **)(puVar2 + 0x20);
    PTR_DAT_00432e3c = *(undefined **)(puVar2 + 0x1c);
    PTR_DAT_00432e40 = *(undefined **)(puVar2 + 0x18);
    PTR_DAT_00432e44 = *(undefined **)(puVar2 + 0x14);
    PTR_DAT_00432e48 = *(undefined **)(puVar2 + 0x24);
    DAT_00432e54 = puVar2[2];
    DAT_00432e55 = *puVar2;
    DAT_00432e56 = puVar2[0xc];
    DAT_00432e57 = puVar2[0xe];
    DAT_00432e58 = puVar2[0x10];
    DAT_00432e59 = puVar2[0x12];
    DAT_00432e5a = puVar2[8];
    DAT_00432e5b = puVar2[10];
  }
  return &PTR_DAT_00432e2c;
}

