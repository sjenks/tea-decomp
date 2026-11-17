// name: FUN_0043550c
// address: 0x43550c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0043550c(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  if ((param_2 == 1) && (param_4 != 0)) {
    SendMessageA(param_1,0x466,1,param_4);
  }
  return 0;
}

