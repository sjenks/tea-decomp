// name: FUN_00416bbc
// address: 0x416bbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00416bbc(undefined4 *param_1,uint *param_2)

{
  HGDIOBJ pvVar1;
  
  pvVar1 = SelectObject((HDC)*param_1,(HGDIOBJ)*param_2);
  if (pvVar1 != (HGDIOBJ)0x0) {
    FUN_0041d158(*param_2);
    if ((HGDIOBJ)0x1 < pvVar1) {
      if (*(int *)((int)param_1 + 0x11) == 0) {
        *(HGDIOBJ *)((int)param_1 + 0x11) = pvVar1;
      }
      else {
        FUN_0041d184((uint)pvVar1);
      }
    }
  }
  return;
}

