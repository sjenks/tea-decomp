// name: FUN_0047f2d8
// address: 0x47f2d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0047f2d8(int param_1,uint param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  uint3 in_ECX;
  undefined1 *puVar4;
  undefined4 uStack_8;
  
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) < param_2) {
    uStack_8 = (uint)in_ECX;
    FUN_0047f348(param_1,*(undefined1 **)(param_1 + 8),
                 param_2 - ((int)*(undefined1 **)(param_1 + 8) - *(int *)(param_1 + 4)),
                 (undefined1 *)((int)&uStack_8 + 3));
  }
  else {
    puVar1 = *(undefined1 **)(param_1 + 8);
    if (param_2 < (uint)((int)puVar1 - *(int *)(param_1 + 4))) {
      puVar4 = (undefined1 *)(*(int *)(param_1 + 4) + param_2);
      puVar3 = FUN_0047f6cc(puVar1,puVar1,puVar4);
      iVar2 = *(int *)(param_1 + 8);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - ((int)puVar1 - (int)puVar4);
      FUN_0047c9bc(param_1,(int)puVar3,iVar2);
    }
  }
  return;
}

