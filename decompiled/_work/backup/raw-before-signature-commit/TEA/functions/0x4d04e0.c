// name: FUN_004d04e0
// address: 0x4d04e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004d04e0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x5141e4);
  FUN_004d0638(param_1);
  *param_1 = &PTR_FUN_005159d4;
  uVar1 = FUN_004d0724();
  param_1[9] = uVar1;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x200;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  puVar2 = (undefined4 *)FUN_004cc0f0();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004d05d0(puVar2,0);
  }
  param_1[0xe] = puVar2;
  puVar2 = (undefined4 *)FUN_004cc0f0();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004d05d0(puVar2,0);
  }
  param_1[0xf] = puVar2;
  *in_FS_OFFSET = local_30;
  return param_1;
}

