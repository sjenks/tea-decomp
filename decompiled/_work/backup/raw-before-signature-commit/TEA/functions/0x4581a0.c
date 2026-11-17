// name: FUN_004581a0
// address: 0x4581a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_004581a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 *in_FS_OFFSET;
  int local_3c;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4f8f48);
  local_3c = 1;
  iVar2 = FUN_00466b18(param_1[0xe]);
  iVar3 = FUN_00408b14(iVar2);
LAB_004582df:
  do {
    do {
      iVar7 = iVar3 + -1;
      if (iVar3 < 1) {
        if (local_3c == 0) {
          FUN_00456950((int)param_1);
        }
        *in_FS_OFFSET = local_38;
        return local_3c;
      }
      iVar4 = FUN_00408c68(iVar2,iVar7);
      iVar3 = iVar7;
    } while (iVar4 != 0);
    puVar5 = (uint *)FUN_00408c98(iVar2,iVar7);
    FUN_004cf628((int)local_14,puVar5);
    uVar1 = *(uint *)(local_c + -4);
    pcVar6 = FUN_004dc9f4((uint *)s_is_no_longer_a_valid_TEA_Sympath_004f77b9);
    FUN_004cfad4((int)local_14,uVar1,0,0x4f77b9,(uint)pcVar6,0,(uint)pcVar6);
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
    local_3c = 0;
  } while (local_c == 0);
  if (*(int *)(local_c + -0xc) != -1) goto code_r0x00458276;
  goto LAB_004582a3;
code_r0x00458276:
  piVar8 = (int *)(local_c + -0xc);
  if (piVar8 == &DAT_00513d58) {
    iVar7 = 1;
  }
  else if (piVar8 == &DAT_00513d58) {
    iVar7 = 1;
  }
  else {
    *piVar8 = *piVar8 + -1;
    iVar7 = *piVar8 + 1;
  }
  if (iVar7 == 0) {
LAB_004582a3:
    FUN_004cc0bc();
    local_c = 0;
  }
  goto LAB_004582df;
}

