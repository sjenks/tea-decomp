// name: FUN_004cb348
// address: 0x4cb348
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_004cb348(uint *param_1,uint param_2,byte param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  uint *in_stack_0000001c;
  
  FUN_004dce64(0x51271c);
  iVar2 = 9;
  do {
    uVar1 = *(undefined4 *)(&param_3 + iVar2 * 4);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  FUN_004cba88(param_1);
  param_1[10] = param_2;
  param_1[0xb] = 0;
  if ((param_3 & 1) != 0) {
    FUN_004cb550(param_1,in_stack_0000001c,'\x01');
  }
  *in_FS_OFFSET = uVar1;
  return param_1;
}

