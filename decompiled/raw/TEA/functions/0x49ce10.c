// name: FUN_0049ce10
// address: 0x49ce10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __cdecl FUN_0049ce10(undefined4 *param_1,char *param_2,ushort param_3)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  if (param_2 != (char *)0x0) {
    for (piVar3 = (int *)*param_1; *piVar3 != 0; piVar3 = piVar3 + 2) {
      iVar1 = FUN_004dc978((char *)*piVar3,param_2);
      if (iVar1 == 0) {
        if (piVar3[1] != 0) {
          puVar2 = (undefined *)FUN_00496938(piVar3 + 1,param_3);
          return puVar2;
        }
        return &DAT_00508efc;
      }
    }
  }
  return (undefined *)0x0;
}

