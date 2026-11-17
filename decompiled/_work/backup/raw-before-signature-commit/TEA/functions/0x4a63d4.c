// name: FUN_004a63d4
// address: 0x4a63d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a63d4(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  LRESULT LVar2;
  
  if (*param_3 == 1) {
    piVar1 = FUN_004a8294((undefined4 *)param_3[0xb]);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return;
    }
  }
  else {
    LVar2 = FUN_004a614c((HWND)param_3[5],*(LPARAM *)(param_1 + 0x6c));
    if ((param_3[5] != *(int *)(param_1 + 0xc)) && (LVar2 != 0)) {
      FUN_004a7708(LVar2,'\x01');
      return;
    }
  }
  FUN_004a5774(param_1);
  return;
}

