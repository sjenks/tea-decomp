// name: FUN_004a6dcc
// address: 0x4a6dcc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a6dcc(int param_1,HMENU param_2)

{
  LPCSTR lpClassName;
  HWND pHVar1;
  LPCSTR lpWindowName;
  DWORD dwStyle;
  int X;
  int Y;
  int nWidth;
  int nHeight;
  HINSTANCE hInstance;
  LPVOID lpParam;
  
  lpParam = *(LPVOID *)(param_1 + 0x38);
  hInstance = *(HINSTANCE *)(*(int *)(param_1 + 0x70) + 8);
  if (*(int *)(param_1 + 0x14) == 0) {
    pHVar1 = (HWND)0x0;
  }
  else {
    pHVar1 = *(HWND *)(*(int *)(param_1 + 0x14) + 0xc);
  }
  nHeight = *(int *)(param_1 + 0x2c);
  nWidth = *(int *)(param_1 + 0x28);
  Y = *(int *)(param_1 + 0x24);
  X = *(int *)(param_1 + 0x20);
  dwStyle = *(DWORD *)(param_1 + 0x18);
  lpWindowName = *(LPCSTR *)(param_1 + 0x10);
  lpClassName = (LPCSTR)(**(code **)(*(int *)(param_1 + 8) + 0x74))();
  pHVar1 = CreateWindowExA(*(DWORD *)(param_1 + 0x1c),lpClassName,lpWindowName,dwStyle,X,Y,nWidth,
                           nHeight,pHVar1,param_2,hInstance,lpParam);
  *(HWND *)(param_1 + 0xc) = pHVar1;
  return;
}

