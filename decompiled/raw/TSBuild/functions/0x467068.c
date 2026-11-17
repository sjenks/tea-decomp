// name: FUN_00467068
// address: 0x467068
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00467068(int param_1,int param_2,char *param_3)

{
  uint uVar1;
  char *pcVar2;
  
  *(int *)(param_1 + 0x34) = param_1 + 0x25e;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*param_3 != '\0') {
    uVar1 = (int)*param_3 & 0xf;
    pcVar2 = param_3 + 1;
    if ((int)uVar1 < param_2) {
      do {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
        param_2 = param_2 - uVar1;
        **(undefined1 **)(param_1 + 0x34) = (char)uVar1;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        if (param_1 + 0x1c8 == *(int *)(param_1 + 0x34)) {
          return param_2;
        }
        if (*pcVar2 == '\x7f') {
          return param_2;
        }
        if (*pcVar2 != '\0') {
          uVar1 = (int)*pcVar2 & 0xf;
          pcVar2 = pcVar2 + 1;
        }
      } while ((int)uVar1 < param_2);
    }
  }
  return param_2;
}

