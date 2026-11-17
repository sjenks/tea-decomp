// name: FUN_00423c10
// address: 0x423c10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00423c10(uint *param_1,int param_2,BYTE param_3)

{
  ushort uVar1;
  int iVar2;
  LOGPALETTE *plpal;
  HPALETTE pHVar3;
  ushort uVar4;
  
  if (*(int *)(param_2 + 0x20) == 0) {
    iVar2 = FUN_004152b4(*(short *)(param_2 + 0xe));
    uVar4 = (ushort)iVar2;
  }
  else {
    uVar4 = *(ushort *)(param_2 + 0x20);
  }
  if (uVar4 == 0) {
    *param_1 = 0;
  }
  else {
    plpal = (LOGPALETTE *)FUN_0044b390();
    plpal->palVersion = 0x300;
    plpal->palNumEntries = uVar4;
    uVar1 = 0;
    if (uVar4 != 0) {
      do {
        plpal->palPalEntry[uVar1].peRed = *(BYTE *)(param_2 + 0x2a + (uint)uVar1 * 4);
        plpal->palPalEntry[uVar1].peGreen = *(BYTE *)(param_2 + 0x29 + (uint)uVar1 * 4);
        plpal->palPalEntry[uVar1].peBlue = *(BYTE *)(param_2 + 0x28 + (uint)uVar1 * 4);
        plpal->palPalEntry[uVar1].peFlags = param_3;
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar4);
    }
    pHVar3 = CreatePalette(plpal);
    *param_1 = (uint)pHVar3;
    FUN_0044b2dc();
  }
  FUN_0041c800((int *)param_1,0x7fe3);
  FUN_0041cf04(*param_1,4);
  return;
}

