// name: FUN_0047c864
// address: 0x47c864
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0047c864(undefined4 param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  undefined **ppuVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x502310);
  uVar2 = 0;
  puVar1 = &DAT_0051ac90;
  do {
    *puVar1 = 0x4c;
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 0x209);
  bVar3 = 0;
  ppuVar4 = &PTR_DAT_005015e0;
  do {
    uVar2 = FUN_0047c140(*ppuVar4);
    (&DAT_0051ac90)[uVar2] = bVar3;
    bVar3 = bVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
  } while (bVar3 < 0x4c);
  *in_FS_OFFSET = local_28;
  return param_1;
}

