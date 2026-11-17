// name: FUN_004e2f44
// address: 0x4e2f44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined ** __stdcall FUN_004e2f44(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  FUN_004dc844(&PTR_DAT_00518178,0,0x30);
  puVar1 = *(undefined4 **)(PTR_DAT_00518658 + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    PTR_DAT_00518178 = (undefined *)puVar1[1];
    PTR_DAT_0051817c = (undefined *)*puVar1;
    PTR_DAT_00518180 = (undefined *)puVar1[2];
    PTR_DAT_00518198 = (undefined *)puVar1[3];
    PTR_DAT_0051819c = (undefined *)puVar1[4];
  }
  puVar2 = *(undefined1 **)(PTR_DAT_00518658 + 0x14);
  if (puVar2 != (undefined1 *)0x0) {
    PTR_DAT_00518184 = *(undefined **)(puVar2 + 0x20);
    PTR_DAT_00518188 = *(undefined **)(puVar2 + 0x1c);
    PTR_DAT_0051818c = *(undefined **)(puVar2 + 0x18);
    PTR_DAT_00518190 = *(undefined **)(puVar2 + 0x14);
    PTR_DAT_00518194 = *(undefined **)(puVar2 + 0x24);
    DAT_005181a0 = puVar2[2];
    DAT_005181a1 = *puVar2;
    DAT_005181a2 = puVar2[0xc];
    DAT_005181a3 = puVar2[0xe];
    DAT_005181a4 = puVar2[0x10];
    DAT_005181a5 = puVar2[0x12];
    DAT_005181a6 = puVar2[8];
    DAT_005181a7 = puVar2[10];
  }
  return &PTR_DAT_00518178;
}

