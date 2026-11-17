// name: FUN_0042d6f8
// address: 0x42d6f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0042d6f8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  HCURSOR hCursor;
  tagRECT *ptVar3;
  LONG *pLVar4;
  int local_30 [4];
  tagRECT local_20;
  char local_d;
  tagPOINT local_c;
  
  if ((param_2 == *(int *)(param_1 + 0x50)) && (param_3 == *(int *)(param_1 + 0x54))) {
    uVar1 = 0;
  }
  else {
    if ((*(int *)(param_1 + 0x58) == 0) || (*(int *)(param_1 + 0x50) == 0)) {
      hCursor = (HCURSOR)0x0;
    }
    else {
      hCursor = *(HCURSOR *)(param_1 + 0x58);
    }
    *(int *)(param_1 + 0x50) = param_2;
    *(int *)(param_1 + 0x54) = param_3;
    if (*(int *)(param_1 + 0x54) == 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    else if (*(int *)(param_1 + 0x50) == 0) {
      param_3 = (int)LoadCursorA((HINSTANCE)0x0,*(LPCSTR *)(param_1 + 0x54));
      *(int *)(param_1 + 0x58) = param_3;
    }
    else {
      param_3 = (int)FUN_00444d80(*(int *)(param_1 + 0x50),*(LPCSTR *)(param_1 + 0x54));
      *(int *)(param_1 + 0x58) = param_3;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      local_c.x = 0;
      local_c.y = 0;
      GetCursorPos(&local_c);
      ScreenToClient(*(HWND *)(param_1 + 0xc),&local_c);
      local_20.left = 0;
      local_20.top = 0;
      local_20.right = 0;
      local_20.bottom = 0;
      FUN_0042d568(param_1,&local_20);
      ptVar3 = &local_20;
      pLVar4 = local_30;
      for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pLVar4 = ptVar3->left;
        ptVar3 = (tagRECT *)&ptVar3->top;
        pLVar4 = pLVar4 + 1;
      }
      param_3 = local_c.x;
      if ((((local_c.x < local_30[0]) || (local_30[2] <= local_c.x)) || (local_c.y < local_30[1]))
         || (param_3 = local_c.y, local_30[3] <= local_c.y)) {
        local_d = '\0';
      }
      else {
        local_d = '\x01';
      }
      if (local_d != '\0') {
        param_3 = (int)SetCursor(*(HCURSOR *)(param_1 + 0x58));
      }
    }
    if (hCursor != (HCURSOR)0x0) {
      param_3 = DestroyCursor(hCursor);
    }
    uVar1 = CONCAT31((int3)((uint)param_3 >> 8),1);
  }
  return uVar1;
}

