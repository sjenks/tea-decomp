// name: FUN_00441b80
// address: 0x441b80
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_00441b80(undefined4 param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *local_8;
  
  local_8 = (char *)0x0;
  if (param_4 == (uint *)0x0) {
    iVar5 = 0;
    if (0 < param_3) {
      do {
        iVar1 = *(int *)(param_2 + iVar5 * 4);
        puVar2 = (uint *)FUN_004448e8(iVar1);
        if ((puVar2 == (uint *)0x0) || ((char)*puVar2 == '\0')) {
          pcVar3 = (char *)0x0;
        }
        else {
          pcVar3 = FUN_004677a0(puVar2);
        }
        puVar2 = (uint *)FUN_004448c8(iVar1);
        if ((puVar2 == (uint *)0x0) || ((char)*puVar2 == '\0')) {
          pcVar4 = (char *)0x0;
        }
        else {
          pcVar4 = FUN_004677a0(puVar2);
        }
        local_8 = local_8 + (int)(pcVar3 + (int)pcVar4 * 2 + 5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_3);
    }
  }
  else {
    *(undefined1 *)param_4 = 0;
    iVar5 = 0;
    if (0 < param_3) {
      do {
        iVar1 = *(int *)(param_2 + iVar5 * 4);
        pcVar3 = (char *)FUN_004448e8(iVar1);
        if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
          FUN_00467694((char *)param_4,pcVar3);
        }
        pcVar3 = (char *)FUN_004448c8(iVar1);
        if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
          FUN_00467694((char *)param_4,&DAT_00480178);
          FUN_00467694((char *)param_4,pcVar3);
          FUN_00467694((char *)param_4,&DAT_0048017b);
          FUN_00467694((char *)param_4,pcVar3);
        }
        FUN_00467694((char *)param_4,&DAT_0048017c);
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_3);
    }
    local_8 = FUN_004677a0(param_4);
  }
  return local_8;
}

