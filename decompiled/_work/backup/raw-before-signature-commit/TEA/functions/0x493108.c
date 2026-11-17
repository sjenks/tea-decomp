// name: FUN_00493108
// address: 0x493108
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00493108(int *param_1,int param_2,HWND param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *unaff_ESI;
  undefined4 local_14;
  int local_10;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = param_2;
  local_8 = 0;
  cVar2 = (**(code **)(param_1[6] + 0x68))();
  if (cVar2 == '\0') {
    for (iVar1 = *(int *)(*param_1 + 0x14); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar1 + 8);
      }
      unaff_ESI = FUN_004dd744(iVar1,iVar4,(int *)&DAT_0040299c,(int *)&DAT_00415b1c,0);
      if ((unaff_ESI != (undefined4 *)0x0) || (*(int *)(iVar1 + 0x14) == 0)) break;
    }
    if ((iVar1 == 0) ||
       ((unaff_ESI != (undefined4 *)0x0 &&
        (iVar4 = (**(code **)(unaff_ESI[3] + 0x24))(), iVar4 == *(int *)(*param_1 + 0xc))))) {
      uVar3 = FUN_004a5968((undefined4 *)*param_1,param_2,param_3,param_4);
    }
    else {
      uVar3 = (**(code **)(*(int *)(iVar1 + 8) + 0x48))();
    }
  }
  else {
    FUN_0048e7e0(param_1[4],(int)&local_14);
    uVar3 = 0;
  }
  return uVar3;
}

