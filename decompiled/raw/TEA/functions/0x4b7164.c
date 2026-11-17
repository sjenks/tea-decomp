// name: FUN_004b7164
// address: 0x4b7164
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004b7164(int *param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  LPSTR lpString;
  int local_8;
  
  if (((param_1[6] != 0) && ((*(byte *)(param_1[6] + 4) & 2) != 0)) &&
     (iVar1 = FUN_004a76a8(*param_1,0xba,0,0), iVar1 < 2)) {
    lpString = (LPSTR)FUN_004cc180();
    GetWindowTextA(*(HWND *)(*param_1 + 0xc),lpString,param_1[5]);
    local_8 = (**(code **)(*(int *)param_1[6] + 0x10))();
    if (local_8 == 0) {
      local_8 = FUN_004c7ba4(param_1,param_2,param_3);
    }
    else if (param_3 == 1) {
      SetWindowTextA(*(HWND *)(*param_1 + 0xc),lpString);
    }
    FUN_004cc0cc();
    return local_8;
  }
  iVar1 = FUN_004c7ba4(param_1,param_2,param_3);
  return iVar1;
}

