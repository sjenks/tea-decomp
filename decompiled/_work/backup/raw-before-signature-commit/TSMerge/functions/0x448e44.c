// name: FUN_00448e44
// address: 0x448e44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00448e44(undefined4 param_1,undefined4 *param_2,RECT *param_3,char param_4)

{
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  RECT local_24;
  undefined1 local_14 [12];
  uint local_8;
  
  FUN_00448adc(param_1,param_2,param_3,param_4);
  if (param_4 != '\0') {
    FUN_0041d724(&param_3->left,1,1);
  }
  if (param_3->right - param_3->left < 8) {
    local_24.right = (param_3->right - param_3->left) - 3;
  }
  else {
    uVar2 = param_3->right - param_3->left;
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    local_24.right = ((param_3->right - param_3->left) - iVar3) - 1;
  }
  if (param_3->bottom - param_3->top < 8) {
    local_24.bottom = (param_3->bottom - param_3->top) + -3;
  }
  else {
    uVar2 = param_3->bottom - param_3->top;
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    local_24.bottom = ((param_3->bottom - param_3->top) - iVar3) + -1;
  }
  if ((1 < local_24.right) && (1 < local_24.bottom)) {
    local_24.left = 0;
    local_24.top = 0;
    uVar2 = ((param_3->bottom - param_3->top) - local_24.bottom) - 1;
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    uVar2 = ((param_3->right - param_3->left) - local_24.right) - 1;
    iVar4 = (int)uVar2 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((uVar2 & 1) != 0);
    }
    local_8 = local_24.right;
    FUN_0041d724(&local_24.left,iVar4 + param_3->left,iVar3 + param_3->top);
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    ExtTextOutA((HDC)*param_2,0,0,2,&local_24,(LPCSTR)0x0,0,(INT *)0x0);
    FUN_0041d724(&local_24.left,1,1);
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    BVar1 = ExtTextOutA((HDC)*param_2,0,0,2,&local_24,(LPCSTR)0x0,0,(INT *)0x0);
    local_24.right = local_24.right - 1;
    local_24.bottom = local_24.bottom + -1;
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))
              (local_14,*(int *)((int)param_2 + 5),BVar1 != 0,local_14,param_2,&DAT_00476bfc);
    BVar1 = ExtTextOutA((HDC)*param_2,0,0,2,&local_24,(LPCSTR)0x0,0,(INT *)0x0);
    local_24.right = (LONG)(BVar1 != 0);
  }
  return local_24.right;
}

