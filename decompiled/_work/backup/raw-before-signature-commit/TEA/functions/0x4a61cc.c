// name: FUN_004a61cc
// address: 0x4a61cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a61cc(int param_1)

{
  char cVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x74) & 0x20) != 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    while ((iVar2 != 0 && (cVar1 = (**(code **)(*(int *)(iVar2 + 8) + 0x30))(), cVar1 == '\0'))) {
      iVar2 = *(int *)(iVar2 + 0x14);
    }
  }
  FUN_004a5774(param_1);
  return;
}

