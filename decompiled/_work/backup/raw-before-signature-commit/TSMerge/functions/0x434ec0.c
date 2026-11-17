// name: FUN_00434ec0
// address: 0x434ec0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char __cdecl FUN_00434ec0(int *param_1)

{
  int iVar1;
  bool bVar2;
  HGLOBAL hResData;
  ushort *puVar3;
  LRESULT LVar4;
  HRSRC hResInfo;
  
  bVar2 = true;
  if (param_1[4] != 0) {
    hResInfo = (HRSRC)0x1;
    if (((*(byte *)(*param_1 + 0x76) & 0xf) == 0) &&
       (hResInfo = FindResourceExA(*(HMODULE *)(*(int *)(*param_1 + 0x70) + 8),(LPCSTR)0xf0,
                                   (LPCSTR)param_1[4],*(WORD *)(*(int *)(*param_1 + 0x6c) + 0x2f)),
       hResInfo == (HRSRC)0x0)) {
      hResInfo = FindResourceA(*(HMODULE *)(*(int *)(*param_1 + 0x70) + 8),(LPCSTR)param_1[4],
                               (LPCSTR)0xf0);
    }
    if (hResInfo != (HRSRC)0x0) {
      hResData = (HGLOBAL)0x1;
      if ((*(byte *)(*param_1 + 0x76) & 0xf) == 0) {
        hResData = LoadResource(*(HMODULE *)(*(int *)(*param_1 + 0x70) + 8),hResInfo);
      }
      if (hResData != (HGLOBAL)0x0) {
        puVar3 = (ushort *)param_1[4];
        if ((*(byte *)(*param_1 + 0x76) & 0xf) == 0) {
          puVar3 = LockResource(hResData);
        }
        if (puVar3 != (ushort *)0x0) {
          for (; (bVar2 && ((char)*puVar3 != '\0')); puVar3 = (ushort *)((int)(puVar3 + 4) + iVar1))
          {
            iVar1 = *(int *)(puVar3 + 2);
            LVar4 = SendDlgItemMessageA(*(HWND *)(*param_1 + 0xc),(uint)*puVar3,(uint)puVar3[1],0,
                                        (LPARAM)(puVar3 + 4));
            if (LVar4 == -1) {
              bVar2 = false;
            }
          }
        }
      }
    }
  }
  return bVar2;
}

