// name: FUN_0041e9bc
// address: 0x41e9bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0041e9bc(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  HGDIOBJ pvVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_34;
  uint local_c [2];
  
  FUN_00467ba8(0x4794d0);
  *param_1 = &PTR_FUN_004796fc;
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
  FUN_0042ecec(local_c,pvVar1,iVar3);
  puVar2 = (uint *)FUN_00456840();
  if (puVar2 != (uint *)0x0) {
    FUN_0041cf04(puVar2,param_2,local_c);
  }
  param_1[1] = puVar2;
  FUN_004284a8(local_c,0);
  *in_FS_OFFSET = local_34;
  return param_1;
}

