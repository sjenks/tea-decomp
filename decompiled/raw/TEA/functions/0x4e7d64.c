// name: FUN_004e7d64
// address: 0x4e7d64
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004e7d64(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  EXCEPTION_RECORD local_54;
  
  if (param_2 == (PEXCEPTION_RECORD)0x0) {
    local_54.ExceptionCode = 0x26;
    local_54.ExceptionFlags = 2;
    param_2 = &local_54;
    local_54.NumberParameters = 0;
  }
  param_2->ExceptionFlags = param_2->ExceptionFlags | 2;
  FUN_004ddd36(param_1,param_2);
  return;
}

