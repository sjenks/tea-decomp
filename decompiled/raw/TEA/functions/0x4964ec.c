// name: FUN_004964ec
// address: 0x4964ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_004964ec(undefined4 *param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  HRSRC pHVar4;
  undefined4 *puVar5;
  HGLOBAL hResData;
  byte *pbVar6;
  byte *pbVar7;
  HMODULE pHVar8;
  undefined1 uVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 *in_FS_OFFSET;
  LPCSTR lpType;
  HRSRC hResInfo;
  int local_3c;
  undefined4 local_34;
  
  FUN_004dce64(0x507824);
  pcVar10 = param_2 + 1;
  uVar11 = 0;
  for (pcVar12 = param_2; *pcVar12 != '\0'; pcVar12 = pcVar12 + 1) {
    uVar11 = uVar11 * 2 ^ (int)*pcVar12;
  }
  puVar3 = (uint *)*param_1;
  pHVar8 = DAT_005077bc;
  do {
    DAT_005077bc = pHVar8;
    if (puVar3 == (uint *)0x0) {
      pcVar12 = param_2;
      if (*param_2 != '#') {
        pcVar12 = param_2 + 1;
      }
      lpType = (LPCSTR)0xc9;
      if (pHVar8 == (HMODULE)0x0) {
        iVar2 = 0;
        puVar5 = (undefined4 *)FUN_00487bc0();
        iVar2 = FUN_00487e08(puVar5,iVar2);
        pHVar8 = *(HMODULE *)(iVar2 + 0xc);
      }
      pHVar4 = FindResourceA(pHVar8,pcVar12,lpType);
      if (pHVar4 == (HRSRC)0x0) {
        puVar5 = (undefined4 *)FUN_004cc0f0();
        if (puVar5 != (undefined4 *)0x0) {
          FUN_00496414(puVar5,param_2,uVar11);
        }
        puVar3 = (uint *)0x0;
        *in_FS_OFFSET = local_34;
      }
      else {
        pHVar8 = DAT_005077bc;
        hResInfo = pHVar4;
        if (DAT_005077bc == (HMODULE)0x0) {
          iVar2 = 0;
          puVar5 = (undefined4 *)FUN_00487bc0();
          iVar2 = FUN_00487e08(puVar5,iVar2);
          pHVar8 = *(HMODULE *)(iVar2 + 0xc);
        }
        hResData = LoadResource(pHVar8,hResInfo);
        if (hResData == (HGLOBAL)0x0) {
          puVar3 = (uint *)0x0;
          *in_FS_OFFSET = local_34;
        }
        else {
          pbVar6 = LockResource(hResData);
          local_3c = 4;
          if (*pbVar6 == 0) {
            FreeResource(hResData);
            puVar5 = (undefined4 *)FUN_004cc0f0();
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00496414(puVar5,param_2,uVar11);
            }
            puVar3 = (uint *)0x0;
            *in_FS_OFFSET = local_34;
          }
          else {
            if (*pbVar6 < 0x20) {
              pbVar6 = pbVar6 + 1;
            }
            else {
              pbVar6 = pbVar6 + -1;
            }
            do {
              pbVar7 = pbVar6 + 1;
              pbVar6 = pbVar7;
              do {
                bVar1 = *pbVar6;
                pbVar6 = pbVar6 + 1;
              } while (0x1f < bVar1);
              if (local_3c < (int)pbVar6 - (int)pbVar7) {
                local_3c = (int)pbVar6 - (int)pbVar7;
              }
            } while (bVar1 != 0);
            puVar3 = (uint *)FUN_00496458();
            if (puVar3 != (uint *)0x0) {
              FUN_0049646c(puVar3,pcVar10,uVar11,pHVar4,hResData);
            }
            if (*param_2 == '!') {
              uVar9 = 2;
            }
            else {
              uVar9 = 1;
            }
            *(undefined1 *)(puVar3 + 5) = uVar9;
            *in_FS_OFFSET = local_34;
          }
        }
      }
      return puVar3;
    }
    if (uVar11 == *puVar3) {
      pcVar12 = (char *)puVar3[1];
      if (*pcVar12 != *pcVar10) {
        pcVar12 = pcVar12 + 1;
      }
      iVar2 = FUN_00496b14(pcVar12,pcVar10);
      if (iVar2 != 0) {
        if (pcVar12 != (char *)puVar3[1]) {
          puVar3 = (uint *)0x0;
        }
        *in_FS_OFFSET = local_34;
        return puVar3;
      }
    }
    puVar3 = (uint *)puVar3[2];
    pHVar8 = DAT_005077bc;
  } while( true );
}

