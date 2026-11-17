// name: FUN_0047b728
// address: 0x47b728
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0047b728(int param_1,uint *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  FUN_004dce64(0x5010e0);
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_004cc0f0();
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004d9614(puVar1,0,0,1);
    }
    *in_FS_OFFSET = local_34;
  }
  else if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_004cc0f0();
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004d9614(puVar1,0,0,1);
    }
    *in_FS_OFFSET = local_34;
  }
  else {
    puVar1 = (undefined4 *)FUN_004cc0f0();
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004d9c54(puVar1,param_2,param_3);
    }
    *in_FS_OFFSET = local_34;
  }
  return puVar1;
}

