// name: FUN_00447fb8
// address: 0x447fb8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00447fb8(int *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  tagRECT *ptVar5;
  LONG *pLVar6;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [4];
  tagRECT local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  char local_6;
  char local_5;
  
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_0042d3ec(*param_1);
    local_5 = (uVar3 & 0x10000) != 0;
    local_6 = (uVar3 & 0x20000) != 0;
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    FUN_0042d52c(*param_1,&local_28);
    ptVar5 = &local_28;
    pLVar6 = local_38;
    for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pLVar6 = ptVar5->left;
      ptVar5 = (tagRECT *)&ptVar5->top;
      pLVar6 = pLVar6 + 1;
    }
    local_14 = param_2[1] - local_38[1];
    local_18 = *param_2 - local_38[0];
    local_10 = local_18;
    local_c = local_14;
    if (((uVar3 & 0x80000) != 0) || ((char)param_1[8] != '\0')) {
      FUN_0044993c(&local_48,param_1);
      if ((local_10 < local_48) ||
         (((local_40 <= local_10 || (local_c < local_44)) || (local_3c <= local_c)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_3 = 3;
        return 1;
      }
    }
    if (local_6 != '\0') {
      FUN_0044998c(&local_58,param_1);
      if (((local_10 < local_58) || (local_50 <= local_10)) ||
         ((local_c < local_54 || (local_4c <= local_c)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_3 = 8;
        return 1;
      }
    }
    if (local_5 != '\0') {
      FUN_004499f8(&local_68,param_1);
      if (((local_10 < local_68) || (local_60 <= local_10)) ||
         ((local_c < local_64 || (local_5c <= local_c)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_3 = 9;
        return 1;
      }
    }
    FUN_00449888(&local_78,param_1);
    if ((((local_10 < local_78) || (local_70 <= local_10)) || (local_c < local_74)) ||
       (local_6c <= local_c)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *param_3 = 2;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

