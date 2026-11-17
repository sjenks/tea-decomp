// name: FUN_004e3124
// address: 0x4e3124
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004e3124(LPWSTR param_1,byte *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    uVar1 = 0;
  }
  else if (*param_2 == 0) {
    if (param_1 != (LPWSTR)0x0) {
      *(undefined2 *)param_1 = 0;
    }
    uVar1 = 0;
  }
  else if (*(int *)(PTR_DAT_00518658 + 8) == 0) {
    if (((&DAT_0051c1d9)[*param_2] & 4) == 0) {
      iVar2 = MultiByteToWideChar(*(UINT *)PTR_DAT_00518658,9,(LPCSTR)param_2,1,param_1,
                                  (uint)(param_1 != (LPWSTR)0x0));
      if (iVar2 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 1;
      }
    }
    else if (((param_3 < 2) ||
             (iVar2 = MultiByteToWideChar(*(UINT *)PTR_DAT_00518658,9,(LPCSTR)param_2,2,param_1,
                                          (uint)(param_1 != (LPWSTR)0x0)), iVar2 == 0)) &&
            ((param_3 < 2 || (param_2[1] == 0)))) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    if (param_1 != (LPWSTR)0x0) {
      *(ushort *)param_1 = (ushort)*param_2;
    }
    uVar1 = 1;
  }
  return uVar1;
}

