// name: FUN_004227ec
// address: 0x4227ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004227ec(ushort param_1,LPCWSTR param_2)

{
  uint *puVar1;
  char *pcVar2;
  LPWSTR pWVar3;
  
  if (param_2 == (LPCWSTR)0x0) {
    FUN_0042289c(param_1,(uint *)0x0);
  }
  else {
    puVar1 = (uint *)FUN_004155f0();
    FUN_0042460c((LPSTR)puVar1,param_2,0x1000);
    FUN_0042289c(param_1,puVar1);
    if ((undefined4 *)PTR_DAT_0043330c != &DAT_004332e0) {
      pcVar2 = FUN_0041ef80(*(uint **)(PTR_DAT_0043330c + 0x24));
      pWVar3 = (LPWSTR)FUN_00415610();
      *(LPWSTR *)(PTR_DAT_0043330c + 0x28) = pWVar3;
      FUN_004244a4(pWVar3,*(uint **)(PTR_DAT_0043330c + 0x24),(char *)((int)pcVar2 * 2));
    }
    FUN_00415600();
  }
  return *(undefined4 *)(PTR_DAT_0043330c + 0x28);
}

