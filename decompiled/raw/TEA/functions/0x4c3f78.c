// name: FUN_004c3f78
// address: 0x4c3f78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c3f78(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  
  FUN_004c3eec(param_1);
  if (((param_2 != (uint *)0x0) && (param_3 != (uint *)0x0)) && (param_4 != (uint *)0x0)) {
    pcVar1 = FUN_004dc9f4(param_2);
    pcVar2 = FUN_004dc9f4(param_3);
    pcVar3 = FUN_004dc9f4(param_4);
    pvVar4 = GlobalAlloc(0x42,(SIZE_T)(pcVar1 + (int)pcVar2 + (int)pcVar3 + 0xb));
    *(HGLOBAL *)(param_1 + 0x4e) = pvVar4;
    pvVar5 = GlobalLock(*(HGLOBAL *)(param_1 + 0x4e));
    *(LPVOID *)(param_1 + 0x5a) = pvVar5;
    pcVar1 = (char *)(*(int *)(param_1 + 0x5a) + 8);
    **(short **)(param_1 + 0x5a) = (short)pcVar1 - (short)*(undefined4 *)(param_1 + 0x5a);
    if (param_2 != (uint *)0x0) {
      for (; (char)*param_2 != '\0'; param_2 = (uint *)((int)param_2 + 1)) {
        *pcVar1 = (char)*param_2;
        pcVar1 = pcVar1 + 1;
      }
    }
    *pcVar1 = '\0';
    pcVar1 = pcVar1 + 1;
    *(short *)(*(int *)(param_1 + 0x5a) + 2) =
         (short)pcVar1 - (short)*(undefined4 *)(param_1 + 0x5a);
    if (param_3 != (uint *)0x0) {
      for (; (char)*param_3 != '\0'; param_3 = (uint *)((int)param_3 + 1)) {
        *pcVar1 = (char)*param_3;
        pcVar1 = pcVar1 + 1;
      }
    }
    *pcVar1 = '\0';
    pcVar1 = pcVar1 + 1;
    *(short *)(*(int *)(param_1 + 0x5a) + 4) =
         (short)pcVar1 - (short)*(undefined4 *)(param_1 + 0x5a);
    if (param_4 != (uint *)0x0) {
      for (; (char)*param_4 != '\0'; param_4 = (uint *)((int)param_4 + 1)) {
        *pcVar1 = (char)*param_4;
        pcVar1 = pcVar1 + 1;
      }
    }
    *pcVar1 = '\0';
    *(undefined2 *)(*(int *)(param_1 + 0x5a) + 6) = 0;
  }
  return;
}

