// name: FUN_0044d824
// address: 0x44d824
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0044d824(int *param_1,undefined4 param_2)

{
  BOOL BVar1;
  int iVar2;
  bool bVar3;
  
  BVar1 = IsIconic(*(HWND *)(*param_1 + 0xc));
  if (BVar1 == 0) {
    bVar3 = FUN_004374d0(*param_1,param_2);
  }
  else if ((*(int *)((int)param_1 + 0x2e) == 0) && (*(int *)((int)param_1 + 0x15) != 0)) {
    iVar2 = FUN_00436d48(*(int *)((int)param_1 + 0x15),0x14,param_2,0);
    bVar3 = iVar2 != 0;
  }
  else {
    FUN_00436d48(*param_1,0x27,param_2,0);
    bVar3 = true;
  }
  return bVar3;
}

