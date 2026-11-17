// name: FUN_0042c780
// address: 0x42c780
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042c780(int param_1,undefined4 *param_2)

{
  HCURSOR pHVar1;
  undefined4 uVar2;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = *(undefined4 *)(*(int *)(param_1 + 0x70) + 8);
  param_2[5] = 0;
  pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  param_2[6] = pHVar1;
  if ((((*(uint *)(param_1 + 0x5c) & 0xf0000000) == 0x80000000) &&
      (*(int *)(param_1 + 0x5c) != DAT_00476bac)) && (*(int *)(param_1 + 0x5c) != DAT_00476bb0)) {
    param_2[7] = (*(uint *)(param_1 + 0x5c) & 0xffff) + 1;
  }
  else {
    param_2[7] = 6;
  }
  param_2[8] = 0;
  uVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x74))();
  param_2[9] = uVar2;
  *param_2 = 8;
  param_2[1] = FUN_004236f8;
  return;
}

