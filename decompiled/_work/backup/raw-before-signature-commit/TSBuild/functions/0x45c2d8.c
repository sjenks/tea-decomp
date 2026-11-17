// name: FUN_0045c2d8
// address: 0x45c2d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0045c2d8(undefined4 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 local_34 [12];
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_00467ba8(0x486520);
  local_18 = 8;
  *param_1 = param_2;
  iVar3 = FUN_0045be50(*param_2);
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_0045be50(*param_2);
    FUN_0045be5c(piVar4);
  }
  cVar1 = FUN_0045c3c0();
  if (cVar1 != '\0') {
    bVar2 = FUN_0045c3cc((undefined *)param_2);
    if (bVar2) {
      FUN_00469598((int *)&DAT_0048908c);
    }
    bVar2 = FUN_0045c3e0(param_2);
    if (bVar2) {
      FUN_00469598((int *)&DAT_004890a4);
    }
  }
  iVar3 = FUN_0045bea8(*param_2);
  if (iVar3 != 0) {
    iVar3 = FUN_0045bea8(*param_2);
    uVar5 = FUN_0045bba0(iVar3);
    if ((uVar5 & 1) != 0) {
      piVar4 = (int *)FUN_0045bea8(*param_2);
      FUN_0045c418(local_34,piVar4);
    }
  }
  bVar2 = FUN_0045be3c(*param_2);
  *(bool *)(param_1 + 1) = bVar2;
  if (!bVar2) {
    FUN_0045b7d4(*param_2,1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

