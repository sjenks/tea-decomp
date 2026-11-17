// name: FUN_004e27ec
// address: 0x4e27ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004e27ec(LCID param_1,UINT param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  LPCSTR lpSrcStr;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  LPCSTR pCVar5;
  BYTE *pBVar6;
  _cpinfo local_18;
  
  if (param_1 == 0) {
    FUN_004dc7d4(param_3,(undefined4 *)&DAT_00517f76,0x100);
    uVar1 = 1;
  }
  else {
    lpSrcStr = (LPCSTR)FUN_004cc734();
    if (lpSrcStr == (LPCSTR)0x0) {
      SetLastError(0xe);
      uVar1 = 0;
    }
    else {
      iVar2 = 0;
      pCVar5 = lpSrcStr;
      do {
        *pCVar5 = (CHAR)iVar2;
        pCVar5 = pCVar5 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x100);
      BVar3 = GetCPInfo(param_2,&local_18);
      if (BVar3 == 0) {
        FUN_004cc744();
        uVar1 = 0;
      }
      else {
        if (1 < local_18.MaxCharSize) {
          for (pBVar6 = local_18.LeadByte; (*pBVar6 != 0 && (pBVar6[1] != 0)); pBVar6 = pBVar6 + 2)
          {
            uVar4 = (uint)*pBVar6;
            pCVar5 = lpSrcStr + uVar4;
            for (; (int)uVar4 <= (int)(uint)pBVar6[1]; uVar4 = uVar4 + 1) {
              *pCVar5 = '\0';
              pCVar5 = pCVar5 + 1;
            }
          }
        }
        *(undefined2 *)param_3 = 0;
        BVar3 = GetStringTypeA(param_1,1,lpSrcStr,0x100,(LPWORD)((int)param_3 + 2));
        if (BVar3 == 0) {
          FUN_004cc744();
          uVar1 = 0;
        }
        else {
          FUN_004cc744();
          uVar1 = 1;
        }
      }
    }
  }
  return uVar1;
}

