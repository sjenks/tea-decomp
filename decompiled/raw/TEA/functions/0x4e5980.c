// name: FUN_004e5980
// address: 0x4e5980
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004e5980(UINT param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  BYTE *pBVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  _cpinfo local_18;
  
  if (param_1 == 0xfffffffe) {
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    param_1 = *(UINT *)PTR_DAT_00518658;
  }
  if ((param_1 == 0) || (BVar1 = GetCPInfo(param_1,&local_18), BVar1 != 0)) {
    iVar3 = 0;
    puVar6 = &DAT_0051c1d8;
    do {
      *puVar6 = 0;
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar3 < 0x101);
    if ((param_1 == 0) || (local_18.MaxCharSize < 2)) {
      _DAT_0051c2dc = 0;
    }
    else {
      for (pBVar5 = local_18.LeadByte; (uVar4 = (uint)*pBVar5, *pBVar5 != 0 && (pBVar5[1] != 0));
          pBVar5 = pBVar5 + 2) {
        puVar6 = &DAT_0051c1d9 + uVar4;
        for (; (int)uVar4 <= (int)(uint)pBVar5[1]; uVar4 = uVar4 + 1) {
          *puVar6 = 4;
          puVar6 = puVar6 + 1;
        }
      }
      iVar3 = 1;
      pbVar7 = &DAT_0051c1da;
      do {
        *pbVar7 = *pbVar7 | 8;
        iVar3 = iVar3 + 1;
        pbVar7 = pbVar7 + 1;
      } while (iVar3 < 0xff);
      _DAT_0051c2dc = param_1;
      if (param_1 == 0x3a4) {
        uVar4 = (uint)DAT_00518b40;
        pbVar7 = &DAT_0051c1d9 + uVar4;
        for (; (int)uVar4 <= (int)(uint)DAT_00518b41; uVar4 = uVar4 + 1) {
          *pbVar7 = *pbVar7 | 1;
          pbVar7 = pbVar7 + 1;
        }
        uVar4 = (uint)DAT_00518b42;
        pbVar7 = &DAT_0051c1d9 + uVar4;
        for (; (int)uVar4 <= (int)(uint)DAT_00518b43; uVar4 = uVar4 + 1) {
          *pbVar7 = *pbVar7 | 2;
          pbVar7 = pbVar7 + 1;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    FUN_004e5e58((uint *)s_Error__system_code_page_access_f_00518b44);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

