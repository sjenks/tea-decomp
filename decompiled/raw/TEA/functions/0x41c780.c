// name: FUN_0041c780
// address: 0x41c780
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0041c7c4) */

int __cdecl FUN_0041c780(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_004dce64(0x4eeeec);
  local_c = (undefined4 *)&DAT_00513d64;
  if ((-1 < param_3) && (iVar2 = (**(code **)(*(int *)(param_2 + 0xc) + 0x24))(), param_3 < iVar2))
  {
    (**(code **)(*(int *)(param_2 + 0xc) + 0x40))();
    puVar3 = (uint *)FUN_004cc180();
    (**(code **)(*(int *)(param_2 + 0xc) + 0x44))();
    FUN_004cf41c((int)local_14,puVar3);
    FUN_004cc0cc();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar4 = FUN_004cf7b0(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar4 + 3;
    FUN_004dc7d4(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_0041c952;
    }
    FUN_004cc0bc();
  }
LAB_0041c952:
  *in_FS_OFFSET = local_38;
  return param_1;
}

