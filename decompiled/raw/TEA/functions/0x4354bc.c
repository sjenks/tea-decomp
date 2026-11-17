// name: FUN_004354bc
// address: 0x4354bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_004354bc(HWND param_1,undefined4 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  CHAR local_38;
  char local_37 [51];
  
  GetClassNameA(param_1,&local_38,0x32);
  pcVar2 = &local_38;
  pcVar3 = s_SysHeader32_004f3570;
  do {
    if (*pcVar2 != *pcVar3) {
      return 1;
    }
    bVar4 = true;
    if (*pcVar2 == '\0') break;
    pcVar1 = pcVar2 + 1;
    if (*pcVar1 != pcVar3[1]) {
      return 1;
    }
    pcVar2 = pcVar2 + 2;
    pcVar3 = pcVar3 + 2;
    bVar4 = *pcVar1 == '\0';
  } while (!bVar4);
  if (bVar4) {
    *param_2 = param_1;
  }
  return 1;
}

