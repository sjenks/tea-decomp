// name: FUN_0049db60
// address: 0x49db60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0049db60(int *param_1,LPPOINT param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int local_14 [4];
  
  uVar2 = FUN_004a5774(*param_1);
  piVar3 = (int *)FUN_00490dd0((int)(param_1 + 1),0x7537);
  if (piVar3 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar3;
  }
  puVar4 = FUN_004dd744((int)piVar3,iVar5,(int *)&DAT_00427ee4,(int *)&DAT_00490c00,0);
  if ((puVar4 != (undefined4 *)0x0) && ((*(byte *)((int)puVar4 + 0x42) & 1) != 0)) {
    ScreenToClient(*(HWND *)(*param_1 + 0xc),param_2);
    piVar3 = (int *)((int)puVar4 + 10);
    piVar6 = local_14;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar6 = piVar6 + 1;
    }
    if ((((param_2->x < local_14[0]) || (local_14[2] + 1 <= param_2->x)) ||
        (param_2->y < local_14[1])) || (local_14[3] + 1 <= param_2->y)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar2 = 0x11;
    }
  }
  return uVar2;
}

