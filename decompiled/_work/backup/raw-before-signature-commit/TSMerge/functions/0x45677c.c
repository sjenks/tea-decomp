// name: FUN_0045677c
// address: 0x45677c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_0045677c(int param_1)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        pcVar2 = s_<notype>_00474322;
      }
      else {
        pbVar1 = *(byte **)(*(int *)(param_1 + 8) + -0x2c);
        uVar4 = (uint)*pbVar1;
        uVar3 = FUN_0044b390();
        *(undefined4 *)(param_1 + 0x10) = uVar3;
        FUN_004559d0(*(undefined4 **)(param_1 + 0x10),(undefined4 *)(pbVar1 + 1),uVar4);
        *(undefined1 *)(*(int *)(param_1 + 0x10) + uVar4) = 0;
        pcVar2 = *(char **)(param_1 + 0x10);
      }
    }
    else {
      pcVar2 = *(char **)(param_1 + 0x10);
    }
  }
  else {
    pcVar2 = FUN_00456428(*(int *)(param_1 + 4));
  }
  return pcVar2;
}

