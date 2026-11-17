// name: FUN_004061d0
// address: 0x4061d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004061d0(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint local_3c [13];
  int local_8;
  
  local_8 = 1;
  iVar3 = 0;
  while( true ) {
    puVar2 = (uint *)(s_Pattern_Property_Change_004eae3c + 0x17);
    iVar1 = (**(code **)(*(int *)(param_1 + 0x76c) + 0x24))();
    if (iVar3 < iVar1) {
      puVar2 = (uint *)FUN_0041c740(param_1 + 0x760);
    }
    local_8 = local_8 + 1;
    FUN_004e0344((undefined1 *)local_3c,(byte *)s_Dictionary_d_004eae85);
    FUN_0041717c(param_1,local_3c,puVar2);
    if ((char)*puVar2 == '\0') break;
    iVar3 = iVar3 + 1;
  }
  if (param_2 != 0) {
    FUN_0041c4b0(param_1 + 0x760);
  }
  return;
}

