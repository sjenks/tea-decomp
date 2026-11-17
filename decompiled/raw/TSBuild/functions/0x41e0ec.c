// name: FUN_0041e0ec
// address: 0x41e0ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041e0ec(int *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 local_44;
  uint local_14 [2];
  uint local_c [2];
  
  FUN_00467ba8(0x4793ac);
  iVar4 = (**(code **)(*param_1 + 0x58))();
  if (iVar4 == 0) {
    *in_FS_OFFSET = local_44;
  }
  else {
    bVar3 = true;
    if (*(char *)((int)param_1 + 0x57) != '\0') {
      iVar6 = *(int *)(*(int *)(iVar4 + 9) + 8);
      iVar1 = *(int *)(*(int *)(iVar4 + 9) + 4);
      iVar5 = (**(code **)(*(int *)(*(int *)((int)param_1 + 6) + 0x18) + 0x2c))();
      if ((*(int *)(iVar5 + 0x15) == iVar1) &&
         (*(int *)(iVar5 + 0x19) * *(int *)(iVar5 + 0x29) == iVar6)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        bVar3 = false;
        if (param_1[0x16] < 0) {
          FUN_0041cf04(local_14,iVar4,(uint *)0x0);
          iVar6 = FUN_0041ed44(iVar5,local_14);
          param_1[0x16] = iVar6;
          FUN_0041cfe8(local_14,2);
        }
        else {
          FUN_0041cf04(local_c,iVar4,(uint *)0x0);
          FUN_0041ef8c(iVar5,param_1[0x16],local_c);
          FUN_0041cfe8(local_c,2);
        }
      }
    }
    if (bVar3) {
      if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[0x12])();
      }
      puVar7 = (undefined4 *)FUN_00456840();
      if (puVar7 != (undefined4 *)0x0) {
        FUN_0041e9bc(puVar7,iVar4,1,1);
      }
      param_1[0x12] = (int)puVar7;
      param_1[0x16] = 0;
      *(undefined1 *)((int)param_1 + 0x57) = 0;
    }
    (**(code **)(*param_1 + 0x5c))();
    *in_FS_OFFSET = local_44;
  }
  return;
}

