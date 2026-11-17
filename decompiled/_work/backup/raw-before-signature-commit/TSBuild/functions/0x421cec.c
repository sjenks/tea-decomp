// name: FUN_00421cec
// address: 0x421cec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00421cec(undefined4 *param_1,uint *param_2)

{
  HGDIOBJ pvVar1;
  
  pvVar1 = SelectObject((HDC)*param_1,(HGDIOBJ)*param_2);
  if (pvVar1 != (HGDIOBJ)0x0) {
    FUN_004282cc(*param_2);
    if ((HGDIOBJ)0x1 < pvVar1) {
      if (*(int *)((int)param_1 + 9) == 0) {
        *(HGDIOBJ *)((int)param_1 + 9) = pvVar1;
      }
      else {
        FUN_004282f8((uint)pvVar1);
      }
    }
  }
  return;
}

