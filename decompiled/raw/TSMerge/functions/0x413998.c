// name: FUN_00413998
// address: 0x413998
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00413998(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  HGDIOBJ pvVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_34;
  uint local_c [2];
  
  FUN_00455f04(0x46571c);
  *param_1 = &PTR_FUN_00465948;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = 0;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *(undefined4 *)((int)param_1 + 0x1d) = 1;
  if (param_3 < 1) {
    param_3 = 1;
  }
  *(int *)((int)param_1 + 0x25) = param_3;
  *(int *)((int)param_1 + 0x11) = param_3;
  if (param_4 < 1) {
    param_4 = 1;
  }
  *(int *)((int)param_1 + 0x29) = param_4;
  iVar3 = *(int *)(*(int *)(param_2 + 9) + 8);
  *(int *)((int)param_1 + 0x15) =
       *(int *)(*(int *)(param_2 + 9) + 4) / *(int *)((int)param_1 + 0x11);
  *(int *)((int)param_1 + 0x19) = iVar3 / *(int *)((int)param_1 + 0x29);
  *(undefined4 *)((int)param_1 + 0x2d) = 0;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  iVar3 = 0;
  pvVar1 = GetStockObject(0xf);
  FUN_00423b58(local_c,pvVar1,iVar3);
  puVar2 = (uint *)FUN_0044b300();
  if (puVar2 != (uint *)0x0) {
    FUN_00411ee0(puVar2,param_2,local_c);
  }
  param_1[1] = puVar2;
  FUN_0041d334(local_c,0);
  *in_FS_OFFSET = local_34;
  return param_1;
}

