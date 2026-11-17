// name: FUN_004548d0
// address: 0x4548d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004548d0(int *param_1,int param_2)

{
  bool bVar1;
  HWND pHVar2;
  BOOL BVar3;
  
  bVar1 = FUN_00454524((int)param_1,param_2);
  if (!bVar1) {
    return;
  }
  if (param_2 < 0x1dbb) {
    if (param_2 == 0x1dba) {
      FUN_004a76a8(param_1[0x56],0x302,0,0);
      return;
    }
    if (param_2 < 0x1d61) {
      if (param_2 == 0x1d60) {
        FUN_004534b8((int)param_1);
        return;
      }
      if (param_2 == 0x1d38) {
        FUN_00453724(param_1);
        return;
      }
      if (param_2 == 0x1d4c) {
        pHVar2 = GetFocus();
        BVar3 = IsChild(*(HWND *)(param_1[0x56] + 0xc),pHVar2);
        if (BVar3 == 0) {
          FUN_0045424c(param_1);
          return;
        }
        FUN_004a76a8(param_1[0x56],0x301,0,0);
        return;
      }
      if (param_2 == 0x1d56) {
        pHVar2 = GetFocus();
        BVar3 = IsChild(*(HWND *)(param_1[0x56] + 0xc),pHVar2);
        if (BVar3 == 0) {
          FUN_00454434((int)param_1);
          return;
        }
        FUN_004a76a8(param_1[0x56],0x142,0,-0x10000);
        return;
      }
    }
    else {
      if (param_2 == 0x1d6a) {
        FUN_0045318c(param_1);
        return;
      }
      if (param_2 == 0x1d74) {
        FUN_004525f4((int)param_1);
        return;
      }
      if (param_2 == 0x1d7e) {
        FUN_004526b4(param_1);
        return;
      }
    }
  }
  else if (param_2 < 0x2e5f) {
    if (param_2 == 0x2e5e) {
      param_1[0x29] = 1;
      FUN_00451784(param_1,5);
      return;
    }
    if (param_2 == 0x1dc4) {
      FUN_004a76a8(param_1[0x56],0x300,0,0);
      return;
    }
    if (param_2 == 0x1dce) {
LAB_00454a3d:
      FUN_0045734c();
      return;
    }
    if (param_2 == 0x2e54) {
      param_1[0x29] = 0;
      FUN_00451784(param_1,5);
      return;
    }
  }
  else {
    if (param_2 == 0x30b6) goto LAB_00454a3d;
    if ((param_2 == 0x31d8) || (param_2 == 0x31e2)) {
      param_1[0x1a4] = (uint)(param_2 == 0x31e2);
      FUN_0045269c(param_1);
      return;
    }
  }
  FUN_00457354(param_1,*param_1,0,param_2);
  return;
}

