// name: FUN_004149e8
// address: 0x4149e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004149e8(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  code *in_stack_0000001c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_c;
  undefined4 *local_8;
  
  bVar5 = 0;
  while( true ) {
    while (cVar1 = (*in_stack_0000001c)(), cVar1 != '\0') {
      param_1 = param_1 + 4;
    }
    do {
      param_2 = param_2 + -4;
      cVar1 = (*in_stack_0000001c)();
    } while (cVar1 != '\0');
    if (param_2 <= param_1) break;
    local_8 = param_2;
    local_c = param_1;
    local_1c = *param_1;
    local_18 = param_1[1];
    local_14 = param_1[2];
    puVar3 = param_2;
    puVar4 = param_1;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    puVar3 = &local_1c;
    puVar4 = param_2;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    param_1 = param_1 + 4;
  }
  return param_1;
}

