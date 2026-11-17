// name: FUN_0045c520
// address: 0x45c520
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045c520(int *param_1)

{
  SHORT SVar1;
  int iVar2;
  
  if (param_1[0x18] == 0) {
    iVar2 = FUN_00452d7c((int)param_1);
    if (0 < iVar2) {
      iVar2 = FUN_00466b28(param_1[0xe]);
      if (*(int *)(iVar2 + 0x1c8) == 0) {
        SVar1 = GetKeyState(0x10);
        if (SVar1 < 0) {
          iVar2 = 0x3160;
        }
        else {
          iVar2 = 0x1d42;
        }
      }
      else {
        iVar2 = 0x31a6;
      }
      FUN_00457354(param_1,*param_1,1,iVar2);
    }
  }
  return;
}

