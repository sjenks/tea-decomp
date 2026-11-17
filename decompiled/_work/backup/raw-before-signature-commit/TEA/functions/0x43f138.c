// name: FUN_0043f138
// address: 0x43f138
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0043f138(void)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int local_18;
  byte *local_14;
  
  puVar3 = &DAT_0051993c;
  local_18 = 0;
  local_14 = &DAT_00519d3c;
  do {
    uVar2 = 0;
    for (iVar1 = 0; iVar1 < (int)(uint)*local_14; iVar1 = iVar1 + 1) {
      uVar2 = uVar2 * 2;
      if ((1 << ((byte)iVar1 & 0x1f) & *puVar3) != 0) {
        uVar2 = uVar2 | 1;
      }
    }
    *puVar3 = uVar2;
    local_18 = local_18 + 1;
    local_14 = local_14 + 1;
    puVar3 = puVar3 + 1;
  } while (local_18 < 0x100);
  return;
}

