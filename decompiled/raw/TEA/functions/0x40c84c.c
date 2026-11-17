// name: FUN_0040c84c
// address: 0x40c84c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0040c84c(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint *puVar1;
  LPCSTR pCVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ec06c);
  *param_1 = *(int *)(param_3 * 4 + *(int *)(param_2 + 0xc));
  puVar1 = (uint *)FUN_00408c98(param_2,param_3);
  FUN_004cf628((int)(param_1 + 2),puVar1);
  param_1[6] = 0;
  pCVar2 = (LPCSTR)(**(code **)(*(int *)*param_1 + 0x18))();
  iVar3 = (**(code **)(*(int *)*param_1 + 0xc))();
  if (iVar3 != 0) {
    piVar4 = FUN_004deb10(pCVar2,&DAT_004eb416);
    param_1[6] = (int)piVar4;
  }
  if (param_4 != (undefined4 *)0x0) {
    iVar3 = *param_1;
    *param_4 = *(undefined4 *)(iVar3 + 0x2008);
    param_4[1] = *(undefined4 *)(iVar3 + 0x200c);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

