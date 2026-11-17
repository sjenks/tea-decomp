// name: FUN_00435378
// address: 0x435378
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00435378(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00467ba8(0x47dfcc);
  puVar1 = (undefined4 *)FUN_00456840();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)FUN_00456840();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_00434fdc(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_00434f74(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

