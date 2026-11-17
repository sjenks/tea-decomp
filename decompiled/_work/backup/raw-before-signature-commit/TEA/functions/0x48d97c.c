// name: FUN_0048d97c
// address: 0x48d97c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048d97c(undefined4 *param_1,uint *param_2)

{
  HGDIOBJ pvVar1;
  
  pvVar1 = SelectObject((HDC)*param_1,(HGDIOBJ)*param_2);
  if (pvVar1 != (HGDIOBJ)0x0) {
    FUN_00493e88(*param_2);
    if ((HGDIOBJ)0x1 < pvVar1) {
      if (*(int *)((int)param_1 + 0x11) == 0) {
        *(HGDIOBJ *)((int)param_1 + 0x11) = pvVar1;
      }
      else {
        FUN_00493eb4((uint)pvVar1);
      }
    }
  }
  return;
}

