// name: FUN_0045f8e8
// address: 0x45f8e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int FUN_0045f8e8(undefined4 param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7,undefined4 param_8)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar1 = (char *)(param_6 + param_4);
  pcVar3 = (char *)(param_3 + param_4);
  do {
    if (param_4 < 0) {
      if (param_7 < 0) {
        if (param_5 < 2) {
          iVar2 = (*(code *)(&PTR_FUN_004fa308)[*param_2])
                            (param_1,param_2 + 1,param_3,param_7 + 1,param_8);
        }
        else {
          iVar2 = FUN_0045f8e8(param_1,param_2,param_3,param_4,param_5 + -1,param_6,param_7 + 1,
                               param_8);
        }
      }
      else {
        iVar2 = 0;
      }
      return iVar2;
    }
    if ((*pcVar3 != '\0') && (*pcVar1 != '\0')) {
      *pcVar3 = *pcVar3 + -1;
      if (param_5 < 2) {
        iVar2 = (*(code *)(&PTR_FUN_004fa308)[*param_2])
                          (param_1,param_2 + 1,param_3,param_7,param_8);
      }
      else {
        iVar2 = FUN_0045f8e8(param_1,param_2,param_3,param_4,param_5 + -1,param_6,param_7,param_8);
      }
      *pcVar3 = *pcVar3 + '\x01';
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    param_4 = param_4 + -1;
    pcVar1 = pcVar1 + -1;
    pcVar3 = pcVar3 + -1;
  } while( true );
}

