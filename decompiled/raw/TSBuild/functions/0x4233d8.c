// name: FUN_004233d8
// address: 0x4233d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004233d8(int param_1,char *param_2,uint param_3,int param_4)

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
  
  FUN_00467ba8(0x47a888);
  if (param_4 == 0) {
LAB_00423415:
    cVar2 = '\0';
  }
  else {
    iVar3 = FUN_0044f0b4(param_4,param_3,(LPSTR)local_f4,0x80);
    if (iVar3 == 0) goto LAB_00423415;
    cVar2 = '\x01';
  }
  if (param_2 != (char *)0x0) {
    *param_2 = cVar2;
  }
  if (cVar2 == '\0') {
    FUN_0046a5c8((undefined1 *)local_f4,(byte *)s_Exception___u__Could_not_load_de_0047a6da);
  }
  local_28 = 8;
  FUN_00459d78((int)local_14,local_f4);
  local_1c = local_1c + 1;
  local_28 = 0x20;
  local_44 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    local_54 = FUN_00459f00(param_1,uVar1,uVar1);
    local_50 = local_54 + 3;
    *(int **)(param_1 + 8) = local_50;
    local_58 = param_1;
    local_60 = local_c;
    local_64 = *(undefined4 **)(param_1 + 8);
    local_5c = uVar1;
    FUN_00467580(local_64,local_c,uVar1);
  }
  else {
    local_48 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_4c = param_1;
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00485bcc) {
      *piVar4 = *piVar4 + 1;
    }
  }
  local_28 = 0x38;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0042359b;
    }
    local_68 = local_c + -3;
    local_6c = local_c + -3;
    FUN_0045680c();
  }
LAB_0042359b:
  *in_FS_OFFSET = local_38;
  return param_1;
}

