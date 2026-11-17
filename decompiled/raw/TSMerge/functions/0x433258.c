// name: FUN_00433258
// address: 0x433258
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_00433258(int *param_1,uint param_2,uint *param_3,char *param_4,int param_5)

{
  HMENU hMenu;
  BOOL BVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  CHAR local_108 [256];
  char *local_8;
  
  if (param_2 == 0xffffffff) {
    return (char *)0x0;
  }
  pcVar4 = (char *)0x0;
  if (param_5 == 2) {
    hMenu = GetMenu(*(HWND *)(param_1[1] + 0xc));
    BVar1 = IsMenu(hMenu);
    if (BVar1 != 0) {
      GetMenu(*(HWND *)(param_1[1] + 0xc));
      iVar2 = FUN_00445198();
      if (iVar2 != 0) {
        pcVar4 = thunk_FUN_00455b20((char *)param_3,'\t');
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = thunk_FUN_00455b20((char *)param_3,'\b');
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = FUN_00455bf0(param_3);
        while ((pcVar4 = pcVar4 + -1, -1 < (int)pcVar4 &&
               (*(char *)((int)param_3 + (int)pcVar4) == '.'))) {
          *(char *)((int)param_3 + (int)pcVar4) = '\0';
        }
        iVar2 = -1;
        do {
          iVar2 = iVar2 + 1;
          if (*(char *)((int)param_3 + iVar2) == '\0') goto LAB_00433324;
        } while (*(char *)((int)param_3 + iVar2) != '&');
        do {
          *(undefined1 *)((int)param_3 + iVar2) = *(undefined1 *)((int)param_3 + iVar2 + 1);
          iVar2 = iVar2 + 1;
        } while (*(char *)((int)param_3 + iVar2) != '\0');
LAB_00433324:
        pcVar4 = FUN_00455bf0(param_3);
        goto LAB_004333aa;
      }
    }
    iVar2 = FUN_00443f20(*(int *)(param_1[1] + 0x70),param_2,local_108,0x100);
    if ((iVar2 == 0) && (*(int *)(*param_1 + 0x1d) != 0)) {
      iVar2 = FUN_00443f20(*(int *)(*param_1 + 0x1d),param_2,local_108,0x100);
    }
    if ((iVar2 != 0) && (local_8 = thunk_FUN_00455b20(local_108,'\n'), local_8 != (char *)0x0)) {
      FUN_00455ddc(param_3,(uint *)(local_8 + 1),param_4);
      pcVar4 = FUN_00455bf0(param_3);
    }
  }
LAB_004333aa:
  if (param_5 == 1) {
    pcVar4 = (char *)FUN_00443f20(*(int *)(param_1[1] + 0x70),param_2,(LPSTR)param_3,(int)param_4);
    if ((pcVar4 == (char *)0x0) && (*(int *)(*param_1 + 0x1d) != 0)) {
      pcVar4 = (char *)FUN_00443f20(*(int *)(*param_1 + 0x1d),param_2,(LPSTR)param_3,(int)param_4);
    }
    if ((pcVar4 != (char *)0x0) &&
       (pcVar3 = thunk_FUN_00455b20((char *)param_3,'\n'), pcVar3 != (char *)0x0)) {
      *pcVar3 = '\0';
      pcVar4 = pcVar3 + (-1 - (int)param_3);
    }
  }
  return pcVar4;
}

