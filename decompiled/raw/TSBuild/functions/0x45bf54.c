// name: FUN_0045bf54
// address: 0x45bf54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0045bf54(int *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined3 extraout_var;
  undefined4 uStack_8;
  
  uVar2 = FUN_0045bef8((int)param_1);
  uVar3 = FUN_0045bf04((int)param_1);
  if (uVar2 < uVar3) {
    puVar5 = (undefined1 *)FUN_0045bef8((int)param_1);
    uStack_8 = CONCAT13(*puVar5,(undefined3)uStack_8);
    FUN_0045bfa0((int)param_1,1);
    uVar1 = FUN_0045beec((undefined1 *)((int)&uStack_8 + 3));
    uVar4 = CONCAT31(extraout_var,uVar1);
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x20))();
  }
  return uVar4;
}

