// name: FUN_004deebc
// address: 0x4deebc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_004deebc(char *param_1,LPCSTR param_2,uint param_3)

{
  char cVar1;
  LPSTR lpBuffer;
  DWORD DVar2;
  UINT UVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  CHAR local_c [4];
  LPSTR local_8;
  
  lpBuffer = (LPSTR)FUN_004cc734();
  if (lpBuffer == (LPSTR)0x0) {
    param_1 = (char *)0x0;
  }
  else {
    DVar2 = GetFullPathNameA(param_2,0x104,lpBuffer,&local_8);
    if ((DVar2 == 0) || (0x103 < DVar2)) {
      FUN_004cc744();
      param_1 = (char *)0x0;
    }
    else {
      if (lpBuffer[1] == ':') {
        local_c[0] = *lpBuffer;
        local_c[1] = 0x3a;
        local_c[2] = 0x5c;
        local_c[3] = 0;
        UVar3 = GetDriveTypeA(local_c);
        if (UVar3 < 2) {
          FUN_004cc744();
          return (char *)0x0;
        }
      }
      if (param_1 == (char *)0x0) {
        param_1 = (char *)FUN_004cc754();
      }
      else if (param_3 < DVar2 + 1) {
        FUN_004cc744();
        param_1 = (char *)0x0;
      }
      else {
        uVar4 = 0xffffffff;
        do {
          pcVar6 = lpBuffer;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar6 = lpBuffer + 1;
          cVar1 = *lpBuffer;
          lpBuffer = pcVar6;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar6 = pcVar6 + -uVar4;
        pcVar7 = param_1;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        FUN_004cc744();
      }
    }
  }
  return param_1;
}

