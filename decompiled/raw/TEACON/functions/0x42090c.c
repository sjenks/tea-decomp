// name: FUN_0042090c
// address: 0x42090c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall FUN_0042090c(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = 0;
  puVar2 = &DAT_00432078;
  iVar5 = DAT_00432528;
  while (iVar5 != 0) {
    if ((int)puVar2[2] < 0) {
      uVar4 = puVar2[3] + puVar2[2] + 1;
      puVar2[2] = puVar2[2] - uVar4;
      *puVar2 = (char *)puVar2[1];
      uVar1 = FUN_0042051c((int)*(char *)((int)puVar2 + 0x16),(char *)puVar2[1],uVar4);
      if ((uVar4 != uVar1) && ((*(byte *)((int)puVar2 + 0x13) & 2) == 0)) {
        *(ushort *)((int)puVar2 + 0x12) = *(ushort *)((int)puVar2 + 0x12) | 0x10;
      }
      iVar3 = iVar3 + 1;
    }
    puVar2 = puVar2 + 6;
    iVar5 = iVar5 + -1;
  }
  return iVar3;
}

