// name: FUN_004e15b4
// address: 0x4e15b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004e15b4(ushort param_1,LPCWSTR param_2)

{
  uint *puVar1;
  char *pcVar2;
  LPWSTR pWVar3;
  
  if (param_2 == (LPCWSTR)0x0) {
    FUN_004e1664(param_1,(uint *)0x0);
  }
  else {
    puVar1 = (uint *)FUN_004cc734();
    FUN_004e33d4((LPSTR)puVar1,param_2,0x1000);
    FUN_004e1664(param_1,puVar1);
    if ((undefined4 *)PTR_DAT_00518658 != &DAT_0051862c) {
      pcVar2 = FUN_004dc9f4(*(uint **)(PTR_DAT_00518658 + 0x24));
      pWVar3 = (LPWSTR)FUN_004cc754();
      *(LPWSTR *)(PTR_DAT_00518658 + 0x28) = pWVar3;
      FUN_004e326c(pWVar3,*(uint **)(PTR_DAT_00518658 + 0x24),(char *)((int)pcVar2 * 2));
    }
    FUN_004cc744();
  }
  return *(undefined4 *)(PTR_DAT_00518658 + 0x28);
}

