// name: FUN_00416ffc
// address: 0x416ffc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00416ffc(undefined4 param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_24 [3];
  undefined1 local_15;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  if (param_2 < param_3) {
    param_2 = param_3;
  }
  if (param_3 == 0 && param_2 == 0) {
    piVar1 = FUN_00416784();
    FUN_00416c40(piVar1);
    piVar2 = FUN_00416784();
  }
  else {
    FUN_00416854(local_c);
    piVar2 = (int *)FUN_004170bc();
    puVar3 = FUN_00417168(local_24,0);
    piVar1 = piVar2;
    uVar4 = FUN_00416814(local_14);
    FUN_0041719c(uVar4,piVar1,puVar3);
    iVar5 = FUN_004172ec((int)piVar2);
    local_15 = 0;
    FUN_00417298(local_c,iVar5,&local_15);
    piVar2[1] = param_2;
    FUN_004172cc(piVar2,1);
    iVar5 = FUN_004172ec((int)piVar2);
    piVar2[2] = param_3;
    *(undefined1 *)(iVar5 + param_3) = 0;
  }
  return piVar2;
}

