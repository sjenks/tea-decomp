// name: FUN_00410788
// address: 0x410788
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00410788(int *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  LONG LVar1;
  LPCSTR pCVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ec950);
  *param_1 = *(int *)(*(int *)(param_2 + 0xc) + param_3 * 4);
  param_1[3] = param_4;
  param_1[0x44] = 0;
  param_1[2] = *(int *)(*param_1 + 0x2408);
  pCVar2 = (LPCSTR)(**(code **)(*(int *)*param_1 + 0x18))();
  piVar3 = FUN_004deb10(pCVar2,&DAT_004eb416);
  param_1[1] = (int)piVar3;
  if (piVar3 != (int *)0x0) {
    FUN_004e02cc(piVar3,0,0,0x40000);
    LVar1 = *(LONG *)(*param_1 + 0x2404);
    param_1[0x44] = LVar1;
    iVar4 = FUN_004dedd8((int *)param_1[1],LVar1,0);
    if (iVar4 != 0) {
      FUN_004de7cc((int *)param_1[1]);
      param_1[1] = 0;
    }
  }
  iVar4 = *param_1;
  *param_5 = *(undefined4 *)(iVar4 + 0x2008);
  param_5[1] = *(undefined4 *)(iVar4 + 0x200c);
  *in_FS_OFFSET = local_28;
  return param_1;
}

