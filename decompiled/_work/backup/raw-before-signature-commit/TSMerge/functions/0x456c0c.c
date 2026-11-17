// name: FUN_00456c0c
// address: 0x456c0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LONG __cdecl FUN_00456c0c(PEXCEPTION_RECORD param_1,PVOID param_2,PCONTEXT param_3)

{
  LONG LVar1;
  int iVar2;
  _EXCEPTION_POINTERS local_c;
  
  if (param_1->ExceptionCode == 0xeedfae6) {
    LVar1 = 0;
  }
  else {
    if ((param_1->ExceptionCode == 0xeefface) || (param_1->ExceptionCode == 0xeedface)) {
      FUN_00456dd6(param_2,param_1);
      FUN_00456ae0();
    }
    if ((param_1->ExceptionCode == 0xc00000fd) && (DAT_00474668 != 0)) {
      FUN_0045d560((uint *)s_Stack_Overflow__0047466c);
    }
    if ((DAT_004779f4 != (code *)0x0) && (iVar2 = (*DAT_004779f4)(), iVar2 == 0)) {
      return 0;
    }
    if ((DAT_004779f0 != (code *)0x0) && (iVar2 = (*DAT_004779f0)(), iVar2 == 0)) {
      return 0;
    }
    if (((DAT_00477e24 != (int *)0x0) && ((*DAT_00477e24 == 1 || (*DAT_00477e24 == 2)))) &&
       ((param_1->ExceptionCode < 0xeedface || (0xeefface < param_1->ExceptionCode)))) {
      FUN_0045e9b9(2,3);
    }
    local_c.ExceptionRecord = param_1;
    local_c.ContextRecord = param_3;
    LVar1 = UnhandledExceptionFilter(&local_c);
  }
  return LVar1;
}

