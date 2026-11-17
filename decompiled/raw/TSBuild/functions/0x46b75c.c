// name: FUN_0046b75c
// address: 0x46b75c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0046b75c(ushort param_1,LPCWSTR param_2)

{
  uint *puVar1;
  char *pcVar2;
  LPWSTR pWVar3;
  
  if (param_2 == (LPCWSTR)0x0) {
    FUN_0046b80c(param_1,(uint *)0x0);
  }
  else {
    puVar1 = (uint *)FUN_00456e84();
    FUN_0046d57c((LPSTR)puVar1,param_2,0x1000);
    FUN_0046b80c(param_1,puVar1);
    if ((undefined4 *)PTR_DAT_0048a308 != &DAT_0048a2dc) {
      pcVar2 = FUN_004677a0(*(uint **)(PTR_DAT_0048a308 + 0x24));
      pWVar3 = (LPWSTR)FUN_00456ea4();
      *(LPWSTR *)(PTR_DAT_0048a308 + 0x28) = pWVar3;
      FUN_0046d414(pWVar3,*(uint **)(PTR_DAT_0048a308 + 0x24),(char *)((int)pcVar2 * 2));
    }
    FUN_00456e94();
  }
  return *(undefined4 *)(PTR_DAT_0048a308 + 0x28);
}

