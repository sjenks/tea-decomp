// name: FUN_0049bd60
// address: 0x49bd60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_0049bd60(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4,RECT *param_5)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  HRGN local_c [2];
  
  FUN_004dce64(0x508afc);
  FUN_0049bcdc(param_1,param_2,param_3);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_00508d18;
  *(undefined4 *)((int)param_1 + 0x39) = 0;
  *(undefined4 *)((int)param_1 + 0x3d) = 0;
  SetMapMode((HDC)*param_1,8);
  SetWindowExtEx((HDC)*param_1,param_4[2] - *param_4,param_4[3] - param_4[1],(LPSIZE)0x0);
  BVar1 = SetViewportExtEx((HDC)*param_1,param_4[2] - *param_4,param_4[3] - param_4[1],(LPSIZE)0x0);
  (**(code **)(*(int *)((int)param_1 + 5) + 100))
            (BVar1 != 0,param_1,*(int *)((int)param_1 + 5),param_1);
  FUN_0049ced4((int *)local_c,param_5);
  SelectClipRgn((HDC)*param_1,local_c[0]);
  FUN_0049cf24(local_c,2);
  uVar2 = FUN_0048db7c(*(undefined4 **)((int)param_1 + 0x35),6);
  *(undefined4 *)((int)param_1 + 0x39) = uVar2;
  (**(code **)(*(int *)((int)param_1 + 5) + 0x60))();
  *in_FS_OFFSET = local_30;
  return param_1;
}

