// name: FUN_004370e8
// address: 0x4370e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004370e8(undefined4 *param_1,WPARAM param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  HWND local_8;
  
  if (*param_3 == 1) {
    piVar2 = FUN_00438f08((undefined4 *)param_3[5]);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
      return;
    }
  }
  else {
    local_8 = GetDlgItem((HWND)param_1[3],param_3[1]);
    puVar3 = (undefined4 *)FUN_00436e00(local_8,param_1[0x1b]);
    if (puVar3 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)FUN_0042e86c();
      if (puVar4 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)FUN_0043831c((int)param_1);
      }
      else if (param_1 != puVar4) {
        puVar3 = puVar4;
      }
    }
    if (puVar3 != (undefined4 *)0x0) {
      if (puVar3[3] != 0) {
        FUN_00438338((int)puVar3,0x2c,param_2,(LPARAM)param_3);
        return;
      }
      local_18 = 0x2c;
      local_14 = 0;
      local_c = 0;
      cVar1 = (**(code **)(puVar3[2] + 0x84))();
      if (cVar1 != '\0') {
        FUN_00422b40(*puVar3,(int)&local_18);
        return;
      }
    }
  }
  FUN_00436428((int)param_1);
  return;
}

