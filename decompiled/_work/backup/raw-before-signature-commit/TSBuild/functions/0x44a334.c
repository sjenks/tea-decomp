// name: FUN_0044a334
// address: 0x44a334
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044a334(int *param_1,uint *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  DWORD DVar3;
  uint uVar4;
  BOOL BVar5;
  uint *puVar6;
  uint local_28;
  uint local_24;
  uint local_20;
  _FILETIME local_1c;
  _FILETIME local_14;
  _FILETIME local_c;
  
  pcVar1 = FUN_00469bc4((char *)(param_2 + 5),(LPCSTR)param_1[5],0x104);
  if (pcVar1 == (char *)0x0) {
    *(undefined1 *)(param_2 + 5) = 0;
    uVar2 = 0;
  }
  else {
    DVar3 = GetFileAttributesA((LPCSTR)param_1[5]);
    if (DVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar4 = FUN_0044a2f4(DVar3);
      param_2[4] = uVar4;
      local_c.dwLowDateTime = 0;
      local_c.dwHighDateTime = 0;
      local_14.dwLowDateTime = 0;
      local_14.dwHighDateTime = 0;
      local_1c.dwLowDateTime = 0;
      local_1c.dwHighDateTime = 0;
      BVar5 = GetFileTime((HANDLE)param_1[1],&local_c,&local_14,&local_1c);
      if (BVar5 == 1) {
        puVar6 = FUN_00430650(&local_20,&local_c);
        *param_2 = *puVar6;
        puVar6 = FUN_00430650(&local_24,&local_1c);
        param_2[1] = *puVar6;
        puVar6 = FUN_00430650(&local_28,&local_14);
        param_2[2] = *puVar6;
        uVar4 = (**(code **)(*param_1 + 0x38))();
        param_2[3] = uVar4;
        uVar2 = CONCAT31((int3)(uVar4 >> 8),1);
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

