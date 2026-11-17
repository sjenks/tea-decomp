// name: FUN_00433870
// address: 0x433870
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00433870(int *param_1,LPWNDCLASSA param_2)

{
  BOOL BVar1;
  LPCSTR pCVar2;
  
  BVar1 = GetClassInfoA((HINSTANCE)0x0,s_STATIC_0047d7c0,param_2);
  if (BVar1 == 0) {
    FUN_00437914(*param_1,&param_2->style);
    param_2->style = 0x83;
    param_2->hbrBackground = (HBRUSH)0x10;
    param_2->hCursor = *(HCURSOR *)(*param_1 + 0x58);
  }
  else {
    param_2->hInstance = *(HINSTANCE *)(*(int *)(*param_1 + 0x70) + 8);
    param_2->style = 0x83;
    pCVar2 = (LPCSTR)(**(code **)(param_1[3] + 0x2c))();
    param_2->lpszClassName = pCVar2;
    param_2->lpfnWndProc = FUN_00433844;
    param_2->hCursor = *(HCURSOR *)(*param_1 + 0x58);
    param_2->hbrBackground = (HBRUSH)0x10;
  }
  return;
}

