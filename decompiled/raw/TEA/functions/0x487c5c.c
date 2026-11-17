// name: FUN_00487c5c
// address: 0x487c5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00487c5c(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x504768);
  cVar1 = FUN_00487578();
  if (cVar1 == '\0') {
    puVar2 = (undefined4 *)FUN_004cc0f0();
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00487ed8(puVar2);
    }
    *param_1 = puVar2;
  }
  else {
    puVar2 = (undefined4 *)FUN_004cc0f0();
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &PTR_FUN_00504888;
      *puVar2 = &PTR_FUN_005048b0;
      puVar2[2] = 0;
    }
    *param_1 = puVar2;
  }
  *in_FS_OFFSET = local_30;
  return param_1;
}

