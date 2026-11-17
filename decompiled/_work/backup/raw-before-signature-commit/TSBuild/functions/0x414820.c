// name: FUN_00414820
// address: 0x414820
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00414820(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  code *in_stack_00000018;
  
  bVar6 = 0;
  while( true ) {
    puVar4 = param_1 + -4;
    cVar1 = (*in_stack_00000018)();
    if (cVar1 == '\0') break;
    puVar3 = puVar4;
    puVar5 = param_1;
    for (iVar2 = 4; param_1 = puVar4, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  puVar4 = (undefined4 *)&stack0x00000008;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    param_1 = param_1 + (uint)bVar6 * -2 + 1;
  }
  return;
}

