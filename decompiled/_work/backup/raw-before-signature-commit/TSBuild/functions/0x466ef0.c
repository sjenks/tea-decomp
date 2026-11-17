// name: FUN_00466ef0
// address: 0x466ef0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00466ef0(int param_1,undefined1 *param_2,char param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  
  *param_2 = 0x25;
  pcVar1 = param_2 + 1;
  if ((*(byte *)(param_1 + 0xd) & 8) != 0) {
    *pcVar1 = '+';
    pcVar1 = param_2 + 2;
  }
  if ((*(byte *)(param_1 + 0xd) & 4) != 0) {
    *pcVar1 = '#';
    pcVar1 = pcVar1 + 1;
  }
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x10) != 0) || ((*(byte *)(param_1 + 0xc) & 4) != 0)) {
    *pcVar1 = '.';
    uVar2 = 1;
    pcVar1[1] = '*';
    pcVar1 = pcVar1 + 2;
  }
  if (param_3 != '\0') {
    *pcVar1 = param_3;
    pcVar1 = pcVar1 + 1;
  }
  uVar4 = *(uint *)(param_1 + 0xc) & 0x104;
  if (uVar4 == 0x100) {
    if ((*(byte *)(param_1 + 0xd) & 0x40) == 0) {
      cVar3 = 'e';
    }
    else {
      cVar3 = 'E';
    }
  }
  else if (uVar4 == 4) {
    cVar3 = 'f';
  }
  else if ((*(byte *)(param_1 + 0xd) & 0x40) == 0) {
    cVar3 = 'g';
  }
  else {
    cVar3 = 'G';
  }
  *pcVar1 = cVar3;
  pcVar1[1] = '\0';
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x18) = 10;
  return uVar2;
}

