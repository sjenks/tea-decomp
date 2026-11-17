// name: FUN_00422a30
// address: 0x422a30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00422a30(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar2 = FUN_004229b4(param_1);
    if (uVar2 == 0xffffffff) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)FUN_0044b390();
      FUN_00422858(param_1,puVar1,uVar2);
      *(undefined1 *)((int)puVar1 + uVar2) = 0;
    }
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}

