// name: FUN_004cb6ec
// address: 0x4cb6ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004cb6ec(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_58;
  undefined4 local_34;
  int local_30;
  int *local_c;
  
  FUN_004dce64(0x5127b0);
  FUN_004cb3b4(&local_34,param_2,0xffff0000);
  if (local_30 == -0x10000) {
    local_30 = 0;
  }
  uVar1 = FUN_004a76a8(*local_c,0x110a,9,local_30);
  FUN_004cb3b4(param_1,local_c,uVar1);
  FUN_004cc0cc();
  *in_FS_OFFSET = local_58;
  return param_1;
}

