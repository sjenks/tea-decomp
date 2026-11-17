// name: FUN_00450d60
// address: 0x450d60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00450d60(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  int local_8;
  
  FUN_00455f04(0x4727dc);
  if ((*(byte *)(param_1 + 4) & 2) == 0) {
    FUN_004502a4(&local_8,param_1);
    piVar4 = (int *)FUN_0044cc54(&local_8);
    cVar2 = FUN_0044e788(piVar4);
    FUN_0040b7b0(&local_8,2);
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

