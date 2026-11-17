// name: FUN_004b250c
// address: 0x4b250c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_004b250c(undefined4 param_1,int param_2,int param_3,uint *param_4)

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
        puVar2 = (uint *)FUN_004b5274(iVar1);
        if ((puVar2 == (uint *)0x0) || ((char)*puVar2 == '\0')) {
          pcVar3 = (char *)0x0;
        }
        else {
          pcVar3 = FUN_004dc9f4(puVar2);
        }
        puVar2 = (uint *)FUN_004b5254(iVar1);
        if ((puVar2 == (uint *)0x0) || ((char)*puVar2 == '\0')) {
          pcVar4 = (char *)0x0;
        }
        else {
          pcVar4 = FUN_004dc9f4(puVar2);
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
        pcVar3 = (char *)FUN_004b5274(iVar1);
        if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
          FUN_004dc8e8((char *)param_4,pcVar3);
        }
        pcVar3 = (char *)FUN_004b5254(iVar1);
        if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
          FUN_004dc8e8((char *)param_4,&DAT_0050d0b8);
          FUN_004dc8e8((char *)param_4,pcVar3);
          FUN_004dc8e8((char *)param_4,&DAT_0050d0bb);
          FUN_004dc8e8((char *)param_4,pcVar3);
        }
        FUN_004dc8e8((char *)param_4,&DAT_0050d0bc);
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_3);
    }
    local_8 = FUN_004dc9f4(param_4);
  }
  return local_8;
}

