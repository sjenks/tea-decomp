// name: FUN_0048e0c8
// address: 0x48e0c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_0048e0c8(undefined4 *param_1,LPSTR param_2,int param_3,LPRECT param_4,UINT param_5,
            LPDRAWTEXTPARAMS param_6)

{
  if (param_6 != (LPDRAWTEXTPARAMS)0x0) {
    param_6->cbSize = 0x14;
  }
  DrawTextExA((HDC)*param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

