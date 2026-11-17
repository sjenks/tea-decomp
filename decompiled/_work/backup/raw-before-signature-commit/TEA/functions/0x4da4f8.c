// name: FUN_004da4f8
// address: 0x4da4f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004da4f8(LPCSTR param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x516538);
  piVar1 = (int *)FUN_004cc0f0();
  if ((piVar1 == (int *)0x0) || (FUN_004da038(piVar1,param_1), *piVar1 == 0)) {
    if (piVar1 != (int *)0x0) {
      FUN_004da158(piVar1,3);
    }
    piVar1 = (int *)0xffffffff;
    *in_FS_OFFSET = local_30;
  }
  else {
    iVar3 = 0;
    for (piVar2 = DAT_0051bbf0; *piVar2 != 0; piVar2 = piVar2 + 1) {
      iVar3 = iVar3 + 1;
    }
    if (iVar3 == DAT_0051bbf4) {
      FUN_004d2bd0((int *)&DAT_0051bbf0,DAT_0051bbf4 * 2,0);
    }
    DAT_0051bbf0[iVar3] = (int)piVar1;
    *in_FS_OFFSET = local_30;
  }
  return piVar1;
}

