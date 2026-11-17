// name: FUN_0041c53c
// address: 0x41c53c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0041c53c(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00467ba8(0x478e98);
  cVar1 = FUN_0041b9b4();
  if (cVar1 == '\0') {
    puVar2 = (undefined4 *)FUN_00456840();
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0041c7b8(puVar2);
    }
    *param_1 = puVar2;
  }
  else {
    puVar2 = (undefined4 *)FUN_00456840();
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &PTR_FUN_00478fb8;
      *puVar2 = &PTR_FUN_00478fe0;
      puVar2[2] = 0;
    }
    *param_1 = puVar2;
  }
  *in_FS_OFFSET = local_30;
  return param_1;
}

