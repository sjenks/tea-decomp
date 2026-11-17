// name: FUN_004307c8
// address: 0x4307c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_004307c8(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            uint *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  byte bVar3;
  undefined4 local_28;
  
  bVar3 = 0;
  FUN_00467ba8(0x47cecc);
  param_1[0xb] = 0;
  FUN_004675f0(param_1,0,0x2c);
  *param_1 = 0x2c;
  FUN_0043084c((int)param_1,param_2,param_4);
  puVar2 = param_1 + 4;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  FUN_00430864((int)param_1,param_5,'\0');
  *in_FS_OFFSET = local_28;
  return param_1;
}

