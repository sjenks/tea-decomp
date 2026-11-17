// name: FUN_00443a30
// address: 0x443a30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00443a30(LPCSTR param_1,LPCSTR param_2)

{
  undefined4 *puVar1;
  int iVar2;
  HRSRC pHVar3;
  WORD wLanguage;
  int iVar4;
  int local_18;
  int local_c;
  
  if (DAT_0046f040 != 0) {
    iVar4 = 0;
    puVar1 = (undefined4 *)FUN_0041147c();
    iVar2 = FUN_004116c4(puVar1,iVar4);
    iVar4 = DAT_0046f040;
    if (iVar2 == 0) {
      wLanguage = 0;
    }
    else {
      wLanguage = *(WORD *)(iVar2 + 0x2f);
    }
    for (local_c = 0; iVar2 = DAT_0046f040, local_c < *(int *)(iVar4 + 1); local_c = local_c + 1) {
      pHVar3 = FindResourceExA(*(HMODULE *)(*(int *)(*(int *)(iVar4 + 9) + local_c * 4) + 8),param_2
                               ,param_1,wLanguage);
      if (pHVar3 != (HRSRC)0x0) {
        return *(undefined4 *)(*(int *)(iVar4 + 9) + local_c * 4);
      }
    }
    for (local_18 = 0; local_18 < *(int *)(iVar2 + 1); local_18 = local_18 + 1) {
      pHVar3 = FindResourceA(*(HMODULE *)(*(int *)(*(int *)(iVar2 + 9) + local_18 * 4) + 8),param_1,
                             param_2);
      if (pHVar3 != (HRSRC)0x0) {
        return *(undefined4 *)(*(int *)(iVar2 + 9) + local_18 * 4);
      }
    }
  }
  return 0;
}

