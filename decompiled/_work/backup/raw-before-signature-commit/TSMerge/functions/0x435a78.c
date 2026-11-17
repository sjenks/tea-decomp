// name: FUN_00435a78
// address: 0x435a78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00435a78(int *param_1,HMODULE param_2,LPCSTR param_3)

{
  int iVar1;
  HRSRC hResInfo;
  HGLOBAL pvVar2;
  
  hResInfo = FindResourceA(param_2,param_3,(LPCSTR)0x2);
  if (hResInfo == (HRSRC)0x0) {
    pvVar2 = (HGLOBAL)0x0;
  }
  else {
    pvVar2 = LoadResource(param_2,hResInfo);
  }
  *param_1 = (int)pvVar2;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    *(undefined1 *)((int)param_1 + 0x1f) = 1;
    FUN_00435464(param_1);
    FUN_0043551c(param_1);
  }
  return iVar1 != 0;
}

