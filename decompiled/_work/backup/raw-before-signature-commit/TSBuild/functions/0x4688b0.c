// name: FUN_004688b0
// address: 0x4688b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LONG __cdecl FUN_004688b0(PEXCEPTION_RECORD param_1,PVOID param_2,PCONTEXT param_3)

{
  LONG LVar1;
  int iVar2;
  _EXCEPTION_POINTERS local_c;
  
  if (param_1->ExceptionCode == 0xeedfae6) {
    LVar1 = 0;
  }
  else {
    if ((param_1->ExceptionCode == 0xeefface) || (param_1->ExceptionCode == 0xeedface)) {
      FUN_00468a7a(param_2,param_1);
      FUN_00468784();
    }
    if ((param_1->ExceptionCode == 0xc00000fd) && (DAT_00489054 != 0)) {
      FUN_0047009c((uint *)s_Stack_Overflow__00489058);
    }
    if ((DAT_0048d4a4 != (code *)0x0) && (iVar2 = (*DAT_0048d4a4)(), iVar2 == 0)) {
      return 0;
    }
    if ((DAT_0048d4a0 != (code *)0x0) && (iVar2 = (*DAT_0048d4a0)(), iVar2 == 0)) {
      return 0;
    }
    if (((DAT_0048d8f0 != (int *)0x0) && ((*DAT_0048d8f0 == 1 || (*DAT_0048d8f0 == 2)))) &&
       ((param_1->ExceptionCode < 0xeedface || (0xeefface < param_1->ExceptionCode)))) {
      FUN_0047172d(2,3);
    }
    local_c.ExceptionRecord = param_1;
    local_c.ContextRecord = param_3;
    LVar1 = UnhandledExceptionFilter(&local_c);
  }
  return LVar1;
}

