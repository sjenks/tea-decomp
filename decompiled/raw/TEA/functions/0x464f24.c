// name: FUN_00464f24
// address: 0x464f24
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00464f6f) */

void __cdecl FUN_00464f24(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4fbe58);
  iVar2 = FUN_00452bcc(*(int *)(param_1 + 0x10));
  local_c = (uint *)&DAT_00513d64;
  for (iVar7 = 0; iVar5 = FUN_00408b14(*(int *)(param_1 + 0x140)), iVar7 < iVar5; iVar7 = iVar7 + 1)
  {
    if (iVar7 != iVar2) {
      if (local_c[-1] != 0) {
        FUN_004d5c40((int)local_14,local_c[-1],0,1,0x3b);
      }
      puVar3 = (uint *)FUN_00408c98(*(int *)(param_1 + 0x140),iVar7);
      uVar1 = local_c[-1];
      pcVar4 = FUN_004dc9f4(puVar3);
      FUN_004cfad4((int)local_14,uVar1,0,(uint)puVar3,(uint)pcVar4,0,(uint)pcVar4);
    }
  }
  puVar6 = FUN_00407734(local_c);
  FUN_00408884(*(int *)(param_1 + 0x140));
  *(undefined4 **)(param_1 + 0x140) = puVar6;
  FUN_00451784(*(int **)(param_1 + 0x10),4);
  FUN_00466b38(param_1);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar3 = local_c + -3;
      if (puVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (puVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *puVar3 = *puVar3 - 1;
        iVar2 = *puVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00465096;
    }
    FUN_004cc0bc();
  }
LAB_00465096:
  *in_FS_OFFSET = local_38;
  return;
}

