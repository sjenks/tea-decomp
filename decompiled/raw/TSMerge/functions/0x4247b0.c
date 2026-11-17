// name: FUN_004247b0
// address: 0x4247b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __cdecl FUN_004247b0(undefined4 *param_1,char *param_2,ushort param_3)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  if (param_2 != (char *)0x0) {
    for (piVar3 = (int *)*param_1; *piVar3 != 0; piVar3 = piVar3 + 2) {
      iVar1 = FUN_00455b74((char *)*piVar3,param_2);
      if (iVar1 == 0) {
        if (piVar3[1] != 0) {
          puVar2 = (undefined *)FUN_0041f91c(piVar3 + 1,param_3);
          return puVar2;
        }
        return &DAT_00468ed4;
      }
    }
  }
  return (undefined *)0x0;
}

