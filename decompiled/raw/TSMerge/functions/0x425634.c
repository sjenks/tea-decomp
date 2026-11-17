// name: FUN_00425634
// address: 0x425634
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_00425634(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            uint *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  byte bVar3;
  undefined4 local_28;
  
  bVar3 = 0;
  FUN_00455f04(0x4690f0);
  param_1[0xb] = 0;
  FUN_00455a40(param_1,0,0x2c);
  *param_1 = 0x2c;
  FUN_004256b8((int)param_1,param_2,param_4);
  puVar2 = param_1 + 4;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  FUN_004256d0((int)param_1,param_5,'\0');
  *in_FS_OFFSET = local_28;
  return param_1;
}

