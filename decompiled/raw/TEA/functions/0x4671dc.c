// name: FUN_004671dc
// address: 0x4671dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * __cdecl FUN_004671dc(int *param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  undefined4 local_50;
  undefined1 local_28 [8];
  int local_20;
  int *local_18;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4fc4f0);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x60);
    param_1[0x60] = (int)(param_1 + 0x5d);
    param_1[0x61] = (int)(param_1 + 0x5e);
    param_1[1] = (int)(param_1 + 0x5d);
    param_1[2] = (int)(param_1 + 0x5e);
    param_1[0x5c] = 0;
    param_1[0x5f] = 0;
    param_1[0x5d] = (int)&PTR_FUN_004ea94c;
    param_1[0x5e] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x60,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x110;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x110;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_00413cf4(param_1,1,0x4fc474,uVar1,param_4,(uint *)0x2e68,1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x110;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x110;
  param_1[3] = (int)&PTR_FUN_004fc6fc;
  *(undefined ***)param_1[1] = &PTR_LAB_004fc7c4;
  *(undefined ***)param_1[2] = &PTR_LAB_004fc7d0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fc7dc;
  param_1[0x18] = (int)param_3;
  param_1[0x2d] = 0;
  param_1[0x2e] = param_5;
  FUN_004ac4b8(param_1 + 0x2f,0,*param_1,0x2eae,0,0);
  param_1[0x5b] = 0;
  uVar2 = 0;
  do {
    local_18 = (int *)FUN_004cc0f0();
    if (local_18 != (int *)0x0) {
      iVar4 = 1;
      FUN_004cf628((int)local_14,(uint *)(s_TEAQuickReference_004fc474 + 0x11));
      FUN_0041d588(local_18,0,param_1,uVar2 + 0x2e86,(int)local_14,iVar4);
    }
    param_1[uVar2 + 0x19] = (int)local_18;
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar3 = (int *)(local_c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3 + 1;
        }
        if (iVar4 != 0) goto LAB_0046747f;
      }
      FUN_004cc0bc();
      local_c = 0;
    }
LAB_0046747f:
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  uVar2 = 0;
  do {
    piVar3 = (int *)FUN_004cc0f0();
    if (piVar3 != (int *)0x0) {
      iVar4 = 0;
      FUN_004cf628((int)local_28,(uint *)(s_TEAQuickReference_004fc474 + 0x11));
      FUN_0041d588(piVar3,0,param_1,uVar2 + 0x2e72,(int)local_28,iVar4);
    }
    param_1[uVar2 + 0x23] = (int)piVar3;
    if (local_20 != 0) {
      if (*(int *)(local_20 + -0xc) != -1) {
        piVar3 = (int *)(local_20 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3 + 1;
        }
        if (iVar4 != 0) goto LAB_00467572;
      }
      FUN_004cc0bc();
      local_20 = 0;
    }
LAB_00467572:
    uVar2 = uVar2 + 1;
    if (9 < uVar2) {
      *in_FS_OFFSET = local_50;
      return param_1;
    }
  } while( true );
}

