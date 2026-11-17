// name: FUN_0042b3f0
// address: 0x42b3f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0042b3f0(int *param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47bed8);
  iVar4 = 0;
  do {
    if (param_2 < (int)(&DAT_0047bc28)[iVar4]) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xc);
  if (iVar4 < 0xc) {
    puVar2 = FUN_0042acec();
    piVar1 = *(int **)(puVar2 + iVar4 * 4 + 300);
    if (*piVar1 == 0) {
      piVar3 = (int *)FUN_00420a1c((int)(piVar1 + 1),*(uint *)((int)piVar1 + 0x15));
    }
    else {
      piVar3 = (int *)*piVar1;
      *piVar1 = *piVar3;
    }
    *param_1 = (int)piVar3;
    param_1[1] = iVar4;
  }
  else {
    iVar4 = FUN_004568d0();
    *param_1 = iVar4;
    param_1[1] = -1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

