// name: FUN_00459034
// address: 0x459034
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00459034(ushort param_1,LPCWSTR param_2)

{
  uint *puVar1;
  char *pcVar2;
  LPWSTR pWVar3;
  
  if (param_2 == (LPCWSTR)0x0) {
    FUN_004590e4(param_1,(uint *)0x0);
  }
  else {
    puVar1 = (uint *)FUN_0044b944();
    FUN_0045ae54((LPSTR)puVar1,param_2,0x1000);
    FUN_004590e4(param_1,puVar1);
    if ((undefined4 *)PTR_DAT_00475910 != &DAT_004758e4) {
      pcVar2 = FUN_00455bf0(*(uint **)(PTR_DAT_00475910 + 0x24));
      pWVar3 = (LPWSTR)FUN_0044b964();
      *(LPWSTR *)(PTR_DAT_00475910 + 0x28) = pWVar3;
      FUN_0045acec(pWVar3,*(uint **)(PTR_DAT_00475910 + 0x24),(char *)((int)pcVar2 * 2));
    }
    FUN_0044b954();
  }
  return *(undefined4 *)(PTR_DAT_00475910 + 0x28);
}

