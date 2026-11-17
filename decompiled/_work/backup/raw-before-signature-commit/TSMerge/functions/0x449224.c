// name: FUN_00449224
// address: 0x449224
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00449224(undefined4 param_1,undefined4 *param_2,RECT *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  
  FUN_00448adc(param_1,param_2,param_3,param_4);
  if (param_4 != '\0') {
    FUN_0041d724(&param_3->left,1,1);
  }
  iVar1 = param_3->right - param_3->left;
  iVar2 = iVar1 + 1;
  if (iVar2 < 0) {
    iVar2 = iVar1 + 4;
  }
  local_18 = ((param_3->bottom - param_3->top) + 2) / 3 + param_3->top;
  local_10 = param_3->left + (iVar2 >> 2);
  local_1c = (int)(iVar1 + 1U) >> 1;
  if (local_1c < 0) {
    local_1c = local_1c + (uint)((iVar1 + 1U & 1) != 0);
  }
  local_1c = local_1c + local_10;
  local_c = local_18;
  for (; local_10 < local_1c; local_10 = local_10 + 1) {
    MoveToEx((HDC)*param_2,local_10,local_c,(LPPOINT)0x0);
    LineTo((HDC)*param_2,local_1c,local_18);
    local_c = local_c + 1;
    local_1c = local_1c + -1;
    local_18 = local_18 + 1;
  }
  return;
}

