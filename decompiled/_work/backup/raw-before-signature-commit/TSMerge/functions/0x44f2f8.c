// name: FUN_0044f2f8
// address: 0x44f2f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044f2f8(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uStack_8;
  
  uVar1 = FUN_0044f29c((int)param_1);
  uVar2 = FUN_0044f2a8((int)param_1);
  if (uVar1 < uVar2) {
    puVar3 = (undefined1 *)FUN_0044f29c((int)param_1);
    uStack_8 = CONCAT13(*puVar3,(undefined3)uStack_8);
    FUN_0044f344((int)param_1,1);
    FUN_0044f290((undefined1 *)((int)&uStack_8 + 3));
  }
  else {
    (**(code **)(*param_1 + 0x20))();
  }
  return;
}

