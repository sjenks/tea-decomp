// name: FUN_004dbdcc
// address: 0x4dbdcc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004dbdcc(int param_1,undefined1 *param_2,char *param_3,char param_4)

{
  char *pcVar1;
  char cVar2;
  
  *param_2 = 0x25;
  pcVar1 = param_2 + 1;
  if ((*(byte *)(param_1 + 0xd) & 8) != 0) {
    *pcVar1 = '+';
    pcVar1 = param_2 + 2;
  }
  if ((*(byte *)(param_1 + 0xd) & 2) != 0) {
    *pcVar1 = '#';
    pcVar1 = pcVar1 + 1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *pcVar1 = '.';
    pcVar1[1] = '*';
    pcVar1 = pcVar1 + 2;
  }
  for (; *param_3 != '\0'; param_3 = param_3 + 1) {
    *pcVar1 = *param_3;
    pcVar1 = pcVar1 + 1;
  }
  if (*(int *)(param_1 + 0x18) == 8) {
    *pcVar1 = 'o';
  }
  else if (*(int *)(param_1 + 0x18) == 0x10) {
    if ((*(byte *)(param_1 + 0xd) & 0x40) == 0) {
      cVar2 = 'x';
    }
    else {
      cVar2 = 'X';
    }
    *pcVar1 = cVar2;
  }
  else {
    if (param_4 == '\0') {
      cVar2 = 'u';
    }
    else {
      cVar2 = 'd';
    }
    *pcVar1 = cVar2;
  }
  pcVar1[1] = '\0';
  return;
}

