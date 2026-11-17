// name: FUN_0041217c
// address: 0x41217c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0041217c(int param_1)

{
  undefined4 *puVar1;
  LPCSTR lpFileName;
  BOOL BVar2;
  DWORD in_ECX;
  bool bVar3;
  DWORD DVar4;
  DWORD dwShareMode;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  HANDLE pvVar5;
  DWORD local_8;
  
  local_8 = in_ECX;
  if (*(int *)(param_1 + 0x14) == -1) {
    do {
      pvVar5 = (HANDLE)0x0;
      dwFlagsAndAttributes = 0x80;
      dwCreationDisposition = 3;
      lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
      dwShareMode = 3;
      DVar4 = 0x80000000;
      lpFileName = (LPCSTR)(**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 0xc) +
                                                  *(int *)(param_1 + 0xc) * 4) + 0x18))();
      pvVar5 = CreateFileA(lpFileName,DVar4,dwShareMode,lpSecurityAttributes,dwCreationDisposition,
                           dwFlagsAndAttributes,pvVar5);
      *(HANDLE *)(param_1 + 0x14) = pvVar5;
      if (pvVar5 != (HANDLE)0xffffffff) {
        if (*(int *)(param_1 + 0x18) != 0) {
          SetFilePointer(*(HANDLE *)(param_1 + 0x14),*(int *)(param_1 + 0x18),(PLONG)0x0,0);
        }
        goto LAB_0041223a;
      }
      DVar4 = GetLastError();
      puVar1 = DAT_004ecac8;
      if (DVar4 != 4) {
        return false;
      }
      for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
        if (puVar1[5] != -1) {
          DVar4 = SetFilePointer(*(HANDLE *)(param_1 + 0x14),0,(PLONG)0x0,1);
          puVar1[6] = DVar4;
          CloseHandle((HANDLE)puVar1[5]);
          puVar1[5] = 0xffffffff;
          break;
        }
      }
    } while (puVar1 != (undefined4 *)0x0);
    bVar3 = false;
  }
  else {
LAB_0041223a:
    BVar2 = ReadFile(*(HANDLE *)(param_1 + 0x14),(LPVOID)(param_1 + 0x7f0),0x4000,&local_8,
                     (LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      bVar3 = false;
    }
    else {
      *(undefined4 *)(param_1 + 0x47f8) = 0;
      *(LPVOID *)(param_1 + 0x47f0) = (LPVOID)(param_1 + 0x7f0);
      *(DWORD *)(param_1 + 0x47f4) = (local_8 + 3 & 0xfffffffc) + param_1 + 0x7f0;
      bVar3 = local_8 != 0;
    }
  }
  return bVar3;
}

