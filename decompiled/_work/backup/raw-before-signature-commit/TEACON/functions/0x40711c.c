// name: FUN_0040711c
// address: 0x40711c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0040711c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x2dfc) != 0) {
    for (iVar1 = 0; iVar1 < (int)(uint)*(ushort *)(param_1 + 0x2df8); iVar1 = iVar1 + 1) {
      FUN_00414f88();
    }
    FUN_00414f88();
    *(undefined4 *)(param_1 + 0x2dfc) = 0;
  }
  uVar4 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x2e00);
  do {
    FUN_00414f88();
    *puVar2 = 0;
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar4 < 0x65);
  pcVar3 = s____INVALID_DICTIONARY_FILE____0042b468;
  puVar2 = (undefined4 *)(param_1 + 0x2014);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  return (undefined4 *)(param_1 + 0x2014);
}

