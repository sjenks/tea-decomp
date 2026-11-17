// name: FUN_0043d7ac
// address: 0x43d7ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0043d7ac(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  int local_1d8 [18];
  undefined4 local_190;
  int local_188;
  int local_184;
  undefined1 *local_180;
  undefined4 local_17c;
  int local_178;
  int local_174;
  undefined4 local_170;
  undefined2 local_160;
  int local_154;
  int local_14c;
  int local_148;
  undefined4 local_cc [2];
  undefined4 local_c4 [34];
  uint local_3c [2];
  LPSTR local_34;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4f56b8);
  if (param_3 != 1) {
    if (param_3 == 0x8d4) {
      local_160 = 0x20;
      FUN_004c279c(local_3c,0x80e,(uint *)s_TEA_Sympathy_Dictionary__TSD_____004f5423,0,0,
                   (uint)(PTR_DAT_004f33b8 + 1),0,0,0);
      local_154 = local_154 + 1;
      local_160 = 0x2c;
      GetWindowTextA(*(HWND *)(param_1[0x173] + 0xc),local_34,0x104);
      local_160 = 0x38;
      piVar1 = FUN_004c2e14(&local_14c,0,*param_1,(int)local_3c,0,0x4f545b,0);
      local_154 = local_154 + 6;
      iVar2 = (**(code **)(piVar1[3] + 0x14))();
      cVar4 = iVar2 == 1;
      *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + -0x5c;
      *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + -0x5c;
      local_154 = local_154 + -6;
      FUN_0048c668(&local_14c,0);
      *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + 0x5c;
      *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + 0x5c;
      *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + 0x96;
      local_154 = local_154 + -2;
      FUN_004a52c0(local_c4,0);
      *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + -0x96;
      local_154 = local_154 + -1;
      FUN_00489c54(local_cc,0);
      if (cVar4 != '\0') {
        FUN_0041b1ec(param_1 + 0x173,local_34);
      }
      local_154 = local_154 + -1;
      FUN_004c2888((int)local_3c,2);
    }
    goto LAB_0043dafa;
  }
  if (param_1[0x19] != 1) goto LAB_0043dafa;
  FUN_0043e91c((int)param_1);
  FUN_0043e02c(param_1,'\0');
  param_1[0x19] = 2;
  uVar3 = 1;
  if (param_1[0x1b] < 0) {
    local_184 = FUN_004bfdd8((int *)((int)param_1 + 0x473),(LPARAM)local_1d8,0x10);
    piVar1 = local_1d8;
    local_188 = 0;
    while ((local_188 < local_184 && (uVar3 != 0))) {
      iVar2 = *piVar1;
      param_1[0x1b] = iVar2;
      uVar3 = FUN_0043db94(param_1,iVar2 * 0x10 + param_1[0x29]);
      local_188 = local_188 + 1;
      piVar1 = piVar1 + 1;
    }
    param_1[0x1b] = -1;
  }
  else {
    local_160 = 8;
    FUN_0041b2b0((int)local_14,param_1 + 100);
    local_154 = local_154 + 1;
    uVar3 = FUN_0043db94(param_1,(int)(param_1 + 0x1e));
    local_154 = local_154 + -1;
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar1 = (int *)(local_c + -0xc);
        if (piVar1 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar1 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1 + 1;
        }
        if (iVar2 != 0) goto LAB_0043d957;
      }
      local_174 = local_c + -0xc;
      local_178 = local_c + -0xc;
      FUN_004cc0bc();
      local_17c = 0;
      local_180 = local_14;
      local_c = 0;
      local_190 = 0;
    }
  }
LAB_0043d957:
  if ((param_1[0x19] == 2) && (uVar3 != 0)) {
    param_1[0x19] = 4;
    (**(code **)(param_1[3] + 0x20))();
  }
  else {
    FUN_0043e02c(param_1,'\x01');
    FUN_0043dfb0((int)param_1);
  }
LAB_0043dafa:
  *in_FS_OFFSET = local_170;
  return;
}

