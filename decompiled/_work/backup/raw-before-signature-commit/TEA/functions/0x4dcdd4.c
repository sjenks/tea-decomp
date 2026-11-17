// name: FUN_004dcdd4
// address: 0x4dcdd4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004dcdd4(char *param_1,char *param_2)

{
  char cVar1;
  
  while (((cVar1 = *param_2, *param_1 = cVar1, cVar1 != '\0' &&
          (cVar1 = param_2[1], param_1[1] = cVar1, cVar1 != '\0')) &&
         (cVar1 = param_2[2], param_1[2] = cVar1, cVar1 != '\0'))) {
    cVar1 = param_2[3];
    param_2 = param_2 + 4;
    param_1[3] = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    param_1 = param_1 + 4;
  }
  return;
}

