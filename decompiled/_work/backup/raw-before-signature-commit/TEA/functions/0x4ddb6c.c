// name: FUN_004ddb6c
// address: 0x4ddb6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LONG __cdecl FUN_004ddb6c(PEXCEPTION_RECORD param_1,PVOID param_2,PCONTEXT param_3)

{
  LONG LVar1;
  int iVar2;
  _EXCEPTION_POINTERS local_c;
  
  if (param_1->ExceptionCode == 0xeedfae6) {
    LVar1 = 0;
  }
  else {
    if ((param_1->ExceptionCode == 0xeefface) || (param_1->ExceptionCode == 0xeedface)) {
      FUN_004ddd36(param_2,param_1);
      FUN_004dda40();
    }
    if ((param_1->ExceptionCode == 0xc00000fd) && (DAT_00517320 != 0)) {
      FUN_004e5f84((uint *)s_Stack_Overflow__00517324);
    }
    if ((DAT_0051c02c != (code *)0x0) && (iVar2 = (*DAT_0051c02c)(), iVar2 == 0)) {
      return 0;
    }
    if ((DAT_0051c028 != (code *)0x0) && (iVar2 = (*DAT_0051c028)(), iVar2 == 0)) {
      return 0;
    }
    if (((DAT_0051c478 != (int *)0x0) && ((*DAT_0051c478 == 1 || (*DAT_0051c478 == 2)))) &&
       ((param_1->ExceptionCode < 0xeedface || (0xeefface < param_1->ExceptionCode)))) {
      FUN_004e7909(2,3);
    }
    local_c.ExceptionRecord = param_1;
    local_c.ContextRecord = param_3;
    LVar1 = UnhandledExceptionFilter(&local_c);
  }
  return LVar1;
}

