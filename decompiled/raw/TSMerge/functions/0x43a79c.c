// name: FUN_0043a79c
// address: 0x43a79c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043a79c(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char **ppcVar3;
  uint *puVar4;
  char **ppcVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  char *local_40;
  byte local_3a;
  byte local_39;
  char *local_38;
  char *local_34;
  char *local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  LPSTR local_8;
  
  FUN_00455f04(0x46d510);
  if ((param_1[6] == 0) || (param_2 == 8)) {
    FUN_0042b294(*param_1);
  }
  else {
    local_30 = (char *)GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
    local_1c = 0x14;
    local_8 = (LPSTR)FUN_0044b390();
    local_10 = local_10 + 1;
    local_1c = 8;
    GetWindowTextA(*(HWND *)(*param_1 + 0xc),local_8,(int)(local_30 + 1));
    (**(code **)(param_1[3] + 0x34))();
    bVar6 = local_38 == local_30;
    iVar2 = FUN_0042d1a4(*param_1,0xb8,0,0);
    local_39 = iVar2 != 0;
    FUN_0042b294(*param_1);
    iVar2 = FUN_0042d1a4(*param_1,0xb8,0,0);
    local_3a = iVar2 != 0;
    (**(code **)(param_1[3] + 0x34))();
    local_40 = (char *)GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
    if (local_40 < local_30) {
      ppcVar3 = &local_30;
    }
    else {
      ppcVar3 = &local_40;
    }
    ppcVar5 = (char **)(param_1 + 5);
    if ((char *)param_1[5] <= *ppcVar3) {
      ppcVar5 = ppcVar3;
    }
    puVar4 = (uint *)FUN_0043af08(param_1,(SIZE_T)(*ppcVar5 + 1));
    if (((*(byte *)(param_1[6] + 4) & 4) == 0) || ((bVar6 && (local_38 == local_40)))) {
      cVar1 = (**(code **)(*(int *)param_1[6] + 8))();
      if (cVar1 == '\0') {
        FUN_00455bc0((char *)puVar4,local_8);
        local_3a = local_39;
      }
      else if (bVar6) {
        local_38 = FUN_00455bf0(puVar4);
        local_34 = local_38;
      }
      FUN_0043afc4(param_1,(LPCSTR)puVar4,'\x01');
      (**(code **)(param_1[3] + 0x3c))();
    }
    else {
      if (local_38 == local_40) {
        cVar1 = (**(code **)(*(int *)param_1[6] + 8))();
        if (cVar1 == '\0') {
          (**(code **)(*(int *)param_1[6] + 4))();
        }
      }
      FUN_0043afc4(param_1,(LPCSTR)puVar4,'\0');
    }
    FUN_0042d1a4(*param_1,0xb9,(uint)local_3a,0);
    local_10 = local_10 + -1;
    FUN_0044b2dc();
  }
  *in_FS_OFFSET = local_2c;
  return;
}

