// name: FUN_0041fbe4
// address: 0x41fbe4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0041fc28) */

void __cdecl FUN_0041fbe4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4ef824);
  local_c = (uint *)&DAT_00513d64;
  for (iVar6 = 0; iVar4 = FUN_00408b14(*(int *)(param_1 + 0x14)), iVar6 < iVar4; iVar6 = iVar6 + 1)
  {
    if (local_c[-1] != 0) {
      FUN_004d5c40((int)local_14,local_c[-1],0,1,0x3b);
    }
    puVar2 = (uint *)FUN_00408c98(*(int *)(param_1 + 0x14),iVar6);
    if (param_3 == iVar6) {
LAB_0041fca5:
      FUN_004d573c((int)local_14,param_2);
      FUN_004d5c40((int)local_14,local_c[-1],0,1,0x3b);
      param_3 = iVar6;
    }
    else if (param_3 < 0) {
      pcVar3 = FUN_004dc9f4(puVar2);
      iVar4 = FUN_0043c624(*(byte **)(param_2 + 8),*(int *)(*(int *)(param_2 + 8) + -4),
                           (byte *)puVar2,(int)pcVar3);
      if (iVar4 < 0) goto LAB_0041fca5;
    }
    puVar2 = (uint *)FUN_00408c98(*(int *)(param_1 + 0x14),iVar6);
    uVar1 = local_c[-1];
    pcVar3 = FUN_004dc9f4(puVar2);
    FUN_004cfad4((int)local_14,uVar1,0,(uint)puVar2,(uint)pcVar3,0,(uint)pcVar3);
  }
  iVar6 = FUN_00408b14(*(int *)(param_1 + 0x14));
  if ((param_3 == iVar6) || (param_3 < 0)) {
    if (local_c[-1] != 0) {
      FUN_004d5c40((int)local_14,local_c[-1],0,1,0x3b);
    }
    FUN_004d573c((int)local_14,param_2);
    param_3 = FUN_00408b14(*(int *)(param_1 + 0x14));
  }
  puVar5 = FUN_00407734(local_c);
  FUN_00408884(*(int *)(param_1 + 0x14));
  *(undefined4 **)(param_1 + 0x14) = puVar5;
  FUN_00408cbc(local_24,(int)puVar5,param_3);
  (**(code **)(*(int *)(param_1 + 0xc) + 100))();
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar7 = (int *)(local_1c + -0xc);
      if (piVar7 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (piVar7 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *piVar7 = *piVar7 + -1;
        iVar6 = *piVar7 + 1;
      }
      if (iVar6 != 0) goto LAB_0041fe22;
    }
    FUN_004cc0bc();
    local_1c = 0;
  }
LAB_0041fe22:
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar2 = local_c + -3;
      if (puVar2 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (puVar2 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        iVar6 = *puVar2 + 1;
      }
      if (iVar6 != 0) goto LAB_0041fe92;
    }
    FUN_004cc0bc();
  }
LAB_0041fe92:
  *in_FS_OFFSET = local_48;
  return;
}

