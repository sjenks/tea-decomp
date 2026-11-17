// name: FUN_0045ac30
// address: 0x45ac30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0045ac30(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00467ba8(0x486058);
  FUN_0045ad88(param_1);
  *param_1 = &PTR_FUN_00487708;
  uVar1 = FUN_0045ae74();
  param_1[9] = uVar1;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x200;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  puVar2 = (undefined4 *)FUN_00456840();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0045ad20(puVar2,0);
  }
  param_1[0xe] = puVar2;
  puVar2 = (undefined4 *)FUN_00456840();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0045ad20(puVar2,0);
  }
  param_1[0xf] = puVar2;
  *in_FS_OFFSET = local_30;
  return param_1;
}

