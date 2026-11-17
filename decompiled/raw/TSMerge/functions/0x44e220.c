// name: FUN_0044e220
// address: 0x44e220
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0044e220(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x47216c);
  FUN_0044e12c(param_1);
  *param_1 = &PTR_FUN_004730e0;
  param_1[9] = param_2;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x200;
  param_1[0xd] = 0;
  uVar1 = FUN_0044b390();
  param_1[0x10] = uVar1;
  puVar2 = (undefined4 *)FUN_0044b300();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0044e0c4(puVar2,0);
  }
  param_1[0xe] = puVar2;
  puVar2 = (undefined4 *)FUN_0044b300();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0044e0c4(puVar2,0);
  }
  param_1[0xf] = puVar2;
  if (param_2 == 0) {
    param_1[1] = 4;
  }
  else if (param_2 < 3) {
    param_1[1] = 8;
  }
  *in_FS_OFFSET = local_30;
  return param_1;
}

