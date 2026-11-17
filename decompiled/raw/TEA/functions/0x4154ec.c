// name: FUN_004154ec
// address: 0x4154ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004154ec(int *param_1,HMENU param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  UINT UVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar5;
  undefined4 local_44;
  int local_18;
  undefined4 local_10;
  HMENU local_c;
  
  FUN_004dce64(0x4ed9e8);
  FUN_004a7d1c(*param_1,param_2,param_3,param_4);
  FUN_00497aec(&local_10,param_2,0);
  iVar1 = GetMenuItemCount(local_c);
  if ((iVar1 != 0) && (UVar2 = FUN_00497c2c((int)&local_10,iVar1 + -1), UVar2 == 0x1414)) {
    (**(code **)(param_1[3] + 0xb0))();
    puVar5 = &local_10;
    uVar3 = (uint)(*(int *)(local_18 + -4) != 0);
    piVar4 = (int *)FUN_00422fc4(param_1[0xe]);
    FUN_00423e14(piVar4,(int)puVar5,uVar3);
    if (local_18 != 0) {
      if (*(int *)(local_18 + -0xc) != -1) {
        piVar4 = (int *)(local_18 + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar1 = *piVar4 + 1;
        }
        if (iVar1 != 0) goto LAB_00415623;
      }
      FUN_004cc0bc();
    }
  }
LAB_00415623:
  if ((param_2 != (HMENU)0x0) && (param_4 != '\0')) {
    DAT_0051ac88 = 0xe4c;
    DAT_0051ac84 = 0xe4c;
  }
  FUN_00497bf4(&local_10,2);
  *in_FS_OFFSET = local_44;
  return;
}

