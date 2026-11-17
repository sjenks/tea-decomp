// name: FUN_00416964
// address: 0x416964
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00416964(int *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  LPCSTR lpFile;
  undefined4 uVar5;
  
  if (param_3[2] == -0x2d2) {
    cVar1 = (**(code **)(param_1[3] + 100))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  else if ((param_3[2] == 0x70b) && (param_3[3] == 0x201)) {
    iVar2 = FUN_004a768c(*param_1);
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 8);
    }
    puVar4 = FUN_004dd744(iVar2,iVar3,(int *)&DAT_0040299c,(int *)&DAT_00402cfc,0);
    if ((puVar4 != (undefined4 *)0x0) && ((int)param_3[6] < (int)param_3[7])) {
      iVar2 = param_3[7];
      iVar3 = param_3[6];
      lpFile = (LPCSTR)FUN_004cc180();
      FUN_004dc844((undefined4 *)lpFile,0,(iVar2 - iVar3) + 1);
      (**(code **)(puVar4[3] + 0x30))();
      ShellExecuteA((HWND)0x0,&DAT_004ed2ba,lpFile,(LPCSTR)0x0,(LPCSTR)0x0,9);
      FUN_004cc0cc();
    }
  }
  uVar5 = FUN_004a5a18((undefined4 *)*param_1,param_2,param_3);
  return uVar5;
}

