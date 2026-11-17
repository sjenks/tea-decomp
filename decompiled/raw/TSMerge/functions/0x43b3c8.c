// name: FUN_0043b3c8
// address: 0x43b3c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined1 __cdecl FUN_0043b3c8(int *param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  LPSTR pCVar4;
  
  if (param_1[6] == 0) {
    uVar3 = 1;
  }
  else {
    pCVar4 = FUN_0043af08(param_1,0);
    if (param_2 == '\0') {
      uVar3 = (**(code **)(*(int *)param_1[6] + 0xc))();
    }
    else {
      piVar1 = (int *)param_1[6];
      cVar2 = (**(code **)(*piVar1 + 0xc))();
      if (cVar2 == '\0') {
        (**(code **)(*piVar1 + 4))();
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    FUN_0043afc4(param_1,pCVar4,'\0');
  }
  return uVar3;
}

