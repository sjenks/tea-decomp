// name: FUN_0041fdb8
// address: 0x41fdb8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LONG __cdecl FUN_0041fdb8(PEXCEPTION_RECORD param_1,PVOID param_2,PCONTEXT param_3)

{
  LONG LVar1;
  int iVar2;
  _EXCEPTION_POINTERS local_c;
  
  if (param_1->ExceptionCode == 0xeedfae6) {
    LVar1 = 0;
  }
  else {
    if ((param_1->ExceptionCode == 0xeefface) || (param_1->ExceptionCode == 0xeedface)) {
      FUN_0041ff82(param_2,param_1);
      FUN_0041fc8c();
    }
    if ((param_1->ExceptionCode == 0xc00000fd) && (DAT_00432058 != 0)) {
      FUN_00426acc((uint *)s_Stack_Overflow__0043205c);
    }
    if ((DAT_00434ccc != (code *)0x0) && (iVar2 = (*DAT_00434ccc)(), iVar2 == 0)) {
      return 0;
    }
    if ((DAT_00434cc8 != (code *)0x0) && (iVar2 = (*DAT_00434cc8)(), iVar2 == 0)) {
      return 0;
    }
    if (((DAT_00435108 != (int *)0x0) && ((*DAT_00435108 == 1 || (*DAT_00435108 == 2)))) &&
       ((param_1->ExceptionCode < 0xeedface || (0xeefface < param_1->ExceptionCode)))) {
      FUN_00427ce5(2,3);
    }
    local_c.ExceptionRecord = param_1;
    local_c.ContextRecord = param_3;
    LVar1 = UnhandledExceptionFilter(&local_c);
  }
  return LVar1;
}

