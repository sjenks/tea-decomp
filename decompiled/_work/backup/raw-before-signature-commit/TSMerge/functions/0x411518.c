// name: FUN_00411518
// address: 0x411518
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00411518(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x4650e4);
  cVar1 = FUN_00410990();
  if (cVar1 == '\0') {
    puVar2 = (undefined4 *)FUN_0044b300();
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00411794(puVar2);
    }
    *param_1 = puVar2;
  }
  else {
    puVar2 = (undefined4 *)FUN_0044b300();
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &PTR_FUN_00465204;
      *puVar2 = &PTR_FUN_0046522c;
      puVar2[2] = 0;
    }
    *param_1 = puVar2;
  }
  *in_FS_OFFSET = local_30;
  return param_1;
}

