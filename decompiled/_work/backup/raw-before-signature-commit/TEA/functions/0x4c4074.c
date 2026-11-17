// name: FUN_004c4074
// address: 0x4c4074
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004c4074(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x510c64);
  if (*(int *)(param_1 + 0x52) == 0) {
    puVar2 = (undefined4 *)0x0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x52);
    *(undefined4 *)(param_1 + 0x52) = 0;
    puVar2 = (undefined4 *)FUN_004cc0f0();
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0049ca30(puVar2,uVar1,1);
    }
    *in_FS_OFFSET = local_2c;
  }
  return puVar2;
}

