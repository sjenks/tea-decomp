// name: FUN_004216dc
// address: 0x4216dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004216dc(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined3 extraout_var;
  bool bVar4;
  undefined4 local_c;
  
  bVar4 = false;
  puVar2 = FUN_00407734(*(uint **)(param_2 + 8));
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = FUN_00408b14((int)puVar2);
    if (iVar3 == 1) {
      uVar1 = FUN_00408b6c((int)puVar2,0);
      if (CONCAT31(extraout_var,uVar1) != 0) {
        FUN_00408e24((int)puVar2,0);
        bVar4 = 0 < local_c;
      }
    }
  }
  FUN_00408884((int)puVar2);
  return bVar4;
}

