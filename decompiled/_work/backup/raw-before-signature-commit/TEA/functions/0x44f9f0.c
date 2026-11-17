// name: FUN_0044f9f0
// address: 0x44f9f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044f9f0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  tagRECT *ptVar3;
  int *piVar4;
  int local_28 [4];
  tagRECT local_18;
  char local_5;
  
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  FUN_004a7a30(param_1,&local_18);
  ptVar3 = &local_18;
  piVar4 = local_28;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = ptVar3->left;
    ptVar3 = (tagRECT *)&ptVar3->top;
    piVar4 = piVar4 + 1;
  }
  if ((((*param_2 < local_28[0]) || (local_28[2] <= *param_2)) || (param_2[1] < local_28[1])) ||
     (local_28[3] <= param_2[1])) {
    local_5 = '\0';
  }
  else {
    local_5 = '\x01';
  }
  if (local_5 != '\0') {
    iVar2 = GetDlgCtrlID(*(HWND *)(param_1 + 0xc));
    if (iVar2 < 0x1113) {
      iVar1 = iVar2;
      if (((iVar2 == 0x1112) || (iVar1 = 0, iVar2 == 0x10ae)) ||
         ((iVar1 = 0, iVar2 == 0x10b8 ||
          ((iVar1 = 0, iVar2 == 0x10fe || (iVar1 = 0, iVar2 == 0x1108)))))) {
LAB_0044fa9c:
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
    }
    else {
      iVar1 = 0;
      if (((iVar2 == 0x111c) || (iVar1 = 0, iVar2 == 0x1144)) || (iVar1 = 0, iVar2 == 0x3192))
      goto LAB_0044fa9c;
    }
  }
  return 0;
}

