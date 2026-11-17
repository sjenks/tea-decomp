// name: FUN_004b3b84
// address: 0x4b3b84
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004b3b84(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    while( true ) {
      iVar2 = FUN_004b5d60((undefined4 *)(param_1 + 0x14),iVar2);
      if (iVar2 == 0) {
        return 0;
      }
      if (param_2 != (char *)0x0) break;
      if (*(int *)(iVar2 + 0x2e) == 0) {
        return iVar2;
      }
    }
  } while ((*(int *)(iVar2 + 0x2e) == 0) ||
          (iVar1 = FUN_004dc978(*(char **)(iVar2 + 0x2e),param_2), iVar1 != 0));
  return iVar2;
}

