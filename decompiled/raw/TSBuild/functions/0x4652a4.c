// name: FUN_004652a4
// address: 0x4652a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004652a4(LPCSTR param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00467ba8(0x48826c);
  piVar1 = (int *)FUN_00456840();
  if ((piVar1 == (int *)0x0) || (FUN_00464de4(piVar1,param_1), *piVar1 == 0)) {
    if (piVar1 != (int *)0x0) {
      FUN_00464f04(piVar1,3);
    }
    piVar1 = (int *)0xffffffff;
    *in_FS_OFFSET = local_30;
  }
  else {
    iVar3 = 0;
    for (piVar2 = DAT_0048d06c; *piVar2 != 0; piVar2 = piVar2 + 1) {
      iVar3 = iVar3 + 1;
    }
    if (iVar3 == DAT_0048d070) {
      FUN_0045d5a8((int *)&DAT_0048d06c,DAT_0048d070 * 2,0);
    }
    DAT_0048d06c[iVar3] = (int)piVar1;
    *in_FS_OFFSET = local_30;
  }
  return piVar1;
}

