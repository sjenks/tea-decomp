// name: FUN_0045e974
// address: 0x45e974
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045e974(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  int local_8;
  
  FUN_00467ba8(0x486a08);
  if ((*(byte *)(param_1 + 4) & 2) == 0) {
    FUN_0045deb8(&local_8,param_1);
    piVar4 = (int *)FUN_00459448(&local_8);
    cVar2 = FUN_0045b3e4(piVar4);
    FUN_00405004(&local_8,2);
    iVar3 = 0;
    while (param_2 != param_3) {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      if (cVar2 == cVar1) {
        iVar3 = iVar3 + 2;
      }
      else {
        iVar3 = iVar3 + 1;
      }
    }
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar3 = (int)param_3 - (int)param_2;
    *in_FS_OFFSET = local_2c;
  }
  return iVar3;
}

