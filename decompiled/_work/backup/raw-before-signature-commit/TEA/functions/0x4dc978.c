// name: FUN_004dc978
// address: 0x4dc978
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004dc978(char *param_1,char *param_2)

{
  char *pcVar1;
  
  do {
    if ((*param_1 != *param_2) || (*param_2 == '\0')) {
      return;
    }
    if (param_1[1] != param_2[1]) {
      return;
    }
    if (param_2[1] == '\0') {
      return;
    }
    if (param_1[2] != param_2[2]) {
      return;
    }
    if (param_2[2] == '\0') {
      return;
    }
    pcVar1 = param_2 + 3;
    if (param_1[3] != *pcVar1) {
      return;
    }
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  } while (*pcVar1 != '\0');
  return;
}

