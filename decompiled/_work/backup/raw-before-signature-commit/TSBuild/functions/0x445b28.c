// name: FUN_00445b28
// address: 0x445b28
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00445b28(int *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  char *local_c;
  
  if ((param_2 == 9) && (cVar3 = FUN_0044655c(param_1,'\0'), cVar3 == '\0')) {
    FUN_00445e1c(param_1);
    return;
  }
  if ((param_1[6] == 0) || ((*(byte *)(param_1[6] + 4) & 4) == 0)) {
    FUN_00436428(*param_1);
    return;
  }
  (**(code **)(param_1[3] + 0x34))();
  pcVar4 = (char *)GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
  FUN_00436428(*param_1);
  if (pcVar4 == local_c) {
    return;
  }
  (**(code **)(param_1[3] + 0x34))();
  puVar5 = (uint *)FUN_0044609c(param_1,0);
  puVar6 = puVar5;
  pcVar4 = FUN_004677a0(puVar5);
  if (pcVar4 == local_c) {
    piVar1 = (int *)param_1[6];
    cVar3 = (**(code **)(*piVar1 + 8))(piVar1,*piVar1,puVar6,piVar1,puVar5,0);
    if (cVar3 == '\0') {
      bVar2 = true;
      goto LAB_00445bec;
    }
  }
  bVar2 = false;
LAB_00445bec:
  FUN_00446158(param_1,(LPCSTR)puVar5,'\0');
  if (bVar2) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  return;
}

