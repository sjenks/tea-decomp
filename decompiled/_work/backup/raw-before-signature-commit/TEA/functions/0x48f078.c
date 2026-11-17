// name: FUN_0048f078
// address: 0x48f078
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0048f078(int param_1,char *param_2,uint param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_f4 [34];
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  uint local_5c;
  int local_58;
  int *local_54;
  int *local_50;
  int local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_004dce64(0x506430);
  if (param_4 == 0) {
LAB_0048f0b5:
    cVar2 = '\0';
  }
  else {
    iVar3 = FUN_004c0cd4(param_4,param_3,(LPSTR)local_f4,0x80);
    if (iVar3 == 0) goto LAB_0048f0b5;
    cVar2 = '\x01';
  }
  if (param_2 != (char *)0x0) {
    *param_2 = cVar2;
  }
  if (cVar2 == '\0') {
    FUN_004e0344((undefined1 *)local_f4,(byte *)s_Exception___u__Could_not_load_de_00506282);
  }
  local_28 = 8;
  FUN_004cf628((int)local_14,local_f4);
  local_1c = local_1c + 1;
  local_28 = 0x20;
  local_44 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    local_54 = FUN_004cf7b0(param_1,uVar1,uVar1);
    local_50 = local_54 + 3;
    *(int **)(param_1 + 8) = local_50;
    local_58 = param_1;
    local_60 = local_c;
    local_64 = *(undefined4 **)(param_1 + 8);
    local_5c = uVar1;
    FUN_004dc7d4(local_64,local_c,uVar1);
  }
  else {
    local_48 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_4c = param_1;
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  local_28 = 0x38;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0048f23b;
    }
    local_68 = local_c + -3;
    local_6c = local_c + -3;
    FUN_004cc0bc();
  }
LAB_0048f23b:
  *in_FS_OFFSET = local_38;
  return param_1;
}

